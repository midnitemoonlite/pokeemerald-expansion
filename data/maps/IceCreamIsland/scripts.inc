# 1 "data/maps/IceCreamIsland/scripts.pory"

# 2 "data/maps/IceCreamIsland/scripts.pory"
IceCreamIsland_MapScripts::
# 3 "data/maps/IceCreamIsland/scripts.pory"
	.byte 0

IceCreamIsland_EventScript_Sign::
# 8 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/IceCreamIsland/scripts.pory"
	closemessage
	return


IceCreamIsland_EventScript_Sunbather::
# 15 "data/maps/IceCreamIsland/scripts.pory"
	lock
# 16 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 17 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_Sunbather_Text_0
# 27 "data/maps/IceCreamIsland/scripts.pory"
	release
	return


IceCreamIsland_EventScript_BlueSqueakerChase::
# 32 "data/maps/IceCreamIsland/scripts.pory"
	lock
# 33 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 34 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerChase_Text_0
# 38 "data/maps/IceCreamIsland/scripts.pory"
	release
	return


IceCreamIsland_EventScript_RedSqueakerChase::
# 43 "data/maps/IceCreamIsland/scripts.pory"
	lock
# 44 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 45 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_RedSqueakerChase_Text_0
# 50 "data/maps/IceCreamIsland/scripts.pory"
	release
	return


IceCreamIsland_EventScript_BlueSqueakerWander::
# 55 "data/maps/IceCreamIsland/scripts.pory"
	lock
# 56 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 57 "data/maps/IceCreamIsland/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_DIG, IceCreamIsland_EventScript_BlueSqueakerWander_1
# 146 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_10
# 148 "data/maps/IceCreamIsland/scripts.pory"
	release
	return

IceCreamIsland_EventScript_BlueSqueakerWander_1:
# 59 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_0
# 69 "data/maps/IceCreamIsland/scripts.pory"
	checkitem ITEM_ITEMFINDER, 1
# 70 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne IceCreamIsland_EventScript_BlueSqueakerWander_4
	return

IceCreamIsland_EventScript_BlueSqueakerWander_4:
# 72 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_PIN
# 73 "data/maps/IceCreamIsland/scripts.pory"
	applymovement LOCALID_DOWSING_SQUEAKER, Common_Movement_ExclamationMark
# 74 "data/maps/IceCreamIsland/scripts.pory"
	waitmovement
# 75 "data/maps/IceCreamIsland/scripts.pory"
	waitse
# 76 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_1, MSGBOX_YESNO
# 81 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IceCreamIsland_EventScript_BlueSqueakerWander_6
# 138 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_11
# 139 "data/maps/IceCreamIsland/scripts.pory"
	release
	end

IceCreamIsland_EventScript_BlueSqueakerWander_6:
# 83 "data/maps/IceCreamIsland/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 84 "data/maps/IceCreamIsland/scripts.pory"
	message IceCreamIsland_EventScript_BlueSqueakerWander_Text_2
# 86 "data/maps/IceCreamIsland/scripts.pory"
	waitmessage
# 87 "data/maps/IceCreamIsland/scripts.pory"
	waitfanfare
# 88 "data/maps/IceCreamIsland/scripts.pory"
	applymovement LOCALID_DOWSING_SQUEAKER, IceCreamIsland_EventScript_BlueSqueakerWander_Movement_0
# 89 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_3
# 90 "data/maps/IceCreamIsland/scripts.pory"
	delay 16
# 91 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_ITEMFINDER
# 92 "data/maps/IceCreamIsland/scripts.pory"
	applymovement LOCALID_DOWSING_SQUEAKER, Common_Movement_ExclamationMark
# 93 "data/maps/IceCreamIsland/scripts.pory"
	waitse
# 94 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_ITEMFINDER
# 95 "data/maps/IceCreamIsland/scripts.pory"
	waitse
# 96 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_ITEMFINDER
# 97 "data/maps/IceCreamIsland/scripts.pory"
	waitse
# 98 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_ITEMFINDER
# 99 "data/maps/IceCreamIsland/scripts.pory"
	waitse
# 100 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_4
# 102 "data/maps/IceCreamIsland/scripts.pory"
	closemessage
