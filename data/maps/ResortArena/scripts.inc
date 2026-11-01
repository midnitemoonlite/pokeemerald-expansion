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
	turnobject LOCALID_RESORT_CROWD_1, DIR_SOUTH
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
	turnobject LOCALID_RESORT_CROWD_2, DIR_SOUTH
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
	giveitem_msg WaddleDeeTown_Lab_ReceivedHelperBoxLink, ITEM_POKEMON_BOX_LINK, 1, MUS_RG_OBTAIN_KEY_ITEM
# 269 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_TM09
# 270 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 271 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_DIVE_BALL, 10
# 272 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideSuccess_Text_1
# 283 "data/maps/ResortArena/scripts.pory"
	closemessage
# 284 "data/maps/ResortArena/scripts.pory"
	playse SE_EXIT
# 285 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 286 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_BINDER_GATE_02
# 287 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_AIDE
# 288 "data/maps/ResortArena/scripts.pory"
	delay 30
# 289 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 290 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_AideFailure::
# 295 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideFailure_Text_0
# 303 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Courtship::
# 308 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_Courtship_Movement_0
# 309 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 310 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Courtship_Text_0
# 314 "data/maps/ResortArena/scripts.pory"
	closemessage
# 315 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_1, ResortArena_EventScript_Courtship_Movement_1
# 316 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_2, ResortArena_EventScript_Courtship_Movement_1
# 317 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_3, ResortArena_EventScript_Courtship_Movement_1
# 318 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 319 "data/maps/ResortArena/scripts.pory"
	delay 8
# 320 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Courtship_Text_1
# 321 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Socialite::
# 326 "data/maps/ResortArena/scripts.pory"
	lock
# 327 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Socialite_1
# 333 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 334 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Socialite_Text_0
# 338 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Socialite_1:
# 329 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_ParasolLady::
# 344 "data/maps/ResortArena/scripts.pory"
	lock
# 345 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_ParasolLady_1
# 351 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 352 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ParasolLady_Text_0
# 357 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_ParasolLady_1:
# 347 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_Lass::
# 363 "data/maps/ResortArena/scripts.pory"
	lock
# 364 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Lass_1
# 370 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 371 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Lass_Text_0
# 378 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Lass_1:
# 366 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_Daroach::
# 384 "data/maps/ResortArena/scripts.pory"
	lock
# 385 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Daroach_2
ResortArena_EventScript_Daroach_1:
# 389 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ResortArena_EventScript_Daroach_4
	return

ResortArena_EventScript_Daroach_2:
# 387 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	goto ResortArena_EventScript_Daroach_1

ResortArena_EventScript_Daroach_4:
# 391 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 392 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, ResortArena_EventScript_Daroach_7
# 442 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_FOUND_KINE, ResortArena_EventScript_Daroach_14
# 468 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_4
ResortArena_EventScript_Daroach_6:
# 481 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Daroach_7:
# 394 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_FOUND_KINE, ResortArena_EventScript_Daroach_11
# 429 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_0
# 434 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_TM73
# 435 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_2
ResortArena_EventScript_Daroach_10:
# 438 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
	goto ResortArena_EventScript_Daroach_6

ResortArena_EventScript_Daroach_11:
# 396 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_0
# 401 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_TM73
# 402 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_1
	goto ResortArena_EventScript_Daroach_10

ResortArena_EventScript_Daroach_14:
# 444 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Daroach_Text_3
	goto ResortArena_EventScript_Daroach_6


ResortArena_EventScript_Commentator::
# 487 "data/maps/ResortArena/scripts.pory"
	lock
# 488 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 489 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ResortArena_EventScript_Commentator_2
# 500 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Commentator_3
ResortArena_EventScript_Commentator_1:
# 529 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_Commentator_2:
# 491 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Commentator_Text_0
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_3:
# 502 "data/maps/ResortArena/scripts.pory"
	lock
# 503 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 504 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Commentator_Text_1
# 509 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_Commentator_6
# 513 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_Commentator_7
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_6:
# 511 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorChoice
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_7:
# 515 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Commentator_Text_2, MSGBOX_YESNO
# 517 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ResortArena_EventScript_Commentator_10
# 522 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_EventScript_Commentator_11
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_10:
# 519 "data/maps/ResortArena/scripts.pory"
	closemessage
# 520 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_GrandFinalsPreparation
	goto ResortArena_EventScript_Commentator_1

ResortArena_EventScript_Commentator_11:
# 524 "data/maps/ResortArena/scripts.pory"
	closemessage
# 525 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	goto ResortArena_EventScript_Commentator_1


ResortArena_EventScript_CommentatorChoice::
# 534 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_CommentatorChoice_Text_0
# 536 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 537 "data/maps/ResortArena/scripts.pory"
	multichoice 20, 6, MULTI_CHALLENGEINFO, FALSE
# 538 "data/maps/ResortArena/scripts.pory"
	switch VAR_RESULT
# 539 "data/maps/ResortArena/scripts.pory"
	case 0, ResortArena_EventScript_CommentatorChoice_2
# 541 "data/maps/ResortArena/scripts.pory"
	case 1, ResortArena_EventScript_CommentatorChoice_3
# 543 "data/maps/ResortArena/scripts.pory"
	case 2, ResortArena_EventScript_CommentatorChoice_4
# 545 "data/maps/ResortArena/scripts.pory"
	case MULTI_B_PRESSED, ResortArena_EventScript_CommentatorChoice_5
	return

ResortArena_EventScript_CommentatorChoice_2:
# 540 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_BeginChallenge
	return

ResortArena_EventScript_CommentatorChoice_3:
# 542 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorInfo
	return

ResortArena_EventScript_CommentatorChoice_4:
# 544 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	return

ResortArena_EventScript_CommentatorChoice_5:
# 546 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	return


ResortArena_EventScript_CommentatorBye::
# 552 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_CommentatorBye_2
# 559 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CommentatorBye_Text_1
ResortArena_EventScript_CommentatorBye_1:
# 562 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_CommentatorBye_2:
# 554 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CommentatorBye_Text_0
	goto ResortArena_EventScript_CommentatorBye_1


ResortArena_EventScript_CommentatorInfo::
# 567 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CommentatorInfo_Text_0
# 593 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorChoice
	return


ResortArena_EventScript_BeginChallenge::
# 598 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BeginChallenge_Text_0
# 600 "data/maps/ResortArena/scripts.pory"
	closemessage
# 601 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 2
# 602 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 603 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 604 "data/maps/ResortArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 605 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq ResortArena_EventScript_BeginChallenge_2
# 611 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq ResortArena_EventScript_BeginChallenge_3
# 617 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq ResortArena_EventScript_BeginChallenge_4
ResortArena_EventScript_BeginChallenge_1:
# 623 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 624 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_BeginChallenge_Movement_4
# 625 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_5
# 626 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_6
# 627 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 628 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_7
# 629 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_BeginChallenge_9
# 638 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_BeginChallenge_10
ResortArena_EventScript_BeginChallenge_8:
# 647 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 648 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_BeginChallenge_Movement_8
# 649 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_BeginChallenge_Movement_8
# 650 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_BeginChallenge_Movement_9
# 651 "data/maps/ResortArena/scripts.pory"
	delay 60
# 652 "data/maps/ResortArena/scripts.pory"
	call ResortArena_EventScript_Challenger1
	return

ResortArena_EventScript_BeginChallenge_2:
# 607 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 608 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_1
# 609 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_BeginChallenge_1

