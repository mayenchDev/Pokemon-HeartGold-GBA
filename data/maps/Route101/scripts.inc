Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	.byte 0

Route101_OnTransition:
	end

Route101_EventScript_Youngster::
	msgbox Route101_Text_Youngster, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_Boy, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_Text_Youngster:
	.string "The road north leads to ROUTE 29.\n"
	.string "Wild POKéMON hide in the grass.$"

Route101_Text_Boy:
	.string "I live near MR. POKéMON's house.\n"
	.string "He told me PROFESSOR ELM was expecting\n"
	.string "you.$"

Route101_Text_RouteSign:
	.string "ROUTE 29\n"
	.string "NEW BARK TOWN - CHERRYGROVE CITY$"
