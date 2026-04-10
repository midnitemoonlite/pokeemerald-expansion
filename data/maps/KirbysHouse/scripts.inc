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
# 121 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 122 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 123 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 124 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ExitHouseFirstTime_Text_8
# 138 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 139 "data/maps/KirbysHouse/scripts.pory"
	fadedefaultbgm
# 140 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 3
# 141 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToWiseWaddleDee::
# 147 "data/maps/KirbysHouse/scripts.pory"
	lock
# 148 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 149 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TalkToWiseWaddleDee_1
# 160 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_1
# 165 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 166 "data/maps/KirbysHouse/scripts.pory"
	goto KirbysHouse_EventScript_AfterChoosingStarter
	return

KirbysHouse_EventScript_TalkToWiseWaddleDee_1:
# 151 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0
# 156 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_TalkToBandanaWaddleDee::
# 172 "data/maps/KirbysHouse/scripts.pory"
	lock
# 173 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 174 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TalkToBandanaWaddleDee_2
# 184 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_1
KirbysHouse_EventScript_TalkToBandanaWaddleDee_1:
# 190 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_TalkToBandanaWaddleDee_2:
# 176 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0
	goto KirbysHouse_EventScript_TalkToBandanaWaddleDee_1


KirbysHouse_EventScript_TryToLeave::
# 195 "data/maps/KirbysHouse/scripts.pory"
	lockall
# 196 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_WISE_WADDLE_DEE, DIR_NORTH
# 197 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TryToLeave_2
# 202 "data/maps/KirbysHouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_TryToLeave_4
KirbysHouse_EventScript_TryToLeave_1:
# 207 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 208 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_TryToLeave_Movement_0
# 209 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 210 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_TryToLeave_2:
# 199 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TryToLeave_Text_0
	goto KirbysHouse_EventScript_TryToLeave_1

KirbysHouse_EventScript_TryToLeave_3:
# 204 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_TryToLeave_Text_1
	goto KirbysHouse_EventScript_TryToLeave_1

KirbysHouse_EventScript_TryToLeave_4:
# 202 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_KIRBYS_HOUSE_STATE, 3
	goto_if_eq KirbysHouse_EventScript_TryToLeave_3
	goto KirbysHouse_EventScript_TryToLeave_1


KirbysHouse_EventScript_ChooseLovely::
# 215 "data/maps/KirbysHouse/scripts.pory"
	lock
# 216 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 217 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 218 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseLovely_1
# 260 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 261 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseLovely_1:
# 220 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_LOVELY, 10, 3
# 221 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_LOVELY, CRY_MODE_NORMAL
# 222 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 223 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 224 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_0, MSGBOX_YESNO
# 227 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_5
KirbysHouse_EventScript_ChooseLovely_4:
# 252 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_7
	return

KirbysHouse_EventScript_ChooseLovely_5:
# 229 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 230 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 231 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 232 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 233 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_LOVELY, 5
# 234 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseLovely_Text_1
# 235 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 236 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 237 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 238 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 239 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseLovely_Text_2, MSGBOX_YESNO
# 241 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_10
KirbysHouse_EventScript_ChooseLovely_9:
# 247 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseLovely_12
	goto KirbysHouse_EventScript_ChooseLovely_4

KirbysHouse_EventScript_ChooseLovely_7:
# 254 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 255 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseLovely_10:
# 243 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 244 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 245 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseLovely_9

KirbysHouse_EventScript_ChooseLovely_12:
# 249 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseLovely_4


KirbysHouse_EventScript_ChooseBurningLeo::
# 267 "data/maps/KirbysHouse/scripts.pory"
	lock
# 268 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 269 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseBurningLeo_1
# 312 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 313 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseBurningLeo_1:
# 271 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 272 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_BURNING_LEO, 10, 3
# 273 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_BURNING_LEO, CRY_MODE_NORMAL
# 274 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 275 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 276 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_0, MSGBOX_YESNO
# 279 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_5
KirbysHouse_EventScript_ChooseBurningLeo_4:
# 304 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_7
	return

