import bah.jansson
Import "includes/minib3d.bmx"
Import "Entity.bmx"
Import "UserControl.bmx"
Import "UserInput.bmx"
Import "Dialogue.bmx"
Import "UserControl_HotBar.bmx"

Global WINDOW_WIDTH = 1280, WINDOW_HEIGHT=720, depth=16, mode=0
'Local width=1920,height=1080,depth=16,mode=0

Graphics3D WINDOW_WIDTH, WINDOW_HEIGHT, depth, mode
ClearTextureFilters

Local error:TJSONError

For Local j:TJSONObject = EachIn TJSONArray(TJSON.Load(LoadText("spells.json"), 0, error))
	Local spell:Spell = New Spell
	spell.id = j.GetString("id")
	spell.name = j.GetString("name")
	spell.description = j.GetString("description")
	spell.class = j.GetString("class")
	spell.cooldown = j.GetInteger("cooldown")
	Spell.list.addLast(spell)
Next

For Local j:TJSONObject = EachIn TJSONArray(TJSON.Load(LoadText("items.json"), 0, error))
	Local item:Item = New Item
	item.id = j.GetString("id")
	item.name = j.GetString("name")
	item.class = j.GetString("class")
	item.subclass = j.GetString("subclass")
	Item.list.addLast(item)
Next

For Local dialogueJSON:TJSON = EachIn TJSONObject(TJSON.Load(LoadText("dialogues.json").Replace("\n", "\\n"), 0, error))
	Local dialogue:Dialogue = New Dialogue(dialogueJSON.key)
	
	For Local lineJSON:TJSONObject = EachIn TJSONArray(TJSON.Load(dialogueJSON.SaveString(), 0, error))
		Local lineType:String = lineJSON.GetString("type")		

		Select lineType
			Case "text"
				dialogue.AddLine(New DialogueLine(DialogueLineAction.Text, lineJSON.GetString("text")))
			Case "link"
				dialogue.AddLine(New DialogueLine(DialogueLineAction.Link, lineJSON.GetString("text"), lineJSON.GetString("id")))
			Case "quest"
				dialogue.AddLine(New DialogueLine(DialogueLineAction.Quest, lineJSON.GetString("text"), lineJSON.GetString("id")))
		End Select
	Next
Next

' Creating and positioning camera
Global cam:TCamera = CreateCamera()
CameraFogMode cam, 1
CameraFogColor cam, 146, 195, 206
CameraFogRange cam, 0, 100
Global cameraZoomValue:Float = .8
CameraZoom cam, cameraZoomValue
RotateEntity cam, 45, 0, 0

' Creating camera pivot
Global camPivot:TPivot = CreatePivot()
EntityParent camPivot, cam

' Creating light for the world
Local light:TLight=CreateLight(1)

' Creating some space to walk
Local grid:TMesh = CreateCube()
Local gridTexture:TTexture = LoadTexture("data/image/plane.png")
ScaleTexture gridTexture, 0.01, 0.01
EntityTexture grid, gridTexture
ScaleEntity grid, 100, 1, 100
MoveEntity grid, 0, -2, 0

' Creating player entity
Local playerMesh:TMesh = CreateCylinder()

Local playerMeshPointer:TMesh = CreateCylinder(3, True, playerMesh)
ScaleEntity playerMeshPointer, .5, .01, .2
MoveEntity playerMeshPointer, 0, -1, 1.5
EntityColor playerMeshPointer, 255, 0, 0
EntityAlpha playerMeshPointer, 0.5

EntityColor playerMesh, Rand(0,255), Rand(0,255), Rand(0,255)
EntityAlpha playerMesh, 0

player = New Entity("Player", playerMesh)
'player.SetSprite(LoadSprite("data/image/entity/player.gif", 2, playerMesh))
player.SetAnimSprite()
player.SetStat("movementSpeed", 0.1)
player.SetStat("attackSpeed", 30)

player.spellList.addLast(Spell.Find("fireball"));
player.spellList.addLast(Spell.Find("heal"));

' Creating some enemies in random locations
For Local i = 1 To 30
	Local cube:TMesh = CreateCylinder()
	EntityColor cube, Rand(0,255), Rand(0,255), Rand(0,255)
	EntityAlpha cube, 0
	
	Local entityCube:Entity = New Enemy("Cube" + i, cube)	
	entityCube.SetPosition(Rand(-50,50), 0, Rand(-50,50))	
	entityCube.SetAnimSprite()
	EntityColor entityCube.spriteCloth, Rand(0,255), Rand(0,255), Rand(0,255)
Next

' Variables used by fps code
Global old_ms = MilliSecs()
Global renders
Global fps

MoveMouse 0,0
'HideMouse

Collisions TYPE_ENTITY, TYPE_ENTITY, 2, 3
Collisions TYPE_PROJECTILE, TYPE_ENTITY, 1, 1

'AntiAlias 1

' # # # INTERFACE SETUP # # #