ResortArena_EventScript_BeginChallenge_3:
# 613 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 614 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_2
# 615 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_BeginChallenge_1

ResortArena_EventScript_BeginChallenge_4:
# 619 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 620 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_3
# 621 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_BeginChallenge_1

ResortArena_EventScript_BeginChallenge_9:
# 631 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BeginChallenge_Text_1
	goto ResortArena_EventScript_BeginChallenge_8

ResortArena_EventScript_BeginChallenge_10:
# 640 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BeginChallenge_Text_2
	goto ResortArena_EventScript_BeginChallenge_8


ResortArena_EventScript_Challenger1::
# 657 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_0
# 658 "data/maps/ResortArena/scripts.pory"
	closemessage
# 659 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 660 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger1_Movement_0
# 661 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger1_Movement_0
# 662 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger1_Movement_1
# 663 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_1
# 664 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_2
# 665 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 666 "data/maps/ResortArena/scripts.pory"
	delay 30
# 667 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_3
# 668 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 669 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 670 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_Challenger1_2
# 675 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_Challenger1_3
ResortArena_EventScript_Challenger1_1:
# 680 "data/maps/ResortArena/scripts.pory"
	closemessage
# 681 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 682 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_4
# 683 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_5
# 684 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 685 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 686 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSE_5, ResortArena_Text_Challenger1
# 687 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_3
# 689 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger1_Movement_6
# 690 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger1_Movement_0
# 691 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger1_Movement_7
# 692 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 693 "data/maps/ResortArena/scripts.pory"
	closemessage
# 694 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 695 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 696 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_8
# 697 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_1, ResortArena_EventScript_Challenger1_Movement_9
# 698 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 699 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 700 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_1
# 701 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_Challenger1_2:
# 672 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_1
	goto ResortArena_EventScript_Challenger1_1

ResortArena_EventScript_Challenger1_3:
# 677 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger1_Text_2
	goto ResortArena_EventScript_Challenger1_1


ResortArena_EventScript_Challenger2::
# 711 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger2_Text_0
# 712 "data/maps/ResortArena/scripts.pory"
	closemessage
# 713 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 714 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger2_Movement_0
# 715 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger2_Movement_1
# 716 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger2_Movement_2
# 717 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_2
# 718 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_2
# 719 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 720 "data/maps/ResortArena/scripts.pory"
	delay 30
# 721 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_3
# 722 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 723 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 724 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger2_Text_1
# 725 "data/maps/ResortArena/scripts.pory"
	closemessage
# 726 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 727 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_4
# 728 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_5
# 729 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 730 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 731 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_1, ResortArena_Text_Challenger2
# 732 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger2_Text_2
# 734 "data/maps/ResortArena/scripts.pory"
	closemessage
# 735 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 736 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger2_Movement_3
# 737 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger2_Movement_4
# 738 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger2_Movement_5
# 739 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 740 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 741 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_8
# 742 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_2, ResortArena_EventScript_Challenger1_Movement_9
# 743 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 744 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 745 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_2
# 746 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Challenger3::
# 756 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger3_Text_0
# 757 "data/maps/ResortArena/scripts.pory"
	closemessage
# 758 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 759 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger3_Movement_0
# 760 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger3_Movement_1
# 761 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_BeginChallenge_Movement_9
# 762 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_3
# 763 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_2
# 764 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 765 "data/maps/ResortArena/scripts.pory"
	delay 30
# 766 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_3
# 767 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 768 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 769 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger3_Text_1
# 771 "data/maps/ResortArena/scripts.pory"
	closemessage
# 772 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 773 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_4
# 774 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_5
# 775 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 776 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 777 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_CHIP, ResortArena_Text_Challenger3
# 778 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger3_Text_2
# 780 "data/maps/ResortArena/scripts.pory"
	closemessage
# 781 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 782 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger3_Movement_2
# 783 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger3_Movement_3
# 784 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger3_Movement_4
# 785 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 3
# 786 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 787 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_8
# 788 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_3, ResortArena_EventScript_Challenger1_Movement_9
# 789 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 790 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 791 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_3
# 792 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Challenger4::
# 803 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger4_Text_0
# 804 "data/maps/ResortArena/scripts.pory"
	closemessage
# 805 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 806 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger4_Movement_0
# 807 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger4_Movement_1
# 808 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger4_Movement_2
# 809 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_4
# 810 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_2
# 811 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 812 "data/maps/ResortArena/scripts.pory"
	delay 30
# 813 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_3
# 814 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 815 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 816 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger4_Text_1
# 818 "data/maps/ResortArena/scripts.pory"
	closemessage
# 819 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 820 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_4
# 821 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_5
# 822 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 823 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 824 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_FOSTER, ResortArena_Text_Challenger4
# 825 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger4_Text_2
# 827 "data/maps/ResortArena/scripts.pory"
	closemessage
# 828 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 829 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger4_Movement_3
# 830 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger3_Movement_2
# 831 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger4_Movement_4
# 832 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 4
# 833 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 834 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_8
# 835 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_4, ResortArena_EventScript_Challenger1_Movement_9
# 836 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 837 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 838 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_4
# 839 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Challenger5::
# 850 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_0
# 851 "data/maps/ResortArena/scripts.pory"
	closemessage
# 852 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 853 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger5_Movement_0
# 854 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger5_Movement_0
# 855 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger5_Movement_1
# 856 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_RESORT_CHALLENGER_5
# 857 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_2
# 858 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 859 "data/maps/ResortArena/scripts.pory"
	delay 30
# 860 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_3
# 861 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 862 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 863 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_1
# 864 "data/maps/ResortArena/scripts.pory"
	closemessage
# 865 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 866 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_4
# 867 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_5
# 868 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 869 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 870 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_2, ResortArena_Text_Challenger5
# 871 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_2
# 873 "data/maps/ResortArena/scripts.pory"
	closemessage
# 874 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 875 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 876 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_Challenger5_Movement_2
# 877 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_Challenger4_Movement_3
# 878 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_Challenger5_Movement_3
# 879 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 5
# 880 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 881 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 882 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_Challenger1_Movement_8
# 883 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CHALLENGER_5, ResortArena_EventScript_Challenger1_Movement_9
# 884 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 885 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 886 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_CHALLENGER_5
# 887 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Challenger5_Text_3
# 903 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_Break::
# 913 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq ResortArena_EventScript_Break_2
# 918 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq ResortArena_EventScript_Break_3
# 923 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq ResortArena_EventScript_Break_4
# 928 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 4
	goto_if_eq ResortArena_EventScript_Break_5
# 933 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 5
	goto_if_eq ResortArena_EventScript_Break_6
ResortArena_EventScript_Break_1:
# 938 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 939 "data/maps/ResortArena/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, 0
# 940 "data/maps/ResortArena/scripts.pory"
	switch VAR_RESULT
# 941 "data/maps/ResortArena/scripts.pory"
	case 0, ResortArena_EventScript_Break_13
# 962 "data/maps/ResortArena/scripts.pory"
	case 1, ResortArena_EventScript_Break_14
# 964 "data/maps/ResortArena/scripts.pory"
	case 2, ResortArena_EventScript_Break_15
# 966 "data/maps/ResortArena/scripts.pory"
	case MULTI_B_PRESSED, ResortArena_EventScript_Break_16
	return

ResortArena_EventScript_Break_2:
# 915 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_0
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_3:
# 920 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_1
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_4:
# 925 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_2
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_5:
# 930 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_3
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_6:
# 935 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Break_Text_4
	goto ResortArena_EventScript_Break_1

