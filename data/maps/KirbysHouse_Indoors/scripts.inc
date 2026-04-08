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
KirbysHouse_Indoors_EventScript_WallClock::
# 28 "data/maps/KirbysHouse_Indoors/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, KirbysHouse_Indoors_EventScript_CheckWallClock
# 29 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_Text_ClockIsStopped, MSGBOX_DEFAULT
# 30 "data/maps/KirbysHouse_Indoors/scripts.pory"
	call KirbysHouse_Indoors_EventScript_SetWallClock
# 31 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 30
# 32 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 33 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 34 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject VAR_0x8008
# 35 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 36 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 37 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 38 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_CheckWallClock::
# 39 "data/maps/KirbysHouse_Indoors/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 40 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special Special_ViewWallClock
# 42 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 43 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 44 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 45 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 46 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_SetWallClock::
# 47 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special StartWallClock
# 49 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 50 "data/maps/KirbysHouse_Indoors/scripts.pory"
	return
# 51 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 52 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ItsAGameCube:
# 53 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 54 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 55 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "serve as the Controller.$"
# 56 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 57 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ClockIsStopped:
# 58 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a brand-new clock.\p"
# 59 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "Let's set it and start it!$"

KirbysHouse_Indoors_EventScript_Fridge::
# 64 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 65 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Fridge_Text_0
# 71 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToGooey::
# 76 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 77 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 78 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_1
# 85 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_2
# 95 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 2
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_3
# 103 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_4
	return

KirbysHouse_Indoors_TalkToGooey_1:
# 80 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_0
# 83 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_2:
# 87 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_1
# 91 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 92 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 93 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
	return

KirbysHouse_Indoors_TalkToGooey_3:
# 97 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_2
# 101 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_4:
# 105 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_3
# 109 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToBandanaWaddleDee::
# 115 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 116 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 117 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0
# 119 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 120 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft::
# 125 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1:
# 127 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 128 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 129 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 130 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 132 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 133 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 134 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0
# 137 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 138 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 139 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 140 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 144 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 145 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 146 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopLeft::
# 152 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1:
# 154 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 155 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 156 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 157 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 158 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 159 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 160 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 161 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 162 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 163 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 167 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 168 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 169 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopRight::
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1:
# 177 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 178 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 179 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 180 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 181 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 182 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 183 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 184 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 185 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 186 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0
# 190 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 191 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 192 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomRight::
# 198 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1:
# 200 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 201 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 202 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 204 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 205 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 206 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 207 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0
# 210 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 211 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 212 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 213 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1
# 218 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 220 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_EventScript_DontLeave::
# 226 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_DontLeave_1
	return

KirbysHouse_Indoors_EventScript_DontLeave_1:
# 228 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 229 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_SOUTH
# 230 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 231 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 232 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_DontLeave_Text_0
# 237 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 238 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_DontLeave_Movement_0
# 241 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 242 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 243 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_EventScript_Television::
# 249 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_Television_1
# 362 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 363 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_4
# 364 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return

KirbysHouse_Indoors_EventScript_Television_1:
# 251 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 252 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_LOOK_AROUND
# 253 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadenewbgm MUS_DUMMY
# 254 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOnTVScreen
# 255 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 256 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
# 257 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_Television_Movement_0
# 261 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 60
# 262 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 263 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_0
# 284 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playSE SE_PIN
# 285 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 286 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 287 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 288 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_1
# 314 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playSE SE_PIN
# 315 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 316 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 317 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 318 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_2
# 332 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOffTVScreen
# 333 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadedefaultbgm
# 334 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 335 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 336 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_WalkInPlaceFasterLeft
# 337 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 338 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_3
# 349 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 350 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_EventScript_Television_Movement_1
# 353 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 354 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 355 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 356 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 2
# 357 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 358 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


# 134 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0:
# 135 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_right
	step_end

# 140 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1:
# 141 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 141 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 142 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 186 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0:
# 187 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 207 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0:
# 208 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_left
	step_end

# 213 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1:
# 214 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 215 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 238 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_DontLeave_Movement_0:
# 239 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 257 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_0:
# 258 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 259 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_up
	step_end

# 350 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_1:
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
	step_end

KirbysHouse_Indoors_EventScript_Fridge_Text_0:
# 65 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "The fridge is packed to the brim with\n"
	.string "delicious-looking foods…!\p"
	.string "You resist your urges and close the\n"
	.string "fridge door.$"

KirbysHouse_Indoors_TalkToGooey_Text_0:
# 80 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo?\p"
	.string "It's Gooey. He lives here too.$"

