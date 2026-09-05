# 1 "data/maps/WaddleDeeTown_Lab/scripts.pory"

# 2 "data/maps/WaddleDeeTown_Lab/scripts.pory"
WaddleDeeTown_Lab_MapScripts::
# 3 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.byte 0

WaddleDeeTown_Lab_EventScript_LeftReceptionist::
# 8 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 9 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 10 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_LeftReceptionist_Text_0
# 13 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_RightReceptionist::
# 18 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 19 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 20 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_RightReceptionist_Text_0
# 26 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_Chef::
# 31 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 32 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 33 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_Chef_Text_0
# 38 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_Youngster::
# 43 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 44 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 45 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_Youngster_Text_0
# 47 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_Gentleman::
# 52 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 53 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 54 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_Gentleman_Text_0
# 57 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_LeftAstronomer::
# 62 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 63 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 64 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_LeftAstronomer_Text_0
# 72 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_WaddleDee::
# 77 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 78 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 79 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WaddleDee_Text_0
# 84 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_RightAstronomer::
# 89 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 90 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 91 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_RightAstronomer_Text_0, MSGBOX_YESNO
# 97 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeTown_Lab_EventScript_RightAstronomer_2
# 134 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_Lab_EventScript_RightAstronomer_3
WaddleDeeTown_Lab_EventScript_RightAstronomer_1:
# 138 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_PC_DEE, DIR_NORTH
# 139 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return

WaddleDeeTown_Lab_EventScript_RightAstronomer_2:
# 99 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_RightAstronomer_Text_1
# 132 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
	goto WaddleDeeTown_Lab_EventScript_RightAstronomer_1

WaddleDeeTown_Lab_EventScript_RightAstronomer_3:
# 136 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_RightAstronomer_Text_2
	goto WaddleDeeTown_Lab_EventScript_RightAstronomer_1


WaddleDeeTown_Lab_EventScript_BWD::
# 144 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 145 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 146 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_BWD_Text_0
# 159 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_WiseWaddleDee::
# 164 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_eq VAR_WADDLE_DEE_TOWN_STATE, 3, WaddleDeeTown_Lab_EventScript_WiseGateCheck
# 165 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_eq VAR_WADDLE_DEE_TOWN_STATE, 4, WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry
# 166 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_ge VAR_WADDLE_DEE_TOWN_STATE, 5, WaddleDeeTown_Lab_EventScript_InfoCardRating
	return


WaddleDeeTown_Lab_EventScript_WiseGateCheck::
# 171 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lockall
# 172 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 173 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq WaddleDeeTown_Lab_EventScript_WiseGateCheck_2
# 178 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq WaddleDeeTown_Lab_EventScript_WiseGateCheck_3
WaddleDeeTown_Lab_EventScript_WiseGateCheck_1:
# 183 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	waitmovement
# 184 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	delay 15
# 185 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 4
# 186 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_LAB_WISE, WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_2
# 187 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	waitmovement
# 188 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WiseGateCheck_Text_0
# 220 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 221 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 6
	goto_if_ge WaddleDeeTown_Lab_EventScript_WiseGateCheck_6
# 225 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 6
	goto_if_lt WaddleDeeTown_Lab_EventScript_WiseGateCheck_7
	return

WaddleDeeTown_Lab_EventScript_WiseGateCheck_2:
# 175 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_BWD, DIR_NORTH
# 176 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_0
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheck_1

WaddleDeeTown_Lab_EventScript_WiseGateCheck_3:
# 180 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_BWD, DIR_NORTH
# 181 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_1
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheck_1

WaddleDeeTown_Lab_EventScript_WiseGateCheck_6:
# 223 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess
	return

WaddleDeeTown_Lab_EventScript_WiseGateCheck_7:
# 227 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheckFailure
	return


WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess::
# 273 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_0
# 277 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedExpShare, ITEM_EXP_SHARE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 278 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_TM02
# 279 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_STARDUST
# 280 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 281 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_BINDER_GATE_01
# 282 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_1
# 295 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	closemessage
# 296 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_LAB_WISE, WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Movement_0
# 297 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	waitmovement
# 298 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_2
# 329 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	closemessage
# 330 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 331 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_BWD, DIR_WEST
# 332 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	delay 30
# 333 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_3
# 344 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	closemessage
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_LAB_BWD, WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Movement_1
# 346 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	waitmovement
# 347 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	removeobject LOCALID_LAB_BWD
# 348 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 5
# 349 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_EAST_GATE, 1
	return