KirbysHouse_EventScript_ChooseBurningLeo_5:
# 281 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 282 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 283 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 284 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 285 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_BURNING_LEO, 5
# 286 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseBurningLeo_Text_1
# 287 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 288 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 289 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 290 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 291 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseBurningLeo_Text_2, MSGBOX_YESNO
# 293 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_10
KirbysHouse_EventScript_ChooseBurningLeo_9:
# 299 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseBurningLeo_12
	goto KirbysHouse_EventScript_ChooseBurningLeo_4

KirbysHouse_EventScript_ChooseBurningLeo_7:
# 306 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 307 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseBurningLeo_10:
# 295 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 296 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 297 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseBurningLeo_9

KirbysHouse_EventScript_ChooseBurningLeo_12:
# 301 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseBurningLeo_4


KirbysHouse_EventScript_ChooseSquishy::
# 319 "data/maps/KirbysHouse/scripts.pory"
	lock
# 320 "data/maps/KirbysHouse/scripts.pory"
	faceplayer
# 321 "data/maps/KirbysHouse/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, KirbysHouse_EventScript_ChooseSquishy_1
# 364 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_Text_AlreadyChoseStarter
# 365 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseSquishy_1:
# 323 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 324 "data/maps/KirbysHouse/scripts.pory"
	showmonpic SPECIES_SQUISHY, 10, 3
# 325 "data/maps/KirbysHouse/scripts.pory"
	playmoncry SPECIES_SQUISHY, CRY_MODE_NORMAL
# 326 "data/maps/KirbysHouse/scripts.pory"
	waitmoncry
# 327 "data/maps/KirbysHouse/scripts.pory"
	delay 35
# 328 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_0, MSGBOX_YESNO
# 331 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_5
KirbysHouse_EventScript_ChooseSquishy_4:
# 356 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_7
	return

KirbysHouse_EventScript_ChooseSquishy_5:
# 333 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 334 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_LOVELY
# 335 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BURNINGLEO
# 336 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_SQUISHY
# 337 "data/maps/KirbysHouse/scripts.pory"
	givemon SPECIES_SQUISHY, 5
# 338 "data/maps/KirbysHouse/scripts.pory"
	message KirbysHouse_EventScript_ChooseSquishy_Text_1
# 339 "data/maps/KirbysHouse/scripts.pory"
	waitmessage
# 340 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_EVOLVED
# 341 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 342 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 343 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_ChooseSquishy_Text_2, MSGBOX_YESNO
# 345 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_10
KirbysHouse_EventScript_ChooseSquishy_9:
# 351 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KirbysHouse_EventScript_ChooseSquishy_12
	goto KirbysHouse_EventScript_ChooseSquishy_4

KirbysHouse_EventScript_ChooseSquishy_7:
# 358 "data/maps/KirbysHouse/scripts.pory"
	hidemonpic
# 359 "data/maps/KirbysHouse/scripts.pory"
	release
	return

KirbysHouse_EventScript_ChooseSquishy_10:
# 347 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 348 "data/maps/KirbysHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 349 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseSquishy_9

KirbysHouse_EventScript_ChooseSquishy_12:
# 353 "data/maps/KirbysHouse/scripts.pory"
	release
	goto KirbysHouse_EventScript_ChooseSquishy_4


KirbysHouse_EventScript_DontEnterHouse::
# 377 "data/maps/KirbysHouse/scripts.pory"
	lock
# 378 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_DontEnterHouse_Text_0
# 380 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 381 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_TryToLeave_Movement_0
# 382 "data/maps/KirbysHouse/scripts.pory"
	waitmovement 0
# 383 "data/maps/KirbysHouse/scripts.pory"
	release
	return


KirbysHouse_EventScript_AfterChoosingStarter::
# 388 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_WISE_WADDLE_DEE, DIR_SOUTH
# 389 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 390 "data/maps/KirbysHouse/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 391 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_NORTH
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_2
# 396 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_3
# 401 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_4
# 406 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_5
KirbysHouse_EventScript_AfterChoosingStarter_1:
# 411 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_0
# 413 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 414 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_4
# 415 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 416 "data/maps/KirbysHouse/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 417 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_1
# 418 "data/maps/KirbysHouse/scripts.pory"
	waitfanfare
