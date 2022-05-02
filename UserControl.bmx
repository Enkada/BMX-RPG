Import "Color.bmx"
Import "Text.bmx"
Import "Entity.bmx"

Global visibleControlList:TList = CreateList() ' List of all visible controls

Type UserControl
	Field x:Int
	Field y:Int
	Field w:Int
	Field h:Int	
	Field text:String
	Field foreground:Color
	Field background:Color
	Field font:TImageFont
	Field hookID:Int
	Field value:Int

	Field children:TList
	Field parent:UserControl

	Method New(x:Int, y:Int)		
		Self.x = x
		Self.y = y
		Self.foreground = Color.White
		Self.background = Color.Black
		Self.children = CreateList()
		Self.hookID = AllocHookId()
		Self.font = FONT_COURIER_20
	EndMethod

	Method Update()
		Self.Draw()

		If children.Count > 0 Then			
			For Local child:UserControl = EachIn Self.children				
				child.Update()
			Next
		EndIf
	End Method

	Method AddHook(func:Object( id,data:Object,context:Object ))
		AddHook Self.hookID, func	
	EndMethod

	Method AddChild(child:UserControl)
		child.parent = Self
		Self.children.AddLast(child)	
	EndMethod

	Method Show()
		visibleControlList.AddLast(Self)		
	EndMethod

	Method Hide()
		visibleControlList.Remove(Self)		
	EndMethod

	Method SetText(text:String)
		Self.text = text
	End Method

	Method SetValue(value:Int)
		Self.value = value
	End Method

	Method SetFont(font:TImageFont)
		Self.font = font
	End Method

	Method SetForeground(color:Color)
		Self.foreground = color
	End Method

	Method SetBackground(color:Color)
		Self.background = color
	End Method

	Method SetColors(color1:Color, color2:Color)
		Self.background = color1
		Self.foreground = color2
	End Method

	Method SetSize(w:Int, h:Int)
		Self.w = w
		Self.h = h
	End Method

	Method SetPosition(x:Int, y:Int)
		Self.x = x
		Self.y = y
	End Method

	Method Draw() Abstract
End Type

Type Panel Extends UserControl
	Method New(x:Int, y:Int, w:Int, h:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
	End Method

	Method Draw() 
		SetColor background
		DrawRect x, y, w, h
	End Method
End Type

Type Label Extends UserControl

	Method New(x:Int, y:Int, text:String)
		Super.New(x, y)
		Self.text = text
	End Method

	Method Draw() 
		If font <> null Then SetImageFont(font)
		SetColor foreground
		DrawText text, x, y
	End Method
End Type

Type ProgressBar Extends UserControl
	Field maximum:Float

	Method New(x:Int, y:Int, w:Int, h:Int, maximum:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.maximum = maximum
	End Method

	Method Draw() 
		SetColor background
		DrawRect x, y, w, h
		SetColor foreground
		DrawRect x, y, w * (value / maximum), h
	End Method
End Type

Type SpellBar Extends UserControl
	Field itemList:TList
	Field itemMargin:Int
	Field itemSize:Int 

	Method New(x:Int, y:Int, itemSize:Int = 64, itemMargin:Int = 8, isCentered:Int = True)
		Super.New(x, y)

		Self.itemMargin = itemMargin
		Self.itemSize = itemSize
		Self.h = itemSize + itemMargin * 2
		Self.w = itemSize + itemMargin * 2
		Self.x = Self.x - Self.w / 2

		Self.itemList = CreateList()
	End Method

	Method AddItem(item:Spell)
		Self.itemList.addLast(item)
		Self.w = (itemSize + itemMargin) * itemList.Count + itemMargin
	EndMethod

	Method Draw() 
		SetColor background
		DrawRect x, y, w, h
		SetColor foreground

		Local index = 0
		For Local item:Spell = EachIn itemList		
			Local display_x = Self.x + Self.itemMargin + (Self.itemSize + Self.itemMargin) * index	
			Local display_y = Self.y + Self.itemMargin
			DrawImage( item.GetImage(), display_x, display_y )

			Local cd:Cooldown = Cooldown.Find(player.cooldownList, item)
			If cd <> Null Then	
				SetColor background			
				DrawRect( display_x, display_y + Self.itemSize, Self.itemSize, - Self.itemSize + Self.itemSize * (1 - cd.value / (cd.initialValue * 1.0)))
				SetColor foreground
			EndIf

			index:+1
		Next
	End Method	
End Type

Type Button Extends UserControl
	Field padding:Int

	Method New(x:Int, y:Int, w:Int, h:Int, text:String, padding:Int = 0)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.text = text
		Self.padding = padding
	End Method

	Method Draw() 
		SetColor background

		If MouseX() > Self.x And MouseX() < Self.x + Self.w And MouseY() > Self.y And MouseY() < Self.y + Self.h Then
			SetColor Color.Red

			If MouseHit(1) Then				
				RunHooks( Self.hookID, Self.parent )
			EndIf
		EndIf

		DrawRect x, y, w + Self.padding * 2, h + Self.padding * 2

		SetColor foreground
		DrawText Self.text, Self.x + Self.padding, Self.y + Self.padding
	End Method
End Type

Type WindowPanel Extends UserControl
	Method New(x:Int, y:Int, w:Int, h:Int, text:String)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.text = text

		SetImageFont(font)
		Local element_btnClose:Button = New Button(x + w - TextWidth("Close") - 4 * 2, y, TextWidth("Close"), TextHeight("Close"), "Close", 4)		
		AddHook element_btnClose.hookID, Close

		Self.AddChild(element_btnClose)
	End Method

	Method Draw() 
		SetColor background
		DrawRect x, y, w, h

		SetColor background
		DrawRect x, y, w, TextHeight( "A" ) + 4 * 2

		SetColor foreground
		DrawText Self.text, x + 8, y + 4
	End Method	

	Function Close:Object( id,data:Object,context:Object )
		WindowPanel(data).Hide()
	End Function
End Type