WaddleDeeTown_Lab_EventScript_WiseGateCheckFailure::
# 354 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WiseGateCheckFailure_Text_0
# 363 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry::
# 368 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lockall
# 369 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 370 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_2
# 375 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_3
WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_1:
# 380 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	waitmovement
# 381 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	delay 15
# 382 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_LAB_WISE, WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_2
# 383 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	waitmovement
# 384 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_Text_0
# 386 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 387 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 6
	goto_if_ge WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_6
# 391 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 6
	goto_if_lt WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_7
	return

WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_2:
# 372 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_BWD, DIR_NORTH
# 373 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_0
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_1

WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_3:
# 377 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_BWD, DIR_NORTH
# 378 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_1
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_1

WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_6:
# 389 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess
	return

WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_7:
# 393 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto WaddleDeeTown_Lab_EventScript_WiseGateCheckFailure
	return


WaddleDeeTown_Lab_EventScript_InfoCardRating::
# 399 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	lock
# 400 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	faceplayer
# 401 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_InfoCardRating_Text_0, MSGBOX_YESNO
# 403 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeTown_Lab_EventScript_InfoCardRating_2
# 447 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_InfoCardRating_Text_2
WaddleDeeTown_Lab_EventScript_InfoCardRating_1:
# 450 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return

WaddleDeeTown_Lab_EventScript_InfoCardRating_2:
# 405 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 406 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_EventScript_InfoCardRating_Text_1
# 408 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_ge WaddleDeeTown_Lab_EventScript_InfoCardRating_7
WaddleDeeTown_Lab_EventScript_InfoCardRating_5:
# 412 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge WaddleDeeTown_Lab_EventScript_InfoCardRating_12
WaddleDeeTown_Lab_EventScript_InfoCardRating_10:
# 416 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 50
	goto_if_ge WaddleDeeTown_Lab_EventScript_InfoCardRating_17
WaddleDeeTown_Lab_EventScript_InfoCardRating_15:
# 420 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 75
	goto_if_ge WaddleDeeTown_Lab_EventScript_InfoCardRating_22
WaddleDeeTown_Lab_EventScript_InfoCardRating_20:
# 424 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 100
	goto_if_ge WaddleDeeTown_Lab_EventScript_InfoCardRating_27
WaddleDeeTown_Lab_EventScript_InfoCardRating_25:
# 428 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 150
	goto_if_ge WaddleDeeTown_Lab_EventScript_InfoCardRating_32
WaddleDeeTown_Lab_EventScript_InfoCardRating_30:
# 432 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 25, WaddleDeeTown_Lab_WiseAdvice01
# 433 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 50, WaddleDeeTown_Lab_WiseAdvice02
# 434 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 75, WaddleDeeTown_Lab_WiseAdvice03
# 435 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 100, WaddleDeeTown_Lab_WiseAdvice04
# 436 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 125, WaddleDeeTown_Lab_WiseAdvice05
# 437 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 150, WaddleDeeTown_Lab_WiseAdvice06
# 438 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 175, WaddleDeeTown_Lab_WiseAdvice07
# 439 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 200, WaddleDeeTown_Lab_WiseAdvice08
# 440 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 225, WaddleDeeTown_Lab_WiseAdvice09
# 441 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 250, WaddleDeeTown_Lab_WiseAdvice10
# 442 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 275, WaddleDeeTown_Lab_WiseAdvice11
# 443 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_le VAR_0x8009, 299, WaddleDeeTown_Lab_WiseAdvice11
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_1

WaddleDeeTown_Lab_EventScript_InfoCardRating_6:
# 410 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck2
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_5

WaddleDeeTown_Lab_EventScript_InfoCardRating_7:
# 408 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_02, WaddleDeeTown_Lab_EventScript_InfoCardRating_6
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_5

WaddleDeeTown_Lab_EventScript_InfoCardRating_11:
# 414 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck3
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_10

WaddleDeeTown_Lab_EventScript_InfoCardRating_12:
# 412 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_03, WaddleDeeTown_Lab_EventScript_InfoCardRating_11
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_10

WaddleDeeTown_Lab_EventScript_InfoCardRating_16:
# 418 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck4
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_15

WaddleDeeTown_Lab_EventScript_InfoCardRating_17:
# 416 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_04, WaddleDeeTown_Lab_EventScript_InfoCardRating_16
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_15

