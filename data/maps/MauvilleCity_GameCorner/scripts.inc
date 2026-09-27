MauvilleCity_GameCorner_MapScripts::
	.byte 0

MauvilleCity_GameCorner_EventScript_RocketGrunt1::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_ROCKET_GRUNT_1_DEFEATED, MauvilleCity_GameCorner_EventScript_RocketGrunt1Defeated
	msgbox MauvilleCity_GameCorner_Text_RocketGrunt1Intro, MSGBOX_DEFAULT
	cleartrainerflag TRAINER_GRUNT_PETALBURG_WOODS
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, MauvilleCity_GameCorner_Text_RocketGrunt1Defeat
	setflag FLAG_GOLDENROD_ROCKET_GRUNT_1_DEFEATED
	msgbox MauvilleCity_GameCorner_Text_RocketGrunt1After, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RocketGrunt1Defeated::
	msgbox MauvilleCity_GameCorner_Text_RocketGruntDefeated, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RocketGrunt2::
	lock
	faceplayer
	goto_if_unset FLAG_GOLDENROD_ROCKET_GRUNT_1_DEFEATED, MauvilleCity_GameCorner_EventScript_RocketGruntBlocked
	goto_if_set FLAG_GOLDENROD_ROCKET_GRUNT_2_DEFEATED, MauvilleCity_GameCorner_EventScript_RocketGrunt2Defeated
	msgbox MauvilleCity_GameCorner_Text_RocketGrunt2Intro, MSGBOX_DEFAULT
	cleartrainerflag TRAINER_GRUNT_PETALBURG_WOODS
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, MauvilleCity_GameCorner_Text_RocketGrunt2Defeat
	setflag FLAG_GOLDENROD_ROCKET_GRUNT_2_DEFEATED
	msgbox MauvilleCity_GameCorner_Text_RocketGrunt2After, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RocketGrunt2Defeated::
	msgbox MauvilleCity_GameCorner_Text_RocketGruntDefeated, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RocketGrunt3::
	lock
	faceplayer
	goto_if_unset FLAG_GOLDENROD_ROCKET_GRUNT_2_DEFEATED, MauvilleCity_GameCorner_EventScript_RocketGruntBlocked
	goto_if_set FLAG_GOLDENROD_ROCKET_GRUNT_3_DEFEATED, MauvilleCity_GameCorner_EventScript_RocketGrunt3Defeated
	msgbox MauvilleCity_GameCorner_Text_RocketGrunt3Intro, MSGBOX_DEFAULT
	cleartrainerflag TRAINER_GRUNT_PETALBURG_WOODS
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, MauvilleCity_GameCorner_Text_RocketGrunt3Defeat
	setflag FLAG_GOLDENROD_ROCKET_GRUNT_3_DEFEATED
	msgbox MauvilleCity_GameCorner_Text_RocketGrunt3After, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RocketGrunt3Defeated::
	msgbox MauvilleCity_GameCorner_Text_RocketGruntDefeated, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RocketGruntBlocked::
	msgbox MauvilleCity_GameCorner_Text_RocketGruntBlocksWay, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RadioDirector::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_RADIO_DIRECTOR_SAVED, MauvilleCity_GameCorner_EventScript_RadioDirectorSaved
	goto_if_unset FLAG_GOLDENROD_ROCKET_GRUNT_3_DEFEATED, MauvilleCity_GameCorner_EventScript_RadioDirectorBlocked
	setflag FLAG_GOLDENROD_RADIO_DIRECTOR_SAVED
	msgbox MauvilleCity_GameCorner_Text_RadioDirectorRescued, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RadioDirectorBlocked::
	msgbox MauvilleCity_GameCorner_Text_RadioDirectorBlocked, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_RadioDirectorSaved::
	msgbox MauvilleCity_GameCorner_Text_RadioDirectorThanks, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_Text_RocketGrunt1Intro:
	.string "The RADIO TOWER belongs to TEAM ROCKET!\n"
	.string "You're not getting past me!$"

MauvilleCity_GameCorner_Text_RocketGrunt1Defeat:
	.string "What?! I lost!$"

MauvilleCity_GameCorner_Text_RocketGrunt1After:
	.string "The next floor is crawling with ROCKETs!$"

MauvilleCity_GameCorner_Text_RocketGrunt2Intro:
	.string "You made it this far? TEAM ROCKET will\n"
	.string "never give up on GOLDENROD!$"

MauvilleCity_GameCorner_Text_RocketGrunt2Defeat:
	.string "I can't believe I lost!$"

MauvilleCity_GameCorner_Text_RocketGrunt2After:
	.string "The DIRECTOR is upstairs. You won't reach\n"
	.string "him while our last grunt stands!$"

MauvilleCity_GameCorner_Text_RocketGrunt3Intro:
	.string "The DIRECTOR isn't going anywhere!\n"
	.string "I'll take care of you myself!$"

MauvilleCity_GameCorner_Text_RocketGrunt3Defeat:
	.string "Team Rocket blasts off again!$"

MauvilleCity_GameCorner_Text_RocketGrunt3After:
	.string "No... The DIRECTOR...$"

MauvilleCity_GameCorner_Text_RocketGruntDefeated:
	.string "TEAM ROCKET is finished here.$"

MauvilleCity_GameCorner_Text_RocketGruntBlocksWay:
	.string "A ROCKET GRUNT blocks the way upstairs!$"

MauvilleCity_GameCorner_Text_RadioDirectorBlocked:
	.string "The DIRECTOR is being held upstairs.\n"
	.string "Defeat the ROCKET GRUNTS first!$"

MauvilleCity_GameCorner_Text_RadioDirectorRescued:
	.string "Thank you for saving me!\n"
	.string "I am the RADIO TOWER DIRECTOR.$"

MauvilleCity_GameCorner_Text_RadioDirectorThanks:
	.string "You saved GOLDENROD's RADIO TOWER!\n"
	.string "Please accept my gratitude.$"
