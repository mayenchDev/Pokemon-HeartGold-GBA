FortreeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
	.byte 0

FortreeCity_OnTransition:
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

FortreeCity_EventScript_Man::
	msgbox FortreeCity_Text_HoOhLegend, MSGBOX_NPC
	end

FortreeCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_MORTY_MET_BURNT_TOWER, FortreeCity_EventScript_WomanGymAccessible
	msgbox FortreeCity_Text_MortyAtBurntTower, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_WomanGymAccessible::
	msgbox FortreeCity_Text_MortyReturned, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_Girl::
	msgbox FortreeCity_Text_LugiaLegend, MSGBOX_NPC
	end

FortreeCity_EventScript_OldMan::
	msgbox FortreeCity_Text_BurntTower, MSGBOX_NPC
	end

FortreeCity_EventScript_Boy::
	msgbox FortreeCity_Text_DanceTheater, MSGBOX_NPC
	end

FortreeCity_EventScript_GameboyKid::
	msgbox FortreeCity_Text_KimonoGirls, MSGBOX_NPC
	end

FortreeCity_EventScript_CitySign::
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end

FortreeCity_EventScript_GymSign::
	lock
	faceplayer
	goto_if_set FLAG_MORTY_MET_BURNT_TOWER, FortreeCity_EventScript_GymSignOpen
	msgbox FortreeCity_Text_GymSignClosed, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_GymSignOpen::
	msgbox FortreeCity_Text_GymSignOpen, MSGBOX_DEFAULT
	release
	end
	end

FortreeCity_Text_HoOhLegend:
	.string "They say HO-OH once soared above\n"
	.string "ECRUTEAK and left a rainbow behind.$"

FortreeCity_Text_MortyAtBurntTower:
	.string "MORTY has gone to investigate the\n"
	.string "BURNT TOWER. The GYM is closed.$"

FortreeCity_Text_MortyReturned:
	.string "MORTY returned from the BURNT TOWER.\n"
	.string "The GYM is open to challengers.$"

FortreeCity_Text_LugiaLegend:
	.string "They say LUGIA rests beneath the sea,\n"
	.string "far from the people of JOHTO.$"

FortreeCity_Text_BurntTower:
	.string "The BURNT TOWER is a solemn place.\n"
	.string "Legends say three POKéMON perished there.$"

FortreeCity_Text_DanceTheater:
	.string "The KIMONO GIRLS dance with grace.\p"
	.string "Their performance at the DANCE THEATER\n"
	.string "is said to honor the legendary POKéMON.$"

FortreeCity_Text_KimonoGirls:
	.string "I heard the KIMONO GIRLS are looking\n"
	.string "for a TRAINER worthy of their trust.$"

FortreeCity_Text_CitySign:
	.string "ECRUTEAK CITY\n"
	.string "“A historical city where the past\l"
	.string "meets the present.”$"

FortreeCity_Text_GymSignClosed:
	.string "ECRUTEAK CITY POKéMON GYM\n"
	.string "LEADER: MORTY\p"
	.string "The LEADER is investigating the\n"
	.string "BURNT TOWER. The GYM is closed.$"

FortreeCity_Text_GymSignOpen:
	.string "ECRUTEAK CITY POKéMON GYM\n"
	.string "LEADER: MORTY\p"
	.string "“A mystic seer of the future.”$"