WaddleDeeTown_Lab_EventScript_InfoCardRating_21:
# 422 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck5
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_20

WaddleDeeTown_Lab_EventScript_InfoCardRating_22:
# 420 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_05, WaddleDeeTown_Lab_EventScript_InfoCardRating_21
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_20

WaddleDeeTown_Lab_EventScript_InfoCardRating_26:
# 426 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck6
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_25

WaddleDeeTown_Lab_EventScript_InfoCardRating_27:
# 424 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_06, WaddleDeeTown_Lab_EventScript_InfoCardRating_26
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_25

WaddleDeeTown_Lab_EventScript_InfoCardRating_31:
# 430 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck7
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_30

WaddleDeeTown_Lab_EventScript_InfoCardRating_32:
# 428 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_07, WaddleDeeTown_Lab_EventScript_InfoCardRating_31
	goto WaddleDeeTown_Lab_EventScript_InfoCardRating_30


WaddleDeeTown_Lab_WiseAdvice01::
# 455 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice01_Text_0
# 460 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice02::
# 465 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice02_Text_0
# 471 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice03::
# 476 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice03_Text_0
# 481 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice04::
# 486 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice04_Text_0
# 494 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice05::
# 499 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice05_Text_0
# 507 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice06::
# 512 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice06_Text_0
# 521 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice07::
# 526 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice07_Text_0
# 531 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice08::
# 536 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice08_Text_0
# 545 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice09::
# 550 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice09_Text_0
# 558 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice10::
# 563 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice10_Text_0
# 575 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice11::
# 580 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice11_Text_0
# 590 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_WiseAdvice12::
# 595 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_WiseAdvice12_Text_0
# 603 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	release
	return


WaddleDeeTown_Lab_BinderCheck2::
# 608 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck2_Text_0
# 613 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedHelperBoxLink, ITEM_POKEMON_BOX_LINK, 1, MUS_RG_OBTAIN_KEY_ITEM
# 614 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_TM09
# 615 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 616 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_DIVE_BALL, 10
# 617 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck2_Text_1
# 626 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_BINDER_GATE_02
# 627 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge WaddleDeeTown_Lab_BinderCheck2_2
	return

WaddleDeeTown_Lab_BinderCheck2_1:
# 629 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck3
	return

WaddleDeeTown_Lab_BinderCheck2_2:
# 627 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_03, WaddleDeeTown_Lab_BinderCheck2_1
	return


WaddleDeeTown_Lab_BinderCheck3::
# 635 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck3_Text_0
# 640 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedDowsingMachine, ITEM_DOWSING_MACHINE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 641 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_TM12
# 642 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_NUGGET
# 643 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_GREAT_BALL, 10
# 644 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck3_Text_1
# 653 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_BINDER_GATE_03
# 654 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 50
	goto_if_ge WaddleDeeTown_Lab_BinderCheck3_2
	return

WaddleDeeTown_Lab_BinderCheck3_1:
# 656 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck4
	return

WaddleDeeTown_Lab_BinderCheck3_2:
# 654 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_04, WaddleDeeTown_Lab_BinderCheck3_1
	return


WaddleDeeTown_Lab_BinderCheck4::
# 662 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck4_Text_0
# 667 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedOvalCharm, ITEM_OVAL_CHARM, 1, MUS_RG_OBTAIN_KEY_ITEM
# 668 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_TM01
# 669 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_STAR_PIECE
# 670 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_QUICK_BALL, 10
# 671 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck4_Text_1
# 683 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_BINDER_GATE_04
# 684 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 75
	goto_if_ge WaddleDeeTown_Lab_BinderCheck4_2
	return

WaddleDeeTown_Lab_BinderCheck4_1:
# 686 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck5
	return

WaddleDeeTown_Lab_BinderCheck4_2:
# 684 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_05, WaddleDeeTown_Lab_BinderCheck4_1
	return


WaddleDeeTown_Lab_BinderCheck5::
# 692 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck5_Text_0
# 697 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedCatchingCharm, ITEM_CATCHING_CHARM, 1, MUS_RG_OBTAIN_KEY_ITEM
# 698 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_TM34
# 699 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_PEARL_STRING
# 700 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 10
# 701 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck5_Text_1
# 713 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_BINDER_GATE_05
# 714 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 100
	goto_if_ge WaddleDeeTown_Lab_BinderCheck5_2
	return

