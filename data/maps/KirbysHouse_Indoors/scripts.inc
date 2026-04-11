# 1 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 2 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_MapScripts::
# 3 "data/maps/KirbysHouse_Indoors/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KirbysHouse_Indoors_OnTransition
# 4 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.byte 0
# 5 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 6 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_OnTransition:
# 7 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setrespawn HEAL_LOCATION_KIRBYS_HOUSE
# 8 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 9 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 10 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_PC::
# 11 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 12 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 13 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special DoPCTurnOnEffect
# 14 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PC_ON
# 15 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 16 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special BedroomPC
# 17 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 18 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 19 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 20 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 21 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_TurnOffPlayerPC::
# 22 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 23 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PC_OFF
# 24 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special DoPCTurnOffEffect
# 25 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 26 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 27 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 28 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_GameCube::
# 29 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_Text_ItsAGameCube, MSGBOX_SIGN
# 30 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 31 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 32 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_WallClock::
# 33 "data/maps/KirbysHouse_Indoors/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, KirbysHouse_Indoors_EventScript_CheckWallClock
# 34 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_Text_ClockIsStopped, MSGBOX_DEFAULT
# 35 "data/maps/KirbysHouse_Indoors/scripts.pory"
	call KirbysHouse_Indoors_EventScript_SetWallClock
# 36 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 30
# 37 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 38 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject VAR_0x8008
# 40 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 41 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 42 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 43 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_CheckWallClock::
# 44 "data/maps/KirbysHouse_Indoors/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 45 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special Special_ViewWallClock
# 47 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 48 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 49 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 50 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 51 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_SetWallClock::
# 52 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special StartWallClock
# 54 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitstate
# 55 "data/maps/KirbysHouse_Indoors/scripts.pory"
	return
# 56 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 57 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ItsAGameCube:
# 58 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 59 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 60 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "serve as the Controller.$"
# 61 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 62 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ClockIsStopped:
# 63 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a brand-new clock.\p"
# 64 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "Let's set it and start it!$"

KirbysHouse_Indoors_EventScript_Fridge::
# 69 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 70 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Fridge_Text_0
# 76 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_GoToSleep::
# 81 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 4
	goto_if_ge KirbysHouse_Indoors_GoToSleep_1
	return

KirbysHouse_Indoors_GoToSleep_1:
# 83 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 84 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_GoToSleep_Text_0
# 85 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 86 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 87 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playfanfare MUS_HEAL
# 88 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitfanfare
# 89 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special HealPlayerParty
# 90 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_GoToSleep_Text_1
# 92 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 93 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToGooey::
# 99 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 100 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 101 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_1
# 108 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_2
# 118 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 2
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_3
# 126 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_4
# 134 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 4
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_5
	return

KirbysHouse_Indoors_TalkToGooey_1:
# 103 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_0
# 106 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_2:
# 110 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_1
# 114 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 115 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 116 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
	return

KirbysHouse_Indoors_TalkToGooey_3:
# 120 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_2
# 124 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_4:
# 128 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_3
# 132 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_5:
# 136 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_4
# 140 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToBandanaWaddleDee::
# 146 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 147 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 148 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0
# 150 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 151 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft::
# 156 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1:
# 158 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 159 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 160 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 161 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 162 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 163 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 164 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 165 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0
# 168 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 169 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 171 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 175 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 176 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 177 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopLeft::
# 183 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1:
# 185 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 186 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 187 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 189 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 190 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 191 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 192 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 193 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 194 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 198 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 199 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 200 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopRight::
# 206 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1:
# 208 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 209 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 210 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 211 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 212 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 213 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 214 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 215 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 217 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 222 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 223 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomRight::
# 229 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1:
# 231 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 232 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 233 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 234 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 235 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 236 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 237 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 238 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0
# 241 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 242 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 243 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1
# 249 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 251 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_EventScript_DontLeave::
# 257 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_DontLeave_1
	return

KirbysHouse_Indoors_EventScript_DontLeave_1:
# 259 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 260 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_SOUTH
# 261 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 262 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 263 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_DontLeave_Text_0
# 268 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 269 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_DontLeave_Movement_0
# 272 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 273 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 274 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_EventScript_Television::
# 280 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_Television_1
# 393 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 394 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_4
# 395 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return

