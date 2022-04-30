Import "includes/minib3d.bmx"
Import "Text.bmx"

Function EntityDistance#(ent1:Entity,ent2:Entity)
	Return ent1.mesh.EntityDistance#(ent2.mesh)
End Function

' Hook list
Global HOOK_PROJECTILE_HIT_PLAYER = AllocHookId()

' List of base entity stats
Const BASE_MOVEMENT_SPEED:Float = 0.05
Const BASE_ATTACK_RANGE:Float = 4
Const BASE_ATTACK_DAMAGE:Int = 10
Const BASE_HEALTH:Int = 100

Const BASE_PROJECTILE_RADIUS:Float = 0.2

' List of entity types
Const TYPE_ENTITY = 1
Const TYPE_PROJECTILE = 2

Global player:Entity 	' Player entity
Global cam:TCamera		' Camera object

Global entityList:TList = CreateList()		' List of all created entities
Global projectileList:TList = CreateList()	' List of all launched projectiles
Global spellList:TList = CreateList()

' Type for stat like health, mana, stamina, exp etc.
Type DoubleStat
	Field actual
	Field maximum
	Field regen
	
	Method New(maximum)		
		Self.maximum = maximum
		Self.actual = Self.maximum
	End Method
	
	Method New(actual, maximum)	
		Self.actual = actual	
		Self.maximum = maximum
	End Method
End Type

Type Entity
	Field name:String
	Field mesh:TMesh
	Field namePlate:TextSprite
	
	Field movementSpeed:Float
	Field attackRange:Float
	Field speed:Int
	Field attackDamage:Int 
	Field health:DoubleStat
	
	Field attackCD:Int

	Field spellList:TList
	Field cooldownList:TList

	Method New(name:String, mesh:TMesh)
		Self.name = name
		Self.mesh = mesh
		Self.namePlate = New TextSprite(Self.mesh, Self.name)

		' Creating spell list
		Self.spellList = CreateList()
		Self.spellList.addLast(Spell.Find("attack"));

		' Creating cooldown list
		Self.cooldownList = CreateList()
		
		' Type of entity mesh
		EntityType Self.mesh, TYPE_ENTITY
		
		' Entity stats
		Self.movementSpeed = BASE_MOVEMENT_SPEED
		Self.attackRange = BASE_ATTACK_RANGE
		Self.attackCD = 0
		Self.speed = 0
		Self.attackDamage = BASE_ATTACK_DAMAGE
		Self.health = New DoubleStat(BASE_HEALTH)
		
		' Adding entity to list
		entityList.AddLast(Self)
	End Method
	
	Method Update()
		' Reducing cooldown of entity spells
		For Local cd:Cooldown = EachIn Self.cooldownList
			If cd.Update() Then Self.cooldownList.Remove(cd)
		Next

		' Nameplate logic
		If EntityDistance(namePlate.sprite, player.mesh) < 10
			' Making nameplate visible if it is in range
			ShowEntity namePlate.sprite

			' Rotating nameplate to player
			PointEntity namePlate.sprite, player.mesh
			RotateEntity namePlate.sprite, 0, EntityYaw(namePlate.sprite) - 180, 0		
		Else
			HideEntity namePlate.sprite
		EndIf
	End Method

	Method Cast(spell:Spell)
		Local isOnCD = False
		For Local cd:Cooldown = EachIn Self.cooldownList
			If cd.spell = spell Then isOnCD = True
		Next

		If Not isOnCD Then spell.EntityCast(Self)
	End Method

	Method Cast(spellNumber)
		Self.Cast(Spell(Self.spellList.ValueAtIndex(spellNumber)))
	End Method
	
	Method SetPosition(x:Float, y:Float, z:Float)
		Local saveType = GetEntityType(Self.mesh)
		EntityType Self.mesh, 0
		PositionEntity Self.mesh, x, y, z
		EntityType Self.mesh, saveType		
	EndMethod
	
	Method Move(x:Float, y:Float, z:Float)
		MoveEntity Self.mesh, x, y, z
	EndMethod
	
	Method Move(z:Float)
		MoveEntity Self.mesh, 0, 0, z
	EndMethod
	
	Method Move()
		MoveEntity Self.mesh, 0, 0, Self.movementSpeed
	EndMethod
	
	Method Turn(x:Float, y:Float, z:Float)
		TurnEntity Self.mesh, x, y, z
	End Method
	
	Method Turn(y:Float)
		TurnEntity Self.mesh, 0, y, 0
	End Method
	
	Function Find:Entity(mesh:TEntity)
		For Local ent:Entity = EachIn entityList
			If ent.mesh = mesh Then Return ent
		Next
		Return null
	End Function
End Type

