Type Dialogue
	Global list:TMap = CreateMap()

	Field lines:TList = CreateList()

	Method New(id:String)
		list[id] = Self
		
	EndMethod

	Method AddLine(line:DialogueLine)
		lines.AddLast(line)		
	EndMethod
End Type


Enum DialogueLineAction
	Text, Link, Quest
End Enum

Type DialogueLine

	Field action:DialogueLineAction
	Field text:String
	Field id:String

	Method New(action:DialogueLineAction, text:String, id:String = Null)
		Self.action = action
		Self.text = text
		Self.id = id		
	EndMethod
End Type