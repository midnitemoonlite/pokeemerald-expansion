# 1 "data/maps/ResortArena/scripts.pory"

# 2 "data/maps/ResortArena/scripts.pory"
ResortArena_MapScripts::
# 3 "data/maps/ResortArena/scripts.pory"
	.byte 0

ResortArena_EventScript_Sign::
# 8 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/ResortArena/scripts.pory"
	closemessage
	return


ResortArena_EventScript_CocoaCaveSign::
# 15 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CocoaCaveSign_Text_0, MSGBOX_SIGN
# 17 "data/maps/ResortArena/scripts.pory"
	closemessage
	return


ResortArena_EventScript_RedSqueaker::
# 22 "data/maps/ResortArena/scripts.pory"
	lock
# 23 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 24 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_RedSqueaker_Text_0
# 32 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Lounger::
# 37 "data/maps/ResortArena/scripts.pory"
	lock
# 38 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 39 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Lounger_Text_0
# 44 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_TopAudience::
# 49 "data/maps/ResortArena/scripts.pory"
	lock
# 50 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 51 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_TopAudience_2
# 61 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_TopAudience_Text_1
ResortArena_EventScript_TopAudience_1:
# 67 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_TopAudience_2:
# 53 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_TopAudience_Text_0
	goto ResortArena_EventScript_TopAudience_1


ResortArena_EventScript_TalkToGentleman::
# 72 "data/maps/ResortArena/scripts.pory"
	turnobject LOCALID_RESORT_CROWD_1, DIR_EAST
# 73 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_TopAudience
	return


ResortArena_EventScript_BottomAudience::
# 78 "data/maps/ResortArena/scripts.pory"
	lock
# 79 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 80 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_BottomAudience_2
# 90 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BottomAudience_Text_1
ResortArena_EventScript_BottomAudience_1:
# 95 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_BottomAudience_2:
# 82 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BottomAudience_Text_0
	goto ResortArena_EventScript_BottomAudience_1


ResortArena_EventScript_TalkToParasol::
# 100 "data/maps/ResortArena/scripts.pory"
	turnobject LOCALID_RESORT_CROWD_2, DIR_EAST
# 101 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_BottomAudience
	return


ResortArena_EventScript_BlueSqueaker::
# 106 "data/maps/ResortArena/scripts.pory"
	lock
# 107 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 108 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_BlueSqueaker_2
# 121 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BlueSqueaker_Text_1
ResortArena_EventScript_BlueSqueaker_1:
# 130 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_BlueSqueaker_2:
# 110 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BlueSqueaker_Text_0
	goto ResortArena_EventScript_BlueSqueaker_1


ResortArena_EventScript_TalkToSqueaker::
# 135 "data/maps/ResortArena/scripts.pory"
	turnobject LOCALID_RESORT_CROWD_3, DIR_WEST
# 136 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_BlueSqueaker
	return


ResortArena_EventScript_Delivery::
# 141 "data/maps/ResortArena/scripts.pory"
	lock
# 142 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 143 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Delivery_Text_0
# 151 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_GreenSqueaker::
# 156 "data/maps/ResortArena/scripts.pory"
	lock
# 157 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 158 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_116_ETHER, ResortArena_EventScript_GreenSqueaker_2
# 167 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GreenSqueaker_Text_1
ResortArena_EventScript_GreenSqueaker_1:
# 175 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_GreenSqueaker_2:
# 160 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GreenSqueaker_Text_0
	goto ResortArena_EventScript_GreenSqueaker_1


ResortArena_EventScript_YellowSqueaker::
# 180 "data/maps/ResortArena/scripts.pory"
	lock
# 181 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 182 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_YellowSqueaker_Text_0
# 193 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_WaddleDee::
# 198 "data/maps/ResortArena/scripts.pory"
	lock
# 199 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 200 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_WaddleDee_Text_0
# 205 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Conductor::
# 210 "data/maps/ResortArena/scripts.pory"
	lock
# 211 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 212 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Conductor_Text_0
# 215 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_CaveGuardian::
# 220 "data/maps/ResortArena/scripts.pory"
	lock
# 221 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 222 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CaveGuardian_Text_0
# 228 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Aide::
# 233 "data/maps/ResortArena/scripts.pory"
	lock
# 234 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 235 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Aide_Text_0
# 245 "data/maps/ResortArena/scripts.pory"
	playse SE_SELECT
# 246 "data/maps/ResortArena/scripts.pory"
	closemessage
# 247 "data/maps/ResortArena/scripts.pory"
	delay 60
# 248 "data/maps/ResortArena/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 249 "data/maps/ResortArena/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_ge ResortArena_EventScript_Aide_1
# 253 "data/maps/ResortArena/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_lt ResortArena_EventScript_Aide_2
	return

ResortArena_EventScript_Aide_1:
# 251 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_AideSuccess
	return

ResortArena_EventScript_Aide_2:
# 255 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_AideFailure
	return


ResortArena_EventScript_AideSuccess::
# 261 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideSuccess_Text_0
# 268 "data/maps/ResortArena/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedExpShare, ITEM_EXP_SHARE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 269 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_TM09
# 270 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 271 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_DIVE_BALL, 10
# 272 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideSuccess_Text_1
# 285 "data/maps/ResortArena/scripts.pory"
	closemessage
# 286 "data/maps/ResortArena/scripts.pory"
	playse SE_EXIT
# 287 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 288 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_BINDER_GATE_02
# 289 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_AIDE
# 290 "data/maps/ResortArena/scripts.pory"
	delay 30
# 291 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 292 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_AideFailure::
# 297 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideFailure_Text_0
# 305 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_MoveTutor::
# 310 "data/maps/ResortArena/scripts.pory"
	lock
# 311 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 312 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_MoveTutor_2
# 325 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_MoveTutor_Text_1
ResortArena_EventScript_MoveTutor_1:
# 340 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_MoveTutor_2:
# 314 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_MoveTutor_Text_0
	goto ResortArena_EventScript_MoveTutor_1


ResortArena_EventScript_Courtship::
# 345 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_Courtship_Movement_0
# 346 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 347 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Courtship_Text_0
# 351 "data/maps/ResortArena/scripts.pory"
	closemessage
# 352 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_1, ResortArena_EventScript_Courtship_Movement_1
# 353 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_2, ResortArena_EventScript_Courtship_Movement_1
# 354 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_3, ResortArena_EventScript_Courtship_Movement_1
# 355 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 356 "data/maps/ResortArena/scripts.pory"
	delay 8
# 357 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Courtship_Text_1
# 358 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Socialite::
# 363 "data/maps/ResortArena/scripts.pory"
	lock
# 364 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Socialite_1
# 370 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 371 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Socialite_Text_0
# 375 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Socialite_1:
# 366 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_ParasolLady::
# 381 "data/maps/ResortArena/scripts.pory"
	lock
# 382 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_ParasolLady_1
# 388 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 389 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ParasolLady_Text_0
# 394 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_ParasolLady_1:
# 384 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_Lass::
# 400 "data/maps/ResortArena/scripts.pory"
	lock
# 401 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Lass_1
# 407 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 408 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Lass_Text_0
# 415 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Lass_1:
# 403 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_Daroach::
# 421 "data/maps/ResortArena/scripts.pory"
	lock
# 422 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Daroach_2
ResortArena_EventScript_Daroach_1:
# 426 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ResortArena_EventScript_Daroach_4
	return

ResortArena_EventScript_Daroach_2:
# 424 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	goto ResortArena_EventScript_Daroach_1

ResortArena_EventScript_Daroach_4:
# 428 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 429 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, ResortArena_EventScript_Daroach_7
# 479 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_FOUND_KINE, ResortArena_EventScript_Daroach_14
# 505 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_4
ResortArena_EventScript_Daroach_6:
# 518 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Daroach_7:
# 431 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_FOUND_KINE, ResortArena_EventScript_Daroach_11
# 466 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_0
# 471 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_TM73
# 472 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_2
ResortArena_EventScript_Daroach_10:
# 475 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
	goto ResortArena_EventScript_Daroach_6

ResortArena_EventScript_Daroach_11:
# 433 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_0
# 438 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_TM73
# 439 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_1
	goto ResortArena_EventScript_Daroach_10

ResortArena_EventScript_Daroach_14:
# 481 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_3
	goto ResortArena_EventScript_Daroach_6


ResortArena_EventScript_Commentator::
# 524 "data/maps/ResortArena/scripts.pory"
	lock
# 525 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 526 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ResortArena_EventScript_Commentator_2
# 537 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Commentator_3
ResortArena_EventScript_Commentator_1:
# 566 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Commentator_2:
# 528 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Commentator_Text_0
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_3:
# 539 "data/maps/ResortArena/scripts.pory"
	lock