ResortArena_EventScript_Break_13:
# 942 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq ResortArena_EventScript_Break_17
# 946 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq ResortArena_EventScript_Break_18
# 950 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq ResortArena_EventScript_Break_19
# 954 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 4
	goto_if_eq ResortArena_EventScript_Break_20
# 958 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 5
	goto_if_eq ResortArena_EventScript_Break_21
	return

ResortArena_EventScript_Break_14:
# 963 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_ArenaHeal
	return

ResortArena_EventScript_Break_15:
# 965 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_ForfeitConfirmation
	return

ResortArena_EventScript_Break_16:
# 967 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_ForfeitConfirmation
	return

ResortArena_EventScript_Break_17:
# 944 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger2
	return

ResortArena_EventScript_Break_18:
# 948 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger3
	return

ResortArena_EventScript_Break_19:
# 952 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger4
	return

ResortArena_EventScript_Break_20:
# 956 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Challenger5
	return

ResortArena_EventScript_Break_21:
# 960 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_GrandFinals
	return


ResortArena_EventScript_ArenaHeal::
# 973 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ArenaHeal_1
# 1023 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ArenaHeal_2
	return

ResortArena_EventScript_ArenaHeal_1:
# 975 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, ResortArena_EventScript_ArenaHeal_5
# 1015 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, ResortArena_EventScript_ArenaHeal_6
	return

ResortArena_EventScript_ArenaHeal_2:
# 1025 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_5
# 1027 "data/maps/ResortArena/scripts.pory"
	special HealPlayerParty
# 1028 "data/maps/ResortArena/scripts.pory"
	playse SE_USE_ITEM
# 1029 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_ArenaHeal_Text_2
# 1030 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1031 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1032 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_ArenaHeal_5:
# 977 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_HEALS, 0
	goto_if_gt ResortArena_EventScript_ArenaHeal_9
# 1007 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_3
# 1012 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_ArenaHeal_6:
# 1017 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_4
# 1020 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_ArenaHeal_9:
# 979 "data/maps/ResortArena/scripts.pory"
	compare VAR_ARENA_HEALS, 1
	goto_if_gt ResortArena_EventScript_ArenaHeal_13
# 986 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_1, MSGBOX_YESNO
ResortArena_EventScript_ArenaHeal_12:
# 989 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ResortArena_EventScript_ArenaHeal_17
ResortArena_EventScript_ArenaHeal_16:
# 1000 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_EventScript_ArenaHeal_19
	return

ResortArena_EventScript_ArenaHeal_13:
# 981 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ArenaHeal_Text_0, MSGBOX_YESNO
	goto ResortArena_EventScript_ArenaHeal_12

ResortArena_EventScript_ArenaHeal_17:
# 991 "data/maps/ResortArena/scripts.pory"
	special HealPlayerParty
# 992 "data/maps/ResortArena/scripts.pory"
	playse SE_USE_ITEM
# 993 "data/maps/ResortArena/scripts.pory"
	subvar VAR_ARENA_HEALS, 1
# 994 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 995 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_ArenaHeal_Text_2
# 996 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 997 "data/maps/ResortArena/scripts.pory"
	delay 60
# 998 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	goto ResortArena_EventScript_ArenaHeal_16

ResortArena_EventScript_ArenaHeal_19:
# 1002 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return


ResortArena_EventScript_ForfeitConfirmation::
# 1038 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ForfeitConfirmation_1
# 1068 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, ResortArena_EventScript_ForfeitConfirmation_2
	return

ResortArena_EventScript_ForfeitConfirmation_1:
# 1040 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ForfeitConfirmation_Text_0
# 1045 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_ForfeitConfirmation_Text_1
# 1047 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1048 "data/maps/ResortArena/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, WaddleDeeArena_Text_ToughItOut, WaddleDeeArena_Text_AcceptDefeat
# 1049 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ResortArena_EventScript_ForfeitConfirmation_5
# 1065 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Break
	return

ResortArena_EventScript_ForfeitConfirmation_2:
# 1070 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ForfeitConfirmation_Text_3
# 1072 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1073 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1074 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_ForfeitConfirmation_Movement_0
# 1075 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1076 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_ForfeitConfirmation_Movement_1
# 1077 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_ForfeitConfirmation_Movement_2
# 1078 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1079 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1080 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
# 1081 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_ForfeitConfirmation_5:
# 1051 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_ForfeitConfirmation_Text_2
# 1053 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1054 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1055 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_ForfeitConfirmation_Movement_0
# 1056 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1057 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_ForfeitConfirmation_Movement_1
# 1058 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_ForfeitConfirmation_Movement_2
# 1059 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1060 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1061 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_CommentatorBye
	return


ResortArena_EventScript_GrandFinalsPreparation::
# 1087 "data/maps/ResortArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 1088 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq ResortArena_EventScript_GrandFinalsPreparation_2
# 1094 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq ResortArena_EventScript_GrandFinalsPreparation_3
# 1100 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq ResortArena_EventScript_GrandFinalsPreparation_4
ResortArena_EventScript_GrandFinalsPreparation_1:
# 1106 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1107 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_BeginChallenge_Movement_4
# 1108 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_5
# 1109 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_6
# 1110 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1111 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1112 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_GrandFinals
	return

ResortArena_EventScript_GrandFinalsPreparation_2:
# 1090 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 1091 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_1
# 1092 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GrandFinalsPreparation_1

ResortArena_EventScript_GrandFinalsPreparation_3:
# 1096 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 1097 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_2
# 1098 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GrandFinalsPreparation_1

ResortArena_EventScript_GrandFinalsPreparation_4:
# 1102 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_0
# 1103 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_BeginChallenge_Movement_3
# 1104 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GrandFinalsPreparation_1


ResortArena_EventScript_GrandFinals::
# 1117 "data/maps/ResortArena/scripts.pory"
	fadeoutbgm 1
# 1118 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_BeginChallenge_Movement_7
# 1119 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1120 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_2
# 1133 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_3
ResortArena_EventScript_GrandFinals_1:
# 1146 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1147 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_0
# 1148 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 1149 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_GrandFinals_Movement_1
# 1150 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_GrandFinals_Movement_2
# 1151 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_GrandFinals_Movement_3
# 1152 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_DAROACH
# 1153 "data/maps/ResortArena/scripts.pory"
	setobjectxyperm LOCALID_DAROACH, 25, 22
# 1154 "data/maps/ResortArena/scripts.pory"
	addobject LOCALID_DAROACH
# 1155 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1156 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_2
# 1166 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1167 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 1168 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_GrandFinals_Movement_4
# 1169 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_GrandFinals_Movement_5
# 1170 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_GrandFinals_Movement_6
# 1171 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_Challenger1_Movement_2
# 1172 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1173 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1174 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_Challenger1_Movement_3
# 1175 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1176 "data/maps/ResortArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 1177 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_7
ResortArena_EventScript_GrandFinals_6:
# 1194 "data/maps/ResortArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, ResortArena_EventScript_GrandFinals_10
ResortArena_EventScript_GrandFinals_9:
# 1215 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1216 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, ResortArena_EventScript_GrandFinals_Movement_7
# 1217 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_5
# 1221 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1222 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 1223 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1224 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_GrandFinals_Movement_8
# 1225 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_9
# 1226 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1227 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1228 "data/maps/ResortArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_3, ResortArena_Text_Daroach
# 1229 "data/maps/ResortArena/scripts.pory"
	fadeoutbgm 1
