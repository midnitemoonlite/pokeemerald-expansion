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

KirbysHouse_Indoors_TalkToGooey::
# 73 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 74 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 75 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_1
# 82 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_2
# 92 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 2
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_3
	return

KirbysHouse_Indoors_TalkToGooey_1:
# 77 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_0
# 80 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_2:
# 84 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_1
# 88 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 89 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 90 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
	return

KirbysHouse_Indoors_TalkToGooey_3:
# 94 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_2
# 98 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToBandanaWaddleDee::
# 104 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 105 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 106 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0
# 108 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 109 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft::
# 114 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1:
# 116 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 117 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 118 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 119 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 120 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 121 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 122 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 123 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0
# 126 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 127 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 128 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 129 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 133 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 134 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 135 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopLeft::
# 141 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1:
# 143 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 144 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 145 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 146 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 147 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 148 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 149 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 150 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 151 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 155 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 156 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 157 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopRight::
# 163 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1:
# 165 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 166 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 167 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 168 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 169 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 171 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 172 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0
# 177 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 178 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 179 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomRight::
# 185 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1:
# 187 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 189 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 190 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 191 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 192 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 193 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 194 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0
# 197 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 198 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 199 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 200 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1
# 205 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 206 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 207 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_EventScript_DontLeave::
# 213 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_DontLeave_1
	return

KirbysHouse_Indoors_EventScript_DontLeave_1:
# 215 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_SOUTH
# 217 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 218 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_DontLeave_Text_0
# 224 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 225 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_DontLeave_Movement_0
# 228 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 229 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 230 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_EventScript_Television::
# 236 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_Television_1
# 342 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 343 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_4
# 344 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return

KirbysHouse_Indoors_EventScript_Television_1:
# 238 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 239 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_LOOK_AROUND
# 240 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadenewbgm MUS_DUMMY
# 241 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOnTVScreen
# 242 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 243 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_Television_Movement_0
# 248 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 60
# 249 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_0
# 267 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playSE SE_PIN
# 268 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 269 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 270 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 271 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_1
# 294 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playSE SE_PIN
# 295 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 296 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 297 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 298 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_2
# 311 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOffTVScreen
# 312 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadedefaultbgm
# 313 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 314 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 315 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_WalkInPlaceFasterLeft
# 316 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 317 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_3
# 329 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 330 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_EventScript_Television_Movement_1
# 333 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 334 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 335 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 336 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 2
# 337 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 338 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


# 123 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0:
# 124 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_right
	step_end

# 129 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1:
# 130 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 130 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0:
# 174 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0:
# 195 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_left
	step_end

# 200 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1:
# 201 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 202 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_DontLeave_Movement_0:
# 226 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_0:
# 245 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 246 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_up
	step_end

# 330 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_1:
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 331 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
	step_end

KirbysHouse_Indoors_TalkToGooey_Text_0:
# 77 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo?\p"
	.string "It's Gooey. He lives here too.$"

KirbysHouse_Indoors_TalkToGooey_Text_1:
# 84 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo...\p"
	.string "It's Gooey. He's fixated on the\n"
	.string "television.$"

KirbysHouse_Indoors_TalkToGooey_Text_2:
# 94 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo!\p"
	.string "It's Gooey. Doesn't seem like he\n"
	.string "understood the news at all...$"

KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0:
# 106 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} What are you\n"
	.string "waiting for? Let's turn on the TV!$"

KirbysHouse_Indoors_EventScript_DontLeave_Text_0:
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Kirby!\n"
	.string "Where are you going?\p"
	.string "Turn on the TV so we can see\n"
	.string "what the king has to say!$"

KirbysHouse_Indoors_EventScript_Television_Text_0:
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "You're watching Channel PPP!\p"
	.string "I'm Reporter Waddle Dee, here to bring\n"
	.string "you breaking news from none other than\l"
	.string "the king of Dream Land! Take it away,\l"
	.string "Your Highness!\p"
	.string "{COLOR BLUE}KING DEDEDE:{COLOR DARK_GRAY} Howdy, everyone! Now\n"
	.string "listen up; have you ever wondered what\l"
	.string "being king is like? Working hard to\l"
	.string "make sure everyone else gets to live\l"
	.string "carefree, peaceful lives?\p"
	.string "Well, now you've got the chance to\n"
	.string "find out for yourself! Introducing...\p"
	.string "{COLOR RED}DEDEDE'S ROYAL ROYALE!{COLOR DARK_GRAY}$"

KirbysHouse_Indoors_EventScript_Television_Text_1:
# 271 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}KING DEDEDE:{COLOR DARK_GRAY} That's right! I've\n"
	.string "organized a little game to test the\l"
	.string "qualities that make a great king.\p"
	.string "Strong leadership! A sharp mind! And\n"
	.string "the ability to command others well!\p"
	.string "All over Dream Land, Helpers with\n"
	.string "special powers have popped up.\p"
	.string "If you can forge a bond with them,\n"
	.string "they'll join your side! Then, you\l"
	.string "can pit your team against others\l"
	.string "at the various Arenas I've built.\p"
	.string "You'll earn Brooches for each Arena\n"
	.string "you conquer. The first competitor\l"
	.string "to bring all the Brooches to Mt.\l"
	.string "Dedede and win at my Dedede Arena\l"
	.string "will win a veeery special prize...\p"
	.string "Why, you'll be crowned the brand\n"
	.string "new {COLOR RED}KING OF DREAM LAND{COLOR DARK_GRAY}! Ha ha ha!$"

KirbysHouse_Indoors_EventScript_Television_Text_2:
# 298 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}KING DEDEDE:{COLOR DARK_GRAY} ...psst, assistant! That\n"
	.string "fine print saying 'for one day only'\l"
	.string "should be smaller! Fix that, yeah!?\p"
	.string "Ahem... anyways, that's all I've\n"
	.string "got for now. I'll be explainin'\l"
	.string "more at Waddle Dee Town soon.\p"
	.string "I want you all to learn about the\n"
	.string "trust between leader and subject,\l"
	.string "work together to prove your skill,\l"
	.string "and come to appreciate what it\l"
	.string "takes to be a king! Peace!$"

KirbysHouse_Indoors_EventScript_Television_Text_3:
# 317 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Wow...\n"
	.string "That was a lot to take in, huh?\p"
	.string "I wonder what led the Great\n"
	.string "King to this game of his.\p"
	.string "And what did he mean by\n"
	.string "Helpers appearing here?\p"
	.string "I guess I should head back\n"
	.string "to Waddle Dee Town and\l"
	.string "find out more there...$"

KirbysHouse_Indoors_EventScript_Television_Text_4:
# 343 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a television. It's not used much...$"

KirbysHouse_Indoors_BandanaDeeIntroduction::
# 348 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Hey, Kirby!\p"
	.string "Glad to see you're awake. I was\n"
	.string "worried you'd oversleep again!\p"
	.string "I came over because there's an\n"
	.string "important broadcast from King\l"
	.string "Dedede airing soon.\p"
	.string "I'm not sure what's going on,\n"
	.string "but the whole town's been in\l"
	.string "an uproar, so it must be big!\l"
	.string "Let's check it out!$"