# 540 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 541 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Commentator_Text_1
# 546 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_Commentator_6
# 550 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_Commentator_7
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_6:
# 548 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorChoice
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_7:
# 552 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Commentator_Text_2, MSGBOX_YESNO
# 554 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ResortArena_EventScript_Commentator_10
# 559 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_EventScript_Commentator_11
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_10:
# 556 "data/maps/ResortArena/scripts.pory"
	closemessage
# 557 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_GrandFinalsPreparation
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_11:
# 561 "data/maps/ResortArena/scripts.pory"
	closemessage
# 562 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	goto ResortArena_EventScript_Commentator_1


ResortArena_EventScript_CommentatorChoice::
# 571 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_CommentatorChoice_Text_0
# 573 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 574 "data/maps/ResortArena/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 575 "data/maps/ResortArena/scripts.pory"
	switch VAR_RESULT
# 576 "data/maps/ResortArena/scripts.pory"
	case 0, ResortArena_EventScript_CommentatorChoice_2
# 578 "data/maps/ResortArena/scripts.pory"
	case 1, ResortArena_EventScript_CommentatorChoice_3
# 580 "data/maps/ResortArena/scripts.pory"
	case 2, ResortArena_EventScript_CommentatorChoice_4
# 582 "data/maps/ResortArena/scripts.pory"
	case MULTI_B_PRESSED, ResortArena_EventScript_CommentatorChoice_5
	return

ResortArena_EventScript_CommentatorChoice_2:
# 577 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_BeginChallenge
	return

ResortArena_EventScript_CommentatorChoice_3:
# 579 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorInfo
	return

ResortArena_EventScript_CommentatorChoice_4:
# 581 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	return

ResortArena_EventScript_CommentatorChoice_5:
# 583 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	return


ResortArena_EventScript_CommentatorBye::
# 589 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_CommentatorBye_2
# 596 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CommentatorBye_Text_1
ResortArena_EventScript_CommentatorBye_1:
# 599 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_CommentatorBye_2:
# 591 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CommentatorBye_Text_0
	goto ResortArena_EventScript_CommentatorBye_1


ResortArena_EventScript_CommentatorInfo::
# 604 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CommentatorInfo_Text_0
# 630 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorChoice
	return


ResortArena_EventScript_BeginChallenge::
# 635 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BeginChallenge_Text_0
# 637 "data/maps/ResortArena/scripts.pory"
	closemessage
# 638 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 2
# 639 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 640 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 641 "data/maps/ResortArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 642 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq ResortArena_EventScript_BeginChallenge_2
# 648 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq ResortArena_EventScript_BeginChallenge_3
# 654 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq ResortArena_EventScript_BeginChallenge_4
ResortArena_EventScript_BeginChallenge_1:
# 660 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 661 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_BeginChallenge_Movement_4
# 662 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_5
# 663 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_6
# 664 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 665 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_7
# 666 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_BeginChallenge_9
# 675 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_BeginChallenge_10
ResortArena_EventScript_BeginChallenge_8:
# 684 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 685 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_BeginChallenge_Movement_8
# 686 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_BeginChallenge_Movement_9
# 687 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_BeginChallenge_Movement_10
# 688 "data/maps/ResortArena/scripts.pory"
	delay 60
# 689 "data/maps/ResortArena/scripts.pory"
	call ResortArena_EventScript_Challenger1
	return

ResortArena_EventScript_BeginChallenge_2:
# 644 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 645 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_1
# 646 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_BeginChallenge_1

ResortArena_EventScript_BeginChallenge_3:
# 650 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 651 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_2
# 652 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_BeginChallenge_1

ResortArena_EventScript_BeginChallenge_4:
# 656 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 657 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_3
# 658 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_BeginChallenge_1

ResortArena_EventScript_BeginChallenge_9:
# 668 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BeginChallenge_Text_1
	goto ResortArena_EventScript_BeginChallenge_8

ResortArena_EventScript_BeginChallenge_10:
# 677 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BeginChallenge_Text_2
	goto ResortArena_EventScript_BeginChallenge_8


ResortArena_EventScript_Challenger1::
# 694 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_0
# 695 "data/maps/ResortArena/scripts.pory"
	closemessage
# 696 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 697 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger1_Movement_0
# 698 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger1_Movement_1
# 699 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger1_Movement_2
# 700 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_1
# 701 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_3
# 702 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 703 "data/maps/ResortArena/scripts.pory"
	delay 30
# 704 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_4
# 705 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 706 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 707 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_Challenger1_2
# 712 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_Challenger1_3
ResortArena_EventScript_Challenger1_1:
# 717 "data/maps/ResortArena/scripts.pory"
	closemessage
# 718 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 719 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_5
# 720 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_6
# 721 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 722 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 723 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSE_5, ResortArena_Text_Challenger1
# 724 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_3
# 726 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger1_Movement_7
# 727 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger1_Movement_1
# 728 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger1_Movement_8
# 729 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 730 "data/maps/ResortArena/scripts.pory"
	closemessage
# 731 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 732 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 733 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_9
# 734 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_10
# 735 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 736 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 737 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_1
# 738 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_Challenger1_2:
# 709 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_1
	goto ResortArena_EventScript_Challenger1_1

ResortArena_EventScript_Challenger1_3:
# 714 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_2
	goto ResortArena_EventScript_Challenger1_1


ResortArena_EventScript_Challenger2::
# 748 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger2_Text_0
# 749 "data/maps/ResortArena/scripts.pory"
	closemessage
# 750 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 751 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger2_Movement_0
# 752 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger2_Movement_1
# 753 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger2_Movement_2
# 754 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_2
# 755 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_3
# 756 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 757 "data/maps/ResortArena/scripts.pory"
	delay 30
# 758 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_4
# 759 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 760 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 761 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger2_Text_1
# 762 "data/maps/ResortArena/scripts.pory"
	closemessage
# 763 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 764 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_5
# 765 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_6
# 766 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 767 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 768 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_1, ResortArena_Text_Challenger2
# 769 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger2_Text_2
# 771 "data/maps/ResortArena/scripts.pory"
	closemessage
# 772 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 773 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger2_Movement_3
# 774 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger2_Movement_4
# 775 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger2_Movement_5
# 776 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 777 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 778 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_9
# 779 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_10
# 780 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 781 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 782 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_2
# 783 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Challenger3::
# 793 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger3_Text_0
# 794 "data/maps/ResortArena/scripts.pory"
	closemessage
# 795 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 796 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger3_Movement_0
# 797 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger3_Movement_1
# 798 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_BeginChallenge_Movement_10
# 799 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_3
# 800 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_3
# 801 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 802 "data/maps/ResortArena/scripts.pory"
	delay 30
# 803 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_4
# 804 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 805 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 806 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger3_Text_1
# 808 "data/maps/ResortArena/scripts.pory"
	closemessage
# 809 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 810 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_5
# 811 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_6
# 812 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 813 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 814 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_CHIP, ResortArena_Text_Challenger3
# 815 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger3_Text_2
# 817 "data/maps/ResortArena/scripts.pory"
	closemessage
# 818 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 819 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger3_Movement_2
# 820 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger3_Movement_3
# 821 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger3_Movement_4
# 822 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 3
# 823 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 824 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_9
# 825 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_10
# 826 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 827 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 828 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_3
# 829 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Challenger4::
# 840 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger4_Text_0
# 841 "data/maps/ResortArena/scripts.pory"
	closemessage
# 842 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 843 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger4_Movement_0
# 844 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger4_Movement_1
# 845 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger4_Movement_2
# 846 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_4
# 847 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_3
# 848 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 849 "data/maps/ResortArena/scripts.pory"
	delay 30
# 850 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_4
# 851 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 852 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 853 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger4_Text_1
# 855 "data/maps/ResortArena/scripts.pory"
	closemessage
# 856 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 857 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_5
# 858 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_6
# 859 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 860 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 861 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_FOSTER, ResortArena_Text_Challenger4
# 862 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger4_Text_2
# 864 "data/maps/ResortArena/scripts.pory"
	closemessage
# 865 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 866 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger4_Movement_3
# 867 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger3_Movement_2
# 868 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger4_Movement_4
# 869 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 4
# 870 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 871 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_9
# 872 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_10
# 873 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 874 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 875 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_4
# 876 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Challenger5::
# 887 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_0
# 888 "data/maps/ResortArena/scripts.pory"
	closemessage
