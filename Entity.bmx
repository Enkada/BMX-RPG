Import "includes/minib3d.bmx"
Import "Text.bmx"
Import "Item.bmx"

Function EntityDistance#(ent1:Entity,ent2:Entity)
	Return ent1.mesh.EntityDistance#(ent2.mesh)
End Function

' Hook list
Global HOOK_PROJECTILE_HIT_PLAYER = AllocHookId()

' List of base entity stats
Const BASE_MOVEMENT_SPEED:Float = 0.05
Const BASE_ATTACK_RANGE:Float = 8
Const BASE_ATTACK_DAMAGE:Int = 10
Const BASE_HEALTH:Int = 100

Const BASE_PROJECTILE_RADIUS:Float = 0.2

' List of entity types
Const TYPE_ENTITY = 1
Const TYPE_PROJECTILE = 2

Global player:Entity 	' Player entity
Global cam:TCamera		' Camera object

Global tick:Int

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

Type Stat
	Field id:String
	Field value:Float
	
	Method New(id:String, value:Float)
		Self.id = id
		Self.value = value		
	EndMethod

	Function CreateStatMap:TMap()
		Local map:TMap = CreateMap()
		map["movementSpeed"] = New Stat("movementSpeed", BASE_MOVEMENT_SPEED)
		map["attackRange"] = New Stat("attackRange", BASE_ATTACK_RANGE)
		map["attackSpeed"] = New Stat("attackSpeed", 0)
		map["attackDamage"] = New Stat("attackDamage", BASE_ATTACK_DAMAGE)
		map["maxHealth"] = New Stat("maxHealth", BASE_HEALTH)
		Return map
	EndFunction
EndType

Type Entity
	Field name:String
	Field mesh:TMesh

	Field sprite:TSprite
	Field spriteCloth:TSprite
	Field animTexture:TTexture
	Field animTextureCloth:TTexture
	Field animTextureFrame:Int
	Field animTextureFrameCount:Int
	
	Field health:DoubleStat

	Field stats:TMap

	Field inventory:ItemContainer
	Field equipment:ItemContainer
	
	Field attackCD:Int

	Field spellList:TList
	Field cooldownList:TList

	Global list:TList = CreateList()	

	Method New(name:String, mesh:TMesh)
		Self.name = name
		Self.mesh = mesh

		Self.inventory = New ItemContainer(Self, 4)

		' Creating spell list
		Self.spellList = CreateList()
		Self.spellList.addLast(Spell.Find("attack"));

		' Creating cooldown list
		Self.cooldownList = CreateList()
		
		' Type of entity mesh
		EntityType Self.mesh, TYPE_ENTITY
		EntityPickMode Self.mesh, 1
		
		' Entity stats
		Self.attackCD = 0
		Self.health = New DoubleStat(BASE_HEALTH)

		' Entity stat map
		stats = Stat.CreateStatMap()
		DebugLog( Self.GetStat("movementSpeed") )
		
		' Adding entity to list
		list.AddLast(Self)
	End Method

	Method GetStat:Float(id:String)
		Local stat:Stat = Stat(stats.ValueForKey(id))
		Return stat.value		
	EndMethod

	Method SetStat(id:String, value:Float)
		Local stat:Stat = Stat(stats.ValueForKey(id))
		stat.value = value		
	EndMethod
	
	Method SetSprite(sprite:TSprite)
		Self.sprite = sprite
		Local ratio:Float = TextureWidth(Self.sprite.brush.tex[0]) / Float(TextureHeight(Self.sprite.brush.tex[0]))
		Local multiplier:Float = 2
		ScaleSprite Self.sprite, ratio * multiplier, 1 * multiplier
		HandleSprite Self.sprite, 0, -.4
		'EntityFX Self.sprite, 15
		'SpriteViewMode Self.sprite, 0
	End Method

	Method SetAnimSprite()
		Self.sprite = CreateSprite(Self.mesh)
		Self.spriteCloth = CreateSprite(Self.mesh)		
		' Self.animTexture = LoadAnimTexture:TTexture(file, 2, 565, 824, 0, 30)
		' Self.animTextureFrameCount = 30
		Self.animTexture = LoadAnimTexture:TTexture("data/image/entity/walk.png", 2, 512, 512, 0, 10)
		Self.animTextureCloth = LoadAnimTexture:TTexture("data/image/entity/walk_shirt.png", 2, 512, 512, 0, 10)
		Self.animTextureFrameCount = 10
		Self.animTextureFrame = 0

		EntityTexture sprite, animTexture, Self.animTextureFrame
		EntityTexture spriteCloth, animTextureCloth, Self.animTextureFrame

		Local ratio:Float = TextureWidth(Self.sprite.brush.tex[0]) / Float(TextureHeight(Self.sprite.brush.tex[0]))
		Local multiplier:Float = 2

		ScaleSprite Self.sprite, ratio * multiplier, 1 * multiplier
		HandleSprite Self.sprite, 0, -.4	
		ScaleSprite Self.spriteCloth, ratio * multiplier, 1 * multiplier
		HandleSprite Self.spriteCloth, 0, -.4		
	EndMethod

	Method Animate()
		If animTexture And tick Mod 6 = 0 Then
			EntityTexture Self.sprite, animTexture, Self.animTextureFrame
			EntityTexture Self.spriteCloth, animTextureCloth, Self.animTextureFrame
			Self.animTextureFrame :+ 1
			If Self.animTextureFrame >= Self.animTextureFrameCount Then
				Self.animTextureFrame = 0				
			EndIf			
		EndIf			
	EndMethod
	
	Method Update()
		' Reducing cooldown of entity spells
		For Local cd:Cooldown = EachIn Self.cooldownList
			If cd.Update() Then Self.cooldownList.Remove(cd)
		Next		
	End Method

	Function UpdateAll()
		For Local entity:Entity = EachIn Self.list
			entity.Update()
		Next
		tick :+ 1
	End Function

	Method Cast(spell:Spell)
		If Cooldown.Find(Self.cooldownList, spell) = null Then spell.EntityCast(Self)
	End Method

	Method Cast(spellIndex:Int)
		Self.Cast(Spell(Self.spellList.ValueAtIndex(spellIndex)))
	End Method
	
	Method SetPosition(x:Float, y:Float, z:Float)
		Local saveType = GetEntityType(Self.mesh)
		EntityType Self.mesh, 0
		PositionEntity Self.mesh, x, y, z
		EntityType Self.mesh, saveType		
	EndMethod
	
	Method Move(x:Float, y:Float, z:Float)
		MoveEntity Self.mesh, x, y, z

		If x <> 0 Or y <> 0 Or z <> 0 Then		
			Self.Animate()
		EndIf
	EndMethod
	
	Method Translate(x:Float, y:Float, z:Float)
		TranslateEntity Self.mesh, x, y, z

		If x <> 0 Or y <> 0 Or z <> 0 Then		
			Self.Animate()
		EndIf
	EndMethod
	
	Method Move(z:Float)
		Self.Move(0, 0, z)
	EndMethod
	
	Method Move()
		Self.Move(0, 0, GetStat("movementSpeed"))
	EndMethod
	
	Method Turn(x:Float, y:Float, z:Float)
		TurnEntity Self.mesh, x, y, z
	End Method
	
	Method Turn(y:Float)
		TurnEntity Self.mesh, 0, y, 0
	End Method
	
	Function Find:Entity(mesh:TEntity)
		For Local ent:Entity = EachIn list
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
		
		Self.SetStat("attackSpeed", -50)
		
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
		If EntityDistance(player, Self) < Self.GetStat("attackRange") + 4
			PointEntity Self.mesh, player.mesh
			
			' Moving until player is in attack range
			If EntityDistance(player, Self) > Self.GetStat("attackRange")
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
		list.Remove(Self)
	End Method