# 103 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_EXIT
# 104 "data/maps/IceCreamIsland/scripts.pory"
	applymovement LOCALID_DOWSING_SQUEAKER, IceCreamIsland_EventScript_BlueSqueakerWander_Movement_1
# 105 "data/maps/IceCreamIsland/scripts.pory"
	waitmovement
# 106 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_LEDGE
# 107 "data/maps/IceCreamIsland/scripts.pory"
	applymovement LOCALID_DOWSING_SQUEAKER, IceCreamIsland_EventScript_BlueSqueakerWander_Movement_2
# 108 "data/maps/IceCreamIsland/scripts.pory"
	waitmovement
# 109 "data/maps/IceCreamIsland/scripts.pory"
	waitse
# 110 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_5
# 113 "data/maps/IceCreamIsland/scripts.pory"
	closemessage
# 114 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 115 "data/maps/IceCreamIsland/scripts.pory"
	delay 16
# 116 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_6
# 119 "data/maps/IceCreamIsland/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 120 "data/maps/IceCreamIsland/scripts.pory"
	message IceCreamIsland_EventScript_BlueSqueakerWander_Text_7
# 121 "data/maps/IceCreamIsland/scripts.pory"
	waitmessage
# 122 "data/maps/IceCreamIsland/scripts.pory"
	waitfanfare
# 123 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_8
# 125 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_9
# 128 "data/maps/IceCreamIsland/scripts.pory"
	giveitem ITEM_TM77
# 129 "data/maps/IceCreamIsland/scripts.pory"
	setflag FLAG_RECEIVED_TM_DIG
# 130 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_BlueSqueakerWander_Text_10
# 132 "data/maps/IceCreamIsland/scripts.pory"
	closemessage
# 133 "data/maps/IceCreamIsland/scripts.pory"
	release
	end


IceCreamIsland_EventScript_MrFloatyEncounter::
# 154 "data/maps/IceCreamIsland/scripts.pory"
	lock
# 155 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 156 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 2
	goto_if_eq IceCreamIsland_EventScript_MrFloatyEncounter_2
IceCreamIsland_EventScript_MrFloatyEncounter_1:
# 164 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 1
	goto_if_eq IceCreamIsland_EventScript_MrFloatyEncounter_5
IceCreamIsland_EventScript_MrFloatyEncounter_4:
# 183 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 0
	goto_if_eq IceCreamIsland_EventScript_MrFloatyEncounter_8
IceCreamIsland_EventScript_MrFloatyEncounter_7:
# 203 "data/maps/IceCreamIsland/scripts.pory"
	release
	return

IceCreamIsland_EventScript_MrFloatyEncounter_2:
# 158 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyEncounter_Text_0
	goto IceCreamIsland_EventScript_MrFloatyEncounter_1

IceCreamIsland_EventScript_MrFloatyEncounter_5:
# 166 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyEncounter_Text_1, MSGBOX_YESNO
# 173 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IceCreamIsland_EventScript_MrFloatyEncounter_11
IceCreamIsland_EventScript_MrFloatyEncounter_10:
# 177 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq IceCreamIsland_EventScript_MrFloatyEncounter_16
	goto IceCreamIsland_EventScript_MrFloatyEncounter_4

IceCreamIsland_EventScript_MrFloatyEncounter_8:
# 185 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyEncounter_Text_3, MSGBOX_YESNO
# 193 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IceCreamIsland_EventScript_MrFloatyEncounter_14
IceCreamIsland_EventScript_MrFloatyEncounter_13:
# 197 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq IceCreamIsland_EventScript_MrFloatyEncounter_18
	goto IceCreamIsland_EventScript_MrFloatyEncounter_7

IceCreamIsland_EventScript_MrFloatyEncounter_11:
# 175 "data/maps/IceCreamIsland/scripts.pory"
	goto IceCreamIsland_EventScript_SetUpEncounter
	goto IceCreamIsland_EventScript_MrFloatyEncounter_10

IceCreamIsland_EventScript_MrFloatyEncounter_14:
# 195 "data/maps/IceCreamIsland/scripts.pory"
	goto IceCreamIsland_EventScript_SetUpEncounter
	goto IceCreamIsland_EventScript_MrFloatyEncounter_13

