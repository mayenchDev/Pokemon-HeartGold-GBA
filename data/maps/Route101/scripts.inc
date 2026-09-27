Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	.byte 0

Route101_OnTransition:
	end

Route101_EventScript_Youngster::
	msgbox Route101_Text_Youngster, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	lock
	faceplayer
	goto_if_eq VAR_BIRCH_LAB_STATE, 2, Route101_EventScript_MrPokemonEgg
	msgbox Route101_Text_Boy, MSGBOX_DEFAULT
	release
	end

Route101_EventScript_MrPokemonEgg::
	msgbox Route101_Text_MrPokemonEgg, MSGBOX_DEFAULT
	checkitemspace ITEM_MYSTERY_EGG
	goto_if_eq VAR_RESULT, FALSE, Route101_EventScript_NoRoomForEgg
	giveitem_msg Route101_Text_ReceivedMysteryEgg, ITEM_MYSTERY_EGG
	setvar VAR_BIRCH_LAB_STATE, 3
	release
	end

Route101_EventScript_NoRoomForEgg::
	msgbox Route101_Text_NoRoomForEgg, MSGBOX_DEFAULT
	release
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

Route101_Text_MrPokemonEgg:
	.string "MR. POKéMON: Professor Elm sent you?\n"
	.string "I found a rare EGG. Please take this\n"
	.string "MYSTERY EGG back to him.$"

Route101_Text_ReceivedMysteryEgg:
	.string "{PLAYER} received the MYSTERY EGG!$"

Route101_Text_NoRoomForEgg:
	.string "You can't carry another Key Item.\n"
	.string "Make room in your Bag first.$"

Route101_Text_RouteSign:
	.string "ROUTE 29\n"
	.string "NEW BARK TOWN - CHERRYGROVE CITY$"