# 1230 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1231 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_6
# 1236 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1237 "data/maps/ResortArena/scripts.pory"
	playbgm MUS_B_FRONTIER, TRUE
# 1238 "data/maps/ResortArena/scripts.pory"
	playse SE_APPLAUSE
# 1239 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_1, ResortArena_EventScript_GrandFinals_Movement_10
# 1240 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_2, ResortArena_EventScript_GrandFinals_Movement_11
# 1241 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_CROWD_3, ResortArena_EventScript_GrandFinals_Movement_12
# 1242 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_13
# 1243 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1244 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_GrandFinals_Text_7
# 1245 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1246 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1247 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1248 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_GrandFinals_Movement_14
# 1249 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1250 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_8
# 1252 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1253 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_GrandFinals_Movement_15
# 1254 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1255 "data/maps/ResortArena/scripts.pory"
	setobjectxyperm LOCALID_DAROACH, 29, 21
# 1256 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1257 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 1258 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 1259 "data/maps/ResortArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 1260 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 1261 "data/maps/ResortArena/scripts.pory"
	special SpawnCameraObject
# 1262 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GrandFinals_Movement_16
# 1263 "data/maps/ResortArena/scripts.pory"
	delay 60
# 1264 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_CAMERA, ResortArena_EventScript_ForfeitConfirmation_Movement_1
# 1265 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_COMMENTATOR, ResortArena_EventScript_ForfeitConfirmation_Movement_2
# 1266 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1267 "data/maps/ResortArena/scripts.pory"
	special RemoveCameraObject
# 1268 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Victory
	return

ResortArena_EventScript_GrandFinals_2:
# 1122 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_0
	goto ResortArena_EventScript_GrandFinals_1

ResortArena_EventScript_GrandFinals_3:
# 1135 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_1
	goto ResortArena_EventScript_GrandFinals_1

ResortArena_EventScript_GrandFinals_7:
# 1179 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_3
	goto ResortArena_EventScript_GrandFinals_6

ResortArena_EventScript_GrandFinals_10:
# 1196 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GrandFinals_Text_4
	goto ResortArena_EventScript_GrandFinals_9


ResortArena_EventScript_Victory::
# 1278 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Victory_Text_0
# 1283 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_Victory_Text_1
# 1285 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1286 "data/maps/ResortArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1287 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_BADGE02_GET
# 1288 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Victory_Text_2
# 1293 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_TurnAwayFromMine::
# 1298 "data/maps/ResortArena/scripts.pory"
	lockall
# 1299 "data/maps/ResortArena/scripts.pory"
	playse SE_PIN
# 1300 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1301 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1302 "data/maps/ResortArena/scripts.pory"
	waitse
# 1303 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_TurnAwayFromMine_Text_0
# 1307 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1308 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_TurnAwayFromMine_Movement_0
# 1309 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1310 "data/maps/ResortArena/scripts.pory"
	releaseall
	return


ResortArena_EventScript_GiveMinePresent::
# 1315 "data/maps/ResortArena/scripts.pory"
	lockall
# 1316 "data/maps/ResortArena/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 1317 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_ge ResortArena_EventScript_GiveMinePresent_2
ResortArena_EventScript_GiveMinePresent_1:
# 1323 "data/maps/ResortArena/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_lt ResortArena_EventScript_GiveMinePresent_5
ResortArena_EventScript_GiveMinePresent_4:
# 1328 "data/maps/ResortArena/scripts.pory"
	playse SE_PIN
# 1329 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_MINE, Common_Movement_ExclamationMark
# 1330 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 1331 "data/maps/ResortArena/scripts.pory"
	waitse
# 1332 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GiveMinePresent_Text_0
# 1338 "data/maps/ResortArena/scripts.pory"
	checkitem ITEM_SAPPHIRE
# 1339 "data/maps/ResortArena/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ResortArena_EventScript_GiveMinePresent_8
ResortArena_EventScript_GiveMinePresent_7:
# 1343 "data/maps/ResortArena/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1344 "data/maps/ResortArena/scripts.pory"
	message ResortArena_EventScript_GiveMinePresent_Text_1
# 1346 "data/maps/ResortArena/scripts.pory"
	waitmessage
# 1347 "data/maps/ResortArena/scripts.pory"
	waitfanfare
# 1348 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GiveMinePresent_Text_2
# 1362 "data/maps/ResortArena/scripts.pory"
	closemessage
# 1363 "data/maps/ResortArena/scripts.pory"
	playse SE_EXIT
# 1364 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1365 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_MINE
# 1366 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_HIDE_MINE
# 1367 "data/maps/ResortArena/scripts.pory"
	setvar VAR_ORANGE_OCEAN_STATE, 3
# 1368 "data/maps/ResortArena/scripts.pory"
	delay 15
# 1369 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1370 "data/maps/ResortArena/scripts.pory"
	releaseall
	return

ResortArena_EventScript_GiveMinePresent_2:
# 1319 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_MINE, ResortArena_EventScript_GiveMinePresent_Movement_0
# 1320 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_PLAYER, ResortArena_EventScript_GiveMinePresent_Movement_1
# 1321 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GiveMinePresent_1

ResortArena_EventScript_GiveMinePresent_5:
# 1325 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_MINE, ResortArena_EventScript_Challenger2_Movement_0
# 1326 "data/maps/ResortArena/scripts.pory"
	waitmovement
	goto ResortArena_EventScript_GiveMinePresent_4

ResortArena_EventScript_GiveMinePresent_8:
# 1341 "data/maps/ResortArena/scripts.pory"
	removeitem ITEM_SAPPHIRE
	goto ResortArena_EventScript_GiveMinePresent_7


# 308 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Courtship_Movement_0:
# 308 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 308 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 308 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 315 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Courtship_Movement_1:
# 315 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
	step_end

# 607 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_0:
# 607 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 608 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_1:
# 608 "data/maps/ResortArena/scripts.pory"
	walk_left
# 608 "data/maps/ResortArena/scripts.pory"
	walk_down
# 608 "data/maps/ResortArena/scripts.pory"
	walk_down
# 608 "data/maps/ResortArena/scripts.pory"
	walk_right
# 608 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 614 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_2:
# 614 "data/maps/ResortArena/scripts.pory"
	walk_down
# 614 "data/maps/ResortArena/scripts.pory"
	walk_left
# 614 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 620 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_3:
# 620 "data/maps/ResortArena/scripts.pory"
	walk_down
# 620 "data/maps/ResortArena/scripts.pory"
	walk_right
# 620 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 624 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_4:
# 624 "data/maps/ResortArena/scripts.pory"
	walk_up
# 624 "data/maps/ResortArena/scripts.pory"
	walk_up
# 624 "data/maps/ResortArena/scripts.pory"
	walk_up
# 624 "data/maps/ResortArena/scripts.pory"
	walk_up
# 624 "data/maps/ResortArena/scripts.pory"
	walk_up
# 624 "data/maps/ResortArena/scripts.pory"
	walk_up
	step_end

# 625 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_5:
# 625 "data/maps/ResortArena/scripts.pory"
	walk_up
# 625 "data/maps/ResortArena/scripts.pory"
	walk_up
# 625 "data/maps/ResortArena/scripts.pory"
	walk_up
# 625 "data/maps/ResortArena/scripts.pory"
	walk_up
# 625 "data/maps/ResortArena/scripts.pory"
	walk_up