# 889 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 890 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger5_Movement_0
# 891 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger5_Movement_0
# 892 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger5_Movement_1
# 893 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_5
# 894 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_3
# 895 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 896 "data/maps/ResortArena/scripts.pory"
	delay 30
# 897 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_4
# 898 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 899 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 900 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_1
# 901 "data/maps/ResortArena/scripts.pory"
	closemessage
# 902 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 903 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_5
# 904 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_6
# 905 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 906 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 907 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_2, ResortArena_Text_Challenger5
# 908 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_2
# 910 "data/maps/ResortArena/scripts.pory"
	closemessage
# 911 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 912 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 913 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger5_Movement_2
# 914 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger4_Movement_3
# 915 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger5_Movement_3
# 916 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 5
# 917 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 918 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 919 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_9
# 920 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_10
# 921 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 922 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 923 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_5
# 924 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_3
# 940 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Break::
# 950 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq ResortArena_EventScript_Break_2
# 955 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq ResortArena_EventScript_Break_3
# 960 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq ResortArena_EventScript_Break_4
# 965 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 4
	goto_if_eq ResortArena_EventScript_Break_5
# 970 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 5
	goto_if_eq ResortArena_EventScript_Break_6
ResortArena_EventScript_Break_1:
# 975 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 976 "data/maps/ResortArena/scripts.pory"
	multichoice 17, 6, MULTI_GO_ON_REST_RETIRE, 0
# 977 "data/maps/ResortArena/scripts.pory"
	switch VAR_RESULT
# 978 "data/maps/ResortArena/scripts.pory"
	case 0, ResortArena_EventScript_Break_13
# 999 "data/maps/ResortArena/scripts.pory"
	case 1, ResortArena_EventScript_Break_14
# 1001 "data/maps/ResortArena/scripts.pory"
	case 2, ResortArena_EventScript_Break_15
# 1003 "data/maps/ResortArena/scripts.pory"
	case MULTI_B_PRESSED, ResortArena_EventScript_Break_16
	return

ResortArena_EventScript_Break_2:
# 952 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_0
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_3:
# 957 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_1
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_4:
# 962 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_2
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_5:
# 967 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_3
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_6:
# 972 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_4
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_13:
# 979 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq ResortArena_EventScript_Break_17
# 983 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq ResortArena_EventScript_Break_18
# 987 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq ResortArena_EventScript_Break_19
# 991 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 4
	goto_if_eq ResortArena_EventScript_Break_20
# 995 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 5
	goto_if_eq ResortArena_EventScript_Break_21
	return

ResortArena_EventScript_Break_14:
# 1000 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_ArenaHeal
	return

ResortArena_EventScript_Break_15:
# 1002 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_ForfeitConfirmation
	return

ResortArena_EventScript_Break_16:
# 1004 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_ForfeitConfirmation
	return

ResortArena_EventScript_Break_17:
# 981 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger2
	return

ResortArena_EventScript_Break_18:
# 985 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger3
	return

ResortArena_EventScript_Break_19:
# 989 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger4
	return

ResortArena_EventScript_Break_20:
# 993 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger5
	return

ResortArena_EventScript_Break_21:
# 997 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_GrandFinals
	return


ResortArena_EventScript_ArenaHeal::
# 1010 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ArenaHeal_1
# 1060 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ArenaHeal_2
	return

ResortArena_EventScript_ArenaHeal_1:
# 1012 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, ResortArena_EventScript_ArenaHeal_5
# 1052 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, ResortArena_EventScript_ArenaHeal_6
	return

ResortArena_EventScript_ArenaHeal_2:
# 1062 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_5
# 1064 "data/maps/ResortArena/scripts.pory"
	special HealPlayerParty
# 1065 "data/maps/ResortArena/scripts.pory"
	playse SE_USE_ITEM
# 1066 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_ArenaHeal_Text_2
# 1067 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1068 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1069 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_ArenaHeal_5:
# 1014 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_HEALS, 0
	goto_if_gt ResortArena_EventScript_ArenaHeal_9
# 1044 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_3
# 1049 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_ArenaHeal_6:
# 1054 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_4
# 1057 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_ArenaHeal_9:
# 1016 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_HEALS, 1
	goto_if_gt ResortArena_EventScript_ArenaHeal_13
# 1023 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_1, MSGBOX_YESNO
ResortArena_EventScript_ArenaHeal_12:
# 1026 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ResortArena_EventScript_ArenaHeal_17
ResortArena_EventScript_ArenaHeal_16:
# 1037 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_EventScript_ArenaHeal_19
	return

ResortArena_EventScript_ArenaHeal_13:
# 1018 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_0, MSGBOX_YESNO
	goto ResortArena_EventScript_ArenaHeal_12

ResortArena_EventScript_ArenaHeal_17:
# 1028 "data/maps/ResortArena/scripts.pory"
	special HealPlayerParty
# 1029 "data/maps/ResortArena/scripts.pory"
	playse SE_USE_ITEM
# 1030 "data/maps/ResortArena/scripts.pory"
	subvar VAR_ARENA_HEALS, 1
# 1031 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 1032 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_ArenaHeal_Text_2
# 1033 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1034 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1035 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	goto ResortArena_EventScript_ArenaHeal_16

ResortArena_EventScript_ArenaHeal_19:
# 1039 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_ForfeitConfirmation::
# 1075 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ForfeitConfirmation_1
# 1104 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ForfeitConfirmation_2
	return

ResortArena_EventScript_ForfeitConfirmation_1:
# 1077 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ForfeitConfirmation_Text_0, MSGBOX_YESNO
# 1085 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ResortArena_EventScript_ForfeitConfirmation_5
# 1099 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_EventScript_ForfeitConfirmation_6
	return

ResortArena_EventScript_ForfeitConfirmation_2:
# 1106 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ForfeitConfirmation_Text_2
# 1108 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1109 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1110 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_ForfeitConfirmation_Movement_0
# 1111 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1112 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_ForfeitConfirmation_Movement_1
# 1113 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_ForfeitConfirmation_Movement_2
# 1114 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1115 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1116 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
# 1117 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_ForfeitConfirmation_5:
# 1087 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ForfeitConfirmation_Text_1
# 1089 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1090 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1091 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_ForfeitConfirmation_Movement_0
# 1092 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1093 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_ForfeitConfirmation_Movement_1
# 1094 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_ForfeitConfirmation_Movement_2
# 1095 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1096 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1097 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	return

ResortArena_EventScript_ForfeitConfirmation_6:
# 1101 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_GrandFinalsPreparation::
# 1123 "data/maps/ResortArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 1124 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq ResortArena_EventScript_GrandFinalsPreparation_2
# 1130 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq ResortArena_EventScript_GrandFinalsPreparation_3
# 1136 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq ResortArena_EventScript_GrandFinalsPreparation_4
ResortArena_EventScript_GrandFinalsPreparation_1:
# 1142 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1143 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_BeginChallenge_Movement_4
# 1144 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_5
# 1145 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_6
# 1146 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1147 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1148 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_GrandFinals
	return

ResortArena_EventScript_GrandFinalsPreparation_2:
# 1126 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 1127 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_1
# 1128 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GrandFinalsPreparation_1

ResortArena_EventScript_GrandFinalsPreparation_3:
# 1132 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 1133 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_3
# 1134 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GrandFinalsPreparation_1

ResortArena_EventScript_GrandFinalsPreparation_4:
# 1138 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 1139 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_2
# 1140 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GrandFinalsPreparation_1


ResortArena_EventScript_GrandFinals::
# 1153 "data/maps/ResortArena/scripts.pory"
	fadeoutbgm 1
# 1154 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_7
# 1155 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1156 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_2
# 1169 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_3
ResortArena_EventScript_GrandFinals_1:
# 1182 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1183 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_0
# 1184 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 1185 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_GrandFinals_Movement_1
# 1186 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_GrandFinals_Movement_2
# 1187 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_GrandFinals_Movement_3
# 1188 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_DAROACH
# 1189 "data/maps/ResortArena/scripts.pory"
	setobjectxyperm LOCALID_DAROACH, 25, 22
# 1190 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_DAROACH
# 1191 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1192 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_2
# 1202 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1203 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 1204 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_GrandFinals_Movement_4
# 1205 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_GrandFinals_Movement_5
# 1206 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_GrandFinals_Movement_6
# 1207 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_Challenger1_Movement_3
# 1208 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1209 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1210 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_Challenger1_Movement_4
# 1211 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1212 "data/maps/ResortArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 1213 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_7
ResortArena_EventScript_GrandFinals_6:
# 1230 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_10
ResortArena_EventScript_GrandFinals_9:
# 1251 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1252 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, ResortArena_EventScript_GrandFinals_Movement_7
# 1253 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_5
# 1257 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1258 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 1259 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1260 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_GrandFinals_Movement_8
# 1261 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_9
# 1262 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1263 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1264 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_3, ResortArena_Text_Daroach
# 1265 "data/maps/ResortArena/scripts.pory"
	fadeoutbgm 1
