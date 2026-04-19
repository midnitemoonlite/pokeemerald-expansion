# 1 "data/maps/KirbysHouse/scripts.pory"

# 2 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_MapScripts::
# 3 "data/maps/KirbysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KirbysHouse_OnFrame
# 4 "data/maps/KirbysHouse/scripts.pory"
	.byte 0
# 5 "data/maps/KirbysHouse/scripts.pory"

# 6 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_OnFrame::
# 7 "data/maps/KirbysHouse/scripts.pory"
	map_script_2 VAR_KIRBYS_HOUSE_STATE, 2, KirbysHouse_EventScript_ExitHouseFirstTime
# 8 "data/maps/KirbysHouse/scripts.pory"
	.2byte 0
# 9 "data/maps/KirbysHouse/scripts.pory"

# 10 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_HouseSign::
# 11 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_KirbysHouse, MSGBOX_SIGN
# 12 "data/maps/KirbysHouse/scripts.pory"
	end
# 13 "data/maps/KirbysHouse/scripts.pory"

# 14 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_Text_KirbysHouse:
# 15 "data/maps/KirbysHouse/scripts.pory"
	.string "KIRBY'S HOUSE\n"
# 16 "data/maps/KirbysHouse/scripts.pory"
	.string "Built by thankful Dream Land residents.$"

KirbysHouse_EventScript_ExitHouseFirstTime::
# 21 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 2
	goto_if_eq KirbysHouse_EventScript_ExitHouseFirstTime_1
	return

KirbysHouse_EventScript_ExitHouseFirstTime_1:
# 23 "data/maps/KirbysHouse/scripts.pory"
	lock
# 24 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_0
# 25 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 26 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_0
# 31 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_1
# 35 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_1
# 38 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 39 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_2
# 43 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_3
# 47 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 48 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_2
# 49 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 50 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 51 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_3
# 55 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 56 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 57 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 58 "data/maps/KirbysHouse/scripts.pory"
	playSE SE_PIN
# 59 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 60 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 61 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 62 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_4
# 63 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 64 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_WISE_WADDLE_DEE, 11, 5
# 65 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 11, 6
# 66 "data/maps/KirbysHouse/scripts.pory"
	playbgm MUS_BIRCH_LAB, FALSE
# 67 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5
# 68 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_4
# 87 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 88 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 89 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 90 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 91 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_5
# 92 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 93 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 94 "data/maps/KirbysHouse/scripts.pory"
	playse SE_LEDGE
# 95 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_6
# 96 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_6
# 101 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 102 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 103 "data/maps/KirbysHouse/scripts.pory"
	delay 60
# 104 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_7
# 112 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 113 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 114 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 115 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_8
# 126 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 127 "data/maps/KirbysHouse/scripts.pory"
	fadedefaultbgm
# 128 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 3
# 129 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToWiseWaddleDee::
# 135 "data/maps/KirbysHouse/scripts.pory"
	lock
# 136 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 137 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TalkToWiseWaddleDee_1
# 148 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_1
# 153 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 154 "data/maps/KirbysHouse/scripts.pory"
	goto KirbysHouse_EventScript_AfterChoosingStarter
	return

KirbysHouse_EventScript_TalkToWiseWaddleDee_1:
# 139 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0
# 144 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToBandanaWaddleDee::
# 160 "data/maps/KirbysHouse/scripts.pory"
	lock
# 161 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 162 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TalkToBandanaWaddleDee_2
# 171 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_1
KirbysHouse_EventScript_TalkToBandanaWaddleDee_1:
# 174 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_TalkToBandanaWaddleDee_2:
# 164 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0
	goto KirbysHouse_EventScript_TalkToBandanaWaddleDee_1


KirbysHouse_EventScript_TryToLeave::
# 179 "data/maps/KirbysHouse/scripts.pory"
	lockall
# 180 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_WISE_WADDLE_DEE, DIR_NORTH
# 181 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TryToLeave_2
# 186 "data/maps/KirbysHouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TryToLeave_4
KirbysHouse_EventScript_TryToLeave_1:
# 190 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 191 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_TryToLeave_Movement_0
# 192 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 193 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_TryToLeave_2:
# 183 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TryToLeave_Text_0
	goto KirbysHouse_EventScript_TryToLeave_1