' PLayer health bar
Global player_panelHealth:FlowPanel = New FlowPanel(50, 50, 0, 0)
player_panelHealth.Show()

Global player_labelHealth:Label = New Label(0, 0, "PLAYER HEALTH:")

Global player_barHealth:ProgressBar = New ProgressBar(0, 0, 400, 20, player.health.maximum)
player_barHealth.SetColors(New Color(21, 31, 21), New Color(43, 102, 43))
player_barHealth.SetValue(player.health.maximum)

player_panelHealth.AddChild(player_labelHealth)
player_panelHealth.AddChild(player_barHealth)
player_panelHealth.AdjustSize()

' Player hot bar
Global player_hotBar:HotBar = New HotBar(WINDOW_WIDTH / 2, WINDOW_HEIGHT - 60 - 20, 0, 0)
player_hotBar.AdjustSize()
player_hotBar.x :- player_hotBar.w / 2
player_hotBar.Show()

' Player inventory
Global player_inventoryWindow:WindowPanel = New WindowPanel(250, 140, 300, 300, "Inventory")
Global player_inventoryWindowItemContainerPanel:ItemContainerPanel = New ItemContainerPanel(0, 0, 0, 100, player.inventory)

player_inventoryWindowItemContainerPanel.AdjustSize()
player_inventoryWindow.scrollViewer.AddChild(player_inventoryWindowItemContainerPanel)

' Player spell bar
' Global player_spellBar:FlowPanel = New FlowPanel(WINDOW_WIDTH / 2, WINDOW_HEIGHT - 60 - 20, 0, 0, 10, 10, FlowPanelOrientation.Horizontal)
' For Local index = 1 To 8
' 	Local spellImage:SpellImage = New SpellImage(0, 0, 60, 60, Int(String(keybindings.ValueForKey("spell" + index))))
' 	player_spellBar.AddChild(spellImage)	
' Next
' player_spellBar.AdjustSize()
' player_spellBar.x :- player_spellBar.w / 2
' player_spellBar.Show()






' Player spell window
Global player_spellWindow:WindowPanel = New WindowPanel(50, 140, 300, 300, "Spell book")

Global player_spellWindowFlowPanel:FlowPanel = New FlowPanel(0, 0, 0, 0)
player_spellWindowFlowPanel.SetBackground(Color.Transparent)

For Local spell:Spell = EachIn player.spellList
	Local spellFlowPanelImage:FlowPanel = New FlowPanel(0, 0, 0, 0, 10, 10, FlowPanelOrientation.Horizontal)
	Local spellFlowPanelText:FlowPanel = New FlowPanel(0, 0, 0, 0, 0, 0)
	spellFlowPanelText.SetBackground(Color.Transparent)

	Local spellImage:SpellImage = New SpellImage(0, 0, 60, 60, spell)
	' spellImage.KeyHit(BindSpell)
	spellFlowPanelImage.AddChild(spellImage)

	spellFlowPanelText.AddChild(New Label(0, 0, spell.name, 300 - 110))
	spellFlowPanelText.AddChild(New Label(0, 0, spell.description, 300 - 110))
	spellFlowPanelImage.AddChild(spellFlowPanelText)
	spellFlowPanelText.AdjustSize()
	spellFlowPanelImage.AdjustSize()
	player_spellWindowFlowPanel.AddChild(spellFlowPanelImage)
Next

player_spellWindowFlowPanel.AdjustSize()
player_spellWindow.scrollViewer.AddChild(player_spellWindowFlowPanel)

' Quest window
Global player_questWindow:WindowPanel = New WindowPanel(450, 140, 300, 300, "Dialogue thing")

Global player_questWindowFlowPanel:FlowPanel = New FlowPanel(0, 0, 0, 0)
player_questWindowFlowPanel.SetBackground(Color.Transparent)

player_questWindow.scrollViewer.AddChild(player_questWindowFlowPanel)

AddHook HOOK_PROJECTILE_HIT_PLAYER, UpdatePlayerHealth
' # # # # # # # # # # # # # # # #

' # # # MAIN LOOP # # #
While Not KeyDown(KEY_ESCAPE)	
	Projectile.UpdateAll()
	Entity.UpdateAll()

	UpdateWorld
	RenderWorld

	UserInput.Update()
	Draw2D()
	
	Controls()

	Flip True
Wend
End

Function UpdatePlayerHealth:Object( id:Int,data:Object,context:Object )
    player_labelHealth.SetText("HP: " + player.health.actual) 
	player_barHealth.SetValue(player.health.actual)   
End Function

Function ShowDialogue:Object(id:Int, data:Object, context:Object)
	ShowDialogue(String(data))
EndFunction

' Function BindSpell:Object(id:Int, data:Object, context:Object)
' 	Local list:TList = TList(data)
' 	Local key:String = String(list.ValueAtIndex(0))
' 	Local spell:Spell = Spell(list.ValueAtIndex(1))
	