# 1266 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1267 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_6
# 1272 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1273 "data/maps/ResortArena/scripts.pory"
	playbgm MUS_LILYCOVE, FALSE
# 1274 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 1275 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_GrandFinals_Movement_0
# 1276 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_GrandFinals_Movement_10
# 1277 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_GrandFinals_Movement_11
# 1278 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_12
# 1279 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1280 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_GrandFinals_Text_7
# 1281 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1282 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1283 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1284 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_GrandFinals_Movement_13
# 1285 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1286 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_8
# 1288 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1289 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_GrandFinals_Movement_14
# 1290 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1291 "data/maps/ResortArena/scripts.pory"
	setobjectxyperm LOCALID_DAROACH, 29, 21
# 1292 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1293 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 1294 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 1295 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 1296 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 1297 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1298 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_15
# 1299 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1300 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_ForfeitConfirmation_Movement_1
# 1301 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_ForfeitConfirmation_Movement_2
# 1302 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1303 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1304 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Victory
	return

ResortArena_EventScript_GrandFinals_2:
# 1158 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_0
	goto ResortArena_EventScript_GrandFinals_1

ResortArena_EventScript_GrandFinals_3:
# 1171 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_1
	goto ResortArena_EventScript_GrandFinals_1

ResortArena_EventScript_GrandFinals_7:
# 1215 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_3
	goto ResortArena_EventScript_GrandFinals_6

ResortArena_EventScript_GrandFinals_10:
# 1232 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_4
	goto ResortArena_EventScript_GrandFinals_9


ResortArena_EventScript_Victory::
# 1314 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Victory_Text_0
# 1319 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Victory_Text_1
# 1321 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1322 "data/maps/ResortArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1323 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_BADGE02_GET
# 1324 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Victory_Text_2
# 1329 "data/maps/ResortArena/scripts.pory"
	release
	return


# 345 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Courtship_Movement_0:
# 345 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 352 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Courtship_Movement_1:
# 352 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 352 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 352 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 352 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 352 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
	step_end

# 644 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_0:
# 644 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 645 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_1:
# 645 "data/maps/ResortArena/scripts.pory"
	walk_left
# 645 "data/maps/ResortArena/scripts.pory"
	walk_down
# 645 "data/maps/ResortArena/scripts.pory"
	walk_down
# 645 "data/maps/ResortArena/scripts.pory"
	walk_right
# 645 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 651 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_2:
# 651 "data/maps/ResortArena/scripts.pory"
	walk_down
# 651 "data/maps/ResortArena/scripts.pory"
	walk_left
# 651 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 657 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_3:
# 657 "data/maps/ResortArena/scripts.pory"
	walk_down
# 657 "data/maps/ResortArena/scripts.pory"
	walk_right
# 657 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 661 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_4:
# 661 "data/maps/ResortArena/scripts.pory"
	walk_up
# 661 "data/maps/ResortArena/scripts.pory"
	walk_up
# 661 "data/maps/ResortArena/scripts.pory"
	walk_up
# 661 "data/maps/ResortArena/scripts.pory"
	walk_up
# 661 "data/maps/ResortArena/scripts.pory"
	walk_up
# 661 "data/maps/ResortArena/scripts.pory"
	walk_up
	step_end

# 662 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_5:
# 662 "data/maps/ResortArena/scripts.pory"
	walk_up
# 662 "data/maps/ResortArena/scripts.pory"
	walk_up
# 662 "data/maps/ResortArena/scripts.pory"
	walk_up
# 662 "data/maps/ResortArena/scripts.pory"
	walk_up
# 662 "data/maps/ResortArena/scripts.pory"
	walk_up
# 662 "data/maps/ResortArena/scripts.pory"
	walk_up
# 662 "data/maps/ResortArena/scripts.pory"
	walk_up
# 662 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 663 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_6:
# 663 "data/maps/ResortArena/scripts.pory"
	walk_up
# 663 "data/maps/ResortArena/scripts.pory"
	walk_up
# 663 "data/maps/ResortArena/scripts.pory"
	walk_up
# 663 "data/maps/ResortArena/scripts.pory"
	walk_up
# 663 "data/maps/ResortArena/scripts.pory"
	walk_up
# 663 "data/maps/ResortArena/scripts.pory"
	walk_up
# 663 "data/maps/ResortArena/scripts.pory"
	walk_left
# 663 "data/maps/ResortArena/scripts.pory"
	walk_left
# 663 "data/maps/ResortArena/scripts.pory"
	walk_left
# 663 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 665 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_7:
# 665 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 665 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 685 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_8:
# 685 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 686 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_9:
# 686 "data/maps/ResortArena/scripts.pory"
	face_up
	step_end

# 687 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_10:
# 687 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 687 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 687 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 687 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
	step_end

# 697 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_0:
# 697 "data/maps/ResortArena/scripts.pory"
	face_right
# 697 "data/maps/ResortArena/scripts.pory"
	delay_16
# 697 "data/maps/ResortArena/scripts.pory"
	delay_16
# 697 "data/maps/ResortArena/scripts.pory"
	delay_16
# 697 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 698 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_1:
# 698 "data/maps/ResortArena/scripts.pory"
	face_right
# 698 "data/maps/ResortArena/scripts.pory"
	delay_16
# 698 "data/maps/ResortArena/scripts.pory"
	delay_16
# 698 "data/maps/ResortArena/scripts.pory"
	delay_16
# 698 "data/maps/ResortArena/scripts.pory"
	face_up
	step_end

# 699 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_2:
# 699 "data/maps/ResortArena/scripts.pory"
	face_down
# 699 "data/maps/ResortArena/scripts.pory"
	delay_16
# 699 "data/maps/ResortArena/scripts.pory"
	delay_8
# 699 "data/maps/ResortArena/scripts.pory"
	face_left
# 699 "data/maps/ResortArena/scripts.pory"
	delay_16
# 699 "data/maps/ResortArena/scripts.pory"
	delay_8
# 699 "data/maps/ResortArena/scripts.pory"
	face_down
# 699 "data/maps/ResortArena/scripts.pory"
	delay_16
# 699 "data/maps/ResortArena/scripts.pory"
	delay_8
# 699 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 701 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_3:
# 701 "data/maps/ResortArena/scripts.pory"
	walk_up
# 701 "data/maps/ResortArena/scripts.pory"
	walk_up
# 701 "data/maps/ResortArena/scripts.pory"
	walk_up
# 701 "data/maps/ResortArena/scripts.pory"
	walk_up
# 701 "data/maps/ResortArena/scripts.pory"
	walk_up
# 701 "data/maps/ResortArena/scripts.pory"
	walk_up
# 701 "data/maps/ResortArena/scripts.pory"
	walk_up
# 701 "data/maps/ResortArena/scripts.pory"
	walk_right
# 701 "data/maps/ResortArena/scripts.pory"
	walk_right
# 701 "data/maps/ResortArena/scripts.pory"
	walk_right
# 701 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
	step_end

# 704 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_4:
# 704 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 704 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
	step_end

# 719 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_5:
# 719 "data/maps/ResortArena/scripts.pory"
	walk_left
# 719 "data/maps/ResortArena/scripts.pory"
	walk_left
	step_end

# 720 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_6:
# 720 "data/maps/ResortArena/scripts.pory"
	walk_right
# 720 "data/maps/ResortArena/scripts.pory"
	walk_right
	step_end

# 726 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_7:
# 726 "data/maps/ResortArena/scripts.pory"
	face_right
# 726 "data/maps/ResortArena/scripts.pory"
	delay_16
# 726 "data/maps/ResortArena/scripts.pory"
	delay_16
# 726 "data/maps/ResortArena/scripts.pory"
	delay_16
# 726 "data/maps/ResortArena/scripts.pory"
	delay_16
# 726 "data/maps/ResortArena/scripts.pory"
	delay_16
# 726 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 728 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_8:
# 728 "data/maps/ResortArena/scripts.pory"
	face_up
# 728 "data/maps/ResortArena/scripts.pory"
	delay_16
# 728 "data/maps/ResortArena/scripts.pory"
	face_right
# 728 "data/maps/ResortArena/scripts.pory"
	delay_16