# 419 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 420 "data/maps/KirbysHouse/scripts.pory"
	special SetUnlockedPokedexFlags
# 421 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_2
# 427 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_5
# 428 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 429 "data/maps/KirbysHouse/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 430 "data/maps/KirbysHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KirbysHouse_EventScript_AfterChoosingStarter_11
KirbysHouse_EventScript_AfterChoosingStarter_10:
# 435 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 436 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_6
# 437 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 438 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_4
# 451 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 452 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 453 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_WEST
# 454 "data/maps/KirbysHouse/scripts.pory"
	delay 15
# 455 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_5
# 460 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 461 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_WISE_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_7
# 462 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 463 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 464 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 465 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_6
# 467 "data/maps/KirbysHouse/scripts.pory"
	closemessage
# 468 "data/maps/KirbysHouse/scripts.pory"
	switch VAR_STARTER_MON
# 469 "data/maps/KirbysHouse/scripts.pory"
	case 0, KirbysHouse_EventScript_AfterChoosingStarter_15
# 471 "data/maps/KirbysHouse/scripts.pory"
	case 1, KirbysHouse_EventScript_AfterChoosingStarter_16
# 473 "data/maps/KirbysHouse/scripts.pory"
	case 2, KirbysHouse_EventScript_AfterChoosingStarter_17
KirbysHouse_EventScript_AfterChoosingStarter_13:
# 476 "data/maps/KirbysHouse/scripts.pory"
	turnobject LOCALID_BANDANA_WADDLE_DEE, DIR_NORTH
# 477 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_7
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
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_ExitHouseFirstTime_Movement_5
# 502 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_BANDANA_WADDLE_DEE, KirbysHouse_EventScript_AfterChoosingStarter_Movement_11
# 503 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
# 504 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_WISE_WADDLE_DEE
# 505 "data/maps/KirbysHouse/scripts.pory"
	removeobject LOCALID_BANDANA_WADDLE_DEE
# 506 "data/maps/KirbysHouse/scripts.pory"
	setflag FLAG_HIDE_KIRBYS_HOUSE_INTRO_CHARACTERS
# 507 "data/maps/KirbysHouse/scripts.pory"
	setvar VAR_KIRBYS_HOUSE_STATE, 4
# 508 "data/maps/KirbysHouse/scripts.pory"
	releaseall
	return

KirbysHouse_EventScript_AfterChoosingStarter_2:
# 393 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_0
# 394 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_3:
# 398 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_1
# 399 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_4:
# 403 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_2
# 404 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_5:
# 408 "data/maps/KirbysHouse/scripts.pory"
	applymovement LOCALID_PLAYER, KirbysHouse_EventScript_AfterChoosingStarter_Movement_3
# 409 "data/maps/KirbysHouse/scripts.pory"
	waitmovement
	goto KirbysHouse_EventScript_AfterChoosingStarter_1

KirbysHouse_EventScript_AfterChoosingStarter_11:
# 432 "data/maps/KirbysHouse/scripts.pory"
	msgbox KirbysHouse_EventScript_AfterChoosingStarter_Text_3
	goto KirbysHouse_EventScript_AfterChoosingStarter_10

KirbysHouse_EventScript_AfterChoosingStarter_15:
# 470 "data/maps/KirbysHouse/scripts.pory"
	trainerbattle_earlyrival TRAINER_SAWYER_1, RIVAL_BATTLE_TUTORIAL, KirbysHouse_Text_WiseWaddleDeeDefeat, KirbysHouse_Text_WiseWaddleDeeVictory
	goto KirbysHouse_EventScript_AfterChoosingStarter_13

