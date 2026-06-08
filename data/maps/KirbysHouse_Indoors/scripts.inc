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
# 115 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 2
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_3
# 123 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_Indoors_TalkToGooey_4
# 131 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
	release
# 112 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 113 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
	return

KirbysHouse_Indoors_TalkToGooey_3:
# 117 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_2
# 121 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_4:
# 125 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_3
# 129 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return

KirbysHouse_Indoors_TalkToGooey_5:
# 133 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToGooey_Text_4
# 137 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_TalkToBandanaWaddleDee::
# 143 "data/maps/KirbysHouse_Indoors/scripts.pory"
	faceplayer
# 144 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 145 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0
# 147 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
# 148 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft::
# 153 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_1:
# 155 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 156 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 157 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 158 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 159 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 160 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 161 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 162 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0
# 165 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 166 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 167 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 168 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 172 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 173 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 174 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopLeft::
# 180 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopLeft_1:
# 182 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 183 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 184 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 6, 13
# 185 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 186 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 187 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 188 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 189 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 190 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 191 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1
# 195 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 196 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 197 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceTopRight::
# 203 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceTopRight_1:
# 205 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 206 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 207 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 208 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 209 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 210 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 211 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 212 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 213 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 214 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0
# 218 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 219 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 220 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_BandanaDeeEntranceBottomRight::
# 226 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 0
	goto_if_eq KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1
	return

KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_1:
# 228 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 229 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_FACE_UP
# 230 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 7, 13
# 231 "data/maps/KirbysHouse_Indoors/scripts.pory"
	addobject LOCALID_BANDANA_WADDLE_DEE
# 232 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 233 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 234 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 235 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0
# 238 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 239 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_BandanaDeeIntroduction
# 240 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 241 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1
# 246 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 247 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 1
# 248 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


KirbysHouse_Indoors_EventScript_DontLeave::
# 254 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_DontLeave_1
	return

KirbysHouse_Indoors_EventScript_DontLeave_1:
# 256 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lock
# 257 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_SOUTH
# 258 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 259 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 260 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_DontLeave_Text_0
# 265 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 266 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_DontLeave_Movement_0
# 269 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 270 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 271 "data/maps/KirbysHouse_Indoors/scripts.pory"
	release
	return


KirbysHouse_Indoors_EventScript_Television::
# 277 "data/maps/KirbysHouse_Indoors/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 1
	goto_if_eq KirbysHouse_Indoors_EventScript_Television_1
# 388 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 389 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_4
# 390 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return

KirbysHouse_Indoors_EventScript_Television_1:
# 279 "data/maps/KirbysHouse_Indoors/scripts.pory"
	lockall
# 280 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setobjectmovementtype LOCALID_GOOEY, MOVEMENT_TYPE_LOOK_AROUND
# 281 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadenewbgm MUS_DUMMY
# 282 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOnTVScreen
# 283 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 284 "data/maps/KirbysHouse_Indoors/scripts.pory"
	turnobject LOCALID_GOOEY, DIR_NORTH
# 285 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_Indoors_EventScript_Television_Movement_0
# 289 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 60
# 290 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 291 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_0
# 312 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PIN
# 313 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 314 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 315 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 316 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_1
# 341 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_PIN
# 342 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 343 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 344 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 345 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_2
# 359 "data/maps/KirbysHouse_Indoors/scripts.pory"
	special TurnOffTVScreen
# 360 "data/maps/KirbysHouse_Indoors/scripts.pory"
	fadedefaultbgm
# 361 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 362 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 363 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_WalkInPlaceFasterLeft
# 364 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 365 "data/maps/KirbysHouse_Indoors/scripts.pory"
	msgbox KirbysHouse_Indoors_EventScript_Television_Text_3
# 375 "data/maps/KirbysHouse_Indoors/scripts.pory"
	closemessage
# 376 "data/maps/KirbysHouse_Indoors/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_Indoors_EventScript_Television_Movement_1
# 379 "data/maps/KirbysHouse_Indoors/scripts.pory"
	waitmovement 0
# 380 "data/maps/KirbysHouse_Indoors/scripts.pory"
	playse SE_EXIT
# 381 "data/maps/KirbysHouse_Indoors/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 382 "data/maps/KirbysHouse_Indoors/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 2
# 383 "data/maps/KirbysHouse_Indoors/scripts.pory"
	delay 35
# 384 "data/maps/KirbysHouse_Indoors/scripts.pory"
	releaseall
	return


# 162 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_0:
# 163 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_right
	step_end

# 168 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomLeft_Movement_1:
# 169 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 169 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 170 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceTopRight_Movement_0:
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
# 216 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 235 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_0:
# 236 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_left
	step_end

# 241 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_BandanaDeeEntranceBottomRight_Movement_1:
# 242 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 243 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_right
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
# 244 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 266 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_DontLeave_Movement_0:
# 267 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_up
	step_end

# 285 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_0:
# 286 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 287 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_in_place_faster_up
	step_end

# 376 "data/maps/KirbysHouse_Indoors/scripts.pory"
KirbysHouse_Indoors_EventScript_Television_Movement_1:
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
	walk_down
# 377 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
# 117 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goo!\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. Doesn't seem like he\n"
	.string "understood the news at all…$"

KirbysHouse_Indoors_TalkToGooey_Text_3:
# 125 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goooo?\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. He seems curious about\n"
	.string "the noise outside.$"

KirbysHouse_Indoors_TalkToGooey_Text_4:
# 133 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_GOOEY}Goooo!\p"
	.string "{SPEAKER NAME_NONE}It's Gooey. He seems curious about\n"
	.string "your Helpers.$"

KirbysHouse_Indoors_TalkToBandanaWaddleDee_Text_0:
# 145 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}What are you waiting for?\n"
	.string "Let's turn on the TV!$"

KirbysHouse_Indoors_EventScript_DontLeave_Text_0:
# 260 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Kirby! Where are you going?\n"
	.string "Don't walk out on me!\p"
	.string "This broadcast is supposed to be\n"
	.string "important. We gotta watch it!$"

KirbysHouse_Indoors_EventScript_Television_Text_0:
# 291 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
# 316 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
# 345 "data/maps/KirbysHouse_Indoors/scripts.pory"
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
# 365 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Wow… that was a lot to take in, huh?\p"
	.string "I wonder how the Great King came up\n"
	.string "with this little game of his.\p"
	.string "And what did he mean by Helpers\n"
	.string "appearing all over Dream Land, anyways?\p"
	.string "I guess I should head back to Waddle\n"
	.string "Dee Town and learn what I can…$"

KirbysHouse_Indoors_EventScript_Television_Text_4:
# 389 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "It's a television. It's not used much…$"

KirbysHouse_Indoors_BandanaDeeIntroduction::
# 394 "data/maps/KirbysHouse_Indoors/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Hey, Kirby!\p"
	.string "Glad to see you're awake. I thought you\n"
	.string "might have overslept again!\p"
	.string "I came by because I heard there's an\n"
	.string "important broadcast airing soon.\p"
	.string "I'm not sure what it's about, but it had\n"
	.string "the whole town in an uproar!\p"
	.string "What do you say we check it out\n"
	.string "tgoether and see what's going on, yeah?$"