# 728 "data/maps/ResortArena/scripts.pory"
	face_down
# 728 "data/maps/ResortArena/scripts.pory"
	delay_16
# 728 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 733 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_9:
# 733 "data/maps/ResortArena/scripts.pory"
	walk_left
# 733 "data/maps/ResortArena/scripts.pory"
	walk_left
# 733 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 734 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_10:
# 734 "data/maps/ResortArena/scripts.pory"
	walk_left
# 734 "data/maps/ResortArena/scripts.pory"
	walk_down
# 734 "data/maps/ResortArena/scripts.pory"
	walk_down
# 734 "data/maps/ResortArena/scripts.pory"
	walk_down
# 734 "data/maps/ResortArena/scripts.pory"
	walk_down
# 734 "data/maps/ResortArena/scripts.pory"
	walk_down
# 734 "data/maps/ResortArena/scripts.pory"
	walk_down
# 734 "data/maps/ResortArena/scripts.pory"
	walk_down
	step_end

# 751 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_0:
# 751 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 752 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_1:
# 752 "data/maps/ResortArena/scripts.pory"
	face_right
# 752 "data/maps/ResortArena/scripts.pory"
	delay_16
# 752 "data/maps/ResortArena/scripts.pory"
	delay_16
# 752 "data/maps/ResortArena/scripts.pory"
	delay_16
# 752 "data/maps/ResortArena/scripts.pory"
	face_up
# 752 "data/maps/ResortArena/scripts.pory"
	delay_16
# 752 "data/maps/ResortArena/scripts.pory"
	delay_16
# 752 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 753 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_2:
# 753 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 753 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 753 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 753 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
	step_end

# 773 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_3:
# 773 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_right
# 773 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_right
# 773 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_right
	step_end

# 774 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_4:
# 774 "data/maps/ResortArena/scripts.pory"
	delay_16
# 774 "data/maps/ResortArena/scripts.pory"
	face_up
# 774 "data/maps/ResortArena/scripts.pory"
	delay_16
# 774 "data/maps/ResortArena/scripts.pory"
	delay_16
# 774 "data/maps/ResortArena/scripts.pory"
	delay_16
# 774 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 775 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_5:
# 775 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 775 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 775 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 775 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 775 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 796 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_0:
# 796 "data/maps/ResortArena/scripts.pory"
	face_down
# 796 "data/maps/ResortArena/scripts.pory"
	delay_16
# 796 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 797 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_1:
# 797 "data/maps/ResortArena/scripts.pory"
	face_up
# 797 "data/maps/ResortArena/scripts.pory"
	delay_16
# 797 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 819 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_2:
# 819 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 819 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 819 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 819 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 819 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 820 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_3:
# 820 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 820 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 820 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 820 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 821 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_4:
# 821 "data/maps/ResortArena/scripts.pory"
	face_up
# 821 "data/maps/ResortArena/scripts.pory"
	delay_8
# 821 "data/maps/ResortArena/scripts.pory"
	face_right
# 821 "data/maps/ResortArena/scripts.pory"
	delay_8
# 821 "data/maps/ResortArena/scripts.pory"
	face_down
# 821 "data/maps/ResortArena/scripts.pory"
	delay_8
# 821 "data/maps/ResortArena/scripts.pory"
	face_left
# 821 "data/maps/ResortArena/scripts.pory"
	delay_8
# 821 "data/maps/ResortArena/scripts.pory"
	face_up
# 821 "data/maps/ResortArena/scripts.pory"
	delay_8
# 821 "data/maps/ResortArena/scripts.pory"
	face_right
# 821 "data/maps/ResortArena/scripts.pory"
	delay_8
# 821 "data/maps/ResortArena/scripts.pory"
	face_down
# 821 "data/maps/ResortArena/scripts.pory"
	delay_8
# 821 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 843 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_0:
# 843 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 843 "data/maps/ResortArena/scripts.pory"
	face_down
# 843 "data/maps/ResortArena/scripts.pory"
	delay_16
# 843 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 844 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_1:
# 844 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 844 "data/maps/ResortArena/scripts.pory"
	face_up
# 844 "data/maps/ResortArena/scripts.pory"
	delay_16
# 844 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 845 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_2:
# 845 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 845 "data/maps/ResortArena/scripts.pory"
	walk_up
# 845 "data/maps/ResortArena/scripts.pory"
	walk_down
# 845 "data/maps/ResortArena/scripts.pory"
	walk_down
# 845 "data/maps/ResortArena/scripts.pory"
	walk_up
# 845 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 866 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_3:
# 866 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 866 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 866 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
	step_end

# 868 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_4:
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 868 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
	step_end

# 890 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_0:
# 890 "data/maps/ResortArena/scripts.pory"
	face_up
# 890 "data/maps/ResortArena/scripts.pory"
	delay_16
# 890 "data/maps/ResortArena/scripts.pory"
	face_down
# 890 "data/maps/ResortArena/scripts.pory"
	delay_16
# 890 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 892 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_1:
# 892 "data/maps/ResortArena/scripts.pory"
	jump_up
# 892 "data/maps/ResortArena/scripts.pory"
	jump_down
# 892 "data/maps/ResortArena/scripts.pory"
	jump_down
# 892 "data/maps/ResortArena/scripts.pory"
	jump_up
# 892 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 913 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_2:
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 913 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 915 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_3:
# 915 "data/maps/ResortArena/scripts.pory"
	face_right
# 915 "data/maps/ResortArena/scripts.pory"
	delay_16
# 915 "data/maps/ResortArena/scripts.pory"
	delay_16
# 915 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 915 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 915 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 915 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
	step_end

# 1091 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_ForfeitConfirmation_Movement_0:
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1091 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 1093 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_ForfeitConfirmation_Movement_1:
# 1093 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1093 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1093 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1093 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1093 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1093 "data/maps/ResortArena/scripts.pory"
	walk_down
	step_end

# 1094 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_ForfeitConfirmation_Movement_2:
# 1094 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1094 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1094 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1094 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1094 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1094 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1094 "data/maps/ResortArena/scripts.pory"
	walk_down
	step_end

# 1183 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_0:
# 1183 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1183 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1183 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1183 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1183 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
	step_end

# 1185 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_1:
# 1185 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1185 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1185 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1185 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
	step_end

# 1186 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_2:
# 1186 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 1186 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 1186 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 1186 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 1186 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 1186 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 1187 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_3:
# 1187 "data/maps/ResortArena/scripts.pory"
	face_down
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_right
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_up
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_left
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_down
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_right
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_up
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_left
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_down
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_right
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_up
# 1187 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1187 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 1204 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_4:
# 1204 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1204 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 1204 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 1204 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 1204 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
# 1204 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 1205 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_5:
# 1205 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1205 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 1205 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 1205 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 1206 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_6:
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1206 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
	step_end

# 1252 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_7:
# 1252 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1252 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1252 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1252 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1252 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 1260 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_8:
# 1260 "data/maps/ResortArena/scripts.pory"
	walk_slow_right
# 1260 "data/maps/ResortArena/scripts.pory"
	walk_fast_left
# 1260 "data/maps/ResortArena/scripts.pory"
	walk_fast_left
	step_end

# 1261 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_9:
# 1261 "data/maps/ResortArena/scripts.pory"
	walk_slow_left
# 1261 "data/maps/ResortArena/scripts.pory"
	walk_fast_right
# 1261 "data/maps/ResortArena/scripts.pory"
	walk_fast_right
	step_end

# 1276 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_10:
# 1276 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1276 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 1276 "data/maps/ResortArena/scripts.pory"
	jump_in_place_up
# 1276 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
	step_end

# 1277 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_11:
# 1277 "data/maps/ResortArena/scripts.pory"
	jump_2_down
# 1277 "data/maps/ResortArena/scripts.pory"
	jump_2_up
# 1277 "data/maps/ResortArena/scripts.pory"
	jump_2_up
# 1277 "data/maps/ResortArena/scripts.pory"
	jump_2_down
# 1277 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 1278 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_12:
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_up
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_up
# 1278 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
	step_end

# 1284 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_13:
# 1284 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 1284 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 1289 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_14:
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_left
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_left
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1289 "data/maps/ResortArena/scripts.pory"
	walk_right
	step_end

# 1298 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_15:
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1298 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

ResortArena_EventScript_Sign_Text_0:
# 8 "data/maps/ResortArena/scripts.pory"
	.string "Newly-opened: RESORT ARENA\n"
	.string "Conquer it and win the Resort Brooch!$"

ResortArena_EventScript_CocoaCaveSign_Text_0:
# 15 "data/maps/ResortArena/scripts.pory"
	.string "Now approaching: COCOA CAVE\n"
	.string "Bubbling-hot magma boils in the depths.$"