WaddleDeeTown_Lab_BinderCheck5_1:
# 716 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck6
	return

WaddleDeeTown_Lab_BinderCheck5_2:
# 714 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_06, WaddleDeeTown_Lab_BinderCheck5_1
	return


WaddleDeeTown_Lab_BinderCheck6::
# 722 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck6_Text_0
# 727 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedMachBike, ITEM_MACH_BIKE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 728 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_TM10
# 729 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_COMET_SHARD
# 730 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_DUSK_BALL, 10
# 731 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck6_Text_1
# 744 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_BINDER_GATE_06
# 745 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	compare VAR_0x8009, 150
	goto_if_ge WaddleDeeTown_Lab_BinderCheck6_2
	return

WaddleDeeTown_Lab_BinderCheck6_1:
# 747 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	call WaddleDeeTown_Lab_BinderCheck7
	return

WaddleDeeTown_Lab_BinderCheck6_2:
# 745 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto_if_unset FLAG_BINDER_GATE_07, WaddleDeeTown_Lab_BinderCheck6_1
	return


WaddleDeeTown_Lab_BinderCheck7::
# 753 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck7_Text_0
# 758 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedExpCharm, ITEM_EXP_CHARM, 1, MUS_RG_OBTAIN_KEY_ITEM
# 759 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_TM06
# 760 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_BIG_NUGGET
# 761 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 762 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	msgbox WaddleDeeTown_Lab_BinderCheck7_Text_1
# 778 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setflag FLAG_BINDER_GATE_07
	return


WaddleDeeTown_Lab_EvaluateCards::
# 783 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	setvar VAR_0x8004, 0
# 784 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 785 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 786 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 787 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 788 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
	return


WaddleDeeTown_Lab_EventScript_TurnLeft::
# 793 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_RECEPTIONIST_LEFT, DIR_EAST
# 794 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto WaddleDeeTown_Lab_EventScript_LeftReceptionist
	return


WaddleDeeTown_Lab_EventScript_TurnRight::
# 799 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	turnobject LOCALID_LAB_RECEPTIONIST_RIGHT, DIR_WEST
# 800 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	goto WaddleDeeTown_Lab_EventScript_RightReceptionist
	return


# 176 "data/maps/WaddleDeeTown_Lab/scripts.pory"
WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_0:
# 176 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 176 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 181 "data/maps/WaddleDeeTown_Lab/scripts.pory"
WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_1:
# 181 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 181 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_left
# 181 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 181 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_in_place_up
	step_end

# 186 "data/maps/WaddleDeeTown_Lab/scripts.pory"
WaddleDeeTown_Lab_EventScript_WiseGateCheck_Movement_2:
# 186 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 296 "data/maps/WaddleDeeTown_Lab/scripts.pory"
WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Movement_0:
# 296 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_in_place_down
# 296 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_in_place_down
	step_end

# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Movement_1:
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_right
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_right
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_right
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_right
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_right
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
# 345 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	walk_down
	step_end

WaddleDeeTown_Lab_EventScript_LeftReceptionist_Text_0:
# 10 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Welcome to the Waddle Dee Library. \n"
	.string "If you're looking for Wise Waddle Dee,\l"
	.string "his lab is located in the back.$"

WaddleDeeTown_Lab_EventScript_RightReceptionist_Text_0:
# 20 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Welcome to the labrary!\p"
	.string "Do you get it? “Lab”rary? Like a library\n"
	.string "and a laboratory in one?\p"
	.string "Ah ha haaa… ahem.$"

WaddleDeeTown_Lab_EventScript_Chef_Text_0:
# 33 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "I'm in charge of keeping all of the\n"
	.string "library's books organized.\p"
	.string "Make sure to place any books you\n"
	.string "take out back where they belong!$"

WaddleDeeTown_Lab_EventScript_Youngster_Text_0:
# 45 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "I love playing games on the computer.\n"
	.string "They're tons of fun!$"

WaddleDeeTown_Lab_EventScript_Gentleman_Text_0:
# 54 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "I've made many visits to this library\n"
	.string "over the years, but I feel like there's\l"
	.string "still so much I haven't read here…$"

WaddleDeeTown_Lab_EventScript_LeftAstronomer_Text_0:
# 64 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Have you been checking your Info Cards\n"
	.string "as you catch more Helpers?\p"
	.string "You'll find comprehensive data on\n"
	.string "movesets, evolutions, and the like…\p"
	.string "It's hard to fit so much into those\n"
	.string "small cards, but we make it work!$"

