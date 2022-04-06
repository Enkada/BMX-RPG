Import "Color.bmx"
Import "Text.bmx"

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

	Method New(x:Int, y:Int)		
		Self.x = x
		Self.y = y
		Self.foreground = Color.White
		Self.background = Color.Black
		Self.hookID = AllocHookId()
		Self.font = FONT_COURIER_20
	EndMethod

	Method Update()
		Self.Draw()
	End Method

	Method AddHook(func:Object( id,data:Object,context:Object ))
		AddHook Self.hookID, func	
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