ResortArena_EventScript_RedSqueaker_Text_0:
# 24 "data/maps/ResortArena/scripts.pory"
	.string "Our boss is interested in winning\n"
	.string "Dedede's Royal Royale.\p"
	.string "Some of us are trying to train our own\n"
	.string "Helpers, but they're tough to raise.\p"
	.string "We might be better off looking for\n"
	.string "treasure the normal way…$"

ResortArena_EventScript_Lounger_Text_0:
# 39 "data/maps/ResortArena/scripts.pory"
	.string "This resort is the epitome of the peace\n"
	.string "and quiet Dream Land is famous for.\p"
	.string "So why did the Great King deign to build\n"
	.string "an Arena right on top of it…?$"

ResortArena_EventScript_TopAudience_Text_0:
# 53 "data/maps/ResortArena/scripts.pory"
	.string "Yawn… it's a nice day to sit back and\n"
	.string "watch the sky…\p"
	.string "Hm? The Arena? Oh no, I don't care about\n"
	.string "that. I just wanted the high seats.$"

ResortArena_EventScript_TopAudience_Text_1:
# 61 "data/maps/ResortArena/scripts.pory"
	.string "Hey, congratulations on your victory!\n"
	.string "All the competitors were so cool.\p"
	.string "I think I get why the Great King is\n"
	.string "making such a big deal of this game now!$"

ResortArena_EventScript_BottomAudience_Text_0:
# 82 "data/maps/ResortArena/scripts.pory"
	.string "Hmf… I don't get what's so special\n"
	.string "about these Arenas.\p"
	.string "Do your best not to bore me with some\n"
	.string "yawn-inducing battles. Is that clear?$"

ResortArena_EventScript_BottomAudience_Text_1:
# 90 "data/maps/ResortArena/scripts.pory"
	.string "Hm hm hm… a ha ha ha!\p"
	.string "You're more capable than I thought…\n"
	.string "Maybe there's hope for the Arenas yet.$"

ResortArena_EventScript_BlueSqueaker_Text_0:
# 110 "data/maps/ResortArena/scripts.pory"
	.string "Ooh, that's a very shiny Brooch!\n"
	.string "You're aiming for a second, aren't you?\p"
	.string "Well, you better be careful! Our group's\n"
	.string "leader is one tough foe!\p"
	.string "He loves shiny, sparkly, gem-like\n"
	.string "Helpers! Squeak!$"

ResortArena_EventScript_BlueSqueaker_Text_1:
# 121 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! You really beat our boss!\n"
	.string "Now you've got two Brooches.\p"
	.string "It's tempting to take them, but…\n"
	.string "we're honorable thieves.\p"
	.string "You deserve that Brooch you worked\n"
	.string "so hard to earn!$"

ResortArena_EventScript_Delivery_Text_0:
# 143 "data/maps/ResortArena/scripts.pory"
	.string "My apologies. I can only offer my\n"
	.string "services to registered resort guests.\p"
	.string "You wish to know when you may book\n"
	.string "a room? Yes, I can check for you.\p"
	.string "Just give me a few years to scroll\n"
	.string "through the waitlist…$"

ResortArena_EventScript_GreenSqueaker_Text_0:
# 160 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! Hello! Looking for treasure?\p"
	.string "Sadly, I've got nothing of the sort!\n"
	.string "Nope! I'm not hiding anything!$"

ResortArena_EventScript_GreenSqueaker_Text_1:
# 167 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! Hello! Looking for treasure?\p"
	.string "Sadly, I've got nothing of the sort!\n"
	.string "Nope! I'm not hiding… huh?\p"
	.string "Hey! Where'd my treasure go?\n"
	.string "Did somebody take it from me!?$"

ResortArena_EventScript_YellowSqueaker_Text_0:
# 182 "data/maps/ResortArena/scripts.pory"
	.string "I bet if I could get this boat to water,\n"
	.string "I would be able to sail off on it.\p"
	.string "Then, I bet I might be able to find\n"
	.string "islands full of hidden treasure!\p"
	.string "There's just one problem…\n"
	.string "How am I going to haul this boat?\p"
	.string "Squeak… it's way too heavy!\n"
	.string "I should just learn to swim…$"

ResortArena_EventScript_WaddleDee_Text_0:
# 200 "data/maps/ResortArena/scripts.pory"
	.string "The way folks here operate, you'd think\n"
	.string "they were actually Noddies.\p"
	.string "I've never met such a slow-going group.\n"
	.string "Resort life does that to you, huh?$"

ResortArena_EventScript_Conductor_Text_0:
# 212 "data/maps/ResortArena/scripts.pory"
	.string "Not many ships come this way, but I\n"
	.string "still man the lighthouse every day.\l"
	.string "Preventative measures are important!$"

ResortArena_EventScript_CaveGuardian_Text_0:
# 222 "data/maps/ResortArena/scripts.pory"
	.string "This is the entrance to Cocoa Cave.\n"
	.string "It's hot, dark, hot, dangerous…\l"
	.string "oh, and did I mention it's hot?\p"
	.string "You don't want to go in there, trust\n"
	.string "me. Just enjoy the resort, alright?$"

ResortArena_EventScript_Aide_Text_0:
# 235 "data/maps/ResortArena/scripts.pory"
	.string "Hello, Kirby!\n"
	.string "I'm a researcher from Waddle Dee Town.\p"
	.string "The Great King has sent me here to\n"
	.string "take a look at your Info Card Binder.\p"
	.string "Specifically, we're hoping to see that\n"
	.string "you've recruited at least {COLOR RED}15{COLOR DARK_GRAY} Helpers.\p"
	.string "Now then, may I see your binder?$"

ResortArena_EventScript_AideSuccess_Text_0:
# 261 "data/maps/ResortArena/scripts.pory"
	.string "Wonderful! You've already registered\n"
	.string "{STR_VAR_2} Helpers so far!\p"
	.string "As a reward for your due diligence,\n"
	.string "I have here a care package for you.\p"
	.string "Please, go ahead and open it!$"

ResortArena_EventScript_AideSuccess_Text_1:
# 272 "data/maps/ResortArena/scripts.pory"
	.string "Of particular note is a new tool made\n"
	.string "at the lab: the Experience Share.\p"
	.string "This tool simplifies training Helpers by\n"
	.string "giving experience to your whole party.\l"
	.string "You can turn it on and off as needed.\p"
	.string "The Royal Royale wasn't built with it in\n"
	.string "mind, so your mileage may vary…\l"
	.string "but hopefully it serves you well!\p"
	.string "Now then, I must report the good news\n"
	.string "to the Great King. Carry on!$"

ResortArena_EventScript_AideFailure_Text_0:
# 297 "data/maps/ResortArena/scripts.pory"
	.string "Hm… it seems you've only registered\n"
	.string "{STR_VAR_2} Helpers so far.\l"
	.string "The Great King will be most displeased.\p"
	.string "I'm sorry, but I can't return like this.\p"
	.string "Could I ask you to return once you've\n"
	.string "recruited at least {COLOR RED}15{COLOR DARK_GRAY} Helpers?$"

ResortArena_EventScript_MoveTutor_Text_0:
# 314 "data/maps/ResortArena/scripts.pory"
	.string "I'm a movesmith. I know all sorts of\n"
	.string "long-forgotten techniques.\p"
	.string "What I'm looking for… is a commander\n"
	.string "of Helpers that can wield my power.\p"
	.string "Do you have what it takes to spark\n"
	.string "the fire kindling in my heart?$"

ResortArena_EventScript_MoveTutor_Text_1:
# 325 "data/maps/ResortArena/scripts.pory"
	.string "Having watched your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥500, I'll train\n"
	.string "them these new techniques.\p"
	.string "What do you say?\n"
	.string "Which move are you interested in?\p"
	.string "…is what I would ask, but I need\n"
	.string "more time. Come back much later.$"

ResortArena_EventScript_Courtship_Text_0:
# 347 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_DAROACH}Ladies, ladies! Please, one at a time!\p"
	.string "My purloining claws can only steal so\n"
	.string "many hearts at once, you know…?$"

ResortArena_EventScript_Courtship_Text_1:
# 357 "data/maps/ResortArena/scripts.pory"
	.string "Eeeeee! Oh, Daroach……! {EMOJI_HEART}{EMOJI_HEART}{EMOJI_HEART}$"

ResortArena_EventScript_Socialite_Text_0:
# 371 "data/maps/ResortArena/scripts.pory"
	.string "You may be stronger than Daroach,\n"
	.string "but you'll never be as suave.\p"
	.string "Sigh… Daroach… {EMOJI_HEART}$"

