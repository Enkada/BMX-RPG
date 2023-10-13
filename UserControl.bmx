Import "Color.bmx"
Import "Text.bmx"
Import "UserInput.bmx"

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
	Field tag:String

	Field children:TList
	Field parent:UserControl

	Global list:TList = CreateList()

	Global movingControl:UserControl = Null

	Field offsetX:Int
	Field offsetY:Int
	Field isRedrawnOnMoving:Int = False

	Method New(x:Int, y:Int)		
		Self.x = x
		Self.y = y
		Self.foreground = Color.White
		Self.background = Color.Black
		Self.children = CreateList()
		Self.font = FONT_DEFAULT
	EndMethod

	Method Update()
		Self.Draw(Self.GetX(), Self.GetY())

		If Self.children.Count > 0 Then			
			For Local child:UserControl = EachIn Self.children				
				child.Update()
			Next
		EndIf
	End Method

	Method Clear()
		If Self.children.Count > 0 Then			
			For Local child:UserControl = EachIn Self.children				
				child.parent = Null
			Next
		EndIf
		Self.children.Clear()
	End Method

	Method GetX()
		If Self.parent = null Then			
			Return Self.x
		Else 
			Local controlParent:UserControl = Self.parent
			Local offsetX:Int = 0
			While controlParent <> Null				
				offsetX :+ controlParent.x
				controlParent = controlParent.parent
			Wend			
			Return offsetX + Self.x
		EndIf
	End Method

	Method GetY()
		If Self.parent = null Then			
			Return Self.y
		Else 
			Local controlParent:UserControl = Self.parent
			Local offsetY:Int = 0
			While controlParent <> Null				
				offsetY :+ controlParent.y
				controlParent = controlParent.parent
			Wend
			Return offsetY + Self.y
		EndIf
	End Method

	Function UpdateAll()
		Self.list.Reverse()
		For Local control:UserControl = EachIn Self.list
			control.Update()
		Next
		Self.list.Reverse()
		
		If UserInput.MouseButtonUp() Then
			Local droppedOn:UserControl

			For Local child:UserControl = EachIn Self.AllChildren()
				If child <> UserControl.movingControl And child.IsHovered() Then
					droppedOn = child					
				EndIf				
			Next
			
			If UserControl.movingControl Then
				UserControl.movingControl.ResetOffset()			
			EndIf
			

			If droppedOn Then
				droppedOn.DroppedOn(UserControl.movingControl)			
			EndIf			

			UserControl.movingControl = Null			
		EndIf

		If UserControl.movingControl Then
			Local mhs:Int = UserInput.MouseHorizontalSpeed()
			Local mvs:Int = UserInput.MouseVerticalSpeed()
			UserControl.movingControl.x :+ mhs
			UserControl.movingControl.y :+ mvs	
			UserControl.movingControl.offsetX :+ mhs
			UserControl.movingControl.offsetY :+ mvs			
			
			If UserControl.movingControl.isRedrawnOnMoving Then
				UserControl.movingControl.Draw(UserControl.movingControl.GetX(), UserControl.movingControl.GetY())				
			EndIf				
		EndIf
	End Function

	Method ControlType:String()
		Return TTypeId.ForObject(Self).Name()			
	EndMethod

	Method ResetOffset()
		Self.offsetX = 0
		Self.offsetY = 0		
	EndMethod

	Method DroppedOn(control:UserControl) 
		
	EndMethod

	Function AllChildren:TList(control:TList = Null, depth = 0)
		Local children:TList = CreateList()

		If control = Null Then control = Self.list
		depth :+ 1

		For Local control:UserControl = EachIn control			
			Local controlChildren:TList = AllChildren(control.children, depth)			
			
			children.AddLast(control)

			For Local child:UserControl = EachIn controlChildren				
				children.AddLast(child)				
			Next
		Next

		Return children
	EndFunction

	Method AddChild(child:UserControl)
		child.parent = Self
		Self.children.AddLast(child)	
	EndMethod

	Method IsHovered()
		Local mouseX:Int = MouseX()	
		Local mouseY:Int = MouseY()	
		Local isHovered:Int = mouseX >= Self.GetX() And mouseX <= (Self.GetX() + Self.w) And mouseY >= Self.GetY() And mouseY <= (Self.GetY() + Self.h)
		Return isHovered
	EndMethod

	Method IsHovered(offsetX:Int, offsetY:Int, width:Int, height:Int)
		Local mouseX:Int = MouseX()	
		Local mouseY:Int = MouseY()	
		Local isHovered:Int = mouseX >= (Self.GetX() + offsetX) And mouseX <= (Self.GetX() + offsetX + width) And mouseY >= (Self.GetY() + offsetY) And mouseY <= (Self.GetY() + offsetY + height)
		Return isHovered
	EndMethod

	Method Show()
		Self.list.AddLast(Self)		
	EndMethod

	Method Hide()
		Self.list.Remove(Self)		
	EndMethod

	Method Toggle()
		If Self.list.Contains(Self) Then
			Self.Hide()
		Else
			Self.Show()
		EndIf				
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

	Method Draw(x:Int, y:Int) Abstract