IceCreamIsland_EventScript_MrFloatyEncounter_16:
# 179 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyEncounter_Text_2
	goto IceCreamIsland_EventScript_MrFloatyEncounter_4

IceCreamIsland_EventScript_MrFloatyEncounter_18:
# 199 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyEncounter_Text_4
	goto IceCreamIsland_EventScript_MrFloatyEncounter_7


IceCreamIsland_EventScript_SetUpEncounter::
# 208 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 0
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_2
# 215 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 1
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_3
IceCreamIsland_EventScript_SetUpEncounter_1:
# 220 "data/maps/IceCreamIsland/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 221 "data/maps/IceCreamIsland/scripts.pory"
	waitmoncry
# 222 "data/maps/IceCreamIsland/scripts.pory"
	playse SE_PIN
# 223 "data/maps/IceCreamIsland/scripts.pory"
	applymovement LOCALID_MR_FLOATY_DEE, Common_Movement_ExclamationMark
# 224 "data/maps/IceCreamIsland/scripts.pory"
	waitmovement
# 225 "data/maps/IceCreamIsland/scripts.pory"
	turnobject LOCALID_MR_FLOATY_DEE, DIR_EAST
# 226 "data/maps/IceCreamIsland/scripts.pory"
	delay 16
# 227 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 0
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_7
# 233 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 1
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_8
IceCreamIsland_EventScript_SetUpEncounter_6:
# 237 "data/maps/IceCreamIsland/scripts.pory"
	closemessage
# 238 "data/maps/IceCreamIsland/scripts.pory"
	setwildbattle SPECIES_MR_FLOATY, 20, ITEM_SAFETY_GOGGLES
# 239 "data/maps/IceCreamIsland/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_ENCOUNTER
# 240 "data/maps/IceCreamIsland/scripts.pory"
	waitmoncry
# 241 "data/maps/IceCreamIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 242 "data/maps/IceCreamIsland/scripts.pory"
	setvar VAR_0x8005, 0
# 243 "data/maps/IceCreamIsland/scripts.pory"
	setvar VAR_0x8006, 20
# 244 "data/maps/IceCreamIsland/scripts.pory"
	setvar VAR_0x8007, 4
# 245 "data/maps/IceCreamIsland/scripts.pory"
	special ShakeCamera
# 246 "data/maps/IceCreamIsland/scripts.pory"
	waitstate
# 247 "data/maps/IceCreamIsland/scripts.pory"
	dowildbattle
# 248 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_11
# 248 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_11
# 248 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_MON_FLED
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_11
# 248 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_MON_TELEPORTED
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_11
# 248 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_11
# 277 "data/maps/IceCreamIsland/scripts.pory"
	goto IceCreamIsland_EventScript_MrFloatyConclusion
	return

IceCreamIsland_EventScript_SetUpEncounter_2:
# 210 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_SetUpEncounter_Text_0
	goto IceCreamIsland_EventScript_SetUpEncounter_1

IceCreamIsland_EventScript_SetUpEncounter_3:
# 217 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_SetUpEncounter_Text_1
	goto IceCreamIsland_EventScript_SetUpEncounter_1

IceCreamIsland_EventScript_SetUpEncounter_7:
# 229 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_SetUpEncounter_Text_2
	goto IceCreamIsland_EventScript_SetUpEncounter_6

IceCreamIsland_EventScript_SetUpEncounter_8:
# 235 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_SetUpEncounter_Text_3
	goto IceCreamIsland_EventScript_SetUpEncounter_6

IceCreamIsland_EventScript_SetUpEncounter_11:
# 250 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 251 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 0
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_23
# 262 "data/maps/IceCreamIsland/scripts.pory"
	compare VAR_MR_FLOATY_QUEST, 1
	goto_if_eq IceCreamIsland_EventScript_SetUpEncounter_24
IceCreamIsland_EventScript_SetUpEncounter_22:
# 272 "data/maps/IceCreamIsland/scripts.pory"
	turnobject LOCALID_MR_FLOATY_DEE, DIR_SOUTH
# 273 "data/maps/IceCreamIsland/scripts.pory"
	release
	return