ResortArena_EventScript_ParasolLady_Text_0:
# 389 "data/maps/ResortArena/scripts.pory"
	.string "So you beat Daroach at the Arena, huh?\n"
	.string "Maybe I should be your fan instead.\p"
	.string "What do you say? Any room in your\n"
	.string "party for a gal like me? {EMOJI_HEART}$"

ResortArena_EventScript_Lass_Text_0:
# 408 "data/maps/ResortArena/scripts.pory"
	.string "I'm over Daroach. I found a new love…\p"
	.string "Why, it's the muscle of the Squeaks,\n"
	.string "Storo!\p"
	.string "Who needs brains when you've got all\n"
	.string "that brawn? {EMOJI_HEART}$"

ResortArena_EventScript_Daroach_Text_0:
# 433 "data/maps/ResortArena/scripts.pory"
	.string "I've underestimated you, my friend.\n"
	.string "You may have what it takes…\p"
	.string "Here, as a sign of good will, let me\n"
	.string "impart a little something onto you.$"

ResortArena_EventScript_Daroach_Text_1:
# 439 "data/maps/ResortArena/scripts.pory"
	.string "Power Gem is my personal favorite move.\n"
	.string "Simple, effective, and flashy! \p"
	.string "By the way, I have a tip you might want\n"
	.string "to hear about…\p"
	.string "As it happens, I recently came across a\n"
	.string "message in a bottle on the shore here.\p"
	.string "A request for help seeking a precious\n"
	.string "lost item, by a familiar fishy friend…\p"
	.string "Normally I would take such matters into\n"
	.string "my own claws, but I believe you would\l"
	.string "be better off looking into it yourself.\p"
	.string "The correspondent is awaiting on the\n"
	.string "other side of Cocoa Cave.\p"
	.string "Don't worry! I'll arrange for the path\n"
	.string "to be made clear for you…\p"
	.string "Now go on! It's time for your own\n"
	.string "treasure hunt to unfold!$"

ResortArena_EventScript_Daroach_Text_2:
# 472 "data/maps/ResortArena/scripts.pory"
	.string "Power Gem is my personal favorite move.\n"
	.string "Simple, effective, and flashy!$"

ResortArena_EventScript_Daroach_Text_3:
# 481 "data/maps/ResortArena/scripts.pory"
	.string "By the way, I have a tip you might want\n"
	.string "to hear about…\p"
	.string "As it happens, I recently came across a\n"
	.string "message in a bottle on the shore here.\p"
	.string "A request for help seeking a precious\n"
	.string "lost item, by a familiar fishy friend…\p"
	.string "Normally I would take such matters into\n"
	.string "my own claws, but I believe you would\l"
	.string "be better off looking into it yourself.\p"
	.string "The correspondent is awaiting on the\n"
	.string "other side of Cocoa Cave.\p"
	.string "Don't worry! I'll arrange for the path\n"
	.string "to be made clear for you…\p"
	.string "Now go on! It's time for your own\n"
	.string "treasure hunt to unfold!$"

ResortArena_EventScript_Daroach_Text_4:
# 505 "data/maps/ResortArena/scripts.pory"
	.string "My most esteemed cohorts are searching\n"
	.string "for clues on various Big Boss Helpers.\p"
	.string "And the little ones are looking for\n"
	.string "sunken treasure at the beach…\p"
	.string "As for me? I think I shall stay a\n"
	.string "while longer yet at the resort.\p"
	.string "The sea breeze is good for my fur,\n"
	.string "and I have many a confidant to make…$"

ResortArena_EventScript_Commentator_Text_0:
# 528 "data/maps/ResortArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "Daroach was a sneaky foe, but you\n"
	.string "carved your own path to victory!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

ResortArena_EventScript_Commentator_Text_1:
# 541 "data/maps/ResortArena/scripts.pory"
	.string "Wwwwwelcome to the Resort\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

ResortArena_EventScript_Commentator_Text_2:
# 552 "data/maps/ResortArena/scripts.pory"
	.string "Next up: grand finals!\n"
	.string "Are you prepared for the last battle?$"

ResortArena_EventScript_CommentatorChoice_Text_0:
# 571 "data/maps/ResortArena/scripts.pory"
	.string "Today's challenge: a mild stroll!\n"
	.string "How can I help you?$"

ResortArena_EventScript_CommentatorBye_Text_0:
# 591 "data/maps/ResortArena/scripts.pory"
	.string "When you're ready for the grand finals,\n"
	.string "you know the Waddle Dee to talk to!$"

ResortArena_EventScript_CommentatorBye_Text_1:
# 596 "data/maps/ResortArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

ResortArena_EventScript_CommentatorInfo_Text_0:
# 604 "data/maps/ResortArena/scripts.pory"
	.string "Arenas host gauntlet-styled\n"
	.string "tournaments of Helper battles.\p"
	.string "Eager challengers are first pooled into\n"
	.string "a preliminary bracket. Win more battles\l"
	.string "to climb up the ranks!\p"
	.string "In between bouts, leaders are offered\n"
	.string "the chance to rest their Helpers…\p"
	.string "But beware! You only get a limited\n"
	.string "number of heals per attempt!\p"
	.string "In this Arena, you'll have to survive\n"
	.string "{COLOR BLUE}5 rounds{COLOR DARK_GRAY} with {COLOR RED}2 full-party heals{COLOR DARK_GRAY}.\p"
	.string "If you top the preliminary bracket,\n"
	.string "you'll be entered into grand finals!\p"
	.string "You'll have the chance to adjust your\n"
	.string "team and save before the last fight.\p"
	.string "Defeat the final opponent, and you'll\n"
	.string "be awarded one Resort Brooch!\p"
	.string "Now then…$"

ResortArena_EventScript_BeginChallenge_Text_0:
# 635 "data/maps/ResortArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

ResortArena_EventScript_BeginChallenge_Text_1:
# 668 "data/maps/ResortArena/scripts.pory"
	.string "Welcome, one and all, to the tropical  \n"
	.string "Resort Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Including a Waddle Dee Arena champion…\l"
	.string "It's the mighty marshmallow, Kirbyyy!!!$"

ResortArena_EventScript_BeginChallenge_Text_2:
# 677 "data/maps/ResortArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "Kirby has returned to the stage for\n"
	.string "another shot at the Resort Brooch!\l"
	.string "Will he see it through this time?$"

ResortArena_EventScript_Challenger1_Text_0:
# 694 "data/maps/ResortArena/scripts.pory"
	.string "Let's have our first challenger, please!$"

ResortArena_EventScript_Challenger1_Text_1:
# 709 "data/maps/ResortArena/scripts.pory"
	.string "Oh dear… I wasn't expecting such a\n"
	.string "strong-looking challenger today…$"

ResortArena_EventScript_Challenger1_Text_2:
# 714 "data/maps/ResortArena/scripts.pory"
	.string "You… you humiliated me last time!\n"
	.string "Now, I'll humiliate you in turn!$"

ResortArena_EventScript_Challenger1_Text_3:
# 724 "data/maps/ResortArena/scripts.pory"
	.string "Is this the start of another sweep?\n"
	.string "Kirby takes the first win!$"

ResortArena_EventScript_Challenger2_Text_0:
# 748 "data/maps/ResortArena/scripts.pory"
	.string "Challenger number two, step right up!$"

ResortArena_EventScript_Challenger2_Text_1:
# 761 "data/maps/ResortArena/scripts.pory"
	.string "Squeak squeak!$"

ResortArena_EventScript_Challenger2_Text_2:
# 769 "data/maps/ResortArena/scripts.pory"
	.string "He's barely breaking a sweat!\n"
	.string "Kirby has scored a second victory!$"

ResortArena_EventScript_Challenger3_Text_0:
# 793 "data/maps/ResortArena/scripts.pory"
	.string "Give it up for challenger number three!$"

ResortArena_EventScript_Challenger3_Text_1:
# 806 "data/maps/ResortArena/scripts.pory"
	.string "My battalion of bugs has what it takes\n"
	.string "to get us a Resort Brooch!$"

ResortArena_EventScript_Challenger3_Text_2:
# 815 "data/maps/ResortArena/scripts.pory"
	.string "The stakes are climbing ever higher!\n"
	.string "Kirby nets his third victory!$"

ResortArena_EventScript_Challenger4_Text_0:
# 840 "data/maps/ResortArena/scripts.pory"
	.string "You're up next, challenger number four!$"