WaddleDeeTown_Lab_EventScript_WaddleDee_Text_0:
# 79 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "The number of discovered Helpers so\n"
	.string "far is close to 300.\p"
	.string "Wouldn't it be nice if it were 300\n"
	.string "on the dot? What a nice, round number!$"

WaddleDeeTown_Lab_EventScript_RightAstronomer_Text_0:
# 91 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "I've been trying to reverse engineer\n"
	.string "these PCs, thinking it might help\l"
	.string "us understand Helpers better…\p"
	.string "Are you curious to hear what\n"
	.string "I've learned so far?$"

WaddleDeeTown_Lab_EventScript_RightAstronomer_Text_1:
# 99 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "You might be surprised to learn this,\n"
	.string "but they're King Dedede's design.\p"
	.string "It seems this was his stopgap solution\n"
	.string "for curbing wild Helper numbers.\p"
	.string "Though, for as brilliant a mechanic as\n"
	.string "the Great King is, it seems that\l"
	.string "even he couldn't do this alone.\p"
	.string "It seems he contracted some parts to a\n"
	.string "group I don't recognize.\p"
	.string "Specifically, they handled operations\n"
	.string "for the PC's “memory banks”.\p"
	.string "Now, there's no physical storage\n"
	.string "involved with the PC networks.\p"
	.string "Instead, Helpers go through a process\n"
	.string "of conversion when placed inside…\p"
	.string "But it's no simple data conversion,\n"
	.string "meaning Helpers aren't synthetic.\p"
	.string "It might be plausible they aren't\n"
	.string "entirely natural creatures either…\p"
	.string "As if they were brought to Dream\n"
	.string "Land through some other force.\p"
	.string "That would explain their rather\n"
	.string "abrupt appearance, wouldn't it?$"

WaddleDeeTown_Lab_EventScript_RightAstronomer_Text_2:
# 136 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "I get it… it's complicated stuff!$"

WaddleDeeTown_Lab_EventScript_BWD_Text_0:
# 146 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}So, Kirby, what's next for you? Are you\n"
	.string "planning on challenging more Arenas?\p"
	.string "Once I score a Brooch in town, my plan\n"
	.string "was to head up north…\p"
	.string "With the town in the state it is now,\n"
	.string "though, I'll have to go the long way\l"
	.string "by heading eastward first.\p"
	.string "I overheard someone say the Great King\n"
	.string "has a lot of soldiers up there…\l"
	.string "did something happen there, I wonder?$"

WaddleDeeTown_Lab_EventScript_WiseGateCheck_Text_0:
# 188 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}It's good to see you again, Kirby!\p"
	.string "Bandana Waddle Dee has filled me in.\n"
	.string "Congratulations on your first Brooch!\p"
	.string "Collecting the Brooches will take\n"
	.string "you all across Dream Land.\p"
	.string "I'm positive you'll meet all sorts\n"
	.string "of Helpers along the way.\p"
	.string "Now, there's a certain matter I wished\n"
	.string "to discuss with you, Kirby…\p"
	.string "It seems the king has taken a great\n"
	.string "interest in your Info Card collection.\p"
	.string "So much so, in fact, that he wants\n"
	.string "to personally oversee its completion!\p"
	.string "As you'll travel, you'll encounter\n"
	.string "fellow Helper researchers who will\l"
	.string "{COLOR RED}check your cards for progress{COLOR DARK_GRAY}.\p"
	.string "Please make sure not to neglect your\n"
	.string "card-completing duties!\p"
	.string "In exchange for these progress checks,\n"
	.string "we'll provide you with care packages.\p"
	.string "In fact, I have one right here!\n"
	.string "Kirby, have you recruited {COLOR RED}6 Helpers{COLOR DARK_GRAY}?$"

WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_0:
# 273 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Excellent! You've already recruited\n"
	.string "{STR_VAR_2} Helpers so far!\p"
	.string "As promised, here's your care package!$"

WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_1:
# 282 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}A rather generous selection, is it not?\n"
	.string "Especially the Experience Share.\p"
	.string "It bestows experience to your entire\n"
	.string "party, simplifying Helper training.\p"
	.string "Your mileage with it may vary, as the\n"
	.string "Royal Royale wasn't made with it in mind,\l"
	.string "but it's still wondrous all the same.\p"
	.string "Hopefully this serves as an added\n"
	.string "incentive to work on your Info Cards…\l"
	.string "not that knowledge isn't reward enough!$"

WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_2:
# 298 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}And as for you, Bandana Waddle Dee…\n"
	.string "I've told the king that I would bring\l"
	.string "you on as a personal assistant.\p"
	.string "You and I are both eager to uncover\n"
	.string "where all these Helpers came from, yes?\p"
	.string "{SPEAKER NAME_BANDANA}Yes! About that, actually…\n"
	.string "I got some intel asking around town.\p"
	.string "It seems the Great King has ordered for\n"
	.string "the town's top exit to be sealed off.\p"
	.string "Perhaps something unusual has\n"
	.string "happened in that area?\p"
	.string "{SPEAKER NAME_WISE}Hm… even so, the town has been divided\n"
	.string "by an unscrupulous avalanche.\p"
	.string "You'll have to approach from the other\n"
	.string "side. That should also put you in\l"
	.string "the path of a few more Arenas.\p"
	.string "Perhaps then, you might become ready\n"
	.string "to face whatever threat lies ahead.\p"
	.string "But do be careful. I don't wish for\n"
	.string "either of you to endanger yourselves…\p"
	.string "{SPEAKER NAME_BANDANA}Don't sweat it! Kirby's plenty strong,\n"
	.string "and I can keep up with him just fine!$"

WaddleDeeTown_Lab_EventScript_WiseGateCheckSuccess_Text_3:
# 333 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}First things first, though.\n"
	.string "My team and I need to visit the Arena!\p"
	.string "Kirby, why don't you get a head start\n"
	.string "over to the next Arena?\p"
	.string "The only way out of town right now is\n"
	.string "through Vegetable Valley to the east.\p"
	.string "Hopefully I can catch up with you\n"
	.string "soon enough!$"

WaddleDeeTown_Lab_EventScript_WiseGateCheckFailure_Text_0:
# 354 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Unfortunately, it seems you have only\n"
	.string "recruited {STR_VAR_2} Helpers…\p"
	.string "Waddle Dee Town's park should have\n"
	.string "more than enough to meet this goal.\p"
	.string "Why don't you fill out your cards a\n"
	.string "bit, and then return here? I'll gift\l"
	.string "you your care package once you do.$"

WaddleDeeTown_Lab_EventScript_WiseGateCheckRetry_Text_0:
# 384 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Welcome back, Kirby.\n"
	.string "Have you recruited {COLOR RED}6 Helpers{COLOR DARK_GRAY}?$"

WaddleDeeTown_Lab_EventScript_InfoCardRating_Text_0:
# 401 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Good to see you again, Kirby! Do you\n"
	.string "wish to present your Info Card Binder?$"

WaddleDeeTown_Lab_EventScript_InfoCardRating_Text_1:
# 406 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Let's see... you've recruited\n"
	.string "{STR_VAR_2} Helpers thus far.$"

WaddleDeeTown_Lab_EventScript_InfoCardRating_Text_2:
# 447 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Still working hard on it, hm?\n"
	.string "Best of luck to you then!$"

WaddleDeeTown_Lab_WiseAdvice01_Text_0:
# 455 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}You're still in the early stages of\n"
	.string "filling out your Info Card Binder.\p"
	.string "It may seem daunting, but don't fret!\n"
	.string "We believe in you, Kirby!$"

WaddleDeeTown_Lab_WiseAdvice02_Text_0:
# 465 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Good, good. You're making steady\n"
	.string "progress on your Info Cards.\p"
	.string "If you spot a Helper you haven't yet\n"
	.string "recruited, the Info Cards can point\l"
	.string "you to their potential locations!$"

WaddleDeeTown_Lab_WiseAdvice03_Text_0:
# 476 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Have you looked in places other than\n"
	.string "tall grass for Helpers, Kirby?\p"
	.string "Many fishers in town have reported\n"
	.string "hooking up Helpers, for example.$"

WaddleDeeTown_Lab_WiseAdvice04_Text_0:
# 486 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Recently, I received a new report about\n"
	.string "the locations of certain Helpers.\p"
	.string "Apparently some hide within or disguise\n"
	.string "themselves as Star Blocks. Surprising!\p"
	.string "Kirby, do you have any means of\n"
	.string "investigating those?$"