KirbysHouse_EventScript_AfterChoosingStarter_16:
# 472 "data/maps/KirbysHouse/scripts.pory"
	trainerbattle_earlyrival TRAINER_GRUNT_AQUA_HIDEOUT_1, RIVAL_BATTLE_TUTORIAL, KirbysHouse_Text_WiseWaddleDeeDefeat, KirbysHouse_Text_WiseWaddleDeeVictory
	goto KirbysHouse_EventScript_AfterChoosingStarter_13

KirbysHouse_EventScript_AfterChoosingStarter_17:
# 474 "data/maps/KirbysHouse/scripts.pory"
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

# 208 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_TryToLeave_Movement_0:
# 208 "data/maps/KirbysHouse/scripts.pory"
	walk_down
	step_end

# 393 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_0:
# 393 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 393 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 398 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_1:
# 398 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 398 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 398 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 398 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 403 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_2:
# 403 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 403 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 403 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 403 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 403 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 403 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 408 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_3:
# 408 "data/maps/KirbysHouse/scripts.pory"
	walk_down
# 408 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_up
	step_end

# 414 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_4:
# 414 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
# 414 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 414 "data/maps/KirbysHouse/scripts.pory"
	face_player
# 414 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 427 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_5:
# 427 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 436 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_6:
# 436 "data/maps/KirbysHouse/scripts.pory"
	walk_right
# 436 "data/maps/KirbysHouse/scripts.pory"
	walk_in_place_down
	step_end

# 461 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_7:
# 461 "data/maps/KirbysHouse/scripts.pory"
	walk_left
# 461 "data/maps/KirbysHouse/scripts.pory"
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

# 502 "data/maps/KirbysHouse/scripts.pory"
KirbysHouse_EventScript_AfterChoosingStarter_Movement_11:
# 502 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 502 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 502 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 502 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 502 "data/maps/KirbysHouse/scripts.pory"
	walk_up
# 502 "data/maps/KirbysHouse/scripts.pory"
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
	.string "suppose it must be a lot to take in.\p"
	.string "It is for me as well… that's why I'm\n"
	.string "trying to onboard new participants.$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_7:
# 112 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Well… I guess I\n"
	.string "also want to see how many Helpers there\l"
	.string "are, in case things get out of hand…\p"
	.string "And I suppose it's not fair for me to\n"
	.string "doubt the Great King's intentions…\p"
	.string "…and maybe taking part in this\n"
	.string "competition will make me stronger too…$"

KirbysHouse_EventScript_ExitHouseFirstTime_Text_8:
# 124 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Okay, sure! I'll\n"
	.string "try the Royal Royale out!\p"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} A most excellent\n"
	.string "response! Thank you kindly!\p"
	.string "First, we must get you two situated\n"
	.string "with some Helpers of your own.\p"
	.string "Luckily, it appears some rare specimens\n"
	.string "are situated here in Kirby's backyard!\p"
	.string "Go on and pick which one you'd like. Let\n"
	.string "me know after you make your choice.$"

KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_0:
# 151 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Choosing your first\n"
	.string "Helper is no trivial matter.\p"
	.string "I suggest observing them carefully\n"
	.string "before you make your decision.$"

KirbysHouse_EventScript_TalkToWiseWaddleDee_Text_1:
# 160 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Ah, you've returned! A\n"
	.string "most excellent choice, my friend!\p"
	.string "Now then, let's move on to the\n"
	.string "next lesson.$"

KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_0:
# 176 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} If you already\n"
	.string "know which one you want, go on ahead.\p"
	.string "I don't mind. I'm still thinking through\n"
	.string "who I want as my first partner…$"

KirbysHouse_EventScript_TalkToBandanaWaddleDee_Text_1:
# 184 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Nice choice, buddy!\n"
	.string "I just got my very own Helper too!\p"
	.string "Let's talk to Wise Waddle Dee to see\n"
	.string "what he has to say next.$"

KirbysHouse_EventScript_TryToLeave_Text_0:
# 199 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Hold on now! You can't\n"
	.string "simply leave without a Helper!$"

KirbysHouse_EventScript_TryToLeave_Text_1:
# 204 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Kirby! Did you\n"
	.string "choose a Helper yet?$"