ResortArena_EventScript_Challenger4_Text_1:
# 853 "data/maps/ResortArena/scripts.pory"
	.string "If I beat you in a battle, can you help\n"
	.string "me get out of this raft?$"

ResortArena_EventScript_Challenger4_Text_2:
# 862 "data/maps/ResortArena/scripts.pory"
	.string "The stakes are steadily climbing!\n"
	.string "Kirby has gone up to four wins!$"

ResortArena_EventScript_Challenger5_Text_0:
# 887 "data/maps/ResortArena/scripts.pory"
	.string "Everyone welcome our final challenger!$"

ResortArena_EventScript_Challenger5_Text_1:
# 900 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! This one's for the boss!$"

ResortArena_EventScript_Challenger5_Text_2:
# 908 "data/maps/ResortArena/scripts.pory"
	.string "What an amazing battle! Kirby has swept\n"
	.string "the preliminary bracket!!$"

ResortArena_EventScript_Challenger5_Text_3:
# 924 "data/maps/ResortArena/scripts.pory"
	.string "All that's left now is the grand finals!\p"
	.string "Now that you've conquered the bracket,\n"
	.string "your options have changed slightly.\p"
	.string "We'll give you a complimentary\n"
	.string "full-party heal if you choose {COLOR RED}HEAL{COLOR DARK_GRAY}.\p"
	.string "Alternatively, choose {COLOR RED}RETIRE{COLOR DARK_GRAY} if you\n"
	.string "want to take a break and save first.\p"
	.string "Don't worry! Talk to me again, and we'll\n"
	.string "set up the grand finals immediately.\p"
	.string "Of course, if you're feeling confident,\n"
	.string "we can get started right now!$"

ResortArena_EventScript_Break_Text_0:
# 952 "data/maps/ResortArena/scripts.pory"
	.string "There's four more rounds to go.\n"
	.string "Are you ready for the next battle?$"

ResortArena_EventScript_Break_Text_1:
# 957 "data/maps/ResortArena/scripts.pory"
	.string "There's still three rounds to go.\n"
	.string "Are you ready for the next battle?$"

ResortArena_EventScript_Break_Text_2:
# 962 "data/maps/ResortArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

ResortArena_EventScript_Break_Text_3:
# 967 "data/maps/ResortArena/scripts.pory"
	.string "The last battle in the preliminary\n"
	.string "bracket awaits! Are you prepared?$"

ResortArena_EventScript_Break_Text_4:
# 972 "data/maps/ResortArena/scripts.pory"
	.string "Now then, Kirby: the grand finals await!\n"
	.string "Are you ready for the TRUE final bout?$"

ResortArena_EventScript_ArenaHeal_Text_0:
# 1018 "data/maps/ResortArena/scripts.pory"
	.string "You have {COLOR RED}two full-party heals{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use one now?$"

ResortArena_EventScript_ArenaHeal_Text_1:
# 1023 "data/maps/ResortArena/scripts.pory"
	.string "You have {COLOR RED}one full-party heal{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use it now?$"

ResortArena_EventScript_ArenaHeal_Text_2:
# 1032 "data/maps/ResortArena/scripts.pory"
	.string "Your party has been fully healed!$"

ResortArena_EventScript_ArenaHeal_Text_3:
# 1044 "data/maps/ResortArena/scripts.pory"
	.string "Unfortunately, you've already used up\n"
	.string "all of your heals, Kirby.\p"
	.string "You'll have to tough out the remaining\n"
	.string "battles with your party as they are!$"

ResortArena_EventScript_ArenaHeal_Text_4:
# 1054 "data/maps/ResortArena/scripts.pory"
	.string "You already healed up this round, Kirby!\n"
	.string "If you have any heals remaining,\l"
	.string "let's save them for future rounds, OK?$"

ResortArena_EventScript_ArenaHeal_Text_5:
# 1062 "data/maps/ResortArena/scripts.pory"
	.string "Alright, one complimentary full-party\n"
	.string "heal for our pink warrior, coming up!$"

ResortArena_EventScript_ForfeitConfirmation_Text_0:
# 1077 "data/maps/ResortArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!\p"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

ResortArena_EventScript_ForfeitConfirmation_Text_1:
# 1087 "data/maps/ResortArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

ResortArena_EventScript_ForfeitConfirmation_Text_2:
# 1106 "data/maps/ResortArena/scripts.pory"
	.string "Alright, folks! Stay tuned! The grand\n"
	.string "finals will begin after a short break!$"

ResortArena_EventScript_GrandFinals_Text_0:
# 1158 "data/maps/ResortArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, a leader-in-the-making\n"
	.string "looking for a second Brooch…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

ResortArena_EventScript_GrandFinals_Text_1:
# 1171 "data/maps/ResortArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, a valiant soul who won't\n"
	.string "back down after suffering defeat…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

ResortArena_EventScript_GrandFinals_Text_2:
# 1192 "data/maps/ResortArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who made it to grand finals!\p"
	.string "He's the rougish leader of a band of\n"
	.string "mousy misfits, always seeking riches…\p"
	.string "Now, this treasure hunter has his eye\n"
	.string "on the Royal Royale's ultimate prize!\p"
	.string "Everyone welcome {COLOR RED}Daroach{COLOR DARK_GRAY} to the stage!$"

ResortArena_EventScript_GrandFinals_Text_3:
# 1215 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_DAROACH}Good to see you, my little friend!\p"
	.string "Of course my Squeakers have told me all\n"
	.string "about you; Kirby, the intrepid traveler\l"
	.string "who's interrupting our treasure hunt.\p"
	.string "Alas, hunting for treasure is what we\n"
	.string "Squeaks do best, and there's a big prize\l"
	.string "awaiting us at the end of this game.\p"
	.string "The one who shall inherit King Dedede's\n"
	.string "throne will be me!\p"
	.string "Watch yourself, Kirby! Here I come!$"

ResortArena_EventScript_GrandFinals_Text_4:
# 1232 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_DAROACH}Let me teach you a little something,\n"
	.string "my good friend…\p"
	.string "When you steal a treasure, you often\n"
	.string "find those who wish to claim it back.\p"
	.string "They will try, again and again, to\n"
	.string "get in the way of you and your prize.\p"
	.string "You must be thorough, snuffing out\n"
	.string "every last hope of retaliation.\p"
	.string "Do you see where I'm getting at now?\p"
	.string "The Royal Royale's treasure is mine,\n"
	.string "Kirby. I will NOT let you have it!\p"
	.string "Now, let's duel! Winner take all!$"

ResortArena_EventScript_GrandFinals_Text_5:
# 1253 "data/maps/ResortArena/scripts.pory"
	.string "It's come down to Kirby vs. Daroach!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

ResortArena_EventScript_GrandFinals_Text_6:
# 1267 "data/maps/ResortArena/scripts.pory"
	.string "Folks… this is one battle to treasure.\n"
	.string "The winner of this Resort Arena rumble…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

ResortArena_EventScript_GrandFinals_Text_7:
# 1280 "data/maps/ResortArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

ResortArena_EventScript_GrandFinals_Text_8:
# 1286 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_DAROACH}For every winner, there is a loser…\n"
	.string "Well, it's time to make my retreat.$"

ResortArena_EventScript_Victory_Text_0:
# 1314 "data/maps/ResortArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Resort Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Resort Brooch!$"

ResortArena_EventScript_Victory_Text_1:
# 1319 "data/maps/ResortArena/scripts.pory"
	.string "Kirby received the Resort Brooch\n"
	.string "from Commentator Waddle Dee!$"

ResortArena_EventScript_Victory_Text_2:
# 1324 "data/maps/ResortArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I'm sure we'll see each other again\n"
	.string "at the next Arena. Until then!$"

ResortArena_Text_Challenger1::
# 741 "data/maps/ResortArena/scripts.pory"
	.string "Shudder… how barbaric!$"

ResortArena_Text_Challenger2::
# 786 "data/maps/ResortArena/scripts.pory"
	.string "Squeak squeak squeak…$"

ResortArena_Text_Challenger3::
# 832 "data/maps/ResortArena/scripts.pory"
	.string "I thought I could prove type\n"
	.string "diversity didn't matter…$"

ResortArena_Text_Challenger4::
# 879 "data/maps/ResortArena/scripts.pory"
	.string "I got stuck in my raft, so now I've\n"
	.string "got to row myself everywhere…$"

ResortArena_Text_Challenger5::
# 943 "data/maps/ResortArena/scripts.pory"
	.string "Boss! It's up to you now! Squeak!$"

ResortArena_Text_Daroach::
# 1307 "data/maps/ResortArena/scripts.pory"
	.string "It seems I've been bested…$"