Type Enemy Extends Entity
	Field ai_speed:Float
	Field ai_delay
	Field ai_isWalking
	
	Method New(name:String, mesh:TMesh)
		Super.New(name:String, mesh:TMesh)
		
		Self.speed = -50
		
		Self.Turn(Rand(0, 360))
		
		ai_isWalking = True
	End Method

	Method Update()
		Super.Update()
	
		' Random movement (walking) of an enemy
		If Self.ai_isWalking
			Self.ai_delay = Self.ai_delay - 1
		
			Self.Move(ai_speed)
			
			If Self.ai_delay <= 0
				Self.ai_speed = Rnd(0, 0.01)
				Self.ai_delay = Rand(100, 500)
				Self.Turn(0, Rand(-90, 90), 0)
			EndIf
		EndIf
		
		' Following player
		If EntityDistance(player, Self) < 8
			PointEntity Self.mesh, player.mesh
			
			' Moving until player is in attack range
			If EntityDistance(player, Self) > Self.attackRange
				Self.Move()
			Else
				Self.Cast(0)
			EndIf
			
			' Disabling walking AI
			Self.ai_isWalking = False
		Else 
			Self.ai_isWalking = True
		EndIf

		' Death check
		If Self.health.actual <= 0
			Free()			
		EndIf
	End Method

	Method Delete()
		Free()
	End Method

	Method Free()
		FreeEntity Self.mesh
		FreeEntity Self.namePlate.sprite
		entityList.Remove(Self)
	End Method
End Type

Type Projectile
	Field age:Int
	Field maxAge:Int
	Field speed:Float
	Field mesh:TMesh
	Field spell:Spell
	Field caster:Entity
	
	Method New(entity:Entity, spell:Spell, speed:Float = 0.1)
		Local entityMesh:TMesh = entity.mesh ' Mesh of an entity that shoots projectile 
		Self.caster = entity ' Entity that casted that projectile
		Self.spell = spell ' Projectile spell
		Self.speed = speed ' Projectile speed
		
		' Projectile mesh configuration
		Self.mesh = CreateSphere()
		ScaleEntity Self.mesh, BASE_PROJECTILE_RADIUS, BASE_PROJECTILE_RADIUS, BASE_PROJECTILE_RADIUS
		EntityRadius Self.mesh, BASE_PROJECTILE_RADIUS
		EntityColor Self.mesh, 30, 30, 30		
		
		' Rotating projectile the way an entity is facing
		If entityMesh <> player.mesh
			RotateEntity Self.mesh, EntityPitch(entityMesh), EntityYaw(entityMesh), 0
		Else
			RotateEntity Self.mesh, EntityPitch(cam), EntityYaw(cam), 0
		EndIf
		
		' Positioning projectile to the entity it launched
		PositionEntity Self.mesh, EntityX(entityMesh), EntityY(entityMesh) + 1, EntityZ(entityMesh)
		
		Self.maxAge = entity.attackRange / Self.speed ' Projectile range
		EntityType Self.mesh, TYPE_PROJECTILE

		projectileList.AddLast(Self)
	End Method	
	
	Method Free()
		FreeEntity Self.mesh
		projectileList.Remove(Self)
	End Method
	
	Method Delete()
		Free()
	End Method
	
	Method Update()
		MoveEntity Self.mesh, 0, 0, Self.speed ' Moving projectile forward
		Self.age = Self.age + 1
		
		Local targetEntity:TEntity = EntityCollided(Self.mesh, TYPE_ENTITY)
		' Removing health 
		If targetEntity <> Null
			Local target:Entity = Entity.Find(targetEntity)
			Self.spell.Cast(caster, target)		

			Free()			
		ElseIf Self.age >= Self.maxAge
			' Deleting projectile if it reached its max distance
			Free()
		EndIf
	End Method
End Type

Type Cooldown
	Field spell:Spell
	Field value

	Method New(spell:Spell, value)
		Self.spell = spell
		Self.value = value		
	EndMethod

	Method Update()		
		Self.value = Self.value - 1

		If Self.value <= 0 Then	Return True
	EndMethod
End Type

Type Spell
	Field id:String
	Field image:String
	Field class:String
	Field cooldown:Int

	Method EntityCast(entity:Entity) 
		Select Self.class
			Case "projectile"
				New Projectile(entity, Self)
		EndSelect

		entity.cooldownList.addLast(New Cooldown(Self, cooldown - entity.speed))
	End Method

	Method Cast(caster:Entity, target:Entity)
		Select id
			Case "attack"
				target.health.actual = target.health.actual - caster.attackDamage

				If target <> player Then		
					' Update entity nameplate if it is not player		
					target.namePlate.SetText(target.name + "\nHP: " + target.health.actual + " / " + target.health.maximum)
				Else
					' Runs a hook then projectile hit a player to update UI
					RunHooks( HOOK_PROJECTILE_HIT_PLAYER, null )
				EndIf
		EndSelect
	End Method

	Function Find:Spell(spellId:String)
		For Local sp:Spell = EachIn spellList
			If sp.id = spellId Then Return sp
		Next
		Return null
	End Function
End Type