End Type

Type Projectile
	Field age:Int
	Field maxAge:Int
	Field speed:Float
	Field mesh:TMesh
	Field spell:Spell
	Field caster:Entity

	Global list:TList = CreateList()
	
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
		RotateEntity Self.mesh, EntityPitch(entityMesh), EntityYaw(entityMesh), 0
		
		' Positioning projectile to the entity it launched
		PositionEntity Self.mesh, EntityX(entityMesh), EntityY(entityMesh), EntityZ(entityMesh)
		
		Self.maxAge = entity.GetStat("attackRange") / Self.speed ' Projectile range
		EntityType Self.mesh, TYPE_PROJECTILE

		Self.list.AddLast(Self)
	End Method	
	
	Method Free()
		FreeEntity Self.mesh
		Self.list.Remove(Self)
	End Method
	
	Method Delete()
		Free()
	End Method
	
	' Moves all projectiles in the directions they're facing
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

	Function UpdateAll()
		For Local proj:Projectile = EachIn Self.list
			proj.Update()
		Next
	End Function
End Type

Type Cooldown
	Field spell:Spell
	Field value:Float
	Field initialValue:Float

	Method New(spell:Spell, value:Float)
		Self.spell = spell
		Self.value = value
		Self.initialValue = value	
	EndMethod

	Method Update()		
		Self.value = Self.value - 1

		If Self.value <= 0 Then	Return True
	EndMethod

	Function Find:Cooldown(cooldownList:TList, sp:Spell)		
		For Local cd:Cooldown = EachIn cooldownList
			If cd.spell = sp Then Return cd
		Next
		Return Null
	EndFunction
End Type