IceCreamIsland_EventScript_SetUpEncounter_23:
# 253 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_SetUpEncounter_Text_4
# 260 "data/maps/IceCreamIsland/scripts.pory"
	setvar VAR_MR_FLOATY_QUEST, 1
	goto IceCreamIsland_EventScript_SetUpEncounter_22

IceCreamIsland_EventScript_SetUpEncounter_24:
# 264 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_SetUpEncounter_Text_5
	goto IceCreamIsland_EventScript_SetUpEncounter_22


IceCreamIsland_EventScript_MrFloatyConclusion::
# 283 "data/maps/IceCreamIsland/scripts.pory"
	lock
# 284 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyConclusion_Text_0
# 285 "data/maps/IceCreamIsland/scripts.pory"
	faceplayer
# 286 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyConclusion_Text_1
# 291 "data/maps/IceCreamIsland/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 292 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_EventScript_MrFloatyConclusion_Text_2
# 295 "data/maps/IceCreamIsland/scripts.pory"
	setvar VAR_MR_FLOATY_QUEST, 2
# 296 "data/maps/IceCreamIsland/scripts.pory"
	release
	return


IceCreamIsland_EventScript_Trainer1::
# 301 "data/maps/IceCreamIsland/scripts.pory"
	trainerbattle_single TRAINER_DAISY, IceCreamIsland_Text_Trainer1Intro, IceCreamIsland_Text_Trainer1Defeated
# 302 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


IceCreamIsland_EventScript_Trainer2::
# 328 "data/maps/IceCreamIsland/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, IceCreamIsland_Text_Trainer2Intro, IceCreamIsland_Text_Trainer2Defeated
# 329 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


IceCreamIsland_EventScript_Trainer3::
# 351 "data/maps/IceCreamIsland/scripts.pory"
	trainerbattle_single TRAINER_FELIX, IceCreamIsland_Text_Trainer3Intro, IceCreamIsland_Text_Trainer3Defeated
# 352 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


IceCreamIsland_EventScript_Trainer4::
# 377 "data/maps/IceCreamIsland/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, IceCreamIsland_Text_Trainer4Intro, IceCreamIsland_Text_Trainer4Defeated
# 378 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


IceCreamIsland_EventScript_Trainer5::
# 401 "data/maps/IceCreamIsland/scripts.pory"
	trainerbattle_single TRAINER_ROSE_2, IceCreamIsland_Text_Trainer5Intro, IceCreamIsland_Text_Trainer5Defeated
# 402 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


IceCreamIsland_EventScript_Trainer6::
# 430 "data/maps/IceCreamIsland/scripts.pory"
	trainerbattle_single TRAINER_ROSE_3, IceCreamIsland_Text_Trainer6Intro, IceCreamIsland_Text_Trainer6Defeated
# 431 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_Text_Trainer6Post, MSGBOX_AUTOCLOSE
	return


IceCreamIsland_EventScript_Trainer7::
# 454 "data/maps/IceCreamIsland/scripts.pory"
	trainerbattle_single TRAINER_ROSE_4, IceCreamIsland_Text_Trainer7Intro, IceCreamIsland_Text_Trainer7Defeated
# 455 "data/maps/IceCreamIsland/scripts.pory"
	msgbox IceCreamIsland_Text_Trainer7Post, MSGBOX_AUTOCLOSE
	return


# 88 "data/maps/IceCreamIsland/scripts.pory"
IceCreamIsland_EventScript_BlueSqueakerWander_Movement_0:
# 88 "data/maps/IceCreamIsland/scripts.pory"
	face_down
	step_end

# 104 "data/maps/IceCreamIsland/scripts.pory"
IceCreamIsland_EventScript_BlueSqueakerWander_Movement_1:
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_right
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_up
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_left
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_down
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_right
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_up
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_left
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_down
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_right
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_up
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_left
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_down
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_right
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_up
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_left
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_4
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_down
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_8
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_right
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_8
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_up
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_8
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_left
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_8
# 104 "data/maps/IceCreamIsland/scripts.pory"
	face_down
# 104 "data/maps/IceCreamIsland/scripts.pory"
	delay_16
	step_end

# 107 "data/maps/IceCreamIsland/scripts.pory"
IceCreamIsland_EventScript_BlueSqueakerWander_Movement_2:
# 107 "data/maps/IceCreamIsland/scripts.pory"
	jump_in_place_down
	step_end