# 625 "data/maps/ResortArena/scripts.pory"
	walk_up
# 625 "data/maps/ResortArena/scripts.pory"
	walk_up
# 625 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 626 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_6:
# 626 "data/maps/ResortArena/scripts.pory"
	walk_up
# 626 "data/maps/ResortArena/scripts.pory"
	walk_up
# 626 "data/maps/ResortArena/scripts.pory"
	walk_up
# 626 "data/maps/ResortArena/scripts.pory"
	walk_up
# 626 "data/maps/ResortArena/scripts.pory"
	walk_up
# 626 "data/maps/ResortArena/scripts.pory"
	walk_up
# 626 "data/maps/ResortArena/scripts.pory"
	walk_left
# 626 "data/maps/ResortArena/scripts.pory"
	walk_left
# 626 "data/maps/ResortArena/scripts.pory"
	walk_left
# 626 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 628 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_7:
# 628 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 628 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 648 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_8:
# 648 "data/maps/ResortArena/scripts.pory"
	face_up
	step_end

# 650 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_BeginChallenge_Movement_9:
# 650 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 650 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 650 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 650 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
	step_end

# 660 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_0:
# 660 "data/maps/ResortArena/scripts.pory"
	face_down
# 660 "data/maps/ResortArena/scripts.pory"
	delay_16
# 660 "data/maps/ResortArena/scripts.pory"
	delay_16
# 660 "data/maps/ResortArena/scripts.pory"
	delay_16
# 660 "data/maps/ResortArena/scripts.pory"
	face_up
	step_end

# 662 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_1:
# 662 "data/maps/ResortArena/scripts.pory"
	face_down
# 662 "data/maps/ResortArena/scripts.pory"
	delay_16
# 662 "data/maps/ResortArena/scripts.pory"
	delay_8
# 662 "data/maps/ResortArena/scripts.pory"
	face_left
# 662 "data/maps/ResortArena/scripts.pory"
	delay_16
# 662 "data/maps/ResortArena/scripts.pory"
	delay_8
# 662 "data/maps/ResortArena/scripts.pory"
	face_down
# 662 "data/maps/ResortArena/scripts.pory"
	delay_16
# 662 "data/maps/ResortArena/scripts.pory"
	delay_8
# 662 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 664 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_2:
# 664 "data/maps/ResortArena/scripts.pory"
	walk_up
# 664 "data/maps/ResortArena/scripts.pory"
	walk_up
# 664 "data/maps/ResortArena/scripts.pory"
	walk_up
# 664 "data/maps/ResortArena/scripts.pory"
	walk_up
# 664 "data/maps/ResortArena/scripts.pory"
	walk_up
# 664 "data/maps/ResortArena/scripts.pory"
	walk_up
# 664 "data/maps/ResortArena/scripts.pory"
	walk_up
# 664 "data/maps/ResortArena/scripts.pory"
	walk_right
# 664 "data/maps/ResortArena/scripts.pory"
	walk_right
# 664 "data/maps/ResortArena/scripts.pory"
	walk_right
# 664 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
	step_end

# 667 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_3:
# 667 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
# 667 "data/maps/ResortArena/scripts.pory"
	walk_in_place_left
	step_end

# 682 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_4:
# 682 "data/maps/ResortArena/scripts.pory"
	walk_left
# 682 "data/maps/ResortArena/scripts.pory"
	walk_left
	step_end

# 683 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_5:
# 683 "data/maps/ResortArena/scripts.pory"
	walk_right
# 683 "data/maps/ResortArena/scripts.pory"
	walk_right
	step_end

# 689 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_6:
# 689 "data/maps/ResortArena/scripts.pory"
	face_down
# 689 "data/maps/ResortArena/scripts.pory"
	delay_16
# 689 "data/maps/ResortArena/scripts.pory"
	delay_16
# 689 "data/maps/ResortArena/scripts.pory"
	delay_16
# 689 "data/maps/ResortArena/scripts.pory"
	delay_16
# 689 "data/maps/ResortArena/scripts.pory"
	delay_16
# 689 "data/maps/ResortArena/scripts.pory"
	face_up
	step_end

# 691 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_7:
# 691 "data/maps/ResortArena/scripts.pory"
	face_up
# 691 "data/maps/ResortArena/scripts.pory"
	delay_16
# 691 "data/maps/ResortArena/scripts.pory"
	face_right
# 691 "data/maps/ResortArena/scripts.pory"
	delay_16
# 691 "data/maps/ResortArena/scripts.pory"
	face_down
# 691 "data/maps/ResortArena/scripts.pory"
	delay_16
# 691 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 696 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_8:
# 696 "data/maps/ResortArena/scripts.pory"
	walk_left
# 696 "data/maps/ResortArena/scripts.pory"
	walk_left
# 696 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 697 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger1_Movement_9:
# 697 "data/maps/ResortArena/scripts.pory"
	walk_left
# 697 "data/maps/ResortArena/scripts.pory"
	walk_down
# 697 "data/maps/ResortArena/scripts.pory"
	walk_down
# 697 "data/maps/ResortArena/scripts.pory"
	walk_down
# 697 "data/maps/ResortArena/scripts.pory"
	walk_down
# 697 "data/maps/ResortArena/scripts.pory"
	walk_down
# 697 "data/maps/ResortArena/scripts.pory"
	walk_down
# 697 "data/maps/ResortArena/scripts.pory"
	walk_down
	step_end

# 714 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_0:
# 714 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 715 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_1:
# 715 "data/maps/ResortArena/scripts.pory"
	face_down
# 715 "data/maps/ResortArena/scripts.pory"
	delay_16
# 715 "data/maps/ResortArena/scripts.pory"
	delay_16
# 715 "data/maps/ResortArena/scripts.pory"
	delay_16
# 715 "data/maps/ResortArena/scripts.pory"
	face_right
# 715 "data/maps/ResortArena/scripts.pory"
	delay_16
# 715 "data/maps/ResortArena/scripts.pory"
	delay_16
# 715 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 716 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_2:
# 716 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 716 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 716 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 716 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
	step_end

# 736 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_3:
# 736 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_down
# 736 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_down
# 736 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_down
	step_end

# 737 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_4:
# 737 "data/maps/ResortArena/scripts.pory"
	delay_16
# 737 "data/maps/ResortArena/scripts.pory"
	face_right
# 737 "data/maps/ResortArena/scripts.pory"
	delay_16
# 737 "data/maps/ResortArena/scripts.pory"
	delay_16
# 737 "data/maps/ResortArena/scripts.pory"
	delay_16
# 737 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 738 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger2_Movement_5:
# 738 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 738 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 738 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 738 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 738 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 759 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_0:
# 759 "data/maps/ResortArena/scripts.pory"
	face_left
# 759 "data/maps/ResortArena/scripts.pory"
	delay_16
# 759 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 760 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_1:
# 760 "data/maps/ResortArena/scripts.pory"
	face_right
# 760 "data/maps/ResortArena/scripts.pory"
	delay_16
# 760 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 782 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_2:
# 782 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 782 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 782 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 782 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 782 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 783 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_3:
# 783 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 783 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 783 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 783 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 784 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger3_Movement_4:
# 784 "data/maps/ResortArena/scripts.pory"
	face_up
# 784 "data/maps/ResortArena/scripts.pory"
	delay_8
# 784 "data/maps/ResortArena/scripts.pory"
	face_right
# 784 "data/maps/ResortArena/scripts.pory"
	delay_8
# 784 "data/maps/ResortArena/scripts.pory"
	face_down
