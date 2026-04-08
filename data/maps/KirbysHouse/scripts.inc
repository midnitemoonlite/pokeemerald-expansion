# 1 "data/maps/KirbysHouse/scripts.pory"

# 2 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_MapScripts::
# 3 "data/maps/KirbysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KirbysHouse_OnTransition
# 4 "data/maps/KirbysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KirbysHouse_OnFrame
# 5 "data/maps/KirbysHouse/scripts.pory"
	.byte 0
# 6 "data/maps/KirbysHouse/scripts.pory"

# 7 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_OnTransition:
# 8 "data/maps/KirbysHouse/scripts.pory"
	call_if_eq VAR_KIRBYS_HOUSE_STATE, 3, KirbysHouse_EventScript_MoveIntroObjects
# 9 "data/maps/KirbysHouse/scripts.pory"
	end
# 10 "data/maps/KirbysHouse/scripts.pory"

# 11 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_OnFrame::
# 12 "data/maps/KirbysHouse/scripts.pory"
	map_script_2 VAR_KIRBYS_HOUSE_STATE, 2, KirbysHouse_EventScript_ExitHouseFirstTime
# 13 "data/maps/KirbysHouse/scripts.pory"
	.2byte 0
# 14 "data/maps/KirbysHouse/scripts.pory"

# 15 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_HouseSign::
# 16 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_KirbysHouse, MSGBOX_SIGN
# 17 "data/maps/KirbysHouse/scripts.pory"
	end
# 18 "data/maps/KirbysHouse/scripts.pory"

# 19 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_Text_KirbysHouse:
# 20 "data/maps/KirbysHouse/scripts.pory"
	.string "KIRBY'S HOUSE\n"
# 21 "data/maps/KirbysHouse/scripts.pory"
	.string "Built by thankful Dream Land residents.$"

KirbysHouse_EventScript_MoveIntroObjects::
# 25 "data/maps/KirbysHouse/scripts.pory"
	setobjectxy LOCALID_WISE_WADDLE_DEE, 11, 5
# 26 "data/maps/KirbysHouse/scripts.pory"
	setobjectxy LOCALID_BANDANA_WADDLE_DEE, 11, 6
# 27 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_WISE_WADDLE_DEE, 11, 5
# 28 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 11, 6
# 29 "data/maps/KirbysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BANDANA_WADDLE_DEE, MOVEMENT_TYPE_FACE_UP
# 30 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
	return


KirbysHouse_EventScript_ExitHouseFirstTime::
# 36 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 2
	goto_if_eq KirbysHouse_EventScript_ExitHouseFirstTime_1
	return

KirbysHouse_EventScript_ExitHouseFirstTime_1:
# 38 "data/maps/KirbysHouse/scripts.pory"
	lock
# 39 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_0
# 40 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 41 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_0
# 46 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_1
# 50 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 51 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_1
# 53 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 54 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_2
# 58 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_3
# 62 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 63 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_2
# 65 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 66 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 67 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_3
# 71 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 72 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 73 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 74 "data/maps/KirbysHouse/scripts.pory"
	playSE SE_PIN
# 75 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 76 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 77 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 78 "data/maps/KirbysHouse/scripts.pory"
	playbgm MUS_BIRCH_LAB, FALSE
# 79 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_4
# 80 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 81 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_WISE_WADDLE_DEE, 11, 5
# 82 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 11, 6
# 83 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5
# 84 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 85 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_4
# 109 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 110 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 111 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 112 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 113 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_5
# 115 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 116 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 117 "data/maps/KirbysHouse/scripts.pory"
	playse SE_LEDGE
# 118 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_6
# 119 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_6
# 124 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 125 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 126 "data/maps/KirbysHouse/scripts.pory"
	delay 60
# 127 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_7
# 136 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 137 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 138 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 139 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_8
# 153 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 154 "data/maps/KirbysHouse/scripts.pory"
	fadedefaultbgm
# 155 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 3
# 156 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToWiseWaddleDee::
# 162 "data/maps/KirbysHouse/scripts.pory"
	lock
# 163 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 164 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0
# 169 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToBandanaWaddleDee::
# 174 "data/maps/KirbysHouse/scripts.pory"
	lock
# 175 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 176 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0
# 181 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TryToLeave::
# 186 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_EventScript_TryToLeave_1
	return

