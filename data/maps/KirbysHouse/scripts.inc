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
# 50 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 51 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 52 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_3
# 56 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 57 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 58 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 59 "data/maps/KirbysHouse/scripts.pory"
	playSE SE_PIN
# 60 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 61 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, Common_Movement_ExclamationMark
# 62 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 63 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_4
# 64 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 65 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_WISE_WADDLE_DEE, 11, 5
# 66 "data/maps/KirbysHouse/scripts.pory"
	setobjectxyperm LOCALID_BANDANA_WADDLE_DEE, 11, 6
# 67 "data/maps/KirbysHouse/scripts.pory"
	playbgm MUS_BIRCH_LAB, FALSE
# 68 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5
# 69 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_4
# 94 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 95 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 96 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 97 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 98 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_5
# 100 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 101 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 102 "data/maps/KirbysHouse/scripts.pory"
	playse SE_LEDGE
# 103 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_6
# 104 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_6
# 109 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 110 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_EAST
# 111 "data/maps/KirbysHouse/scripts.pory"
	delay 60
# 112 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_7
# 120 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 121 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 122 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 123 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_8
# 137 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 138 "data/maps/KirbysHouse/scripts.pory"
	fadedefaultbgm
# 139 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 3
# 140 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToWiseWaddleDee::
# 146 "data/maps/KirbysHouse/scripts.pory"
	lock
# 147 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 148 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TalkToWiseWaddleDee_1
# 159 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_1
# 164 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 165 "data/maps/KirbysHouse/scripts.pory"
	goto KirbysHouse_EventScript_AfterChoosingStarter
	return

KirbysHouse_EventScript_TalkToWiseWaddleDee_1:
# 150 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0
# 155 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToBandanaWaddleDee::
# 171 "data/maps/KirbysHouse/scripts.pory"
	lock
# 172 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 173 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TalkToBandanaWaddleDee_2
# 183 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_1
KirbysHouse_EventScript_TalkToBandanaWaddleDee_1:
# 189 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_TalkToBandanaWaddleDee_2:
# 175 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0
	goto KirbysHouse_EventScript_TalkToBandanaWaddleDee_1


KirbysHouse_EventScript_TryToLeave::
# 194 "data/maps/KirbysHouse/scripts.pory"
	lockall
# 195 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_WISE_WADDLE_DEE, DIR_NORTH
# 196 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TryToLeave_2
# 201 "data/maps/KirbysHouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TryToLeave_4
KirbysHouse_EventScript_TryToLeave_1:
# 206 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 207 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_TryToLeave_Movement_0
# 208 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 209 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_TryToLeave_2:
# 198 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TryToLeave_Text_0
	goto KirbysHouse_EventScript_TryToLeave_1

KirbysHouse_EventScript_TryToLeave_3:
# 203 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TryToLeave_Text_1
	goto KirbysHouse_EventScript_TryToLeave_1

KirbysHouse_EventScript_TryToLeave_4:
# 201 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_EventScript_TryToLeave_3
	goto KirbysHouse_EventScript_TryToLeave_1


KirbysHouse_EventScript_ChooseLovely::
# 214 "data/maps/KirbysHouse/scripts.pory"
	lock
# 215 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 216 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 217 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseLovely_1
# 259 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 260 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseLovely_1:
# 219 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_LOVELY, 10, 3
# 220 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_LOVELY, CRY_MODE_NORMAL
# 221 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 222 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 223 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_0, MSGBOX_YESNO
# 226 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_5
KirbysHouse_EventScript_ChooseLovely_4:
# 251 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_7
	return

KirbysHouse_EventScript_ChooseLovely_5:
# 228 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 229 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 230 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 231 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 232 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_LOVELY, 5
# 233 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseLovely_Text_1
# 234 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 235 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 236 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 237 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 238 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_2, MSGBOX_YESNO
# 240 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_10
KirbysHouse_EventScript_ChooseLovely_9:
# 246 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_12
	goto KirbysHouse_EventScript_ChooseLovely_4

KirbysHouse_EventScript_ChooseLovely_7:
# 253 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 254 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseLovely_10:
# 242 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 243 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 244 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseLovely_9

KirbysHouse_EventScript_ChooseLovely_12:
# 248 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseLovely_4


KirbysHouse_EventScript_ChooseBurningLeo::
# 266 "data/maps/KirbysHouse/scripts.pory"
	lock
# 267 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 268 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseBurningLeo_1
# 311 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 312 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseBurningLeo_1:
# 270 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 271 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_BURNING_LEO, 10, 3
# 272 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_BURNING_LEO, CRY_MODE_NORMAL
# 273 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 274 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 275 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_0, MSGBOX_YESNO
# 278 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_5
KirbysHouse_EventScript_ChooseBurningLeo_4:
# 303 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_7
	return