IceCreamIsland_EventScript_Sign_Text_0:
# 8 "data/maps/IceCreamIsland/scripts.pory"
	.string "ICE CREAM ISLAND\n"
	.string "A beach for making sweet memories.$"

IceCreamIsland_EventScript_Sunbather_Text_0:
# 17 "data/maps/IceCreamIsland/scripts.pory"
	.string "Ah… this is the life, isn't it?\p"
	.string "Clear skies, gentle waves, the works.\n"
	.string "Makes you wanna kick back, doesn't it?\p"
	.string "Go on, relax a little. Save your game.\n"
	.string "Maybe take a stretch break.\p"
	.string "Then, when you're done soaking it all in,\n"
	.string "your adventure will be even better!$"

IceCreamIsland_EventScript_BlueSqueakerChase_Text_0:
# 34 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak! Quit playing games with me!\p"
	.string "We're supposed to be looking for sunken\n"
	.string "treasure! Boss's orders!$"

IceCreamIsland_EventScript_RedSqueakerChase_Text_0:
# 45 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak! Don't act all serious! This\n"
	.string "weather's too good to not have fun!\p"
	.string "The other Squeakers are better at\n"
	.string "looking for treasure than us, anyways!$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_0:
# 59 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak! My boss says there's hidden\n"
	.string "treasure somewhere on the island.\p"
	.string "I thought it might be buried in the\n"
	.string "sand, so I dug and dug and dug…\l"
	.string "but I haven't found anything yet.\p"
	.string "Rats… I wish I had one of those fancy\n"
	.string "Dowsing Machines for finding treasure.\l"
	.string "It'd make my job so much easier!$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_1:
# 76 "data/maps/IceCreamIsland/scripts.pory"
	.string "Wait a squeaking second! Is that a\n"
	.string "Dowsing Machine? It's my lucky day!\p"
	.string "Ahem… may I, uh… borrowww… that\n"
	.string "Dowsing Machine of yours for a moment?$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_2:
# 84 "data/maps/IceCreamIsland/scripts.pory"
	.string "Kirby handed over the\n"
	.string "Dowsing Machine…?$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_3:
# 89 "data/maps/IceCreamIsland/scripts.pory"
	.string "Now, let's see here…$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_4:
# 100 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak squeak! Something's coming up!\n"
	.string "Hold on!!$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_5:
# 110 "data/maps/IceCreamIsland/scripts.pory"
	.string "Jackpot! It might not be the hidden\n"
	.string "treasure we were looking for originally…\l"
	.string "but there's some good stuff here!$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_6:
# 116 "data/maps/IceCreamIsland/scripts.pory"
	.string "Ahem… thank you for allowing me to\n"
	.string "borrow your Dowsing Machine, squeak.\l"
	.string "You can have it back now…$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_7:
# 120 "data/maps/IceCreamIsland/scripts.pory"
	.string "Reobtained the {COLOR BLUE}Dowsing Machine{COLOR DARK_GRAY}!$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_8:
# 123 "data/maps/IceCreamIsland/scripts.pory"
	.string "Kirby put away the Dowsing Machine\n"
	.string "in the KEY ITEMS POCKET.$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_9:
# 125 "data/maps/IceCreamIsland/scripts.pory"
	.string "And since I'm such a nice Squeaker, I'll\n"
	.string "share part of the spoils with you too.\l"
	.string "Let's see… here, you take this!$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_10:
# 130 "data/maps/IceCreamIsland/scripts.pory"
	.string "Now I've gotta report back to the boss!\n"
	.string "He'll be so proud of me! Squeak!$"

IceCreamIsland_EventScript_BlueSqueakerWander_Text_11:
# 138 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak… no fair…$"

IceCreamIsland_EventScript_MrFloatyEncounter_Text_0:
# 158 "data/maps/IceCreamIsland/scripts.pory"
	.string "I thought I knew everything I needed\n"
	.string "to have the perfect vacation…\p"
	.string "But now I know one more criteria:\n"
	.string "“no frightening water beasts”!$"

