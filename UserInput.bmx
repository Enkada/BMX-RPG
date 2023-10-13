Global keybindings:TMap = CreateMap()
keybindings["spell1"] = String(Asc("1"))
keybindings["spell2"] = String(Asc("2"))
keybindings["spell3"] = String(Asc("3"))
keybindings["spell4"] = String(Asc("4"))
keybindings["spell5"] = String(Asc("5"))
keybindings["spell6"] = String(Asc("6"))
keybindings["spell7"] = String(Asc("7"))
keybindings["spell8"] = String(Asc("8"))
keybindings["spellbook"] = String(Asc("P"))
keybindings["questbook"] = String(Asc("L"))
keybindings["inventory"] = String(Asc("B"))
keybindings["test"] = String(Asc("Q"))

Type UserInput
	Global mouseScrollSpeedValue:Int = 0

	Global mouseHorizontalSpeedValue:Int = 0
	Global mouseVerticalSpeedValue:Int = 0
	
	Global mouseButtonDownValue:Int = 0
	Global isMouseButtonDown:Int = False
	Global mouseButtonUpValue:Int = 0
	Global mouseButtonClickValue:Int = 0

	Global keysHit:TList = CreateList()
	Global keysDown:TList = CreateList()

	Function Update()
		Self.mouseButtonClickValue = 0

		Self.mouseScrollSpeedValue = MouseZSpeed()

		Self.mouseHorizontalSpeedValue = MouseXSpeed()	
		Self.mouseVerticalSpeedValue = MouseYSpeed()	

		Self.keysHit.Clear()
		Self.keysDown.Clear()
		For Local k:String = EachIn keybindings.Keys()
			Local key:String = String(keybindings.ValueForKey(k))
			If KeyHit(Int(key)) Then
				Self.keysHit.AddLast(key)	
			Else If KeyDown(Int(key)) Then
				Self.keysDown.AddLast(key)				
			EndIf			
		Next

		Local mouseDownValue:Int = MouseDown(1)
		If mouseDownValue = 0 And Self.isMouseButtonDown Then
			Self.mouseButtonUpValue = 1
		Else If mouseDownValue = 1 And Not Self.isMouseButtonDown
			Self.mouseButtonClickValue = 1
		EndIf
		Self.mouseButtonDownValue = mouseDownValue	
		Self.isMouseButtonDown = mouseDownValue	
	End Function

	Function KeyboardHit(key:String)
		If Self.keysHit.Contains(key) Then
			Self.keysHit.Remove(key)
			Self.keysDown.Remove(key)
			Return True			
		EndIf
		Return False
	EndFunction

	Function KeyboardDown(key:String)
		If Self.keysDown.Contains(key) Then
			Self.keysDown.Remove(key)
			Return True			
		EndIf
		Return False
	EndFunction

	Function MouseButtonDown()
		Local value:Int = mouseButtonDownValue
		mouseButtonDownValue = 0
		Return value	
	End Function

	Function MouseButtonUp()
		Local value:Int = mouseButtonUpValue
		mouseButtonUpValue = 0
		Return value	
	End Function

	Function MouseButtonClick()
		Local value:Int = mouseButtonClickValue
		mouseButtonClickValue = 0
		Return value	
	End Function

	Function MouseScrollSpeed()
		Local value:Int = mouseScrollSpeedValue
		mouseScrollSpeedValue = 0
		Return value		
	End Function

	Function MouseHorizontalSpeed()
		Local value:Int = mouseHorizontalSpeedValue
		mouseHorizontalSpeedValue = 0
		Return value		
	End Function

	Function MouseVerticalSpeed()
		Local value:Int = mouseVerticalSpeedValue
		mouseVerticalSpeedValue = 0
		Return value		
	End Function
End Type