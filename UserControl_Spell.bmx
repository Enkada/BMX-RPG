Import "UserControl.bmx"
Import "Entity.bmx"

Type SpellBar Extends UserControl
	Field itemList:TList
	Field itemMargin:Int
	Field itemSize:Int 

	Method New(x:Int, y:Int, itemSize:Int = 64, itemMargin:Int = 8, isCentered:Int = True)
		Super.New(x, y)

		Self.itemMargin = itemMargin
		Self.itemSize = itemSize
		Self.h = itemSize + itemMargin * 2
		Self.w = itemSize + itemMargin * 2
		Self.x = Self.x - Self.w / 2

		Self.itemList = CreateList()
	End Method

	Method AddItem(item:Spell)
		Self.itemList.addLast(item)
		Self.w = (itemSize + itemMargin) * itemList.Count + itemMargin
	EndMethod

	Method Draw() 
		SetColor background
		DrawRect x, y, w, h
		SetColor foreground

		Local index = 0
		For Local item:Spell = EachIn itemList		
			Local display_x = Self.x + Self.itemMargin + (Self.itemSize + Self.itemMargin) * index	
			Local display_y = Self.y + Self.itemMargin
			DrawImage( item.GetImage(), display_x, display_y )

			Local cd:Cooldown = Cooldown.Find(player.cooldownList, item)
			If cd <> Null Then	
				SetColor background			
				DrawRect( display_x, display_y + Self.itemSize, Self.itemSize, - Self.itemSize + Self.itemSize * (1 - cd.value / (cd.initialValue * 1.0)))
				SetColor foreground
			EndIf

			index:+1
		Next
	End Method	
End Type