KirbysHouse_Indoors_EventScript_Television_1:
# 282 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 283 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_LOOK_AROUND
# 284 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadenewbgm MUS_DUMMY
# 285 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOnTVScreen
# 286 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 287 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
# 288 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_Television_Movement_0
# 292 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 60
# 293 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 294 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_0
# 315 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playSE SE_PIN
# 316 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 317 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 318 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 319 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_1
# 345 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playSE SE_PIN
# 346 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 347 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 348 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 349 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_2
# 363 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOffTVScreen
# 364 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadedefaultbgm
# 365 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 366 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 367 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_WalkInPlaceFasterLeft
# 368 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 369 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_3
# 380 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 381 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_EventScript_Television_Movement_1
# 384 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 385 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 386 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 387 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 2
# 388 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 389 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


# 165 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0:
# 166 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_right
	step_end

# 171 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1:
# 172 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 172 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 217 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0:
# 218 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 238 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0:
# 239 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_left
	step_end

# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1:
# 245 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 246 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 269 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_DontLeave_Movement_0:
# 270 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 288 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_0:
# 289 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 290 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_up
	step_end

# 381 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_1:
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
	step_end

KirbysHouse_Indoors_EventScript_Fridge_Text_0:
# 70 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "The fridge is packed to the brim with\n"
	.string "delicious-looking foods…!\p"
	.string "You resist your urges and close the\n"
	.string "fridge door.$"

KirbysHouse_Indoors_GoToSleep_Text_0:
# 84 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's your bed... time to take a nap!$"

KirbysHouse_Indoors_GoToSleep_Text_1:
# 91 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "You and your Helpers are all rested up!$"

KirbysHouse_Indoors_TalkToGooey_Text_0:
# 103 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo?\p"
	.string "It's Gooey. He lives here too.$"

KirbysHouse_Indoors_TalkToGooey_Text_1:
# 110 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo…\p"
	.string "It's Gooey. He's staring intently at the\n"
	.string "television.$"

KirbysHouse_Indoors_TalkToGooey_Text_2:
# 120 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goo!\p"
	.string "It's Gooey. Doesn't seem like he\n"
	.string "understood the news at all…$"

KirbysHouse_Indoors_TalkToGooey_Text_3:
# 128 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goooo?\p"
	.string "It's Gooey. He seems curious about\n"
	.string "the noise outside.$"

KirbysHouse_Indoors_TalkToGooey_Text_4:
# 136 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}GOOEY:{COLOR DARK_GRAY} Goooo!\p"
	.string "It's Gooey. He seems curious about\n"
	.string "your Helpers.$"

KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0:
# 148 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} What are you\n"
	.string "waiting for? Let's turn on the TV!$"

KirbysHouse_Indoors_EventScript_DontLeave_Text_0:
# 263 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Kirby! Where are\n"
	.string "you going? Don't walk out on me!\p"
	.string "This broadcast is supposed to be\n"
	.string "important. We gotta watch it!$"

KirbysHouse_Indoors_EventScript_Television_Text_0:
# 294 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
# 319 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
# 349 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
# 369 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Wow…\n"
	.string "That was a lot to take in, huh?\p"
	.string "I wonder how the Great King came up\n"
	.string "with this little game of his.\p"
	.string "And what did he mean by Helpers\n"
	.string "appearing all over Dream Land, anyways?\p"
	.string "I guess I should head back to Waddle\n"
	.string "Dee Town and learn what I can…$"

KirbysHouse_Indoors_EventScript_Television_Text_4:
# 394 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a television. It's not used much…$"

KirbysHouse_Indoors_BandanaDeeIntroduction::
# 399 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Hey, Kirby!\p"
	.string "Glad to see you're awake. I thought you\n"
	.string "might have overslept again!\p"
	.string "I came by because I heard there's an\n"
	.string "important broadcast airing soon.\p"
	.string "I'm not sure what it's about, but it had\n"
	.string "the whole town in an uproar!\p"
	.string "What do you say we check it out\n"
	.string "tgoether and see what's going on, yeah?$"