KirbysHouse_EventScript_TryToLeave_1:
# 188 "data/maps/KirbysHouse/scripts.pory"
	lockall
# 189 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_WISE_WADDLE_DEE, DIR_NORTH
# 190 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TryToLeave_Text_0
# 192 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 193 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_TryToLeave_Movement_0
# 194 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 195 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return


KirbysHouse_EventScript_ChooseLovely::
# 201 "data/maps/KirbysHouse/scripts.pory"
	lockall
# 202 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 203 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 204 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_LOVELY, 10, 3
# 205 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_LOVELY, CRY_MODE_NORMAL
# 206 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 207 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 208 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_0, MSGBOX_YESNO
# 211 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_2
KirbysHouse_EventScript_ChooseLovely_1:
# 229 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_4
	return

KirbysHouse_EventScript_ChooseLovely_2:
# 213 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 214 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_LOVELY, 5
# 215 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_1
# 216 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 217 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 218 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 219 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 220 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_2, MSGBOX_YESNO
# 222 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_6
	goto KirbysHouse_EventScript_ChooseLovely_1

KirbysHouse_EventScript_ChooseLovely_4:
# 231 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 232 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_ChooseLovely_6:
# 224 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 225 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 226 "data/maps/KirbysHouse/scripts.pory"
	goto KirbysHouse_EventScript_AfterChoosingStarter
	goto KirbysHouse_EventScript_ChooseLovely_1


KirbysHouse_EventScript_ChooseBurningLeo::
# 238 "data/maps/KirbysHouse/scripts.pory"
	lockall
# 239 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 240 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 241 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_BURNING_LEO, 10, 3
# 242 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_BURNING_LEO, CRY_MODE_NORMAL
# 243 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 244 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 245 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_0, MSGBOX_YESNO
# 248 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_2
KirbysHouse_EventScript_ChooseBurningLeo_1:
# 266 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_4
	return

KirbysHouse_EventScript_ChooseBurningLeo_2:
# 250 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 251 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_BURNING_LEO, 5
# 252 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_1
# 253 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 254 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 255 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 256 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 257 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_2, MSGBOX_YESNO
# 259 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_6
	goto KirbysHouse_EventScript_ChooseBurningLeo_1

KirbysHouse_EventScript_ChooseBurningLeo_4:
# 268 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 269 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_ChooseBurningLeo_6:
# 261 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 262 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 263 "data/maps/KirbysHouse/scripts.pory"
	goto KirbysHouse_EventScript_AfterChoosingStarter
	goto KirbysHouse_EventScript_ChooseBurningLeo_1


KirbysHouse_EventScript_ChooseSquishy::
# 275 "data/maps/KirbysHouse/scripts.pory"
	lockall
# 276 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 277 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 278 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_SQUISHY, 10, 3
# 279 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_SQUISHY, CRY_MODE_NORMAL
# 280 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 281 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 282 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_0, MSGBOX_YESNO
# 285 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_2
KirbysHouse_EventScript_ChooseSquishy_1:
# 303 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_4
	return

KirbysHouse_EventScript_ChooseSquishy_2:
# 287 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 288 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_SQUISHY, 5
# 289 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_1
# 290 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 291 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 292 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 293 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 294 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_2, MSGBOX_YESNO
# 296 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_6
	goto KirbysHouse_EventScript_ChooseSquishy_1

KirbysHouse_EventScript_ChooseSquishy_4:
# 305 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 306 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_ChooseSquishy_6:
# 298 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 299 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 300 "data/maps/KirbysHouse/scripts.pory"
	goto KirbysHouse_EventScript_AfterChoosingStarter
	goto KirbysHouse_EventScript_ChooseSquishy_1


KirbysHouse_EventScript_AfterChoosingStarter::
# 312 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return


# 41 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_0:
# 42 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 42 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 43 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_right
	step_end

# 46 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_1:
# 47 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 48 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 48 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 48 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 48 "data/maps/KirbysHouse/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_2:
# 55 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 55 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 55 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 55 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 55 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 55 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 55 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 56 "data/maps/KirbysHouse/scripts.pory"
	walk_right
	step_end

# 58 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_3:
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 59 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 60 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_left
	step_end