Type Spell
	Field id:String
	Field name:String
	Field description:String
	Field image:TImage
	Field class:String
	Field cooldown:Int

	Global list:TList = CreateList()

	Method EntityCast(entity:Entity) 
		Select Self.class
			Case "projectile"
				New Projectile(entity, Self)
			Case "self"
				Self.Cast(entity, entity)
		EndSelect

		entity.cooldownList.addLast(New Cooldown(Self, cooldown - entity.GetStat("attackSpeed")))
	End Method

	Method GetImage:TImage()
		If Self.image = Null Then			
			Self.image = LoadImage( "data/image/" + id + ".png", 0 )
		EndIf
		Return Self.image
	EndMethod

	Method Cast(caster:Entity, target:Entity)
		Select Self.id
			Case "attack"
				target.health.actual :- caster.GetStat("attackDamage")
			Case "fireball"
				target.health.actual :- 50
			Case "icebolt"
				target.health.actual :- 50
			Case "heal"
				target.health.actual :+ 30
			Default
				RuntimeError( "Spell " + Self.id + " not implemented" )
		EndSelect
		' Runs a hook then projectile hit a player to update UI
		RunHooks( HOOK_PROJECTILE_HIT_PLAYER, null )
	End Method

	Function Find:Spell(spellId:String)
		For Local sp:Spell = EachIn list
			If sp.id = spellId Then Return sp
		Next
		Return Null
	End Function
End Type

' Equipemnt subclasses: weapon, body, legs, feet, head

Type ItemContainer
	Field size:Int
	Field items:TMap
	Field owner:Entity
	
	Method New(owner:Entity, size:Int)
		Self.items = CreateMap()
		Self.size = size
		Self.owner = owner
	EndMethod

	Method Swap(indexA:Int, indexB:Int)
		Local itemA:Item = Item(Self.items[String(indexA)])
		Local itemB:Item = Item(Self.items[String(indexB)])
		Local saveItem:Item = itemA
		
		If itemA Then
			itemA.index = indexB			
		EndIf
		If itemB Then
			itemB.index = indexA	
		EndIf
		Self.items[String(indexA)] = Self.items[String(indexB)]
		Self.items[String(indexB)] = saveItem
	EndMethod

	Method Add(sourceItem:Item, count:Int = 1)
		Local firstIndex:Int = -1

		For Local index = 0 Until Self.size
			Local containerItem:Item = Self.Get(index)
			
			If Not containerItem Then
				firstIndex = index
				Exit				
			EndIf
		Next

		If firstIndex <> -1 Then
			Local newItem:Item = Item(CloneObject(sourceItem))
			newItem.count = count
			newItem.index = firstIndex
			newItem.container = Self
			Self.items[String(firstIndex)] = newItem;	
		Else
			DebugLog( "Inventory full" )
		EndIf
	EndMethod

	Method Remove(index:Int)
		Self.items.Remove(String(index))		
	EndMethod

	Method Get:Item(index:Int)
		Return Item(Self.items.ValueForKey(String(index)))
	EndMethod
EndType

Type Item
	Field id:String
	Field name:String
	Field image:TImage
	Field class:String
	Field subclass:String

	Field index:Int
	Field count:Int
	Field container:ItemContainer

	Field damage:Int

	Global list:TList = CreateList()

	Method GetImage:TImage()
		If Self.image = Null Then			
			Self.image = LoadImage( "data/image/item/" + id + ".png", 0 )
		EndIf
		Return Self.image
	EndMethod

	Function Get:Item(itemId:String)
		For Local it:Item = EachIn Self.list
			If it.id = itemId Then Return it
		Next
		Return Null
	End Function

	Method Use()
		Select Self.id
			Case "health_potion"
				Self.container.owner.health.actual :+ 50		
				RunHooks( HOOK_PROJECTILE_HIT_PLAYER, null )		
		EndSelect
		
		Select Self.class
			Case "consumable"
				DebugLog( "consumable used" )
				Self.count :- 1

				If Self.count = 0 Then
					Self.container.Remove(Self.index)
					
				EndIf
			Case "equipment"
				
				DebugLog( "equipment used" )
				
			Default
				DebugLog( "item can't be used" )
				
		EndSelect
	EndMethod
End Type

Function CloneObject:Object(obj:Object)
	Local cobj:Object
	
	If obj=Null Then Return Null
	
	Local objId:TTypeId=TTypeId.ForObject(obj)
	
	If objId.ExtendsType(StringTypeId)
		Return String(obj)
	EndIf
	
	If objId.ExtendsType(ArrayTypeId)
		If objId.ArrayLength(obj)>0
			cobj=objId.NewArray(objId.ArrayLength(obj))
			
			If cobj
				For Local i=0 Until objId.ArrayLength(obj)
					If objId.ElementType().ExtendsType(ArrayTypeId) Or objId.ElementType().ExtendsType(StringTypeId) ..
						Or objId.ElementType().ExtendsType(ObjectTypeId)
						objId.SetArrayElement(cobj,i,CloneObject(objId.GetArrayElement(obj,i)))
					Else
						objId.SetArrayElement(cobj,i,objId.GetArrayElement(obj,i))
					EndIf
				Next
			EndIf
		EndIf
		
		Return cobj
	EndIf
	
	cobj=New obj
	
	For Local fld:TField=EachIn objId.EnumFields()
		Local fldId:TTypeId=fld.TypeId()
		
		If fld.Get(obj)<>Null And fld.MetaData("NoClone")=Null
			If Not fld.MetaData("Clone")=Null
				fld.Set(cobj,CloneObject(fld.Get(obj)))
			Else
				fld.Set(cobj,fld.Get(obj))
			EndIf
		EndIf
	Next
	
	Return cobj
	
EndFunction