# 784 "data/maps/ResortArena/scripts.pory"
	delay_8
# 784 "data/maps/ResortArena/scripts.pory"
	face_left
# 784 "data/maps/ResortArena/scripts.pory"
	delay_8
# 784 "data/maps/ResortArena/scripts.pory"
	face_up
# 784 "data/maps/ResortArena/scripts.pory"
	delay_8
# 784 "data/maps/ResortArena/scripts.pory"
	face_right
# 784 "data/maps/ResortArena/scripts.pory"
	delay_8
# 784 "data/maps/ResortArena/scripts.pory"
	face_down
# 784 "data/maps/ResortArena/scripts.pory"
	delay_8
# 784 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 806 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_0:
# 806 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 806 "data/maps/ResortArena/scripts.pory"
	face_left
# 806 "data/maps/ResortArena/scripts.pory"
	delay_16
# 806 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 807 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_1:
# 807 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 807 "data/maps/ResortArena/scripts.pory"
	face_right
# 807 "data/maps/ResortArena/scripts.pory"
	delay_16
# 807 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 808 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_2:
# 808 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 808 "data/maps/ResortArena/scripts.pory"
	walk_up
# 808 "data/maps/ResortArena/scripts.pory"
	walk_down
# 808 "data/maps/ResortArena/scripts.pory"
	walk_down
# 808 "data/maps/ResortArena/scripts.pory"
	walk_up
# 808 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 829 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_3:
# 829 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 829 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 829 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
	step_end

# 831 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger4_Movement_4:
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 831 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
	step_end

# 853 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_0:
# 853 "data/maps/ResortArena/scripts.pory"
	face_right
# 853 "data/maps/ResortArena/scripts.pory"
	delay_16
# 853 "data/maps/ResortArena/scripts.pory"
	face_left
# 853 "data/maps/ResortArena/scripts.pory"
	delay_16
# 853 "data/maps/ResortArena/scripts.pory"
	face_down
	step_end

# 855 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_1:
# 855 "data/maps/ResortArena/scripts.pory"
	jump_up
# 855 "data/maps/ResortArena/scripts.pory"
	jump_down
# 855 "data/maps/ResortArena/scripts.pory"
	jump_down
# 855 "data/maps/ResortArena/scripts.pory"
	jump_up
# 855 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 876 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_2:
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 876 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 878 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Challenger5_Movement_3:
# 878 "data/maps/ResortArena/scripts.pory"
	face_right
# 878 "data/maps/ResortArena/scripts.pory"
	delay_16
# 878 "data/maps/ResortArena/scripts.pory"
	delay_16
# 878 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 878 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 878 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 878 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
	step_end

# 1055 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_ForfeitConfirmation_Movement_0:
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1055 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 1057 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_ForfeitConfirmation_Movement_1:
# 1057 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1057 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1057 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1057 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1057 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1057 "data/maps/ResortArena/scripts.pory"
	walk_down
	step_end

# 1058 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_ForfeitConfirmation_Movement_2:
# 1058 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1058 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1058 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1058 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1058 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1058 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1058 "data/maps/ResortArena/scripts.pory"
	walk_down
	step_end

# 1147 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_0:
# 1147 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1147 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1147 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1147 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1147 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
	step_end

# 1149 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_1:
# 1149 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1149 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1149 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1149 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
	step_end

# 1150 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_2:
# 1150 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 1150 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 1150 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 1150 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 1150 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 1150 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 1151 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_3:
# 1151 "data/maps/ResortArena/scripts.pory"
	face_down
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_right
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_up
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_left
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_down
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_right
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_up
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_left
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_down
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_right
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_up
# 1151 "data/maps/ResortArena/scripts.pory"
	delay_4
# 1151 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 1168 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_4:
# 1168 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1168 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1168 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1168 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1168 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1168 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 1169 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_5:
# 1169 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1169 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 1169 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
# 1169 "data/maps/ResortArena/scripts.pory"
	walk_in_place_down
	step_end

# 1170 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_6:
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
# 1170 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_left
	step_end

# 1216 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_7:
# 1216 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1216 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1216 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1216 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
# 1216 "data/maps/ResortArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 1224 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_8:
# 1224 "data/maps/ResortArena/scripts.pory"
	walk_slow_right
# 1224 "data/maps/ResortArena/scripts.pory"
	walk_fast_left
# 1224 "data/maps/ResortArena/scripts.pory"
	walk_fast_left
	step_end

# 1225 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_9:
# 1225 "data/maps/ResortArena/scripts.pory"
	walk_slow_left
# 1225 "data/maps/ResortArena/scripts.pory"
	walk_fast_right
# 1225 "data/maps/ResortArena/scripts.pory"
	walk_fast_right
	step_end

# 1239 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_10:
# 1239 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1239 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1239 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1239 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1239 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
	step_end

# 1240 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_11:
# 1240 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1240 "data/maps/ResortArena/scripts.pory"
	jump_in_place_up
# 1240 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 1240 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
	step_end

# 1241 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_12:
# 1241 "data/maps/ResortArena/scripts.pory"
	jump_2_down
# 1241 "data/maps/ResortArena/scripts.pory"
	jump_2_up
# 1241 "data/maps/ResortArena/scripts.pory"
	jump_2_up
# 1241 "data/maps/ResortArena/scripts.pory"
	jump_2_down
# 1241 "data/maps/ResortArena/scripts.pory"
	face_left
	step_end

# 1242 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_13:
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_up
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_down
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_left
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_up
# 1242 "data/maps/ResortArena/scripts.pory"
	jump_in_place_right
	step_end

# 1248 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_14:
# 1248 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
# 1248 "data/maps/ResortArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 1253 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_15:
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_left
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_left
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1253 "data/maps/ResortArena/scripts.pory"
	walk_right
	step_end

# 1262 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GrandFinals_Movement_16:
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_right
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_down
# 1262 "data/maps/ResortArena/scripts.pory"
	walk_in_place_up
	step_end

# 1308 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_TurnAwayFromMine_Movement_0:
# 1308 "data/maps/ResortArena/scripts.pory"
	walk_down
	step_end

# 1319 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GiveMinePresent_Movement_0:
# 1319 "data/maps/ResortArena/scripts.pory"
	face_right
	step_end

# 1320 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_GiveMinePresent_Movement_1:
# 1320 "data/maps/ResortArena/scripts.pory"
	face_left
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
	.string "Then, I might be able to find islands\n"
	.string "full of hidden treasure!\p"
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
	.string "at the lab: the Helper Box Link.\p"
	.string "You can use it to access your PC from\n"
	.string "nearly anywhere in Dream Land.\p"
	.string "Managing which Helpers you want on your\n"
	.string "team will be much easier now!\p"
	.string "Now then, I must report the good news\n"
	.string "to the Great King. Carry on!$"

ResortArena_EventScript_AideFailure_Text_0:
# 295 "data/maps/ResortArena/scripts.pory"
	.string "Hm… it seems you've only registered\n"
	.string "{STR_VAR_2} Helpers so far.\l"
	.string "The Great King will be most displeased.\p"
	.string "I'm sorry, but I can't return like this.\p"
	.string "Could I ask you to return once you've\n"
	.string "recruited at least {COLOR RED}15{COLOR DARK_GRAY} Helpers?$"

ResortArena_EventScript_Courtship_Text_0:
# 310 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_DAROACH}Ladies, ladies! Please, one at a time!\p"
	.string "My purloining claws can only steal so\n"
	.string "many hearts at once, you know…?$"

