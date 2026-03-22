# 1 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 2 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_MapScripts::
# 3 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.byte 0
# 4 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 5 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_PC::
# 6 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 7 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 8 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special DoPCTurnOnEffect
# 9 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PC_ON
# 10 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 11 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special BedroomPC
# 12 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 13 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 14 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 15 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 16 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_TurnOffPlayerPC::
# 17 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 18 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PC_OFF
# 19 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special DoPCTurnOffEffect
# 20 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 21 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 22 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 23 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_GameCube::
# 24 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_Text_ItsAGameCube, MSGBOX_SIGN
# 25 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 26 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 27 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Fridge::
# 28 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_Text_TheFridge, MSGBOX_SIGN
# 29 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 30 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 31 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_WallClock::
# 32 "data/maps/KirbysHouse_Indoors/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, KirbysHouse_Indoors_EventScript_CheckWallClock
# 33 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_Text_ClockIsStopped, MSGBOX_DEFAULT
# 34 "data/maps/KirbysHouse_Indoors/scripts.pory"
	call KirbysHouse_Indoors_EventScript_SetWallClock
# 35 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 30
# 36 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 37 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject VAR_0x8008
# 39 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 40 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 41 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 42 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_CheckWallClock::
# 43 "data/maps/KirbysHouse_Indoors/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 44 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special Special_ViewWallClock
# 46 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 47 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 48 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 49 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 50 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_SetWallClock::
# 51 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special StartWallClock
# 53 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 54 "data/maps/KirbysHouse_Indoors/scripts.pory"
	return
# 55 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 56 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_TheFridge:
# 57 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "The fridge is packed to the brim\n"
# 58 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "with delicious-looking foods...!\p"
# 59 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "You resist the temptation.$"
# 60 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 61 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ItsAGameCube:
# 62 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 63 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 64 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "serve as the Controller.$"
# 65 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 66 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ClockIsStopped:
# 67 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a brand-new clock.\p"
# 68 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "Let's set it and start it!$"