IceCreamIsland_EventScript_MrFloatyEncounter_Text_1:
# 166 "data/maps/IceCreamIsland/scripts.pory"
	.string "Oh, it's you again…\p"
	.string "I'll be honest, I haven't stopped\n"
	.string "worrying about that watery beast…\p"
	.string "But I haven't seen it since. Do\n"
	.string "you think it's still around?$"

IceCreamIsland_EventScript_MrFloatyEncounter_Text_2:
# 179 "data/maps/IceCreamIsland/scripts.pory"
	.string "That's what I want to hear, of course,\n"
	.string "but I can't help but wonder…$"

IceCreamIsland_EventScript_MrFloatyEncounter_Text_3:
# 185 "data/maps/IceCreamIsland/scripts.pory"
	.string "I've heard rumblings of a scary water\n"
	.string "beast rampaging around here…\p"
	.string "Personally, I wouldn't let something\n"
	.string "like that stop me from vacationing.\p"
	.string "You don't really believe a rumor like\n"
	.string "that either, do you?$"

IceCreamIsland_EventScript_MrFloatyEncounter_Text_4:
# 199 "data/maps/IceCreamIsland/scripts.pory"
	.string "Right! This beach is so serene, I can't\n"
	.string "imagine something like that being true.$"

IceCreamIsland_EventScript_SetUpEncounter_Text_0:
# 210 "data/maps/IceCreamIsland/scripts.pory"
	.string "You too, huh? W-well, I won't let it\n"
	.string "disturb my vacation!\p"
	.string "I can just lean back and relax…$"

IceCreamIsland_EventScript_SetUpEncounter_Text_1:
# 217 "data/maps/IceCreamIsland/scripts.pory"
	.string "Ugh… just thinking about that\n"
	.string "beast gives me the chills…$"

IceCreamIsland_EventScript_SetUpEncounter_Text_2:
# 229 "data/maps/IceCreamIsland/scripts.pory"
	.string "Huh? What was that noise just now?\p"
	.string "You don't think it could be…$"

IceCreamIsland_EventScript_SetUpEncounter_Text_3:
# 235 "data/maps/IceCreamIsland/scripts.pory"
	.string "No…! I recognize that roar!$"

IceCreamIsland_EventScript_SetUpEncounter_Text_4:
# 253 "data/maps/IceCreamIsland/scripts.pory"
	.string "It was real!? Oh no, oh no, oh no…\p"
	.string "I'm glad it's left us alone for now, but\n"
	.string "knowing it could come back…\p"
	.string "Nope! Not thinking about it! Vacations\n"
	.string "are meant for clearing your mind!!$"

IceCreamIsland_EventScript_SetUpEncounter_Text_5:
# 264 "data/maps/IceCreamIsland/scripts.pory"
	.string "W-what horrible timing!\p"
	.string "How am I supposed to relax knowing that\n"
	.string "wet beast could strike at any moment?\p"
	.string "Phew… calm down… just think, maybe\n"
	.string "THIS time it will leave you alone!$"

IceCreamIsland_EventScript_MrFloatyConclusion_Text_0:
# 284 "data/maps/IceCreamIsland/scripts.pory"
	.string "Gasp…$"

IceCreamIsland_EventScript_MrFloatyConclusion_Text_1:
# 286 "data/maps/IceCreamIsland/scripts.pory"
	.string "Man, I was lucky you were around to help\n"
	.string "put a stop to that beast. Thank you!\p"
	.string "Maybe this is a weird gift, but I\n"
	.string "noticed it dropped this.$"

IceCreamIsland_EventScript_MrFloatyConclusion_Text_2:
# 292 "data/maps/IceCreamIsland/scripts.pory"
	.string "With no more signs of rampaging Helpers,\n"
	.string "I can get back to the important thing:\l"
	.string "enjoying my beachside vacation!$"

IceCreamIsland_Text_Trainer1Intro::
# 305 "data/maps/IceCreamIsland/scripts.pory"
	.string "Behold my parasol power!$"

IceCreamIsland_Text_Trainer1Defeated::
# 310 "data/maps/IceCreamIsland/scripts.pory"
	.string "A parasol is a good place to hide\n"
	.string "your face after a loss…$"

