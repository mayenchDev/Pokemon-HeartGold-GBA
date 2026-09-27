RustboroCity_DevonCorp_3F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
	.byte 0

RustboroCity_DevonCorp_3F_OnFrame:
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_ChallengeSageLi
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_ChallengeSageLi::
	lockall
	trainerbattle_single TRAINER_SAGE_LI, RustboroCity_DevonCorp_3F_Text_SageLiIntro, RustboroCity_DevonCorp_3F_Text_SageLiDefeat, RustboroCity_DevonCorp_3F_EventScript_SageLiDefeated
	releaseall
	end

RustboroCity_DevonCorp_3F_EventScript_SageLiDefeated::
	setflag FLAG_CLEARED_BELLSPROUT_TOWER
	setvar VAR_DEVON_CORP_3F_STATE, 1
	msgbox RustboroCity_DevonCorp_3F_Text_SageLiPraise, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_GiveFlash

RustboroCity_DevonCorp_3F_EventScript_MrStone::
	lock
	faceplayer
	goto_if_unset FLAG_CLEARED_BELLSPROUT_TOWER, RustboroCity_DevonCorp_3F_EventScript_NotYetCleared
	goto RustboroCity_DevonCorp_3F_EventScript_GiveFlash

RustboroCity_DevonCorp_3F_EventScript_GiveFlash::
	goto_if_set FLAG_RECEIVED_HM_FLASH, RustboroCity_DevonCorp_3F_EventScript_FlashAlreadyReceived
	giveitem ITEM_HM_FLASH
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox RustboroCity_DevonCorp_3F_Text_ReceivedFlash, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_DevonCorp_3F_EventScript_FlashAlreadyReceived::
	msgbox RustboroCity_DevonCorp_3F_Text_FlashAlreadyReceived, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_NotYetCleared::
	msgbox RustboroCity_DevonCorp_3F_Text_SageTalk, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_Employee::
	lock
	faceplayer
	msgbox RustboroCity_DevonCorp_3F_Text_SageTalk, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
	msgbox RustboroCity_DevonCorp_3F_Text_TowerSign, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_3F_Text_SageLiIntro:
	.string "I am SAGE LI, guardian of this\n"
	.string "tower. Let us see what your heart\l"
	.string "has learned from Bellsprout!$"

RustboroCity_DevonCorp_3F_Text_SageLiDefeat:
	.string "Your POKéMON trust you completely.\n"
	.string "That is the strength I hoped to see.$"

RustboroCity_DevonCorp_3F_Text_SageLiPraise:
	.string "You have shown patience and kindness\n"
	.string "toward your POKéMON. Please accept\l"
	.string "this HM as a token of our respect.$"

RustboroCity_DevonCorp_3F_Text_ReceivedFlash:
	.string "SAGE LI gave you HM05!$"

RustboroCity_DevonCorp_3F_Text_FlashAlreadyReceived:
	.string "Let the light of FLASH guide your\n"
	.string "journey through the darkness.$"

RustboroCity_DevonCorp_3F_Text_NotYetCleared:
	.string "SAGE LI is meditating. Return when\n"
	.string "you are ready to test your bond.$"

RustboroCity_DevonCorp_3F_Text_SageTalk:
	.string "We learn patience from Bellsprout,\n"
	.string "which sways but does not break.$"

RustboroCity_DevonCorp_3F_Text_TowerSign:
	.string "Bellsprout TOWER\p"
	.string "May every trainer grow in wisdom.$"