WaddleDeeTown_Lab_WiseAdvice05_Text_0:
# 499 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}If you need new leads, retracing your\n"
	.string "steps may be a viable solution.\p"
	.string "You've travelled quite far now, and\n"
	.string "picked up a number of new tools.\p"
	.string "Try applying them to older areas; they\n"
	.string "may uncover new paths for you!$"

WaddleDeeTown_Lab_WiseAdvice06_Text_0:
# 512 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}By any chance, have you heard of the\n"
	.string "Merry Magocade?\p"
	.string "Games aren't quite my style, but I've\n"
	.string "heard there are certain Helpers you can\l"
	.string "only obtain in those walls.\p"
	.string "There's no harm in popping in for a quick\n"
	.string "visit, is there?$"

WaddleDeeTown_Lab_WiseAdvice07_Text_0:
# 526 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}What a major milestone! You're\n"
	.string "closer to the end than the beginning.\p"
	.string "Since you've come this far, I hope you'll\n"
	.string "see it through to the finish line!$"

WaddleDeeTown_Lab_WiseAdvice08_Text_0:
# 536 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}If you haven't hit it yet, there may\n"
	.string "come a time where you've recruited\l"
	.string "most wild Helpers already.\p"
	.string "The Info Cards can help you uncover \n"
	.string "how to evolve Helpers you obtained.\p"
	.string "Some conditions are rather obtuse,\n"
	.string "so give it a look if you're stumped!$"

WaddleDeeTown_Lab_WiseAdvice09_Text_0:
# 550 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Stronger wild Helpers are likely to\n"
	.string "have already evolved at least once.\p"
	.string "To register their unevolved forms,\n"
	.string "you'll need to obtain their Helper Egg.\p"
	.string "That would lead you to the Helper\n"
	.string "Day Care, where eggs are oft found.$"

WaddleDeeTown_Lab_WiseAdvice10_Text_0:
# 563 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}I've heard rumors of especially strong\n"
	.string "wild Helpers in remote locations…\p"
	.string "We've been referring to them as\n"
	.string "“Big Boss Helpers”.\p"
	.string "They'll be tough to find, and even\n"
	.string "tougher to recruit, certainly.\p"
	.string "There must be some group out there\n"
	.string "that knows a thing or two about\l"
	.string "tracing legendary finds like that…$"

WaddleDeeTown_Lab_WiseAdvice11_Text_0:
# 580 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}This might come across as a rather\n"
	.string "silly point of advice, but…\l"
	.string "remember you're not alone, Kirby.\p"
	.string "If there's an empty spot in your\n"
	.string "Info Cards you just can't fill out,\l"
	.string "why not ask a friend for help?\p"
	.string "Talk to everyone and work together.\n"
	.string "Friendship is important!$"

WaddleDeeTown_Lab_WiseAdvice12_Text_0:
# 595 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}This is it, Kirby. You're in the\n"
	.string "homestretch now!\p"
	.string "I'm optimistic - nay, COMPELTELY\n"
	.string "confident you'll finish the job.\p"
	.string "Go forth, Kirby! Complete the\n"
	.string "Info Card Binder and make me proud!$"

WaddleDeeTown_Lab_BinderCheck2_Text_0:
# 608 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Wonderful! You've already registered\n"
	.string "15 Helpers!\p"
	.string "As proof of your hard work, please\n"
	.string "accept this care package from me!$"

WaddleDeeTown_Lab_BinderCheck2_Text_1:
# 617 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}It includes a TM, new Hearts, some\n"
	.string "valuables, and most importantly:\l"
	.string "the Helper Box Link!\p"
	.string "This tool lets you access the PC from\n"
	.string "just about anywhere you'd like.\p"
	.string "With the growing roster of Helpers you\n"
	.string "have recruited, it's sure to be handy!$"

WaddleDeeTown_Lab_BinderCheck3_Text_0:
# 635 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Stupendous! You've already registered\n"
	.string "30 Helpers!\p"
	.string "As proof of your hard work, please\n"
	.string "accept this care package from me!$"

WaddleDeeTown_Lab_BinderCheck3_Text_1:
# 644 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}It includes a TM, new Hearts, some\n"
	.string "valuables, and most importantly:\l"
	.string "the Dowsing Machine!\p"
	.string "You can use this tool to help locate\n"
	.string "items invisible to the naked eye.\p"
	.string "Who knows what kind of helpful items\n"
	.string "you'll be able to discover now?$"

