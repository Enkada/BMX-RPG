Import "UserControl.bmx"
Import "UserInput.bmx"
Import "Entity.bmx"

Type HotBarSlot Extends UserControl
	Field index:Int

	Method New(x:Int, y:Int, w:Int, h:Int, index:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.background = Color.Panel

		Self.index = index
	End Method

	Method DroppedOn(control:UserControl) Override
		Local controlType:String = control.ControlType()

		Select controlType
			Case "ItemImage"
				Local hotBar:HotBar = HotBar(Self.parent)
				Local itemImage:ItemImage = ItemImage(control)

				If itemImage.isHotBarSlot Then					
					hotBar.RemoveSlot(Int(itemImage.tag))
				EndIf
				
				hotBar.SetSlot(Self.index, Item(itemImage.item))
				hotBar.UpdateSlots()
			Case "SpellImage"
				Local hotBar:HotBar = HotBar(Self.parent)
				Local spellImage:SpellImage = SpellImage(control)

				If spellImage.isHotBarSlot Then					
					hotBar.RemoveSlot(Int(spellImage.tag))
				EndIf
				
				hotBar.SetSlot(Self.index, Spell(spellImage.spell))
				hotBar.UpdateSlots()
			Default
				DebugLog( "NOT Item or Spell" + Self.index )
				
		EndSelect
	EndMethod

	Method Draw(x:Int, y:Int) 
		SetColor background
		DrawRect x, y, Self.w, Self.h
	End Method
End Type

Type HotBar Extends FlowPanel
	Field slots:TMap
	Field size:Int

	Method New(x:Int, y:Int, w:Int, h:Int)
		Super.New(x:Int, y:Int, w:Int, h:Int, 10, 10, FlowPanelOrientation.Horizontal)
		Self.slots = CreateMap()
		Self.size = 8

		Self.UpdateSlots()
	EndMethod

	Method UpdateSlots()
		Self.Clear()
		
		For Local index:Int = 0 Until Self.size
			Local slot:Object = Self.slots.ValueForKey(String(index))

			Local slotImage:UserControl

			If slot Then
				Local slotType:String = TTypeId.ForObject(slot).Name()

				Select slotType
					Case "Item"
						DebugLog( "Item" + index )
						slotImage = New ItemImage(0, 0, 60, 60, Item(slot))
						ItemImage(slotImage).isHotBarSlot = True
					Case "Spell"
					
						DebugLog( "Spell" + index )
						slotImage = New SpellImage(0, 0, 60, 60, Spell(slot))
						SpellImage(slotImage).isHotBarSlot = True
					Default
						DebugLog( "NOT Item or Spell" )
						
				EndSelect
			Else 
				slotImage = New HotBarSlot(0, 0, 60, 60, index)
			EndIf

			slotImage.tag = String(index)
			Self.AddChild(slotImage);
			

			'Self.AddChild(itemImage);
		Next
		
	EndMethod

	Method SetSlot(index:Int, item:Item)
		Self.slots.Insert(String(index), item)
	EndMethod

	Method RemoveSlot(index:Int)
		Self.slots.Remove(String(index))
	EndMethod

	Method SetSlot(index:Int, spell:Spell)
		Self.slots.Insert(String(index), spell)
	EndMethod
End Type

Type ItemContainerPanel Extends FlowPanel
	Field container:ItemContainer
	
	Method New(x:Int, y:Int, w:Int, h:Int, container:ItemContainer)
		Super.New(x:Int, y:Int, w:Int, h:Int, 10, 10, FlowPanelOrientation.Horizontal)
		Self.container = container
		Self.UpdateItems()
	EndMethod

	Method UpdateItems()
		Self.Clear()
		
		For Local index:Int = 0 Until Self.container.size
			Local item:Item = player.inventory.Get(index)
			Local itemImage:ItemImage

			If item Then
				itemImage:ItemImage = New ItemImage(0, 0, 60, 60, item)
			Else
				itemImage:ItemImage = New ItemImage(0, 0, 60, 60, index)
			EndIf

			Self.AddChild(itemImage);
		Next
	EndMethod

	Method Draw(x:Int, y:Int) 
		For Local child:ItemImage = EachIn Self.children
			
			SetColor child.background
			DrawRect child.GetX() - child.offsetX, child.GetY() - child.offsetY, child.w, child.h
			SetColor child.foreground
		Next
	End Method
EndType

Type ItemImage Extends Image
	Field image:TImage
	Field item:Item
	Field index:Int

	Field isHotBarSlot:Int

	Method New(x:Int, y:Int, w:Int, h:Int, item:Item)
		Super.New(x, y)
		Self.image = item.GetImage()
		Self.item = item
		Self.SetSize(w, h)		
		Self.background = Color.Panel

		Self.isRedrawnOnMoving = True
		Self.isHotBarSlot = False
		Self.index = item.index
	End Method	
		
	Method New(x:Int, y:Int, w:Int, h:Int, index:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.background = Color.Panel
		
		Self.isRedrawnOnMoving = True		
		Self.isHotBarSlot = False
		Self.index = index
	End Method

	Method DroppedOn(control:UserControl) Override
		If control.ControlType() = "ItemImage" Then
			Local itemImage:ItemImage = ItemImage(control)

			If itemImage.isHotBarSlot And Self.isHotBarSlot
				Local hotBar:HotBar = HotBar(Self.parent)
				hotBar.SetSlot(Int(itemImage.tag), Self.item)
				hotBar.SetSlot(Int(Self.tag), itemImage.item)
				hotBar.UpdateSlots()
			Else If Self.isHotBarSlot
				Local hotBar:HotBar = HotBar(Self.parent)
				hotBar.SetSlot(Int(Self.tag), itemImage.item)
				hotBar.UpdateSlots()
			Else If Not itemImage.isHotBarSlot
				' Inventory behavior
				Local saveItem:Item = Self.item
				Self.item = itemImage.item 
				
				If saveItem Then
					Self.item.index = saveItem.index
					itemImage.item = saveItem 					
					Self.image = Null
				Else
					itemImage.item = Null			
				EndIf

				Self.item.container.Swap(Self.index, itemImage.index)
				
				itemImage.image = Null
	
				FlowPanel(Self.parent).OffsetChildren()
			EndIf		
		Else If control.ControlType() = "SpellImage" And Self.isHotBarSlot			
			Local hotBar:HotBar = HotBar(Self.parent)
			Local spellImage:SpellImage = SpellImage(control)
			
			If spellImage.isHotBarSlot Then				
				hotBar.SetSlot(Int(spellImage.tag), Self.item)
				hotBar.SetSlot(Int(Self.tag), Spell(spellImage.spell))
			Else
				hotBar.SetSlot(Int(Self.tag), Spell(spellImage.spell))
			EndIf
			
			hotBar.UpdateSlots()
		EndIf
	EndMethod

	Method ResetOffset() Override
		Self.x :- Self.offsetX	
		Self.y :- Self.offsetY		
		Self.offsetX = 0
		Self.offsetY = 0
	EndMethod

	Method Draw(x:Int, y:Int) 
		SetColor Color.White

		If Self.item And Self.image = Null Then
			Self.image = item.GetImage()			
		EndIf

		' SetColor Self.background
		' DrawRect x - Self.offsetX, y - Self.offsetY, Self.w, Self.h
		' SetColor Self.foreground
		
		If Self.image Then
			DrawImageRect Self.image, x, y, Self.w, Self.h
		EndIf

		If Self.IsHovered(0, 0, Self.w, Self.h) Then
			
			If UserControl.movingControl <> Self Then
				SetHighlight()
				DrawRect x - Self.offsetX, y - Self.offsetY, Self.w, Self.h
				SetColor Self.foreground				
			EndIf

			If MouseHit(2) Then
				Self.item.Use()
				
			EndIf			
			
			If UserInput.MouseButtonClick() Then
				UserControl.movingControl = Self							
			EndIf
		EndIf

		DrawText index, x, y

		If Self.item And Self.item.class = "consumable" Then
			DrawText Self.item.count, x + Self.w - TextWidth( Self.item.count ), y + Self.h - TextHeight( Self.item.count )
			
			If Self.item.count = 0 Then
				If Self.isHotBarSlot Then
					Local hotBar:HotBar = HotBar(Self.parent)
					hotBar.RemoveSlot(Int(Self.tag))
					hotBar.UpdateSlots()
				Else
					Self.item = Null	
					Self.image = Null
				EndIf							
			EndIf
		EndIf
		
	End Method
End Type

Type SpellImage Extends Image
	Field image:TImage
	Field spell:Spell
	Field key:Int
	Field hookKeyHit:Int
	
	Field isHotBarSlot:Int

	Method New(x:Int, y:Int, w:Int, h:Int, spell:Spell)
		Super.New(x, y)
		Self.image = spell.GetImage()
		Self.spell = spell
		Self.SetSize(w, h)		
		Self.hookKeyHit = AllocHookId()
		Self.background = Color.Panel
		
		Self.isRedrawnOnMoving = True
		Self.isHotBarSlot = False
	End Method	
		
	Method New(x:Int, y:Int, w:Int, h:Int, key:Int)
		Super.New(x, y)
		Self.SetSize(w, h)
		Self.key = key
		Self.hookKeyHit = AllocHookId()
		Self.background = Color.Panel
		
		Self.isRedrawnOnMoving = True
		Self.isHotBarSlot = False
	End Method

	' Method KeyHit(func:Object(id, data:Object, context:Object))
	' 	AddHook Self.hookKeyHit, func	
	' EndMethod

	Method ResetOffset() Override
		Self.x :- Self.offsetX	
		Self.y :- Self.offsetY		
		Self.offsetX = 0
		Self.offsetY = 0
	EndMethod

	Method DroppedOn(control:UserControl) Override
		If control.ControlType() = "ItemImage" And Self.isHotBarSlot
			Local hotBar:HotBar = HotBar(Self.parent)
			Local itemImage:ItemImage = ItemImage(control)
			
			If itemImage.isHotBarSlot Then				
				hotBar.SetSlot(Int(itemImage.tag), Self.spell)
				hotBar.SetSlot(Int(Self.tag), Item(itemImage.item))
			Else
				hotBar.SetSlot(Int(Self.tag), Item(itemImage.item))
			EndIf
			
			hotBar.UpdateSlots()
		Else If control.ControlType() = "SpellImage" And Self.isHotBarSlot
			Local hotBar:HotBar = HotBar(Self.parent)
			Local spellImage:SpellImage = SpellImage(control)
			
			If spellImage.isHotBarSlot Then				
				hotBar.SetSlot(Int(spellImage.tag), Self.spell)
				hotBar.SetSlot(Int(Self.tag), spellImage.spell)
			Else
				hotBar.SetSlot(Int(Self.tag), spellImage.spell)
			EndIf
			
			hotBar.UpdateSlots()
		EndIf
	EndMethod

	Method Draw(x:Int, y:Int) 
		SetColor Color.White
		
		If Self.image Then
			DrawImageRect Self.image, x, y, Self.w, Self.h

			Local cd:Cooldown = Cooldown.Find(player.cooldownList, Self.spell)
			If cd <> Null Then	
				SetColor Self.background			
				DrawRect( x, y, Self.w, Self.h * (cd.value / (cd.initialValue * 1.0)))
				SetColor Self.foreground
			EndIf

			If Self.IsHovered(0, 0, Self.w, Self.h) Then			
				If UserInput.MouseButtonClick() Then
					UserControl.movingControl = Self							
				EndIf
			EndIf

			' If Self.IsHovered() Then				
			' 	For Local index = 1 To 8
			' 		Local key:String = String(Int(String(keybindings.ValueForKey("spell" + index))))
			' 		If UserInput.KeyboardDown(Int(key)) Then
			' 			Local list:TList = CreateList()
			' 			list.AddLast(key)
			' 			list.AddLast(Self.spell)
			' 			RunHooks(Self.hookKeyHit, list)	
			' 			Exit			
			' 		EndIf
			' 	Next							
			' EndIf
		Else
			SetColor Self.background
			DrawRect x, y, Self.w, Self.h
			SetColor Self.foreground
		EndIf

		' If Self.key Then
		' 	DrawText Chr(Self.key), x, y			
		' EndIf

		' If Self.key And Self.spell And UserInput.KeyboardDown(Self.key) Then
		' 	player.Cast(Self.spell)			
		' EndIf
		
	End Method
End Type