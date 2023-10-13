' New color type that uses alpha
Type Color
	Field r:Int
	Field g:Int
	Field b:Int
	Field a:Float

	Method New(r:Int, g:Int, b:Int, a:Float = 1)
		Self.r = r
		Self.g = g
		Self.b = b
		Self.a = a
	End Method

	Global Red:Color = New Color(255, 0, 0)
	Global Green:Color = New Color(0, 255, 0)
	Global Blue:Color = New Color(0, 0, 255)
	Global White:Color = New Color(255, 255, 255)
	Global Black:Color = New Color(0, 0, 0)
	Global Transparent:Color = New Color(0, 0, 0, 0)
	Global Panel:Color = New Color(30, 30, 30, 0.5)
	Global ImageHover:Color = New Color(255, 255, 255, 0.3)
	
	Global BtnHovered:Color = New Color(90, 90, 90, 0.5)
End Type

Function SetHighlight()
	SetAlpha 0.1
	SetBlend LIGHTBLEND
	SetColor 255, 255, 255
EndFunction

Function SetColor(color:Color)
	SetAlpha color.a
	SetBlend ALPHABLEND
	SetColor color.r, color.g, color.b	
EndFunction