KirbysHouse_EventScript_ChooseBurningLeo_5:
# 280 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 281 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 282 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 283 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 284 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_BURNING_LEO, 5
# 285 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseBurningLeo_Text_1
# 286 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 287 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 288 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 289 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 290 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_2, MSGBOX_YESNO
# 292 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_10
KirbysHouse_EventScript_ChooseBurningLeo_9:
# 298 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_12
	goto KirbysHouse_EventScript_ChooseBurningLeo_4

KirbysHouse_EventScript_ChooseBurningLeo_7:
# 305 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 306 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseBurningLeo_10:
# 294 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 295 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 296 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseBurningLeo_9

KirbysHouse_EventScript_ChooseBurningLeo_12:
# 300 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseBurningLeo_4


KirbysHouse_EventScript_ChooseSquishy::
# 318 "data/maps/KirbysHouse/scripts.pory"
	lock
# 319 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 320 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseSquishy_1
# 363 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 364 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseSquishy_1:
# 322 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 323 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_SQUISHY, 10, 3
# 324 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_SQUISHY, CRY_MODE_NORMAL
# 325 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 326 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 327 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_0, MSGBOX_YESNO
# 330 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_5
KirbysHouse_EventScript_ChooseSquishy_4:
# 355 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_7
	return

KirbysHouse_EventScript_ChooseSquishy_5:
# 332 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 333 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 334 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 335 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 336 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_SQUISHY, 5
# 337 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseSquishy_Text_1
# 338 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 339 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 340 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 341 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 342 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_2, MSGBOX_YESNO
# 344 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_10
KirbysHouse_EventScript_ChooseSquishy_9:
# 350 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_12
	goto KirbysHouse_EventScript_ChooseSquishy_4

KirbysHouse_EventScript_ChooseSquishy_7:
# 357 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 358 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseSquishy_10:
# 346 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 347 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 348 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseSquishy_9

KirbysHouse_EventScript_ChooseSquishy_12:
# 352 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseSquishy_4


KirbysHouse_EventScript_DontEnterHouse::
# 376 "data/maps/KirbysHouse/scripts.pory"
	lock
# 377 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_DontEnterHouse_Text_0
# 379 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 380 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_TryToLeave_Movement_0
# 381 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 382 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_AfterChoosingStarter::
# 387 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_WISE_WADDLE_DEE, DIR_SOUTH
# 388 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 389 "data/maps/KirbysHouse/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 390 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_2
# 395 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_3
# 400 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_4
# 405 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_5
KirbysHouse_EventScript_AfterChoosingStarter_1:
# 410 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_0
# 412 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 413 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_4
# 414 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 415 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 416 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_1
# 417 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 418 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 419 "data/maps/KirbysHouse/scripts.pory"
	special SetUnlockedPokedexFlags
# 420 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_2
# 426 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_5
# 427 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 428 "data/maps/KirbysHouse/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 429 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_11
KirbysHouse_EventScript_AfterChoosingStarter_10:
# 434 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 435 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_6
# 436 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 437 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_4
# 450 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 451 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 452 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 453 "data/maps/KirbysHouse/scripts.pory"
	delay 15
# 454 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_5
# 459 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 460 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_7
# 461 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 462 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 463 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 464 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_6
# 466 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 467 "data/maps/KirbysHouse/scripts.pory"
	switch VAR_STARTER_MON
# 468 "data/maps/KirbysHouse/scripts.pory"
	case 0, KirbysHouse_EventScript_AfterChoosingStarter_15
# 470 "data/maps/KirbysHouse/scripts.pory"
	case 1, KirbysHouse_EventScript_AfterChoosingStarter_16
# 472 "data/maps/KirbysHouse/scripts.pory"
	case 2, KirbysHouse_EventScript_AfterChoosingStarter_17
KirbysHouse_EventScript_AfterChoosingStarter_13:
# 475 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 476 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_7
# 486 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 487 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_8
# 488 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 489 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 490 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_9
# 491 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_10
# 492 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 493 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_8
# 501 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 502 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5
# 503 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_11
# 504 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 505 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_WISE_WADDLE_DEE
# 506 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 507 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_HIDE_KIRBYS_HOUSE_INTRO_CHARACTERS
# 508 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 4
# 509 "data/maps/KirbysHouse/scripts.pory"
	special HealPlayerParty