IceCreamIsland_Text_Trainer1Post::
# 316 "data/maps/IceCreamIsland/scripts.pory"
	.string "The other day, I went to pick up my\n"
	.string "parasol after losing it, only to find\l"
	.string "I accidentally picked up Drifter!\p"
	.string "Ever since then, we've been working\n"
	.string "together, Drifter and I.$"

IceCreamIsland_Text_Trainer2Intro::
# 332 "data/maps/IceCreamIsland/scripts.pory"
	.string "Huh? A Helper battle?\n"
	.string "Well, I guess nothing's biting…$"

IceCreamIsland_Text_Trainer2Defeated::
# 338 "data/maps/IceCreamIsland/scripts.pory"
	.string "Any catch yet? Looks like a no…$"

IceCreamIsland_Text_Trainer2Post::
# 343 "data/maps/IceCreamIsland/scripts.pory"
	.string "Nothing's biting, but that's okay.\n"
	.string "Sitting by the waves is nice too.$"

IceCreamIsland_Text_Trainer3Intro::
# 355 "data/maps/IceCreamIsland/scripts.pory"
	.string "Intruder detected!\n"
	.string "This spot is mine!$"

IceCreamIsland_Text_Trainer3Defeated::
# 361 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak! You're strong!$"

IceCreamIsland_Text_Trainer3Post::
# 366 "data/maps/IceCreamIsland/scripts.pory"
	.string "Hmm… well, you don't seem like a bad guy,\n"
	.string "so I'll let you pass.\p"
	.string "But if you do anything suspicious, I'm\n"
	.string "reporting you to the boss!$"

IceCreamIsland_Text_Trainer4Intro::
# 381 "data/maps/IceCreamIsland/scripts.pory"
	.string "I knew hiding under the big umbrellas\n"
	.string "was a smart tactic!$"

IceCreamIsland_Text_Trainer4Defeated::
# 387 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak! My surprise attack backfired!?$"

IceCreamIsland_Text_Trainer4Post::
# 392 "data/maps/IceCreamIsland/scripts.pory"
	.string "Maybe I should give up on looking for\n"
	.string "treasure… on a hot day like this, I'd\l"
	.string "rather just sit in the shade!$"

IceCreamIsland_Text_Trainer5Intro::
# 405 "data/maps/IceCreamIsland/scripts.pory"
	.string "Huh, you look familiar.\n"
	.string "Have we met before?\p"
	.string "Well, that's not important right now.\n"
	.string "Battles first, questions later!$"

IceCreamIsland_Text_Trainer5Defeated::
# 414 "data/maps/IceCreamIsland/scripts.pory"
	.string "Squeak! I lost…$"

IceCreamIsland_Text_Trainer5Post::
# 419 "data/maps/IceCreamIsland/scripts.pory"
	.string "I swear I've seen you before, but\n"
	.string "I just can't place it!\p"
	.string "Did we steal something from you in the\n"
	.string "past, perhaps?$"

IceCreamIsland_Text_Trainer6Intro::
# 434 "data/maps/IceCreamIsland/scripts.pory"
	.string "I know it's a nice day at the beach,\n"
	.string "but you can't let your guard down!$"

IceCreamIsland_Text_Trainer6Defeated::
# 440 "data/maps/IceCreamIsland/scripts.pory"
	.string "Whew! That battle was blistering hot!$"

IceCreamIsland_Text_Trainer6Post::
# 445 "data/maps/IceCreamIsland/scripts.pory"
	.string "I wouldn't be shocked to see you score\n"
	.string "a brooch at the Resort Arena.\l"
	.string "Your Helpers are something else!$"

IceCreamIsland_Text_Trainer7Intro::
# 458 "data/maps/IceCreamIsland/scripts.pory"
	.string "I heard those Squeakers talking about\n"
	.string "hidden treasure somewhere out here!\l"
	.string "I won't let you beat me to it!$"

IceCreamIsland_Text_Trainer7Defeated::
# 465 "data/maps/IceCreamIsland/scripts.pory"
	.string "Aww… I really wanted to find treasure!$"

IceCreamIsland_Text_Trainer7Post::
# 470 "data/maps/IceCreamIsland/scripts.pory"
	.string "How do you think treasure ends up\n"
	.string "buried in places like this, anyways?\p"
	.string "Maybe a legendary pirate hid it, hoping\n"
	.string "their name would go down in history!$"
