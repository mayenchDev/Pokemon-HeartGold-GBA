@ VAR_LITTLEROOT_RIVAL_STATE 1 means starter received; Silver encounter pending.
LittlerootTown_ProfessorBirchsLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
	.byte 0

LittlerootTown_ProfessorBirchsLab_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_EventScript_ShowRival
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ShowRival:
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Elm::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_EventScript_EggMissionReminder
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ElmOfferStarter, MSGBOX_DEFAULT
	special ChooseStarter
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_ADVENTURE_STARTED
	setvar VAR_BIRCH_LAB_STATE, 1
	setvar VAR_LITTLEROOT_RIVAL_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	bufferleadmonspeciesname STR_VAR_1
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ElmStarterChosen, MSGBOX_DEFAULT
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ElmEggMission, MSGBOX_DEFAULT
	setvar VAR_BIRCH_LAB_STATE, 2
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_EggMissionReminder::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ElmEggMission, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_EventScript_RivalBeforeStarter
	msgbox LittlerootTown_ProfessorBirchsLab_Text_RivalAfterStarter, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_RivalBeforeStarter::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_RivalBeforeStarter, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_Aide, MSGBOX_NPC
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_Machine, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_PC::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PC, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Book::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_Book, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_Bookshelf, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_Text_ElmOffer:
	.string "PROFESSOR ELM: Ah, {PLAYER}! I need\n"
	.string "your help with a POKéMON study.\p"
	.string "Choose one of these POKéMON to\n"
	.string "accompany you. Take your time!$"

LittlerootTown_ProfessorBirchsLab_Text_ElmStarterChosen:
	.string "PROFESSOR ELM: {STR_VAR_1} has\n"
	.string "chosen you, too! Take good care of\n"
	.string "your new partner.$"

LittlerootTown_ProfessorBirchsLab_Text_ElmEggMission:
	.string "PROFESSOR ELM: I have an important\n"
	.string "request. Please visit MR. POKéMON\n"
	.string "on ROUTE 29 and bring back the\n"
	.string "MYSTERY EGG he found. The road north\n"
	.string "is open now. Take care!$"

LittlerootTown_ProfessorBirchsLab_Text_RivalBeforeStarter:
	.string "A boy with red hair is examining\n"
	.string "the POKéMON research equipment.$"

LittlerootTown_ProfessorBirchsLab_Text_RivalAfterStarter:
	.string "The red-haired boy glances at your\n"
	.string "new partner, then hurries out of\n"
	.string "the lab without a word.$"

LittlerootTown_ProfessorBirchsLab_Text_Aide:
	.string "I'm helping PROFESSOR ELM study\n"
	.string "how POKéMON adapt to their\n"
	.string "surroundings.$"

LittlerootTown_ProfessorBirchsLab_Text_Machine:
	.string "A state-of-the-art POKéMON research\n"
	.string "machine. It is currently running\n"
	.string "several experiments.$"

LittlerootTown_ProfessorBirchsLab_Text_PC:
	.string "A computer linked to the POKéMON\n"
	.string "storage system.$"

LittlerootTown_ProfessorBirchsLab_Text_Book:
	.string "A research journal filled with\n"
	.string "PROFESSOR ELM's notes.$"

LittlerootTown_ProfessorBirchsLab_Text_Bookshelf:
	.string "Books about POKéMON behavior and\n"
	.string "the latest research from JOHTO.$"
