Import "includes/minib3d.bmx"
Import "Color.bmx"

' Image fonts
Global FONT_SANS_SERIF_20:TImageFont = LoadImageFont("fonts/micross.ttf", 20, SMOOTHFONT )
Global FONT_SANS_SERIF_12:TImageFont = LoadImageFont("fonts/micross.ttf", 12, SMOOTHFONT )
Global FONT_COMIC_SANS_12:TImageFont = LoadImageFont("fonts/comicbd.ttf", 12, SMOOTHFONT )
Global FONT_COURIER_20:TImageFont = LoadImageFont("fonts/courbd.ttf", 20, SMOOTHFONT )
Global FONT_COURIER_48:TImageFont = LoadImageFont("fonts/courbd.ttf", 48, SMOOTHFONT )
Global FONT_DEFAULT:TImageFont = FONT_COMIC_SANS_12

' Creates transparent sprites with text
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
		' Drawing background
		SetColor 0, 0, 0
		DrawRect 0,0,w,1000
		
		' Drawing text with a shadow effect
		SetColor 141, 141, 141
		TextRect text,1,1,w,True
		SetColor 255, 255, 255
		TextRect text,0,0,w,True
		
		' Moving drawn text from backbuffer to texture
		texture.BackBufferToTex(0, 0, False)

		Cls
		EndMax2D()

		' Applying texture to sprite
		sprite.EntityTexture(texture)

		SpriteViewMode sprite, 2

		' Scaling sprite (square by default)
		ScaleSprite sprite, w/(100.0 * scale), height/(100.0 * scale)
	EndMethod
End Type

' Draws a text within a rectangle area
Function TextRect(text:String, x:Int, y:Int, w:Int, center:Int = False)
	Local wordList:String[] = text.Replace("\n", " \n ").Trim().Split(" ")
	Local words:String = ""
	Local h = TextHeight(text)
	Local rows:Int = 0

	For Local word:String = EachIn wordList
		If (FormattedTextWidth(words + " " + word) > w Or word = "\n")
			DrawFormattedText words, x + center * w / 2, y + rows * h, center
			words = ""
			rows = rows + 1
		EndIf 
		
		If words = ""
			words = word.Replace("\n", "")
		Else
			words = words + " " + word
		EndIf		
	Next

	DrawFormattedText words, x + center * w / 2, y + rows * h, center	

	Return (rows + 1) * h 
End Function

' Calculates text rectangle height
Function TextRectHeight(text:String, w:Int, font:TImageFont)
	Local currentFont:TImageFont = GetImageFont()	' Saves current font
	SetImageFont(font)								' Applies a font that text rectangle uses for correct size calculation

	Local wordList:String[] = text.Replace("\n", " \n ").Trim().Split(" ")
	Local words:String = ""
	Local h = TextHeight(text)
	Local rows:Int = 0

	For Local word:String = EachIn wordList
		If (FormattedTextWidth(words + " " + word) > w Or word = "\n")			
			words = ""
			rows = rows + 1
		EndIf 
		
		If words = ""
			words = word.Replace("\n", "")
		Else
			words = words + " " + word
		EndIf		
	Next

	SetImageFont(currentFont)	' Sets a saved font back
	Return (rows + 1) * h 
End Function

' Draws text centered on the x-axis 
Function DrawText(text:String, x:Int, y:Int, center:Int)
	DrawText text, x - TextWidth(text) / 2 * center, y
End Function

' Calulates text width of formatted text excluding color tags
Function FormattedTextWidth(text:String)
	Local width = TextWidth(text)
	
	For Local index = 0 To Len(text)
		Local letter:String = Mid(text, index, 1)
		If letter = "§" Then
			width :- TextWidth(Mid(text, index, 2))
			index :+ 1
			Continue
		EndIf	
	Next	

	Return width
EndFunction

' Draws text with an ability to add color tags
Function DrawFormattedText(text:String, x:Int, y:Int, center:Int)
	For Local index = 0 To Len(text)
		Local letter:String = Mid(text, index, 1)
		If letter = "§" Then
			Local code:String = Mid(text, index + 1, 1)
			Local color:Color
			Select code
				Case "r"
					color = Color.Red	
				Case "g"
					color = Color.Green	
				Case "b"
					color = Color.Blue	
				Case "f"
					color = Color.White					
				Default
					color = Color.White						
			EndSelect
			SetColor color
			index :+ 1
			Continue
		EndIf
		DrawText letter, x, y
		x :+ TextWidth(letter)		
	Next	
End Function