KirbysHouse_EventScript_TryToLeave_3:
# 188 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TryToLeave_Text_1
	goto KirbysHouse_EventScript_TryToLeave_1

KirbysHouse_EventScript_TryToLeave_4:
# 186 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_EventScript_TryToLeave_3
	goto KirbysHouse_EventScript_TryToLeave_1


KirbysHouse_EventScript_ChooseLovely::
# 198 "data/maps/KirbysHouse/scripts.pory"
	lock
# 199 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 200 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 201 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseLovely_1
# 243 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 244 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseLovely_1:
# 203 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_LOVELY, 10, 3
# 204 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_LOVELY, CRY_MODE_NORMAL
# 205 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 206 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 207 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_0, MSGBOX_YESNO
# 210 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_5
KirbysHouse_EventScript_ChooseLovely_4:
# 235 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_7
	return

KirbysHouse_EventScript_ChooseLovely_5:
# 212 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 213 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 214 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 215 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 216 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_LOVELY, 5
# 217 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseLovely_Text_1
# 218 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 219 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 220 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 221 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 222 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_2, MSGBOX_YESNO
# 224 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_10
KirbysHouse_EventScript_ChooseLovely_9:
# 230 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_12
	goto KirbysHouse_EventScript_ChooseLovely_4

KirbysHouse_EventScript_ChooseLovely_7:
# 237 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 238 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseLovely_10:
# 226 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 227 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 228 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseLovely_9

KirbysHouse_EventScript_ChooseLovely_12:
# 232 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseLovely_4


KirbysHouse_EventScript_ChooseBurningLeo::
# 250 "data/maps/KirbysHouse/scripts.pory"
	lock
# 251 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 252 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseBurningLeo_1
# 295 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 296 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseBurningLeo_1:
# 254 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 255 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_BURNING_LEO, 10, 3
# 256 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_BURNING_LEO, CRY_MODE_NORMAL
# 257 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 258 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 259 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_0, MSGBOX_YESNO
# 262 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_5
KirbysHouse_EventScript_ChooseBurningLeo_4:
# 287 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_7
	return

KirbysHouse_EventScript_ChooseBurningLeo_5:
# 264 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 265 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 266 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 267 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 268 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_BURNING_LEO, 5
# 269 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseBurningLeo_Text_1
# 270 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 271 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 272 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 273 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 274 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_2, MSGBOX_YESNO
# 276 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_10
KirbysHouse_EventScript_ChooseBurningLeo_9:
# 282 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_12
	goto KirbysHouse_EventScript_ChooseBurningLeo_4

KirbysHouse_EventScript_ChooseBurningLeo_7:
# 289 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 290 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseBurningLeo_10:
# 278 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 279 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 280 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseBurningLeo_9

KirbysHouse_EventScript_ChooseBurningLeo_12:
# 284 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseBurningLeo_4


KirbysHouse_EventScript_ChooseSquishy::
# 302 "data/maps/KirbysHouse/scripts.pory"
	lock
# 303 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 304 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseSquishy_1
# 347 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 348 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseSquishy_1:
# 306 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 307 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_SQUISHY, 10, 3
# 308 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_SQUISHY, CRY_MODE_NORMAL
# 309 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 310 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 311 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_0, MSGBOX_YESNO
# 314 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_5
KirbysHouse_EventScript_ChooseSquishy_4:
# 339 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_7
	return

KirbysHouse_EventScript_ChooseSquishy_5:
# 316 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 317 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 318 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 319 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 320 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_SQUISHY, 5
# 321 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseSquishy_Text_1
# 322 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 323 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 324 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 325 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 326 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_2, MSGBOX_YESNO
# 328 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_10
KirbysHouse_EventScript_ChooseSquishy_9:
# 334 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_12
	goto KirbysHouse_EventScript_ChooseSquishy_4

KirbysHouse_EventScript_ChooseSquishy_7:
# 341 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 342 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseSquishy_10:
# 330 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 331 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 332 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseSquishy_9

KirbysHouse_EventScript_ChooseSquishy_12:
# 336 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseSquishy_4


KirbysHouse_EventScript_DontEnterHouse::
# 360 "data/maps/KirbysHouse/scripts.pory"
	lock