KirbysHouse_EventScript_ChooseLovely_Text_0:
# 224 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR GREEN}Lovely{COLOR DARK_GRAY}, the {COLOR GREEN}Grass-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Lovely?$"

KirbysHouse_EventScript_ChooseLovely_Text_1:
# 234 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Lovely!$"

KirbysHouse_EventScript_ChooseLovely_Text_2:
# 239 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Lovely?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_0:
# 276 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR RED}Burning Leo{COLOR DARK_GRAY}, the {COLOR RED}Fire-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Burning Leo?$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_1:
# 286 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Burning Leo!$"

KirbysHouse_EventScript_ChooseBurningLeo_Text_2:
# 291 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Burning Leo?$"

KirbysHouse_EventScript_ChooseSquishy_Text_0:
# 328 "data/maps/KirbysHouse/scripts.pory"
	.string "It's {COLOR BLUE}Squishy{COLOR DARK_GRAY}, the {COLOR BLUE}Water-type{COLOR DARK_GRAY} Helper!\p"
	.string "Will you choose Squishy?$"

KirbysHouse_EventScript_ChooseSquishy_Text_1:
# 338 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby chose Squishy!$"

KirbysHouse_EventScript_ChooseSquishy_Text_2:
# 343 "data/maps/KirbysHouse/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Squishy?$"

KirbysHouse_EventScript_DontEnterHouse_Text_0:
# 378 "data/maps/KirbysHouse/scripts.pory"
	.string "You can't go home and nap now! There's\n"
	.string "still unfinished business to handle.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_0:
# 411 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} To chronicle Helpers\n"
	.string "you encounter, I'll loan you these.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_1:
# 417 "data/maps/KirbysHouse/scripts.pory"
	.string "Kirby received an {COLOR RED}Info Card Binder{COLOR DARK_GRAY}!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_2:
# 421 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} These info cards will\n"
	.string "hold data on any Helpers you encounter\l"
	.string "and recruit to your side.\p"
	.string "As for how to recruit Helpers, you'll\n"
	.string "want to use Helper Hearts!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_3:
# 432 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} …oh dear! Kirby,\n"
	.string "you've got a full sack already?$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_4:
# 438 "data/maps/KirbysHouse/scripts.pory"
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
# 455 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Are you up for\n"
	.string "this, Kirby?\p"
	.string "I think I'd learn a lot from watching\n"
	.string "someone like you.$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_6:
# 465 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} Very well then.\n"
	.string "I shall be your first opponent!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_7:
# 477 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}WISE WADDLE DEE:{COLOR DARK_GRAY} I hope that was an\n"
	.string "insightful experience.\p"
	.string "Now then, I do believe I should return\n"
	.string "to my lab in Waddle Dee Town.\p"
	.string "If you make any progress on your Info\n"
	.string "Cards, don't hesitate to drop on by!\p"
	.string "Enjoy the Royal Royale, you two!$"

KirbysHouse_EventScript_AfterChoosingStarter_Text_8:
# 493 "data/maps/KirbysHouse/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Calling this Royal\n"
	.string "Royale a game makes it sound simple…\p"
	.string "But I guess it's like the Great King to\n"
	.string "make a spectacle of whatever he does.\p"
	.string "For now, I'm heading back to town.\n"
	.string "You should come too!$"

KirbysHouse_Text_AlreadyChoseStarter::
# 369 "data/maps/KirbysHouse/scripts.pory"
	.string "You've already picked a Helper! Make\n"
	.string "sure to let Wise Waddle Dee know.$"

KirbysHouse_Text_WiseWaddleDeeDefeat::
# 511 "data/maps/KirbysHouse/scripts.pory"
	.string "It seems I still have much to learn!$"

KirbysHouse_Text_WiseWaddleDeeVictory::
# 516 "data/maps/KirbysHouse/scripts.pory"
	.string "So close! I can tell you're beginning\n"
	.string "to grasp the depth of Helper battles.$"
