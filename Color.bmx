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
	Global White:Color = New Color(255, 255, 255)
	Global Black:Color = New Color(0, 0, 0)
End Type

Function SetColor(color:Color)
	SetAlpha color.a
	SetBlend ALPHABLEND
	SetColor color.r, color.g, color.b	
EndFunction