KirbysHouse_Indoors_TalkToGooey_Text_1:
# 87 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo…\p"
	.string "It's Gooey. He's staring intently at the\n"
	.string "television.$"

KirbysHouse_Indoors_TalkToGooey_Text_2:
# 97 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo!\p"
	.string "It's Gooey. Doesn't seem like he\n"
	.string "understood the news at all…$"

KirbysHouse_Indoors_TalkToGooey_Text_3:
# 105 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goooo?\p"
	.string "It's Gooey. He seems curious about\n"
	.string "the noise outside.$"

KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0:
# 117 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} What are you\n"
	.string "waiting for? Let's turn on the TV!$"

KirbysHouse_Indoors_EventScript_DontLeave_Text_0:
# 232 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Kirby! Where are\n"
	.string "you going? Don't walk out on me!\p"
	.string "This broadcast is supposed to be\n"
	.string "important. We gotta watch it!$"

KirbysHouse_Indoors_EventScript_Television_Text_0:
# 263 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "You're watching Channel PPP!\p"
	.string "I'm Reporter Waddle Dee, here to deliver\n"
	.string "breaking news from none other than the\l"
	.string "king of Dream Land himself!\p"
	.string "Take it away, Your Highness!\p"
	.string "{COLOR BLUE}KING DEDEDE:{COLOR DARK_GRAY} Howdy, everyone! I've got\n"
	.string "a big announcement, so listen up!\p"
	.string "Have ya ever wondered what goes into\n"
	.string "being a great king?\p"
	.string "Working hard to make sure everyone\n"
	.string "else lives carefree, peaceful lives?\p"
	.string "Well, now I'm giving ya the chance to\n"
	.string "find out for yourself! Introducing…\p"
	.string "{COLOR RED}DEDEDE'S ROYAL ROYALE!{COLOR DARK_GRAY}$"

KirbysHouse_Indoors_EventScript_Television_Text_1:
# 288 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}KING DEDEDE:{COLOR DARK_GRAY} That's right! I've\n"
	.string "organized a little game to test you all\l"
	.string "on the qualities that make a good ruler.\p"
	.string "Impressive strength! A sharp mind! And\n"
	.string "a knack for decisive leadership!\p"
	.string "Maybe you noticed these special\n"
	.string "Helpers popping up all over Dream Land.\p"
	.string "Recruit them to your side, and you can\n"
	.string "command their special powers!\p"
	.string "Then, you can pit your teams against\n"
	.string "others' in some friendly competition at\l"
	.string "the various Arenas my crew are building.\p"
	.string "You'll earn Brooches for each Arena\n"
	.string "you conquer. \p"
	.string "The first competitor to bring all the\n"
	.string "Brooches to Mt. Dedede and win at my\l"
	.string "Dedede Arena will win a little prize…\p"
	.string "Why, you'll be crowned the brand new\n"
	.string "{COLOR RED}KING OF DREAM LAND{COLOR DARK_GRAY}! Ha ha ha!$"

KirbysHouse_Indoors_EventScript_Television_Text_2:
# 318 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}KING DEDEDE:{COLOR DARK_GRAY} …psst, hey! That fine\n"
	.string "print saying “ for one day only” should\l"
	.string "be smaller! Fix that, yeah!?\p"
	.string "Ahem… anywho, that's all I got for now.\p"
	.string "I'll be making an appearance at Waddle\n"
	.string "Dee Town soon if you have questions.\p"
	.string "I want you all to learn about the trust\n"
	.string "and skill it takes to be a real leader!\p"
	.string "Maybe then you'll thank me for all my\n"
	.string "hard work! Ha ha ha! Peace!$"

KirbysHouse_Indoors_EventScript_Television_Text_3:
# 338 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Wow…\n"
	.string "That was a lot to take in, huh?\p"
	.string "I wonder how the Great King came up\n"
	.string "with this little game of his.\p"
	.string "And what did he mean by “Helpers”\n"
	.string "appearing all over Dream Land, anyways?\p"
	.string "I guess I should head back to Waddle\n"
	.string "Dee Town and learn what I can…$"

KirbysHouse_Indoors_EventScript_Television_Text_4:
# 363 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a television. It's not used much…$"

KirbysHouse_Indoors_BandanaDeeIntroduction::
# 368 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Hey, Kirby!\p"
	.string "Glad to see you're awake. I thought you\n"
	.string "might have overslept again!\p"
	.string "I came by because I heard there's an\n"
	.string "important broadcast airing soon.\p"
	.string "I'm not sure what it's about, but it had\n"
	.string "the whole town in an uproar!\p"
	.string "What do you say we check it out\n"
	.string "tgoether and see what's going on, yeah?$"