# 510 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_AfterChoosingStarter_2:
# 392 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_0
# 393 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_3:
# 397 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_1
# 398 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_4:
# 402 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_2
# 403 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_5:
# 407 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_3
# 408 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_11:
# 431 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_3
	goto KirbysHouse_EventScript_AfterChoosingStarter_10

KirbysHouse_EventScript_AfterChoosingStarter_15:
# 469 "data/maps/KirbysHouse/scripts.pory"
	trainerbattle_earlyrival TRAINER_SAWYER_1, RIVAL_BATTLE_TUTORIAL, KirbysHouse_Text_WiseWaddleDeeDefeat, KirbysHouse_Text_WiseWaddleDeeVictory
	goto KirbysHouse_EventScript_AfterChoosingStarter_13

KirbysHouse_EventScript_AfterChoosingStarter_16:
# 471 "data/maps/KirbysHouse/scripts.pory"
	trainerbattle_earlyrival TRAINER_GRUNT_AQUA_HIDEOUT_1, RIVAL_BATTLE_TUTORIAL, KirbysHouse_Text_WiseWaddleDeeDefeat, KirbysHouse_Text_WiseWaddleDeeVictory
	goto KirbysHouse_EventScript_AfterChoosingStarter_13

KirbysHouse_EventScript_AfterChoosingStarter_17:
# 473 "data/maps/KirbysHouse/scripts.pory"
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

# 63 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_4:
# 63 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 63 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 63 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 63 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 63 "data/maps/KirbysHouse/scripts.pory"
	walk_down
	step_end

# 68 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5:
# 68 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 103 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_ExitHouseFirstTime_Movement_6:
# 103 "data/maps/KirbysHouse/scripts.pory"
	jump_in_place_down
	step_end

# 207 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_TryToLeave_Movement_0:
# 207 "data/maps/KirbysHouse/scripts.pory"
	walk_down
	step_end

# 392 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_0:
# 392 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 392 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 397 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_1:
# 397 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 397 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 397 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 397 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 402 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_2:
# 402 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 402 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 402 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 402 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 402 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 402 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 407 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_3:
# 407 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 407 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 413 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_4:
# 413 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
# 413 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 413 "data/maps/KirbysHouse/scripts.pory"
	face_player
# 413 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 426 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_5:
# 426 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 435 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_6:
# 435 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 435 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 460 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_7:
# 460 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 460 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 487 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_8:
# 487 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 487 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 487 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 487 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 487 "data/maps/KirbysHouse/scripts.pory"
	walk_up
	step_end

# 490 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_9:
# 490 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_right
	step_end

# 491 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_10:
# 491 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_left
	step_end

# 503 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_11:
# 503 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 503 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 503 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 503 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 503 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 503 "data/maps/KirbysHouse/scripts.pory"
	walk_up
	step_end

KirbysHouse_EventScript_ExitHouseFirstTime_Text_0:
# 24 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Whoa! Check it out!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_1:
# 36 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} I thought you and\n"
	.string "Gooey were the only ones who live here!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_2:
# 48 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} And even more\n"
	.string "up here…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_3:
# 52 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Are these some of\n"
	.string "those Helpers the king mentioned?\p"
	.string "{COLOR BLUE}???:{COLOR DARK_GRAY} Indeed they are!$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_4:
# 70 "data/maps/KirbysHouse/scripts.pory"
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
# 98 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Um… I guess\n"
	.string "it sounds kind of fun, but I dunno…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_6:
# 104 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Ah! My apologies. I\n"
	.string "understand it is a lot to take in.\p"
	.string "I merely assumed you would be enticed\n"
	.string "by the grand prize the king has set up.$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_7:
# 112 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Well… I guess the\n"
	.string "king seems pretty excited about it…\p"
	.string "And seeing all these Helpers does make\n"
	.string "me curious how many there are…\p"
	.string "…and maybe taking part in this\n"
	.string "competition will make me stronger too…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_8:
# 123 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Okay, sure! I'll\n"
	.string "try Dedede's Royal Royale out!\p"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} A most excellent\n"
	.string "response! Thank you kindly!\p"
	.string "First, we must get you two situated\n"
	.string "with some Helpers of your own.\p"
	.string "Luckily, it appears some rare specimens\n"
	.string "are situated here in Kirby's backyard!\p"
	.string "Go on and pick which one you'd like. Let\n"
	.string "me know after you make your choice.$"

KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0:
# 150 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Choosing your first\n"
	.string "Helper is no trivial matter.\p"
	.string "I suggest observing them carefully\n"
	.string "before you make your decision.$"

KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_1:
# 159 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Ah, you've returned!\n"
	.string "And accompanied by a Helper, no less!\p"
	.string "Now then, let's move on to the\n"
	.string "next subject.$"

KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0:
# 175 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} If you already\n"
	.string "know which one you want, go on ahead.\p"
	.string "I don't mind. I'm still thinking through\n"
	.string "who I want as my first partner…$"

KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_1:
# 183 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Nice choice, buddy!\n"
	.string "I just got my very own Helper too!\p"
	.string "Let's talk to Wise Waddle Dee to see\n"
	.string "what he has to say next.$"

KirbysHouse_EventScript_TryToLeave_Text_0:
# 198 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Hold on now! You can't\n"
	.string "simply leave without a Helper!$"

KirbysHouse_EventScript_TryToLeave_Text_1:
# 203 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Kirby! Did you\n"
	.string "choose a Helper yet?$"

KirbysHouse_EventScript_ChooseLovely_Text_0:
# 223 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR GREEN}Lovely{COLOR DARK_GRAY}, the {COLOR GREEN}Grass-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Lovely?$"

KirbysHouse_EventScript_ChooseLovely_Text_1:
# 233 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Lovely!$"

KirbysHouse_EventScript_ChooseLovely_Text_2:
# 238 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Lovely?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_0:
# 275 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR RED}Burning Leo{COLOR DARK_GRAY}, the {COLOR RED}Fire-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Burning Leo?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_1:
# 285 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Burning Leo!$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_2:
# 290 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Burning Leo?$"

KirbysHouse_EventScript_ChooseSquishy_Text_0:
# 327 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR BLUE}Squishy{COLOR DARK_GRAY}, the {COLOR BLUE}Water-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Squishy?$"

KirbysHouse_EventScript_ChooseSquishy_Text_1:
# 337 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Squishy!$"

KirbysHouse_EventScript_ChooseSquishy_Text_2:
# 342 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Squishy?$"

KirbysHouse_EventScript_DontEnterHouse_Text_0:
# 377 "data/maps/KirbysHouse/scripts.pory"
	.string "You can't go home and nap now! There's\n"
	.string "still unfinished business to handle.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_0:
# 410 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} To chronicle Helpers\n"
	.string "you find, I'll loan you these.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_1:
# 416 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby received an {COLOR RED}Info Card Binder{COLOR DARK_GRAY}!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_2:
# 420 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} These info cards will\n"
	.string "hold data on any Helpers you encounter\l"
	.string "and recruit to your side.\p"
	.string "As for how to recruit Helpers, you'll\n"
	.string "want to use Helper Hearts!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_3:
# 431 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} …oh dear! Kirby,\n"
	.string "you've got a full sack already?$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_4:
# 437 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} More Helper Hearts are\n"
	.string "always available to buy at Rest Areas.\p"
	.string "They're invaluable places for stocking\n"
	.string "up on items and healing your Helpers.\p"
	.string "Speaking of, our last subject to cover\n"
	.string "is none other than Helper battles!\p"
	.string "Rather than lecturing, I think a proper\n"
	.string "demonstration ought to serve you well.\p"
	.string "How about one of you take me on?$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_5:
# 454 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Are you up for\n"
	.string "this, Kirby?\p"
	.string "I think I'd learn a lot from watching\n"
	.string "someone like you take this on.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_6:
# 464 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Very well then.\n"
	.string "I shall be your first opponent!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_7:
# 476 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} I hope that was an\n"
	.string "insightful experience.\p"
	.string "Now then, I do believe I should return\n"
	.string "to my lab in Waddle Dee Town.\p"
	.string "If you make any progress on your Info\n"
	.string "Cards, don't hesitate to drop on by!\p"
	.string "Enjoy Dedede's Royal Royale, you two!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_8:
# 493 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Calling this Royal\n"
	.string "Royale a game makes it sound simple…\p"
	.string "But I guess it's like the Great King to\n"
	.string "make a spectacle of whatever he does.\p"
	.string "For now, I'm heading back to town.\n"
	.string "You should come too!$"

KirbysHouse_Text_AlreadyChoseStarter::
# 368 "data/maps/KirbysHouse/scripts.pory"
	.string "You've already picked a Helper! Make\n"
	.string "sure to let Wise Waddle Dee know.$"

KirbysHouse_Text_WiseWaddleDeeDefeat::
# 513 "data/maps/KirbysHouse/scripts.pory"
	.string "It seems I still have much to learn!$"

KirbysHouse_Text_WiseWaddleDeeVictory::
# 518 "data/maps/KirbysHouse/scripts.pory"
	.string "So close! I can tell you're beginning\n"
	.string "to grasp the depth of Helper battles.$"