# 79 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_4:
# 79 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 79 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 79 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 79 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 79 "data/maps/KirbysHouse/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5:
# 83 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 118 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_6:
# 118 "data/maps/KirbysHouse/scripts.pory"
	jump_in_place_down
	step_end

# 193 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_TryToLeave_Movement_0:
# 193 "data/maps/KirbysHouse/scripts.pory"
	walk_down
	step_end

KirbysHouse_EventScript_ExitHouseFirstTime_Text_0:
# 39 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Whoa! Check it out!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_1:
# 51 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} I thought you and\n"
	.string "Gooey were the only ones who live here!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_2:
# 63 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} And even more\n"
	.string "up here…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_3:
# 67 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Are these some of\n"
	.string "those Helpers the king mentioned?\p"
	.string "{COLOR BLUE}???:{COLOR DARK_GRAY} Indeed they are!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_4:
# 85 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Hm? I don't think\n"
	.string "we've met before…\p"
	.string "{COLOR BLUE}???:{COLOR DARK_GRAY} Allow me to introduce myself. I am\n"
	.string "known as Wise Waddle Dee.\p"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Per the Great King's\n"
	.string "request, I have been appointed to keep\l"
	.string "track of and study Helpers.\p"
	.string "As the leading expert on them, you may\n"
	.string "call me something of a professor!\p"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} I see… do you\n"
	.string "know where they came from too?\p"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Alas, I have no clue.\n"
	.string "I'm looking into it on my own behalf.\p"
	.string "My official duties pertain only to info\n"
	.string "of use for Royal Royale participants.\p"
	.string "Speaking of, surely the hero of Dream\n"
	.string "Land and his best friend plan to join?$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_5:
# 113 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Um… I guess\n"
	.string "it sounds kind of fun, but I dunno…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_6:
# 119 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Ah! My apologies. I\n"
	.string "suppose it must be a lot to take in.\p"
	.string "It is for me as well… that's why I'm\n"
	.string "trying to onboard new participants.$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_7:
# 127 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Well… I guess I\n"
	.string "also want to see how many Helpers there\l"
	.string "are, in case things get out of hand…\p"
	.string "And I suppose it's not fair for me to\n"
	.string "doubt the Great King's intentions…\p"
	.string "…and maybe taking part in this\n"
	.string "competition will make me stronger too…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_8:
# 139 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Okay, sure! I'll\n"
	.string "try the Royal Royale out!\p"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} A most excellent\n"
	.string "response! Thank you kindly!\p"
	.string "First, we must get you two situated\n"
	.string "with some Helpers of your own.\p"
	.string "Luckily, it appears some rare specimens\n"
	.string "are situated here in Kirby's backyard!\p"
	.string "Go on and pick which one you'd like. I'll\n"
	.string "show you after how to befriend them.$"

KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0:
# 164 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Choosing your first\n"
	.string "Helper is no trivial matter.\p"
	.string "I suggest observing them carefully\n"
	.string "before you make your decision.$"

KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0:
# 176 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} If you already\n"
	.string "know which one you want, go on ahead.\p"
	.string "I don't mind. I'm still thinking through\n"
	.string "who I want as my first partner…$"

KirbysHouse_EventScript_TryToLeave_Text_0:
# 190 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Hold on now! You can't\n"
	.string "simply leave without a Helper!$"

KirbysHouse_EventScript_ChooseLovely_Text_0:
# 208 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR GREEN}Lovely{COLOR DARK_GRAY}, the {COLOR GREEN}Grass-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Lovely?$"

KirbysHouse_EventScript_ChooseLovely_Text_1:
# 215 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Lovely!$"

KirbysHouse_EventScript_ChooseLovely_Text_2:
# 220 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Lovely?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_0:
# 245 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR RED}Burning Leo{COLOR DARK_GRAY}, the {COLOR RED}Fire-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Burning Leo?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_1:
# 252 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Burning Leo!$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_2:
# 257 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Burning Leo?$"

KirbysHouse_EventScript_ChooseSquishy_Text_0:
# 282 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR BLUE}Squishy{COLOR DARK_GRAY}, the {COLOR BLUE}Water-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Squishy?$"

KirbysHouse_EventScript_ChooseSquishy_Text_1:
# 289 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Squishy!$"

KirbysHouse_EventScript_ChooseSquishy_Text_2:
# 294 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Squishy?$"
