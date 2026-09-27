GraniteCave_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_1F_OnLoad
	.byte 0

GraniteCave_1F_OnLoad:
	removeobject LOCALID_GRANITE_CAVE_SILVER
	end

GraniteCave_1F_EventScript_TeamRocketGrunt::
	msgbox GraniteCave_1F_Text_TeamRocketGrunt, MSGBOX_NPC
	end

GraniteCave_1F_EventScript_SilverTrigger::
	lockall
	goto_if_set FLAG_SLOWPOKE_WELL_SILVER_DEFEATED, GraniteCave_1F_EventScript_SilverAlreadyDefeated
	addobject LOCALID_GRANITE_CAVE_SILVER
	applymovement LOCALID_GRANITE_CAVE_SILVER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox GraniteCave_1F_Text_SilverIntro, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, GraniteCave_1F_EventScript_SilverBattleChikorita
	case 1, GraniteCave_1F_EventScript_SilverBattleCyndaquil
	case 2, GraniteCave_1F_EventScript_SilverBattleTotodile
	end

GraniteCave_1F_EventScript_SilverBattleChikorita::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, GraniteCave_1F_Text_SilverDefeated
	goto GraniteCave_1F_EventScript_SilverDefeated
	end

GraniteCave_1F_EventScript_SilverBattleCyndaquil::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, GraniteCave_1F_Text_SilverDefeated
	goto GraniteCave_1F_EventScript_SilverDefeated
	end

GraniteCave_1F_EventScript_SilverBattleTotodile::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, GraniteCave_1F_Text_SilverDefeated
	goto GraniteCave_1F_EventScript_SilverDefeated
	end

GraniteCave_1F_EventScript_SilverDefeated::
	msgbox GraniteCave_1F_Text_SilverAfterBattle, MSGBOX_DEFAULT
	setflag FLAG_SLOWPOKE_WELL_SILVER_DEFEATED
	setvar VAR_SLOWPOKE_WELL_STATE, 1
	removeobject LOCALID_GRANITE_CAVE_SILVER
	releaseall
	end

GraniteCave_1F_EventScript_SilverAlreadyDefeated::
	removeobject LOCALID_GRANITE_CAVE_SILVER
	releaseall
	end

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash::
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Hey, you.\n"
	.string "It gets awfully dark ahead.\l"
	.string "It'll be tough trying to explore.\p"
	.string "That guy who came by earlier…\n"
	.string "STEVEN, I think it was.\p"
	.string "He knew how to use FLASH, so he ought\n"
	.string "to be all right, but…\p"
	.string "Well, for us HIKERS, helping out those\n"
	.string "that we meet is our motto.\p"
	.string "Here you go, I'll pass this on to you.$"

GraniteCave_1F_Text_ExplainFlash:
	.string "Teach that hidden move FLASH to\n"
	.string "a POKéMON and use it.\p"
	.string "It lights up even the inky darkness\n"
	.string "of caves.\p"
	.string "But, to use it, you need the GYM BADGE\n"
	.string "from DEWFORD's POKéMON GYM.$"

GraniteCave_1F_Text_TeamRocketGrunt:
	.string "TEAM ROCKET is back in JOHTO!\n"
	.string "These SLOWPOKE tails are worth a lot.\p"
	.string "Keep out of our business, kid!$"

GraniteCave_1F_Text_SilverIntro:
	.string "SILVER: So the ROCKETS are cutting off\n"
	.string "SLOWPOKE tails for money… Pathetic.\p"
	.string "And you! Don't get in my way.\n"
	.string "I'll show you what a real Trainer is!$"

GraniteCave_1F_Text_SilverDefeated:
	.string "SILVER: Tch…$"

GraniteCave_1F_Text_SilverAfterBattle:
	.string "SILVER: Don't think this means\n"
	.string "anything. I'll get stronger alone!$"
