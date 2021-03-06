import bah.jansson
Import "includes/minib3d.bmx"
Import "Entity.bmx"
Import "UserControl.bmx"

Global WINDOW_WIDTH = 1280, WINDOW_HEIGHT=720, depth=16, mode=0
'Local width=1920,height=1080,depth=16,mode=0

Graphics3D WINDOW_WIDTH, WINDOW_HEIGHT, depth, mode
ClearTextureFilters

Local error:TJSONError

For Local j:TJSONObject = EachIn TJSONArray(TJSON.Load(LoadText("spells.json"), 0, error))
	Local spell:Spell = New Spell
	spell.id = j.GetString("id")
	spell.class = j.GetString("class")
	spell.cooldown = j.GetInteger("cooldown")

	spellList.addLast(spell)
Next

' Creating and positioning camera
cam = CreateCamera()
CameraFogMode cam, 1
CameraFogColor cam, 146, 195, 206
CameraFogRange cam, 0, 100
CameraZoom cam, .8
PositionEntity cam, 0, 1, 0

Global isCameraLocked = false

' Creating camera pivot
Global camPivot:TPivot = CreatePivot()
EntityParent camPivot, cam

' Creating light for the world
Local light:TLight=CreateLight(1)

' Creating some space to walk
Local grid:TMesh=CreateCube()
ScaleEntity grid, 100, 1, 100
MoveEntity grid, 0, -2, 0

' Creating player entity
Local playerMesh:TMesh = CreateCube()
EntityRadius playerMesh, 1.67
player = New Entity("Player", playerMesh)
player.movementSpeed = 0.1
player.speed = 30

player.spellList.addLast(Spell.Find("fireball"));
player.spellList.addLast(Spell.Find("heal"));

' Creating some enemies in random locations
For Local i = 1 To 30
	Local cube:TMesh = CreateCylinder()
	EntityColor cube, Rand(0,255), Rand(0,255), Rand(0,255)
	EntityAlpha cube, 0.9
	
	Local entityCube:Entity = New Enemy("Cube" + i, cube)	
	entityCube.SetPosition(Rand(-50,50), 0, Rand(-50,50))
Next

' Variables used by fps code
Global old_ms = MilliSecs()
Global renders
Global fps

MoveMouse 0,0
HideMouse

Collisions TYPE_ENTITY, TYPE_ENTITY, 2, 3
Collisions TYPE_PROJECTILE, TYPE_ENTITY, 1, 1

'AntiAlias 1

' # # # INTERFACE SETUP # # #
Global player_panelHealth:Panel = New Panel(50, 50, 420, 60)
player_panelHealth.SetBackground(New Color(30, 30, 30, 0.5))
player_panelHealth.Show()

Global player_labelHealth:Label = New Label(60, 60, "PLAYER HEALTH:")
player_labelHealth.Show()

Global player_barHealth:ProgressBar = New ProgressBar(60, 80, 400, 20, player.health.maximum)
player_barHealth.SetColors(New Color(21, 31, 21), New Color(43, 102, 43))
player_barHealth.SetValue(player.health.maximum)
player_barHealth.Show()

Global player_spellBar:SpellBar = New SpellBar(WINDOW_WIDTH / 2, WINDOW_HEIGHT - 60 - 8 * 2, 60, 8)
player_spellBar.SetBackground(New Color(30, 30, 30, 0.5))
player_spellBar.Show()

Global player_spellBook:WindowPanel = New WindowPanel(50, 140, 300, 400, "Spell Book")
player_spellBook.SetBackground(New Color(30, 30, 30, 0.5))
player_spellBook.Show()

AddHook HOOK_PROJECTILE_HIT_PLAYER, UpdatePlayerHealth
' # # # # # # # # # # # # # # # #

' # # # MAIN LOOP # # #
While Not KeyDown(KEY_ESCAPE)		
	Controls()
	
	UpdateProjectiles()
	UpdateEntities()

	UpdateWorld
	RenderWorld

	Draw2D()

	ShowDebugInfo()

	Flip True	
Wend
End

Function UpdatePlayerHealth:Object( id:Int,data:Object,context:Object )
    player_labelHealth.SetText("HP: " + player.health.actual) 
	player_barHealth.SetValue(player.health.actual)   
End Function

Function Draw2D()
	BeginMax2D()

	UpdateVisibleControl()
		
	EndMax2D()
EndFunction

Function ShowDebugInfo()
	renders=renders+1
	If MilliSecs()-old_ms>=1000
		old_ms=MilliSecs()
		fps=renders
		renders=0
	EndIf
	
	Text 0,0,"FPS: "+fps
	Text 0,10,"X: " + EntityX(player.mesh) + " | Y: " + EntityY(player.mesh) + " | Z: " + EntityZ(player.mesh)
End Function

' Player camera and movement controls
Function Controls()
	' Stops debugging upon pressing Enter key
	If KeyHit(KEY_ENTER) Then DebugStop

	' Moving player and camera
	player.Move(KeyDown(KEY_D) * player.movementSpeed - KeyDown(KEY_A) * player.movementSpeed, 0, KeyDown(KEY_W) * player.movementSpeed - KeyDown(KEY_S) * player.movementSpeed)
	PositionEntity cam, EntityX(player.mesh), EntityY(player.mesh) + 1, EntityZ(player.mesh)

	If Not isCameraLocked Then
		' Calculating mouse speed to rotate camera
		Local MXS:Float, MYS:Float
		MXS=(((MouseX()-WINDOW_WIDTH/2)-MXS)/4+MXS)*.5
		MYS=(((MouseY()-WINDOW_HEIGHT/2)-MYS)/4+MYS)*.5
		
		' Positioning mouse in the center of the screen
		MoveMouse WINDOW_WIDTH/2, WINDOW_HEIGHT/2
		
		' Camera and player rotation
		TurnEntity cam, MYS, 0, 0
		TurnEntity camPivot, 0, -MXS, 0
		If EntityPitch(cam) > 90 RotateEntity cam, 90, EntityYaw(camPivot), 0
		If EntityPitch(cam) < -90 RotateEntity cam, -90, EntityYaw(camPivot), 0
		RotateEntity cam, EntityPitch(cam), EntityYaw(camPivot),0
		RotateEntity player.mesh, EntityPitch(player.mesh), EntityYaw(camPivot),0			
	EndIf
	
	' Player attack mechanic
	If MouseDown(1)
		player.Cast(0)
	EndIf

	If KeyHit(KEY_1)
		isCameraLocked = Not isCameraLocked

		If isCameraLocked Then
			ShowMouse()	
		Else
			HideMouse()	
		EndIf
	EndIf
End Function

Function UpdateEntities()
	For Local entity:Entity = EachIn entityList
		entity.Update()
	Next
End Function

' Draws all the visible control
Function UpdateVisibleControl()
	For Local control:UserControl = EachIn visibleControlList
		control.Update()
	Next
End Function

' Moves all projectiles in the directions they're facing
Function UpdateProjectiles()
	For Local proj:Projectile = EachIn projectileList
		proj.Update()
	Next
End Function