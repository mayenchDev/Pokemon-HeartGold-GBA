RustboroCity_DevonCorp_1F_MapScripts::
	.byte 0

RustboroCity_DevonCorp_1F_EventScript_Employee::
	trainerbattle_single TRAINER_SAGE_JOEL, RustboroCity_DevonCorp_1F_Text_SageIntro, RustboroCity_DevonCorp_1F_Text_SageDefeat
	msgbox RustboroCity_DevonCorp_1F_Text_SageAfterBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_DevonCorp_1F_EventScript_StairGuard::
RustboroCity_DevonCorp_1F_EventScript_Greeter::
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
	lock
	faceplayer
	msgbox RustboroCity_DevonCorp_1F_Text_Tower, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
	msgbox RustboroCity_DevonCorp_1F_Text_TowerSign, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_1F_Text_SageIntro:
	.string "I am SAGE JOEL, keeper of the\n"
	.string "Bellsprout TOWER. Show me your\l"
	.string "understanding of POKéMON!$"

RustboroCity_DevonCorp_1F_Text_SageDefeat:
	.string "Your bond with your POKéMON is\n"
	.string "stronger than I expected.$"

RustboroCity_DevonCorp_1F_Text_SageAfterBattle:
	.string "Climb the stairs and learn from the\n"
	.string "other SAGES.$"

RustboroCity_DevonCorp_1F_Text_Tower:
	.string "The BELLSprout TOWER is a place to\n"
	.string "train with patience and respect.$"

RustboroCity_DevonCorp_1F_Text_TowerSign:
	.string "Bellsprout TOWER\p"
	.string "A place of training and reflection.$"
