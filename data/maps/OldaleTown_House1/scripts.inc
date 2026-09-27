OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_MrPokemon::
	lock
	faceplayer
	goto_if_set FLAG_GOT_MYSTERY_EGG_FROM_MR_POKEMON, OldaleTown_House1_EventScript_AlreadyReceivedEgg
	goto_if_eq VAR_BIRCH_LAB_STATE, 2, OldaleTown_House1_EventScript_GiveMysteryEgg
	msgbox OldaleTown_House1_Text_MrPokemonBeforeRequest, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_GiveMysteryEgg::
	msgbox OldaleTown_House1_Text_IntroduceProfessorOak, MSGBOX_DEFAULT
	msgbox OldaleTown_House1_Text_ProfessorOakIntroduction, MSGBOX_DEFAULT
	checkitemspace ITEM_MYSTERY_EGG
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_House1_EventScript_NoRoomForEgg
	giveitem_msg OldaleTown_House1_Text_ReceivedMysteryEgg, ITEM_MYSTERY_EGG
	setflag FLAG_GOT_MYSTERY_EGG_FROM_MR_POKEMON
	setvar VAR_BIRCH_LAB_STATE, 3
	release
	end

OldaleTown_House1_EventScript_NoRoomForEgg::
	msgbox OldaleTown_House1_Text_NoRoomForEgg, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_AlreadyReceivedEgg::
	msgbox OldaleTown_House1_Text_AlreadyReceivedEgg, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_ProfessorOak::
	msgbox OldaleTown_House1_Text_ProfessorOakAfterMeeting, MSGBOX_NPC
	end

OldaleTown_House1_Text_MrPokemonBeforeRequest:
	.string "I'm MR. POKéMON. PROFESSOR ELM and I\n"
	.string "study unusual POKéMON discoveries.$"

OldaleTown_House1_Text_IntroduceProfessorOak:
	.string "MR. POKéMON: This is PROFESSOR OAK,\n"
	.string "a famous researcher from KANTO.$"

OldaleTown_House1_Text_ProfessorOakIntroduction:
	.string "PROFESSOR OAK: Elm told me about you.\n"
	.string "Please take this MYSTERY EGG back to\l"
	.string "PROFESSOR ELM in NEW BARK TOWN.$"

OldaleTown_House1_Text_ReceivedMysteryEgg:
	.string "{PLAYER} received the MYSTERY EGG!$"

OldaleTown_House1_Text_NoRoomForEgg:
	.string "You can't carry another Key Item.\n"
	.string "Make room in your Bag first.$"

OldaleTown_House1_Text_AlreadyReceivedEgg:
	.string "MR. POKéMON: Please take the MYSTERY\n"
	.string "EGG back to PROFESSOR ELM.$"

OldaleTown_House1_Text_ProfessorOakAfterMeeting:
	.string "PROFESSOR OAK: Take the EGG to\n"
	.string "PROFESSOR ELM in NEW BARK TOWN.$"
