LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
	.byte 0

LittlerootTown_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call Common_EventScript_SetupRivalGfxId
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_HideWindowRival
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 1, LittlerootTown_EventScript_HideWindowRival
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	end

LittlerootTown_EventScript_HideWindowRival:
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	end

LittlerootTown_OnFrame:
	map_script_2 VAR_BIRCH_LAB_STATE, 3, LittlerootTown_EventScript_StartSilverBattle
	.2byte 0

LittlerootTown_EventScript_NeedPokemonTrigger::
	lockall
	msgbox LittlerootTown_Text_DangerousWithoutPokemon, MSGBOX_DEFAULT
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushFromRoute
	waitmovement 0
	releaseall
	end

LittlerootTown_Movement_PushFromRoute:
	walk_down
	step_end

LittlerootTown_EventScript_SilverAtWindow::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_SilverAlreadyLeft
	msgbox LittlerootTown_Text_SilverAtWindow, MSGBOX_DEFAULT
	setvar VAR_LITTLEROOT_RIVAL_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	release
	end

LittlerootTown_EventScript_SilverAlreadyLeft::
	msgbox LittlerootTown_Text_SilverAlreadyLeft, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_StartSilverBattle::
	lockall
	msgbox LittlerootTown_Text_SilverChallenge, MSGBOX_DEFAULT
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SilverBattleMay
	goto LittlerootTown_EventScript_SilverBattleBrendan
	end

LittlerootTown_EventScript_SilverBattleMay::
	switch VAR_STARTER_MON
	case 0, LittlerootTown_EventScript_SilverMayTreecko
	case 1, LittlerootTown_EventScript_SilverMayTorchic
	case 2, LittlerootTown_EventScript_SilverMayMudkip
	end

LittlerootTown_EventScript_SilverBattleBrendan::
	switch VAR_STARTER_MON
	case 0, LittlerootTown_EventScript_SilverBrendanTreecko
	case 1, LittlerootTown_EventScript_SilverBrendanTorchic
	case 2, LittlerootTown_EventScript_SilverBrendanMudkip
	end

LittlerootTown_EventScript_SilverMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, LittlerootTown_Text_SilverBattleWon
	goto LittlerootTown_EventScript_SilverBattleAftermath
	end

LittlerootTown_EventScript_SilverMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, LittlerootTown_Text_SilverBattleWon
	goto LittlerootTown_EventScript_SilverBattleAftermath
	end

LittlerootTown_EventScript_SilverMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, LittlerootTown_Text_SilverBattleWon
	goto LittlerootTown_EventScript_SilverBattleAftermath
	end

LittlerootTown_EventScript_SilverBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, LittlerootTown_Text_SilverBattleWon
	goto LittlerootTown_EventScript_SilverBattleAftermath
	end

LittlerootTown_EventScript_SilverBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, LittlerootTown_Text_SilverBattleWon
	goto LittlerootTown_EventScript_SilverBattleAftermath
	end

LittlerootTown_EventScript_SilverBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, LittlerootTown_Text_SilverBattleWon
	goto LittlerootTown_EventScript_SilverBattleAftermath
	end

LittlerootTown_EventScript_SilverBattleAftermath::
	setvar VAR_BIRCH_LAB_STATE, 4
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	msgbox LittlerootTown_Text_SilverDefeated, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_TwinBeforeStarter
	msgbox LittlerootTown_Text_TwinAfterStarter, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_TwinBeforeStarter::
	msgbox LittlerootTown_Text_TwinBeforeStarter, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_FatMan::
	msgbox LittlerootTown_Text_PCResearch, MSGBOX_NPC
	end

LittlerootTown_EventScript_Boy::
	msgbox LittlerootTown_Text_ElmResearch, MSGBOX_NPC
	end

LittlerootTown_EventScript_Mom::
	lock
	faceplayer
	msgbox LittlerootTown_Text_MomJohto, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_TownSign::
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BirchsLabSign::
	msgbox LittlerootTown_Text_ElmLabSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BrendansHouseSign::
	msgbox LittlerootTown_Text_HouseSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_MaysHouseSign::
	msgbox LittlerootTown_Text_HouseSign, MSGBOX_SIGN
	end

LittlerootTown_Text_TwinBeforeStarter:
	.string "It's dangerous to walk into the\n"
	.string "tall grass without a POKéMON.$"

LittlerootTown_Text_TwinAfterStarter:
	.string "The way to ROUTE 29 is open now.\n"
	.string "Good luck with PROFESSOR ELM's\n"
	.string "errand!$"
LittlerootTown_Text_PCResearch:
	.string "The PC links to the storage system.\n"
	.string "PROFESSOR ELM uses it to study\n"
	.string "POKéMON data.$"

LittlerootTown_Text_ElmResearch:
	.string "PROFESSOR ELM studies how POKéMON\n"
	.string "grow and communicate. His lab is\n"
	.string "full of new technology.$"

LittlerootTown_Text_MomJohto:
	.string "The roads around NEW BARK TOWN are\n"
	.string "quiet, but wild POKéMON live in the\n"
	.string "tall grass. Visit PROFESSOR ELM\n"
	.string "before you set out.$"

LittlerootTown_Text_TownSign:
	.string "NEW BARK TOWN\n"
	.string "The town where the wind of a new\n"
	.string "beginning blows.$"

LittlerootTown_Text_ElmLabSign:
	.string "PROFESSOR ELM'S POKéMON LAB\n"
	.string "Research into the potential of\n"
	.string "POKéMON.$"

LittlerootTown_Text_HouseSign:
	.string "A quiet home in NEW BARK TOWN.$"

LittlerootTown_Text_DangerousWithoutPokemon:
	.string "It's dangerous to go into the tall\n"
	.string "grass without a POKéMON! Please go\n"
	.string "back to PROFESSOR ELM's lab first.$"

LittlerootTown_Text_SilverAtWindow:
	.string "SILVER: Hmph. You don't even have a\n"
	.string "POKéMON, do you? Don't get in my way.$"

LittlerootTown_Text_SilverAlreadyLeft:
	.string "The boy has slipped away from the\n"
	.string "laboratory window.$"

LittlerootTown_Text_SilverChallenge:
	.string "The red-haired boy steps into your\n"
	.string "path, clutching a POKé BALL.\p"
	.string "SILVER: You brought the EGG back?\n"
	.string "Fine. I'll show you what a real\n"
	.string "trainer can do!$"

LittlerootTown_Text_SilverBattleWon:
	.string "SILVER: What?! I can't believe I\n"
	.string "lost to you!$"

LittlerootTown_Text_SilverDefeated:
	.string "SILVER: My name is SILVER. Don't\n"
	.string "think this is over!$"