End Type

Type Panel Extends UserControl
	Method New(x:Int, y:Int, w:Int, h:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
	End Method

	Method Draw(x:Int, y:Int) 
		SetColor background
		DrawRect x, y, Self.w, Self.h
	End Method
End Type

Type Image Extends UserControl
	Field image:TImage

	Method New(x:Int, y:Int, image:TImage)
		Super.New(x, y)
		Self.SetSize(ImageWidth(image), ImageHeight(image))
		Self.image = image
	End Method

	Method New(x:Int, y:Int, w:Int, h:Int, image:TImage)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.image = image
	End Method

	Method Draw(x:Int, y:Int) 
		SetColor Color.White
		DrawImageRect Self.image, x, y, Self.w, Self.h
	End Method
End Type

Enum FlowPanelOrientation
	Vertical, Horizontal	
EndEnum

Type FlowPanel Extends UserControl
	Field padding:Int
	Field gap:Int
	Field orientation:FlowPanelOrientation

	Method New(x:Int, y:Int, w:Int, h:Int, gap:Int = 10, padding:Int = 10, orientation:FlowPanelOrientation = FlowPanelOrientation.Vertical)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.SetBackground(Color.Panel)
		Self.gap = gap
		Self.padding = padding
		Self.orientation = orientation
	End Method

	Method AddChild(child:UserControl) Override
		child.parent = Self
		Self.children.AddLast(child)	

		Self.OffsetChildren()
	EndMethod

	Method OffsetChildren()
		Local offsetX = Self.padding
		Local offsetY = Self.padding
		
		If Self.orientation = FlowPanelOrientation.Vertical Then
			For Local c:UserControl = EachIn Self.children		
				c.x = offsetX	
				c.y = offsetY
				offsetY :+ c.h + Self.gap
			Next
		Else
			For Local c:UserControl = EachIn Self.children		
				c.x = offsetX	
				c.y = offsetY
				offsetX :+ c.w + Self.gap
			Next			
		EndIf		
	EndMethod

	Method AdjustSize()
		If Self.orientation = FlowPanelOrientation.Vertical Then
			Self.w = 2 * Self.padding
			Self.h = 2 * Self.padding - Self.gap
			Local maxWidth:Int = 0
			For Local child:UserControl = EachIn Self.children		
				maxWidth = Max(maxWidth, child.w)
				Self.h :+ child.h + Self.gap
			Next
			Self.w :+ maxWidth		
		Else
			Self.w = 2 * Self.padding - Self.gap
			Self.h = 2 * Self.padding
			Local maxHeight:Int = 0
			For Local child:UserControl = EachIn Self.children		
				maxHeight = Max(maxHeight, child.h)
				Self.w :+ child.w + Self.gap
			Next
			Self.h :+ maxHeight	
		EndIf
		
	EndMethod

	Method Draw(x:Int, y:Int) 
		SetColor background
		DrawRect x, y, Self.w, Self.h
	End Method
End Type

Type ScrollViewer Extends UserControl
	Field scrollY:Int

	Method New(x:Int, y:Int, w:Int, h:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.SetBackground(Color.Panel)
		Self.scrollY = 0
	End Method

	Method Update() Override
		If Self.children.IsEmpty() Then Return		

		Local child:UserControl = UserControl(Self.children.ValueAtIndex(0))	
		
		' Skip scroll calc and render if content is smaller than viewerport
		If Self.h >= child.h Then 
			child.Update()
			Self.scrollY = 0
			Return
		EndIf

		Local currentX:Int
		Local currentY:Int
		Local currentW:Int
		Local currentH:Int
		GetViewport(currentX, currentY, currentW, currentH)
		SetViewport(Self.GetX(), Self.GetY(), Self.w, self.h)

		
		
		If Self.IsHovered() Then
			Local mouseZSpeed:Int = UserInput.MouseScrollSpeed()
			If (mouseZSpeed > 0 And scrollY < 0 Or mouseZSpeed < 0) Then
				scrollY :+ mouseZSpeed * 16
	
				If Self.h + (-1 * scrollY) > child.h Then
					scrollY = -1 * (child.h - Self.h)		
				EndIf
	
				If scrollY > 0 Then
					scrollY = 0	
				EndIf
			EndIf
		EndIf

		y :+ scrollY
		
		child.Update()

		y :- scrollY	

		SetColor background
		Local scrollBarHeight:Int =  Self.h * Self.h / child.h
		Local scrollBarY = (scrollY * -1.0) / (child.h - Self.h) * (Self.h - scrollBarHeight)
		DrawRect Self.GetX() + Self.w - 4, Self.GetY() + scrollBarY, 4, scrollBarHeight

		SetViewport(currentX, currentY, currentW, GraphicsHeight() + 1) ' This thing is weird
	End Method

	Method Draw(x:Int, y:Int) 

	End Method
End Type

Type Label Extends UserControl
	Field isMultiline:Int

	Method New(x:Int, y:Int, text:String, w:Int = 0)
		Super.New(x, y)
		Self.text = text
		If w = 0 Then	
			isMultiline = False
		Else				
			Self.w = w			
			isMultiline = True
		EndIf
		CalculateSize()
	End Method

	Method CalculateSize()
		If isMultiline Then	
			Self.h = TextRectHeight(text, w, font)	
		Else
			Self.w = TextWidth(text)
			Self.h = TextHeight(text)	
		EndIf		
	EndMethod

	Method SetFont(font:TImageFont)
		Super.SetFont(font)
		CalculateSize()
	End Method

	Method Draw(x:Int, y:Int) 
		If font <> null Then SetImageFont(font)
		SetColor foreground

		If isMultiline Then			
			TextRect text, x, y, Self.w
		Else
			DrawText text, x, y
		EndIf
	End Method
End Type

Type ProgressBar Extends UserControl
	Field maximum:Float

	Method New(x:Int, y:Int, w:Int, h:Int, maximum:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.maximum = maximum
	End Method

	Method Draw(x:Int, y:Int) 
		SetColor Self.background
		DrawRect x, y, Self.w, Self.h
		SetColor Self.foreground
		DrawRect x, y, Self.w * Min(Max(Self.value / Self.maximum, 0), 1), Self.h
	End Method
End Type

Type Button Extends UserControl
	Field padding:Int
	Field hookClick:Int
	Field clickData:Object

	Method New(x:Int, y:Int, w:Int, h:Int, text:String, padding:Int = 0)
		Super.New(x, y)
		Self.SetSize(w + padding * 2, h + padding * 2)
		Self.text = text
		Self.padding = padding
		
		Self.hookClick = AllocHookId()
	End Method

	Method Click(func:Object(id, data:Object, context:Object))
		AddHook Self.hookClick, func	
	EndMethod

	Method Click(func:Object(id, data:Object, context:Object), clickData:Object)
		AddHook Self.hookClick, func	
		Self.clickData = clickData
	EndMethod

	Method Draw(x:Int, y:Int) 
		SetColor background

		If Self.IsHovered(0, 0, Self.w, Self.h + Self.padding * 2) Then
			SetColor Color.BtnHovered

			If UserInput.MouseButtonUp() Then			
				If Self.clickData Then
					RunHooks( Self.hookClick, Self.clickData )
				Else					
					RunHooks( Self.hookClick, Self.parent )
				EndIf
			EndIf
		EndIf

		DrawRect x, y, Self.w, Self.h

		SetColor foreground
		DrawFormattedText Self.text, x + Self.padding, y + Self.padding, false
	End Method
End Type

Type WindowBar Extends UserControl
	Field closeBtnText:String

	Method New(x:Int, y:Int, w:Int, h:Int, text:String, closeBtnText:String)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.text = text	' Title of a window
		Self.closeBtnText = closeBtnText

		SetImageFont(font)
		Local btnClose:Button = New Button(Self.w - TextWidth(closeBtnText) - 4 * 2, 0, TextWidth(closeBtnText), TextHeight(closeBtnText), closeBtnText, 4)	
		btnClose.Click(Self.Close);

		Self.AddChild(btnClose)
	End Method

	Method Draw(x:Int, y:Int) 
		If font <> null Then SetImageFont(font)
		
		Local barHeight:Int = TextHeight(Self.closeBtnText) + 4 * 2
		If Self.IsHovered(0, 0, Self.w - TextWidth(Self.closeBtnText) - 8, barHeight) Then			
			If UserInput.MouseButtonClick() Then
				UserControl.movingControl = Self.parent							
			EndIf
		EndIf

		SetColor Self.background
		DrawRect x, y, Self.w, barHeight

		SetColor Self.foreground
		DrawText Self.text, x + 8, y + 4
	End Method			

	Function Close:Object(id, data:Object, context:Object)
		WindowBar(data).parent.Hide()
	End Function
End Type

Type WindowPanel Extends FlowPanel
	Field windowBar:WindowBar
	Field scrollViewer:ScrollViewer

	Method New(x:Int, y:Int, w:Int, h:Int, text:String)
		Super.New(x, y, w, h, 0, 0)

		SetImageFont(font)
		Local closeBtnText:String = "Close"
		Local windowBarHeight:Int = TextHeight(closeBtnText) + 4 * 2
		Self.windowBar = New WindowBar(0, 0, w, windowBarHeight, text, closeBtnText)

		Self.scrollViewer = New ScrollViewer(0, 0, w, h)

		Self.AddChild(Self.windowBar)
		Self.AddChild(Self.scrollViewer)
	End Method

	Method Draw(x:Int, y:Int) 
		SetColor Self.background
		DrawRect x, y + Self.windowBar.h, Self.w, Self.h
	End Method			
End Type