ResortArena_EventScript_Courtship_Text_1:
# 320 "data/maps/ResortArena/scripts.pory"
	.string "Eeeeee! Oh, Daroach……! {EMOJI_HEART}{EMOJI_HEART}{EMOJI_HEART}$"

ResortArena_EventScript_Socialite_Text_0:
# 334 "data/maps/ResortArena/scripts.pory"
	.string "You may be stronger than Daroach,\n"
	.string "but you'll never be as suave.\p"
	.string "Sigh… Daroach… {EMOJI_HEART}$"

ResortArena_EventScript_ParasolLady_Text_0:
# 352 "data/maps/ResortArena/scripts.pory"
	.string "So you beat Daroach at the Arena, huh?\n"
	.string "Maybe I should be your fan instead.\p"
	.string "What do you say? Any room in your\n"
	.string "party for a gal like me? {EMOJI_HEART}$"

ResortArena_EventScript_Lass_Text_0:
# 371 "data/maps/ResortArena/scripts.pory"
	.string "I'm over Daroach. I found a new love…\p"
	.string "Why, it's the muscle of the Squeaks,\n"
	.string "Storo!\p"
	.string "Who needs brains when you've got all\n"
	.string "that brawn? {EMOJI_HEART}$"

ResortArena_EventScript_Daroach_Text_0:
# 396 "data/maps/ResortArena/scripts.pory"
	.string "I've underestimated you, my friend.\n"
	.string "You may have what it takes…\p"
	.string "Here, as a sign of good will, let me\n"
	.string "impart a little something onto you.$"

ResortArena_EventScript_Daroach_Text_1:
# 402 "data/maps/ResortArena/scripts.pory"
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
# 435 "data/maps/ResortArena/scripts.pory"
	.string "Power Gem is my personal favorite move.\n"
	.string "Simple, effective, and flashy!$"

ResortArena_EventScript_Daroach_Text_3:
# 444 "data/maps/ResortArena/scripts.pory"
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
# 468 "data/maps/ResortArena/scripts.pory"
	.string "My most esteemed cohorts are searching\n"
	.string "for clues on various Big Boss Helpers.\p"
	.string "And the little ones are looking for\n"
	.string "sunken treasure at the beach…\p"
	.string "As for me? I think I shall stay a\n"
	.string "while longer yet at the resort.\p"
	.string "The sea breeze is good for my fur,\n"
	.string "and I have many a confidant to make…$"

ResortArena_EventScript_Commentator_Text_0:
# 491 "data/maps/ResortArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "Daroach was a sneaky foe, but you\n"
	.string "carved your own path to victory!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

ResortArena_EventScript_Commentator_Text_1:
# 504 "data/maps/ResortArena/scripts.pory"
	.string "Wwwwwelcome to the Resort\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

ResortArena_EventScript_Commentator_Text_2:
# 515 "data/maps/ResortArena/scripts.pory"
	.string "Next up: grand finals!\n"
	.string "Are you prepared for the last battle?$"

ResortArena_EventScript_CommentatorChoice_Text_0:
# 534 "data/maps/ResortArena/scripts.pory"
	.string "Today's challenge: a mild stroll!\n"
	.string "How can I help you?$"

ResortArena_EventScript_CommentatorBye_Text_0:
# 554 "data/maps/ResortArena/scripts.pory"
	.string "When you're ready for the grand finals,\n"
	.string "you know the Waddle Dee to talk to!$"

ResortArena_EventScript_CommentatorBye_Text_1:
# 559 "data/maps/ResortArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

ResortArena_EventScript_CommentatorInfo_Text_0:
# 567 "data/maps/ResortArena/scripts.pory"
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
# 598 "data/maps/ResortArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

ResortArena_EventScript_BeginChallenge_Text_1:
# 631 "data/maps/ResortArena/scripts.pory"
	.string "Welcome, one and all, to the tropical  \n"
	.string "Resort Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Including a Waddle Dee Arena champion…\l"
	.string "It's the mighty marshmallow, Kirbyyy!!!$"

ResortArena_EventScript_BeginChallenge_Text_2:
# 640 "data/maps/ResortArena/scripts.pory"
	.string "Welcome, one and all, to the tropical\n"
	.string "Resort Arena!\p"
	.string "Kirby has returned to the stage for\n"
	.string "another shot at the Resort Brooch!\l"
	.string "Will he see it through this time?$"

ResortArena_EventScript_Challenger1_Text_0:
# 657 "data/maps/ResortArena/scripts.pory"
	.string "Let's have our first challenger, please!$"

ResortArena_EventScript_Challenger1_Text_1:
# 672 "data/maps/ResortArena/scripts.pory"
	.string "Oh dear… I wasn't expecting such a\n"
	.string "strong-looking challenger today…$"

ResortArena_EventScript_Challenger1_Text_2:
# 677 "data/maps/ResortArena/scripts.pory"
	.string "You… you humiliated me last time!\n"
	.string "Now, I'll humiliate you in turn!$"

ResortArena_EventScript_Challenger1_Text_3:
# 687 "data/maps/ResortArena/scripts.pory"
	.string "Is this the start of another sweep?\n"
	.string "Kirby takes the first win!$"

ResortArena_EventScript_Challenger2_Text_0:
# 711 "data/maps/ResortArena/scripts.pory"
	.string "Challenger number two, step right up!$"

ResortArena_EventScript_Challenger2_Text_1:
# 724 "data/maps/ResortArena/scripts.pory"
	.string "Squeak squeak!$"

ResortArena_EventScript_Challenger2_Text_2:
# 732 "data/maps/ResortArena/scripts.pory"
	.string "He's barely breaking a sweat!\n"
	.string "Kirby has scored a second victory!$"

ResortArena_EventScript_Challenger3_Text_0:
# 756 "data/maps/ResortArena/scripts.pory"
	.string "Give it up for challenger number three!$"

ResortArena_EventScript_Challenger3_Text_1:
# 769 "data/maps/ResortArena/scripts.pory"
	.string "My battalion of bugs has what it takes\n"
	.string "to get us a Resort Brooch!$"

ResortArena_EventScript_Challenger3_Text_2:
# 778 "data/maps/ResortArena/scripts.pory"
	.string "The stakes are climbing ever higher!\n"
	.string "Kirby nets his third victory!$"

ResortArena_EventScript_Challenger4_Text_0:
# 803 "data/maps/ResortArena/scripts.pory"
	.string "You're up next, challenger number four!$"

ResortArena_EventScript_Challenger4_Text_1:
# 816 "data/maps/ResortArena/scripts.pory"
	.string "If I beat you in a battle, can you help\n"
	.string "me get out of this raft?$"

ResortArena_EventScript_Challenger4_Text_2:
# 825 "data/maps/ResortArena/scripts.pory"
	.string "The stakes are steadily climbing!\n"
	.string "Kirby has gone up to four wins!$"

ResortArena_EventScript_Challenger5_Text_0:
# 850 "data/maps/ResortArena/scripts.pory"
	.string "Everyone welcome our final challenger!$"

ResortArena_EventScript_Challenger5_Text_1:
# 863 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! This one's for the boss!$"

ResortArena_EventScript_Challenger5_Text_2:
# 871 "data/maps/ResortArena/scripts.pory"
	.string "What an amazing battle! Kirby has swept\n"
	.string "the preliminary bracket!!$"