# 361 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_DontEnterHouse_Text_0
# 363 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 364 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_TryToLeave_Movement_0
# 365 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 366 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_AfterChoosingStarter::
# 371 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_WISE_WADDLE_DEE, DIR_SOUTH
# 372 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 373 "data/maps/KirbysHouse/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 374 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_2
# 379 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_3
# 384 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_4
# 389 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_5
KirbysHouse_EventScript_AfterChoosingStarter_1:
# 394 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_0
# 396 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 397 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_4
# 398 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 399 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 400 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_1
# 401 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 402 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 403 "data/maps/KirbysHouse/scripts.pory"
	special SetUnlockedPokedexFlags
# 404 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_2
# 409 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_5
# 410 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 411 "data/maps/KirbysHouse/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 412 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_11
KirbysHouse_EventScript_AfterChoosingStarter_10:
# 416 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 417 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_6
# 418 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 419 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_4
# 432 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 433 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 434 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 435 "data/maps/KirbysHouse/scripts.pory"
	delay 15
# 436 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_5
# 440 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 441 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_7
# 442 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 443 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 444 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 445 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_6
# 447 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 448 "data/maps/KirbysHouse/scripts.pory"
	switch VAR_STARTER_MON
# 449 "data/maps/KirbysHouse/scripts.pory"
	case 0, KirbysHouse_EventScript_AfterChoosingStarter_15
# 451 "data/maps/KirbysHouse/scripts.pory"
	case 1, KirbysHouse_EventScript_AfterChoosingStarter_16
# 453 "data/maps/KirbysHouse/scripts.pory"
	case 2, KirbysHouse_EventScript_AfterChoosingStarter_17
KirbysHouse_EventScript_AfterChoosingStarter_13:
# 456 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 457 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_7
# 467 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 468 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_8
# 469 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 470 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 471 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_9
# 472 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_10
# 473 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 474 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_8
# 482 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 483 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5
# 484 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_11
# 485 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 486 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_WISE_WADDLE_DEE
# 487 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 488 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_HIDE_KIRBYS_HOUSE_INTRO_CHARACTERS
# 489 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 4
# 490 "data/maps/KirbysHouse/scripts.pory"
	special HealPlayerParty
# 491 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_AfterChoosingStarter_2:
# 376 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_0
# 377 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_3:
# 381 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_1
# 382 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_4:
# 386 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_2
# 387 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_5:
# 391 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_3
# 392 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_11:
# 414 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_3
	goto KirbysHouse_EventScript_AfterChoosingStarter_10

KirbysHouse_EventScript_AfterChoosingStarter_15:
# 450 "data/maps/KirbysHouse/scripts.pory"
	trainerbattle_earlyrival TRAINER_SAWYER_1, RIVAL_BATTLE_TUTORIAL, KirbysHouse_Text_WiseWaddleDeeDefeat, KirbysHouse_Text_WiseWaddleDeeVictory
	goto KirbysHouse_EventScript_AfterChoosingStarter_13

KirbysHouse_EventScript_AfterChoosingStarter_16:
# 452 "data/maps/KirbysHouse/scripts.pory"
	trainerbattle_earlyrival TRAINER_GRUNT_AQUA_HIDEOUT_1, RIVAL_BATTLE_TUTORIAL, KirbysHouse_Text_WiseWaddleDeeDefeat, KirbysHouse_Text_WiseWaddleDeeVictory
	goto KirbysHouse_EventScript_AfterChoosingStarter_13

KirbysHouse_EventScript_AfterChoosingStarter_17:
# 454 "data/maps/KirbysHouse/scripts.pory"
	trainerbattle_earlyrival TRAINER_GRUNT_AQUA_HIDEOUT_2, RIVAL_BATTLE_TUTORIAL, KirbysHouse_Text_WiseWaddleDeeDefeat, KirbysHouse_Text_WiseWaddleDeeVictory
	goto KirbysHouse_EventScript_AfterChoosingStarter_13


# 26 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_0:
# 27 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 27 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 28 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 29 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_right
	step_end

# 31 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_1:
# 32 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 33 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 33 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 33 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 33 "data/maps/KirbysHouse/scripts.pory"
	walk_right
	step_end

# 39 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_2:
# 40 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 40 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 40 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 40 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 40 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 40 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 40 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 41 "data/maps/KirbysHouse/scripts.pory"
	walk_right
	step_end

