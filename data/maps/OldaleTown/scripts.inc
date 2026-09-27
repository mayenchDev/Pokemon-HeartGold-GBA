OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	.byte 0

OldaleTown_OnTransition:
	setflag FLAG_VISITED_OLDALE_TOWN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_Girl, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, OldaleTown_EventScript_GuideAfterShoes
	msgbox OldaleTown_Text_GuideTour, MSGBOX_DEFAULT
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox OldaleTown_Text_ReceivedRunningShoes, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_GuideAfterShoes::
	msgbox OldaleTown_Text_GuideAfterShoes, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	msgbox OldaleTown_Text_Fisherman, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_Text_Girl:
	.string "The sea breeze feels so nice here.\n"
	.string "They say JOHTO has a beautiful coast.$"

OldaleTown_Text_GuideTour:
	.string "Welcome to CHERRYGROVE CITY!\p"
	.string "I'm your guide. Let me show you around\n"
	.string "this seaside town. The sea is just\n"
	.string "west of here.\p"
	.string "Here, take these RUNNING SHOES.\n"
	.string "Hold B to run wherever you go!$"

OldaleTown_Text_ReceivedRunningShoes:
	.string "{PLAYER} received the RUNNING SHOES!$"

OldaleTown_Text_GuideAfterShoes:
	.string "Enjoy CHERRYGROVE CITY! The sea lies\n"
	.string "to the west, and ROUTE 30 is north.$"

OldaleTown_Text_Fisherman:
	.string "The coast of JOHTO is full of places\n"
	.string "to fish. I can hear the waves from\n"
	.string "right here.$"

OldaleTown_Text_TownSign:
	.string "CHERRYGROVE CITY\n"
	.string "A city by the beautiful sea.$"
