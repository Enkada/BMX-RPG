Import "includes/minib3d.bmx"
Import "Color.bmx"

' Image fonts
Global FONT_COURIER_20:TImageFont = LoadImageFont("fonts/courbd.ttf", 20, SMOOTHFONT )
Global FONT_COURIER_48:TImageFont = LoadImageFont("fonts/courbd.ttf", 48, SMOOTHFONT )

Type TextSprite
	Field sprite:TSprite
	Field font:TImageFont

	Method New(text:String)
		Self.sprite = CreateSprite()
		Self.SetText(text)
	End Method

	Method New(mesh:TMesh, name:String, font:TImageFont = null)
		Self.sprite = CreateSprite(mesh)
		If font <> null Then Self.font = font Else Self.font = FONT_COURIER_48
		PositionEntity Self.sprite, EntityX(mesh), EntityY(mesh) + 2, EntityZ(mesh)
		Self.SetText(name)
	End Method

	Method SetText(text:String, w:Int = 1000, scale:Float = 5)		
		If font <> null Then SetImageFont(font)
		Local height = TextRect(text,0,0,w,True)
		Local texture:TTexture = CreateTexture(w, height, 2 + 4)

		BeginMax2D()
		SetColor 0, 0, 0
		DrawRect 0,0,w,1000
		
		SetColor 141, 141, 141
		TextRect text,1,1,w,True
		SetColor 255, 255, 255
		TextRect text,0,0,w,True
		
		texture.BackBufferToTex(0, 0, False)

		Cls
		EndMax2D()

		sprite.EntityTexture(texture)

		SpriteViewMode sprite, 2
		ScaleSprite sprite, w/(100.0 * scale), height/(100.0 * scale)
	EndMethod
End Type

' Draws a text within a rectangle area
Function TextRect(text:String, x:Int, y:Int, w:Int, center:Int = False)
	Local wordList:TList = Split(text.Replace("\n", " \n "), " ")
	Local words:String = ""
	Local h = TextHeight(text)
	Local rows:Int = 0

	For Local word:String = EachIn wordList

		If (TextWidth(words + " " + word) > w Or word = "\n")
			DrawText words, x + center * w / 2, y + rows * h, center
			words = ""
			rows = rows + 1
		EndIf 
		
		If words = ""
			words = word.Replace("\n", "")
		Else
			words = words + " " + word
		EndIf		
	Next

	DrawText words, x + center * w / 2, y + rows * h, center	

	Return (rows + 1) * h 
End Function

' Draws text centered on the x-axis 
Function DrawText(text:String, x:Int, y:Int, center:Int)
	DrawText text, x - TextWidth(text) / 2 * center, y
End Function

' Splits string by a separator
Function Split:TList(str:String, separator:String)
	Local array:TList = CreateList()
	
	Local prev:Int = 0;
	For Local i:Int = 1 To Len(str)
		If Mid(str, i, 1) = separator
			array.AddLast(Mid(str, prev, i - prev))
			prev = i + 1
		EndIf
	Next
	array.AddLast(Mid(str, prev, Len(str) - prev + 1))
	Return array
End Function