ResortArena_EventScript_Challenger5_Text_3:
# 887 "data/maps/ResortArena/scripts.pory"
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
# 915 "data/maps/ResortArena/scripts.pory"
	.string "There's four more rounds to go.\n"
	.string "Are you ready for the next battle?$"

ResortArena_EventScript_Break_Text_1:
# 920 "data/maps/ResortArena/scripts.pory"
	.string "There's still three rounds to go.\n"
	.string "Are you ready for the next battle?$"

ResortArena_EventScript_Break_Text_2:
# 925 "data/maps/ResortArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

ResortArena_EventScript_Break_Text_3:
# 930 "data/maps/ResortArena/scripts.pory"
	.string "The last battle in the preliminary\n"
	.string "bracket awaits! Are you prepared?$"

ResortArena_EventScript_Break_Text_4:
# 935 "data/maps/ResortArena/scripts.pory"
	.string "Now then, Kirby: the grand finals await!\n"
	.string "Are you ready for the TRUE final bout?$"

ResortArena_EventScript_ArenaHeal_Text_0:
# 981 "data/maps/ResortArena/scripts.pory"
	.string "You have {COLOR RED}two full-party heals{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use one now?$"

ResortArena_EventScript_ArenaHeal_Text_1:
# 986 "data/maps/ResortArena/scripts.pory"
	.string "You have {COLOR RED}one full-party heal{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use it now?$"

ResortArena_EventScript_ArenaHeal_Text_2:
# 995 "data/maps/ResortArena/scripts.pory"
	.string "Your party has been fully healed!$"

ResortArena_EventScript_ArenaHeal_Text_3:
# 1007 "data/maps/ResortArena/scripts.pory"
	.string "Unfortunately, you've already used up\n"
	.string "all of your heals, Kirby.\p"
	.string "You'll have to tough out the remaining\n"
	.string "battles with your party as they are!$"

ResortArena_EventScript_ArenaHeal_Text_4:
# 1017 "data/maps/ResortArena/scripts.pory"
	.string "You already healed up this round, Kirby!\n"
	.string "If you have any heals remaining,\l"
	.string "let's save them for future rounds, OK?$"

ResortArena_EventScript_ArenaHeal_Text_5:
# 1025 "data/maps/ResortArena/scripts.pory"
	.string "Alright, one complimentary full-party\n"
	.string "heal for our pink warrior, coming up!$"

ResortArena_EventScript_ForfeitConfirmation_Text_0:
# 1040 "data/maps/ResortArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!$"

ResortArena_EventScript_ForfeitConfirmation_Text_1:
# 1045 "data/maps/ResortArena/scripts.pory"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

ResortArena_EventScript_ForfeitConfirmation_Text_2:
# 1051 "data/maps/ResortArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

ResortArena_EventScript_ForfeitConfirmation_Text_3:
# 1070 "data/maps/ResortArena/scripts.pory"
	.string "Alright, folks! Stay tuned! The grand\n"
	.string "finals will begin after a short break!$"

ResortArena_EventScript_GrandFinals_Text_0:
# 1122 "data/maps/ResortArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, a leader-in-the-making\n"
	.string "looking for a second Brooch…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

ResortArena_EventScript_GrandFinals_Text_1:
# 1135 "data/maps/ResortArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, a valiant soul who won't\n"
	.string "back down after suffering defeat…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

ResortArena_EventScript_GrandFinals_Text_2:
# 1156 "data/maps/ResortArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who made it to grand finals!\p"
	.string "He's the rougish leader of a band of\n"
	.string "mousy misfits, always seeking riches…\p"
	.string "Now, this treasure hunter has his eye\n"
	.string "on the Royal Royale's ultimate prize!\p"
	.string "Everyone welcome {COLOR RED}Daroach{COLOR DARK_GRAY} to the stage!$"

ResortArena_EventScript_GrandFinals_Text_3:
# 1179 "data/maps/ResortArena/scripts.pory"
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
# 1196 "data/maps/ResortArena/scripts.pory"
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
# 1217 "data/maps/ResortArena/scripts.pory"
	.string "It's come down to Kirby vs. Daroach!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

ResortArena_EventScript_GrandFinals_Text_6:
# 1231 "data/maps/ResortArena/scripts.pory"
	.string "Folks… this is one battle to treasure.\n"
	.string "The winner of this Resort Arena rumble…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

ResortArena_EventScript_GrandFinals_Text_7:
# 1244 "data/maps/ResortArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

ResortArena_EventScript_GrandFinals_Text_8:
# 1250 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_DAROACH}For every winner, there is a loser…\n"
	.string "Well, it's time to make my retreat.$"

ResortArena_EventScript_Victory_Text_0:
# 1278 "data/maps/ResortArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Resort Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Resort Brooch!$"

ResortArena_EventScript_Victory_Text_1:
# 1283 "data/maps/ResortArena/scripts.pory"
	.string "Kirby received the Resort Brooch\n"
	.string "from Commentator Waddle Dee!$"

ResortArena_EventScript_Victory_Text_2:
# 1288 "data/maps/ResortArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I'm sure we'll see each other again\n"
	.string "at the next Arena. Until then!$"

ResortArena_EventScript_TurnAwayFromMine_Text_0:
# 1303 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_KINE}Psst! Kirby! We can't go this way!\n"
	.string "I haven't found my gift for Mine yet…\p"
	.string "Let's come back AFTER we find it, okay?$"

ResortArena_EventScript_GiveMinePresent_Text_0:
# 1332 "data/maps/ResortArena/scripts.pory"
	.string "Oh, Kiiiiine! Where have you been, my\n"
	.string "darling sea angel?\p"
	.string "…what's that? You and Kirby went out\n"
	.string "and brought me an underwater present?\l"
	.string "Oh, you shouldn't have!$"

ResortArena_EventScript_GiveMinePresent_Text_1:
# 1344 "data/maps/ResortArena/scripts.pory"
	.string "Kirby handed over the\n"
	.string "Present to Mine!$"

ResortArena_EventScript_GiveMinePresent_Text_2:
# 1348 "data/maps/ResortArena/scripts.pory"
	.string "Hmm? What's that? Speak up, Kine, I\n"
	.string "can't hear you with your mouth full!\p"
	.string "I see… so you're going to help Kirby\n"
	.string "on his journey. I understand!\p"
	.string "You're so selfless… it's part of what\n"
	.string "made you such a great catch! {EMOJI_HEART}\p"
	.string "Well, don't worry about me. I'll head\n"
	.string "home, and you come back when you can.\p"
	.string "Bon voyage! Take good care of my\n"
	.string "Kiney-winey for me, okay, Kirby?$"

ResortArena_Text_Challenger1::
# 704 "data/maps/ResortArena/scripts.pory"
	.string "Shudder… how barbaric!$"

ResortArena_Text_Challenger2::
# 749 "data/maps/ResortArena/scripts.pory"
	.string "Squeak squeak squeak…$"

ResortArena_Text_Challenger3::
# 795 "data/maps/ResortArena/scripts.pory"
	.string "I thought I could prove type\n"
	.string "diversity didn't matter…$"

ResortArena_Text_Challenger4::
# 842 "data/maps/ResortArena/scripts.pory"
	.string "I got stuck in my raft, so now I've\n"
	.string "got to row myself everywhere…$"

ResortArena_Text_Challenger5::
# 906 "data/maps/ResortArena/scripts.pory"
	.string "Boss! It's up to you now! Squeak!$"

ResortArena_Text_Daroach::
# 1271 "data/maps/ResortArena/scripts.pory"
	.string "It seems I've been bested…$"
