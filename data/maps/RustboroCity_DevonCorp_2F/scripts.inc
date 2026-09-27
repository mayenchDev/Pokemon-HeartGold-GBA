RustboroCity_DevonCorp_2F_MapScripts::
	.byte 0

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
	trainerbattle_single TRAINER_SAGE_EDMOND, RustboroCity_DevonCorp_2F_Text_SageIntro, RustboroCity_DevonCorp_2F_Text_SageDefeat
	msgbox RustboroCity_DevonCorp_2F_Text_SageAfterBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_DevonCorp_2F_EventScript_BallScientist::
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
	lock
	faceplayer
	msgbox RustboroCity_DevonCorp_2F_Text_SageTalk, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_Text_SageIntro:
	.string "SAGE EDMOND: Bellsprout teaches us\n"
	.string "to stand firm and grow strong. Let\l"
	.string "us test your resolve!$"

RustboroCity_DevonCorp_2F_Text_SageDefeat:
	.string "Your team has learned well. You may\n"
	.string "continue to the top floor.$"

RustboroCity_DevonCorp_2F_Text_SageAfterBattle:
	.string "The elder Sage Li is waiting above.$"

RustboroCity_DevonCorp_2F_Text_SageTalk:
	.string "Listen to the rhythm of BELLSprout\n"
	.string "and you will understand its strength.$"