# 43 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_3:
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 44 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 45 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_left
	step_end

# 62 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_4:
# 62 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 62 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 62 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 62 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 62 "data/maps/KirbysHouse/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5:
# 67 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 95 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_6:
# 95 "data/maps/KirbysHouse/scripts.pory"
	jump_in_place_down
	step_end

# 191 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_TryToLeave_Movement_0:
# 191 "data/maps/KirbysHouse/scripts.pory"
	walk_down
	step_end

# 376 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_0:
# 376 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 376 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 381 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_1:
# 381 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 381 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 381 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 381 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 386 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_2:
# 386 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 386 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 386 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 386 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 386 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 386 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 391 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_3:
# 391 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 391 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 397 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_4:
# 397 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
# 397 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 397 "data/maps/KirbysHouse/scripts.pory"
	face_player
# 397 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 409 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_5:
# 409 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 417 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_6:
# 417 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 417 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 441 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_7:
# 441 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 441 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 468 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_8:
# 468 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 468 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 468 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 468 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 468 "data/maps/KirbysHouse/scripts.pory"
	walk_up
	step_end

# 471 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_9:
# 471 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_right
	step_end

# 472 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_10:
# 472 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_left
	step_end

# 484 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_11:
# 484 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 484 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 484 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 484 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 484 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 484 "data/maps/KirbysHouse/scripts.pory"
	walk_up
	step_end

KirbysHouse_EventScript_ExitHouseFirstTime_Text_0:
# 24 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Whoa! Check it out!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_1:
# 36 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}I thought you and Gooey were the only\n"
	.string "ones who lived here!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_2:
# 48 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}And even more up here…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_3:
# 51 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Is this what the Great King meant when\n"
	.string "he was talking about Helpers?\p"
	.string "{SPEAKER NAME_UNKNOWN}Indeed it is!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_4:
# 69 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Ah, you're…\p"
	.string "{SPEAKER NAME_UNKNOWN}Wise Waddle Dee, at your service. Per\n"
	.string "the Great King's request, I have been\l"
	.string "appointed to track and study Helpers.\p"
	.string "{SPEAKER NAME_WISE}As the leading expert on them, you may\n"
	.string "call me something of a professor.\p"
	.string "{SPEAKER NAME_BANDANA}A professor of Helpers, huh? Say,\n"
	.string "do you know where they came from?\p"
	.string "{SPEAKER NAME_WISE}Alas, I've no clue. I'm looking into it on\n"
	.string "my own time, but my knowledge pertains\l"
	.string "mainly to matters for the Royal Royale.\p"
	.string "Speaking of, surely the hero of Dream\n"
	.string "Land and his best friend plan to join?$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_5:
# 91 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Um… well, I guess it sounds fun, but…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_6:
# 96 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}The Great King's right-hand subject is\n"
	.string "hesitant? Why, color me surprised!\p"
	.string "If not for his sake, then surely the\n"
	.string "grand prize must appeal to you, no?$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_7:
# 104 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Well… I guess the Great King does seem\n"
	.string "pretty excited about this game of his…\p"
	.string "And this is probably the easiest way\n"
	.string "to get answers to all my questions…\p"
	.string "…and maybe taking part in this\n"
	.string "competition will make me stronger too…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_8:
# 115 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Okay, sure! I'll try Dedede's Royal\n"
	.string "Royal Royale!\p"
	.string "{SPEAKER NAME_WISE}A most excellent response! First, we\n"
	.string "must get you Helpers of your own.\p"
	.string "Luckily, it appears some rare specimens\n"
	.string "are situated here in Kirby's backyard!\p"
	.string "Go on and pick which one you'd like. Let\n"
	.string "me know after you make your choice.$"

KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0:
# 139 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}Choosing your first Helper is no trivial\n"
	.string "matter.\p"
	.string "I suggest observing them carefully\n"
	.string "before you make your decision.$"

KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_1:
# 148 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}Ah, you've returned! And accompanied\n"
	.string "by a Helper, no less!\p"
	.string "Now then, let's move on to the\n"
	.string "next subject.$"

KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0:
# 164 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}If you already know which one you want,\n"
	.string "go on ahead. I don't mind.\p"
	.string "I'm still thinking through my choice…$"

KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_1:
# 171 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Nice choice, pal! I just got mine. Let's\n"
	.string "see what Wise Waddle Dee has to say.$"

KirbysHouse_EventScript_TryToLeave_Text_0:
# 183 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}Hold on now! You can't simply leave\n"
	.string "without a Helper!$"

KirbysHouse_EventScript_TryToLeave_Text_1:
# 188 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}Kirby! Did you choose a Helper yet?$"

KirbysHouse_EventScript_ChooseLovely_Text_0:
# 207 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR GREEN}Lovely{COLOR DARK_GRAY}, the {COLOR GREEN}Grass-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Lovely?$"

KirbysHouse_EventScript_ChooseLovely_Text_1:
# 217 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Lovely!$"

KirbysHouse_EventScript_ChooseLovely_Text_2:
# 222 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Lovely?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_0:
# 259 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR RED}Burning Leo{COLOR DARK_GRAY}, the {COLOR RED}Fire-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Burning Leo?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_1:
# 269 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Burning Leo!$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_2:
# 274 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Burning Leo?$"

KirbysHouse_EventScript_ChooseSquishy_Text_0:
# 311 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR BLUE}Squishy{COLOR DARK_GRAY}, the {COLOR BLUE}Water-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Squishy?$"

KirbysHouse_EventScript_ChooseSquishy_Text_1:
# 321 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Squishy!$"

KirbysHouse_EventScript_ChooseSquishy_Text_2:
# 326 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Squishy?$"

KirbysHouse_EventScript_DontEnterHouse_Text_0:
# 361 "data/maps/KirbysHouse/scripts.pory"
	.string "You can't go home and nap now! There's\n"
	.string "still unfinished business to handle.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_0:
# 394 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}To chronicle any Helpers you encounter,\n"
	.string "I'll give you these.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_1:
# 400 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby received an {COLOR RED}Info Card Binder{COLOR DARK_GRAY}!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_2:
# 404 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}These info cards hold data on Helpers\n"
	.string "you find and recruit to your side.\p"
	.string "As for how to recruit Helpers, you'll\n"
	.string "want to use Helper Hearts!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_3:
# 414 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}…oh dear! Kirby, your sack is full?$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_4:
# 419 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}More Helper Hearts are always available\n"
	.string "to purchase at Rest Areas.\p"
	.string "They're invaluable places for stocking\n"
	.string "up on items and healing your Helpers.\p"
	.string "Speaking of, our last subject to cover\n"
	.string "is none other than Helper battles!\p"
	.string "Rather than lecturing, I think a proper\n"
	.string "demonstration ought to serve you well.\p"
	.string "How about one of you take me on?$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_5:
# 436 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Are you up for this, Kirby?\p"
	.string "I think I'd learn a lot from watching\n"
	.string "someone like you take this on.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_6:
# 445 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}Very well then.\n"
	.string "I shall be your first opponent!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_7:
# 457 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_WISE}I hope that was an insightful\n"
	.string "experience for you two.\p"
	.string "Now then, I do believe I should be\n"
	.string "returning to my lab in Waddle Dee Town.\p"
	.string "If you make any progress on your Info\n"
	.string "Cards, don't hesitate to drop on by!\p"
	.string "Enjoy Dedede's Royal Royale!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_8:
# 474 "data/maps/KirbysHouse/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}A tournament with Helpers to determine\n"
	.string "who could be Dream Land's next king...\p"
	.string "The Great King sure loves to make a big\n"
	.string "spectacle of whatever he does, huh?\p"
	.string "Speaking of, I should head back to town\n"
	.string "too. Let's see if he's still there!$"

KirbysHouse_Text_AlreadyChoseStarter::
# 352 "data/maps/KirbysHouse/scripts.pory"
	.string "You've already picked a Helper! Make\n"
	.string "sure to let Wise Waddle Dee know.$"

KirbysHouse_Text_WiseWaddleDeeDefeat::
# 494 "data/maps/KirbysHouse/scripts.pory"
	.string "It seems I still have much to learn!$"

KirbysHouse_Text_WiseWaddleDeeVictory::
# 499 "data/maps/KirbysHouse/scripts.pory"
	.string "So close! I can tell you're beginning\n"
	.string "to grasp the depth of Helper battles.$"
