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
	releaseall
# 18 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 19 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 20 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_TurnOffPlayerPC::
# 21 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 22 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PC_OFF
# 23 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special DoPCTurnOffEffect
# 24 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
# 25 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 26 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 27 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_GameCube::
# 28 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_Text_ItsAGameCube, MSGBOX_SIGN
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
	releaseall
# 47 "data/maps/KirbysHouse_Indoors/scripts.pory"
	end
# 48 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 49 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_SetWallClock::
# 50 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special StartWallClock
# 52 "data/maps/KirbysHouse_Indoors/scripts.pory"
	return
# 53 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 54 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ItsAGameCube:
# 55 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 56 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 57 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "serve as the Controller.$"
# 58 "data/maps/KirbysHouse_Indoors/scripts.pory"

# 59 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_Text_ClockIsStopped:
# 60 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a brand-new clock.\p"
# 61 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "Let's set it and start it!$"

KirbysHouse_Indoors_EventScript_Fridge::
# 66 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 67 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Fridge_Text_0
# 73 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_GoToSleep::
# 78 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 4
	goto_if_ge KirbysHouse_Indoors_GoToSleep_1
	return

KirbysHouse_Indoors_GoToSleep_1:
# 80 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 81 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_GoToSleep_Text_0
# 82 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 83 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 84 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playfanfare MUS_HEAL
# 85 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitfanfare
# 86 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 88 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_GoToSleep_Text_1
# 89 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 90 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToGooey::
# 96 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 97 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 98 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_1
# 105 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_2
# 117 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 2
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_3
# 125 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_4
# 133 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 4
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_5
	return

KirbysHouse_Indoors_TalkToGooey_1:
# 100 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_0
# 103 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_2:
# 107 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_1
# 111 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 112 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 113 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_GOOEY, KirbysHouse_Indoors_TalkToGooey_Movement_0
# 114 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement
# 115 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_3:
# 119 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_2
# 123 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_4:
# 127 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_3
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_5:
# 135 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_4
# 139 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToBandanaWaddleDee::
# 145 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 146 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 147 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0
# 149 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 150 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft::
# 155 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1:
# 157 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 158 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 159 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_GOOEY, KirbysHouse_Indoors_TalkToGooey_Movement_0
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
	applymovement LOCALID_GOOEY, KirbysHouse_Indoors_TalkToGooey_Movement_0
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 189 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 190 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 191 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 192 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 193 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 194 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 195 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 199 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 200 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 201 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopRight::
# 207 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1:
# 209 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 210 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 211 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_GOOEY, KirbysHouse_Indoors_TalkToGooey_Movement_0
# 212 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 213 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 214 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 215 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 217 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 218 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0
# 223 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 224 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 225 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomRight::
# 231 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1:
# 233 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 234 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 235 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_GOOEY, KirbysHouse_Indoors_TalkToGooey_Movement_0
# 236 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 237 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 238 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 239 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 240 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 241 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 245 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 246 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1
# 252 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 253 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 254 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_EventScript_DontLeave::
# 260 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_DontLeave_1
	return

KirbysHouse_Indoors_EventScript_DontLeave_1:
# 262 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 263 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_SOUTH
# 264 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 265 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 266 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_DontLeave_Text_0
# 271 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 272 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_DontLeave_Movement_0
# 275 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 276 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 277 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_EventScript_Television::
# 283 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_Television_1
# 394 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 395 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_4
# 396 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return

KirbysHouse_Indoors_EventScript_Television_1:
# 285 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 286 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_LOOK_AROUND
# 287 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadenewbgm MUS_DUMMY
# 288 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOnTVScreen
# 289 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 290 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
# 291 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_Television_Movement_0
# 295 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 60
# 296 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 297 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_0
# 318 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PIN
# 319 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 320 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 321 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 322 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_1
# 347 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PIN
# 348 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 349 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 350 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_2
# 365 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOffTVScreen
# 366 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadedefaultbgm
# 367 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 368 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 369 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_WalkInPlaceFasterLeft
# 370 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 371 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_3
# 381 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_EventScript_Television_Movement_1
# 385 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 386 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 387 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 388 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 2
# 389 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 390 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


# 113 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_TalkToGooey_Movement_0:
# 113 "data/maps/KirbysHouse_Indoors/scripts.pory"
	face_up
	step_end

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

# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0:
# 220 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 221 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 241 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0:
# 242 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_left
	step_end

# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1:
# 248 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 249 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 250 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 272 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_DontLeave_Movement_0:
# 273 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 291 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_0:
# 292 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 293 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_up
	step_end

# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_1:
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
	step_end

KirbysHouse_Indoors_EventScript_Fridge_Text_0:
# 67 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "The fridge is packed to the brim with\n"
	.string "delicious-looking foods…!\p"
	.string "You resist your urges and close the\n"
	.string "fridge door.$"

KirbysHouse_Indoors_GoToSleep_Text_0:
# 81 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's your bed... time to take a nap!$"

KirbysHouse_Indoors_GoToSleep_Text_1:
# 88 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "You and your Helpers are all rested up!$"

KirbysHouse_Indoors_TalkToGooey_Text_0:
# 100 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goo?\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. He lives here too.$"

KirbysHouse_Indoors_TalkToGooey_Text_1:
# 107 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goo…\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. He's staring intently at the\n"
	.string "television.$"

KirbysHouse_Indoors_TalkToGooey_Text_2:
# 119 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goo!\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. Doesn't seem like he\n"
	.string "understood the news at all…$"

KirbysHouse_Indoors_TalkToGooey_Text_3:
# 127 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goooo?\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. He seems curious about\n"
	.string "the noise outside.$"

KirbysHouse_Indoors_TalkToGooey_Text_4:
# 135 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goooo!\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. He seems curious about\n"
	.string "your Helpers.$"

KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0:
# 147 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}What are you waiting for?\n"
	.string "Let's turn on the TV!$"

KirbysHouse_Indoors_EventScript_DontLeave_Text_0:
# 266 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Kirby! Where are you going?\n"
	.string "Don't walk out on me!\p"
	.string "This broadcast is supposed to be\n"
	.string "important. We gotta watch it!$"

KirbysHouse_Indoors_EventScript_Television_Text_0:
# 297 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "You're watching Channel PPP!\p"
	.string "I'm Reporter Waddle Dee, here to deliver\n"
	.string "breaking news from none other than the\l"
	.string "king of Dream Land himself!\p"
	.string "Take it away, Your Highness!\p"
	.string "{SPEAKER NAME_DEDEDE}Howdy, everyone! I've got a big\n"
	.string "announcement to make, so listen up!\p"
	.string "Have ya ever wondered what goes into\n"
	.string "being a great king?\p"
	.string "Working hard to make sure everyone\n"
	.string "else lives carefree, peaceful lives?\p"
	.string "Well, now I'm giving ya the chance to\n"
	.string "find out for yourself! Introducing…\p"
	.string "{COLOR RED}DEDEDE'S ROYAL ROYALE!{COLOR DARK_GRAY}$"

KirbysHouse_Indoors_EventScript_Television_Text_1:
# 322 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}I've organized a little game to test you\n"
	.string "all on the traits that make a good king.\p"
	.string "Impressive strength! A sharp mind! And\n"
	.string "a knack for decisive leadership!\p"
	.string "Maybe ya noticed those Helpers poppin'\n"
	.string "up all over Dream Land as of late, yeah?\p"
	.string "Well, if ya recruit them to your side,\n"
	.string "you can command their special powers!\p"
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
# 351 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}…psst, hey! Why's that fine print\n"
	.string "saying “for one day only” so big?\l"
	.string "It should be smaller! Fix that, yeah!?\p"
	.string "Ahem… anywho, that's all I got for now.\p"
	.string "I'll be making an appearance at Waddle\n"
	.string "Dee Town soon if you have questions.\p"
	.string "I want you all to learn about the trust\n"
	.string "and skill it takes to be a real leader!\p"
	.string "Maybe then you'll thank me for all my\n"
	.string "hard work! Ha ha ha! Peace!$"

KirbysHouse_Indoors_EventScript_Television_Text_3:
# 371 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Wow… that was a lot to take in, huh?\p"
	.string "I wonder how the Great King came up\n"
	.string "with this little game of his.\p"
	.string "And what did he mean by Helpers\n"
	.string "appearing all over Dream Land, anyways?\p"
	.string "I guess I should head back to Waddle\n"
	.string "Dee Town and learn what I can…$"

KirbysHouse_Indoors_EventScript_Television_Text_4:
# 395 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a television. It's not used much…$"

KirbysHouse_Indoors_BandanaDeeIntroduction::
# 400 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Hey, Kirby!\p"
	.string "Glad to see you're awake. I thought you\n"
	.string "might have overslept again!\p"
	.string "I came by because I heard there's an\n"
	.string "important broadcast airing soon.\p"
	.string "I'm not sure what it's about, but it had\n"
	.string "the whole town in an uproar!\p"
	.string "What do you say we check it out\n"
	.string "tgoether and see what's going on, yeah?$"