' 	For Local spellImage:SpellImage = EachIn player_spellBar.children
' 		If spellImage.key = key Then			
' 			spellImage.spell = spell			
' 			spellImage.image = spell.GetImage()
' 		EndIf		
' 	Next
' EndFunction

Function Draw2D()
	BeginMax2D()

	UserControl.UpdateAll()

	SetColor Color.White

	For Local entity:Entity = EachIn Entity.list
		If EntityDistance(player, entity) < 10 And player <> entity Then
			CameraProject cam, EntityX(entity.mesh), EntityY(entity.mesh), EntityZ(entity.mesh)
			Local barX:Int = ProjectedX()
			Local barY:Int = ProjectedY()
			SetColor New Color(0, 0, 0, 0.1)
			DrawRect barX - 40, barY - 80, 80, 10
			SetColor New Color(255, 0, 0, 0.3)
			DrawRect barX - 40, barY - 80, 80 * Min(Max(entity.health.actual / Float(entity.health.maximum), 0), 1), 10

			SetColor Color.White
			DrawText entity.name, barX, barY - 80 - 4, True			
		EndIf		
	Next
	

	ShowDebugInfo()
		
	EndMax2D()
EndFunction


Function ShowDialogue(id:String)
	player_questWindowFlowPanel.Clear()
	Local dialogue:Dialogue = Dialogue(Dialogue.list[id])

	For Local line:DialogueLine = EachIn dialogue.lines
		Select line.action
			Case DialogueLineAction.Text
				Local dialogueTextLine:Label = New Label(0, 0, line.text, 300 - 20)

				player_questWindowFlowPanel.AddChild(dialogueTextLine)	
			Case DialogueLineAction.Link
				Local dialogueLinkLine:Button = New Button(0, 0, 300 - 20 - 4 * 2, TextHeight(line.text), "§g>§f " + line.text, 4)
				dialogueLinkLine.SetBackground(Color.Transparent)
				dialogueLinkLine.Click(ShowDialogue, line.id)

				player_questWindowFlowPanel.AddChild(dialogueLinkLine)				
		EndSelect		
	Next
	
	player_questWindowFlowPanel.AdjustSize()
EndFunction

Function RotatePlayer()
	Local halfWidth:Float = WINDOW_WIDTH / 2
	Local halfHeight:Float = WINDOW_HEIGHT / 2
	Local mouseX:Float = MouseX()
	Local mouseY:Float = MouseY()

	Local tangent:Float
	Local angle:Float

	tangent = Abs(halfWidth - mouseX) / Abs(halfHeight - mouseY)

	angle = ATan(tangent)

	If mouseX < halfWidth And mouseY > halfHeight Then angle = 180 - angle
	If mouseX > halfWidth And mouseY > halfHeight Then angle = 180 + angle 
	If mouseX > halfWidth And mouseY < halfHeight Then angle = 360 - angle 
	If mouseX > halfWidth And mouseY = halfHeight Then angle = 270 

	RotateEntity player.mesh, 0, angle, 0	
EndFunction

Function ShowDebugInfo()
	renders = renders + 1
	If MilliSecs() - old_ms >= 1000
		old_ms = MilliSecs()
		fps = renders
		renders = 0
	EndIf
	
	DrawText "FPS: " + fps, 10,10
	DrawText "X: " + EntityX(player.mesh) + " | Y: " + EntityY(player.mesh) + " | Z: " + EntityZ(player.mesh), 10,20
End Function

' Player camera and movement controls
Function Controls()
	' Stops debugging upon pressing Enter key
	If KeyHit(KEY_ENTER) Then DebugStop

	' Moving player and camera
	player.Translate(KeyDown(KEY_D) * player.GetStat("movementSpeed") - KeyDown(KEY_A) * player.GetStat("movementSpeed"), 0, KeyDown(KEY_W) * player.GetStat("movementSpeed") - KeyDown(KEY_S) * player.GetStat("movementSpeed"))
	PositionEntity cam, EntityX(player.mesh), EntityY(player.mesh) + 10, EntityZ(player.mesh) - 10
	
	RotatePlayer();

	Local mouseZSpeed:Int = UserInput.MouseScrollSpeed()
	If mouseZSpeed <> 0 Then
		cameraZoomValue :+ mouseZSpeed * 0.05
		CameraZoom cam, cameraZoomValue
	EndIf

	If UserInput.KeyboardHit(String(keybindings["questbook"])) Then
		player_questWindow.Toggle()
		ShowDialogue("start")		
	EndIf

	If UserInput.KeyboardHit(String(keybindings["test"])) Then
		Local items:String[] = ["knife", "bread", "health_potion"]
		player.inventory.Add(Item.Get(items[Rand(0, 2)]))
		player_inventoryWindowItemContainerPanel.UpdateItems()
	EndIf

	If UserInput.KeyboardHit(String(keybindings["spellbook"])) Then
		player_spellWindow.Toggle()		
	EndIf

	If UserInput.KeyboardHit(String(keybindings["inventory"])) Then
		player_inventoryWindow.Toggle()		
	EndIf
End Function