WaddleDeeTown_Lab_BinderCheck4_Text_0:
# 662 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Incredible! You've already registered\n"
	.string "50 Helpers!\p"
	.string "As proof of your hard work, please\n"
	.string "accept this care package from me!$"

WaddleDeeTown_Lab_BinderCheck4_Text_1:
# 671 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}It includes a TM, new Hearts, some\n"
	.string "valuables, and most importantly:\l"
	.string "the Oval Charm!\p"
	.string "This mysterious charm increases your\n"
	.string "chance of obtaining Helper Eggs.\p"
	.string "Have you visited the Helper Day Care\n"
	.string "in the northwest corner of town?\p"
	.string "If you're looking for Helper Eggs,\n"
	.string "that should be your destination.$"

WaddleDeeTown_Lab_BinderCheck5_Text_0:
# 692 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Marvelous! You've already registered\n"
	.string "75 Helpers!\p"
	.string "As proof of your hard work, please\n"
	.string "accept this care package from me!$"

WaddleDeeTown_Lab_BinderCheck5_Text_1:
# 701 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}It includes a TM, new Hearts, some\n"
	.string "valuables, and most importantly:\l"
	.string "the Catching Charm!\p"
	.string "This mysterious charm increases your\n"
	.string "odds at recruiting Helpers.\p"
	.string "Did you know your odds also gradually\n"
	.string "increase as your Binder is filled out?\p"
	.string "I hope this helps you encounter some\n"
	.string "especially hard-to-nab Helpers!$"

WaddleDeeTown_Lab_BinderCheck6_Text_0:
# 722 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Phenomenal! You've already registered\n"
	.string "100 Helpers!\p"
	.string "As proof of your hard work, please\n"
	.string "accept this care package from me!$"

WaddleDeeTown_Lab_BinderCheck6_Text_1:
# 731 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}It includes a TM, new Hearts, some\n"
	.string "valuables, and most importantly:\l"
	.string "the Turbo Warp Star!\p"
	.string "This upgraded Warp Star model can reach\n"
	.string "even higher top speeds than before.\p"
	.string "If you've noticed impassable slopes on\n"
	.string "your journey before, you should have\l"
	.string "no trouble clearing them now.\p"
	.string "Imagine what kinds of Helpers await\n"
	.string "beyond them? Go on and find out!$"

WaddleDeeTown_Lab_BinderCheck7_Text_0:
# 753 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}Magnificent! You've already registered\n"
	.string "150 Helpers!\p"
	.string "As proof of your hard work, please\n"
	.string "accept this care package from me!$"

WaddleDeeTown_Lab_BinderCheck7_Text_1:
# 762 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_WISE}It includes a TM, a new Heart, some\n"
	.string "valuables, and most importantly:\l"
	.string "the Experience Charm!\p"
	.string "This is the ultimate tool to bolster\n"
	.string "your party's experience gains.\p"
	.string "Evolving Helpers should be easier\n"
	.string "than ever with this by your side.\p"
	.string "And if there any uncaptured Helpers\n"
	.string "still eluding you, I've bestowed\l"
	.string "the ultimate Heart unto you as well.\p"
	.string "The Master Heart can never fail.\n"
	.string "Use it wisely, my good friend!$"

WaddleDeeTown_Lab_ReceivedHelperBoxLink::
# 231 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Helper Box Link{COLOR DARK_GRAY}!$"

WaddleDeeTown_Lab_ReceivedExpShare::
# 236 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Exp. Share{COLOR DARK_GRAY}!$"

WaddleDeeTown_Lab_ReceivedDowsingMachine::
# 241 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Dowsing Machine{COLOR DARK_GRAY}!$"

WaddleDeeTown_Lab_ReceivedOvalCharm::
# 246 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Oval Charm{COLOR DARK_GRAY}!$"

WaddleDeeTown_Lab_ReceivedCatchingCharm::
# 251 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Catching Charm{COLOR DARK_GRAY}!$"

WaddleDeeTown_Lab_ReceivedMachBike::
# 256 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Turbo Warp Star{COLOR DARK_GRAY}!$"

WaddleDeeTown_Lab_ReceivedShinyCharm::
# 261 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Shiny Charm{COLOR DARK_GRAY}!$"

WaddleDeeTown_Lab_ReceivedExpCharm::
# 266 "data/maps/WaddleDeeTown_Lab/scripts.pory"
	.string "Obtained the {COLOR BLUE}Exp. Charm{COLOR DARK_GRAY}!$"
