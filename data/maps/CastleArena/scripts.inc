# 1 "data/maps/CastleArena/scripts.pory"

# 2 "data/maps/CastleArena/scripts.pory"
CastleArena_MapScripts::
# 3 "data/maps/CastleArena/scripts.pory"
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CastleArena_OnWarp
# 4 "data/maps/CastleArena/scripts.pory"
    map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, CastleArena_OnReturnToField
# 5 "data/maps/CastleArena/scripts.pory"
	.byte 0
# 6 "data/maps/CastleArena/scripts.pory"
CastleArena_OnWarp:
# 7 "data/maps/CastleArena/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, CastleArena_EventScript_CreateAudience
# 8 "data/maps/CastleArena/scripts.pory"
	.2byte 0
# 9 "data/maps/CastleArena/scripts.pory"

# 10 "data/maps/CastleArena/scripts.pory"
CastleArena_OnReturnToField:
# 11 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CreateAudience
# 12 "data/maps/CastleArena/scripts.pory"
	end

CastleArena_EventScript_CreateAudience::
# 18 "data/maps/CastleArena/scripts.pory"
	setvar VAR_TEMP_1, 0
# 19 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq CastleArena_EventScript_CreateAudience_2
CastleArena_EventScript_CreateAudience_1:
	end

CastleArena_EventScript_CreateAudience_2:
# 21 "data/maps/CastleArena/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 0, 22, 5, 3, DIR_SOUTH
# 22 "data/maps/CastleArena/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 1, 23, 5, 3, DIR_SOUTH
# 23 "data/maps/CastleArena/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 2, 24, 5, 3, DIR_SOUTH
# 24 "data/maps/CastleArena/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto CastleArena_EventScript_CreateAudience_1


CastleArena_EventScript_Francisca::
# 32 "data/maps/CastleArena/scripts.pory"
	lock
# 33 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 34 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SHOCK_WAVE, CastleArena_EventScript_Francisca_2
# 48 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, CastleArena_EventScript_Francisca_8
CastleArena_EventScript_Francisca_6:
# 64 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, CastleArena_EventScript_Francisca_5
CastleArena_EventScript_Francisca_1:
# 81 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Francisca_2:
# 36 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Francisca_Text_0
	goto CastleArena_EventScript_Francisca_1

CastleArena_EventScript_Francisca_3:
# 50 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Francisca_Text_1
# 56 "data/maps/CastleArena/scripts.pory"
	giveitem ITEM_TM91
# 57 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Francisca_Text_2
# 62 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
	goto CastleArena_EventScript_Francisca_1

CastleArena_EventScript_Francisca_4:
# 66 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Francisca_Text_3
	goto CastleArena_EventScript_Francisca_1

CastleArena_EventScript_Francisca_5:
# 64 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Francisca_4
	goto CastleArena_EventScript_Francisca_1

CastleArena_EventScript_Francisca_8:
# 48 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Francisca_3
	goto CastleArena_EventScript_Francisca_6


CastleArena_EventScript_Flamberge::
# 86 "data/maps/CastleArena/scripts.pory"
	lock
# 87 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 88 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_OVERHEAT, CastleArena_EventScript_Flamberge_2
# 103 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, CastleArena_EventScript_Flamberge_8
CastleArena_EventScript_Flamberge_6:
# 121 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, CastleArena_EventScript_Flamberge_5
CastleArena_EventScript_Flamberge_1:
# 133 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Flamberge_2:
# 90 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Flamberge_Text_0
	goto CastleArena_EventScript_Flamberge_1

CastleArena_EventScript_Flamberge_3:
# 105 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Flamberge_Text_1
# 110 "data/maps/CastleArena/scripts.pory"
	giveitem ITEM_TM13
# 111 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Flamberge_Text_2
# 119 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
	goto CastleArena_EventScript_Flamberge_1

CastleArena_EventScript_Flamberge_4:
# 123 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Flamberge_Text_3
	goto CastleArena_EventScript_Flamberge_1

CastleArena_EventScript_Flamberge_5:
# 121 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Flamberge_4
	goto CastleArena_EventScript_Flamberge_1

CastleArena_EventScript_Flamberge_8:
# 103 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Flamberge_3
	goto CastleArena_EventScript_Flamberge_6


CastleArena_EventScript_ZanPartizanne::
# 138 "data/maps/CastleArena/scripts.pory"
	lock
# 139 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 140 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_FACADE, CastleArena_EventScript_ZanPartizanne_2
# 157 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, CastleArena_EventScript_ZanPartizanne_8
CastleArena_EventScript_ZanPartizanne_6:
# 181 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, CastleArena_EventScript_ZanPartizanne_5
CastleArena_EventScript_ZanPartizanne_1:
# 196 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_ZanPartizanne_2:
# 142 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ZanPartizanne_Text_0
	goto CastleArena_EventScript_ZanPartizanne_1

CastleArena_EventScript_ZanPartizanne_3:
# 159 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ZanPartizanne_Text_1
# 173 "data/maps/CastleArena/scripts.pory"
	giveitem ITEM_TM30
# 174 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ZanPartizanne_Text_2
# 179 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
	goto CastleArena_EventScript_ZanPartizanne_1

CastleArena_EventScript_ZanPartizanne_4:
# 183 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ZanPartizanne_Text_3
	goto CastleArena_EventScript_ZanPartizanne_1

CastleArena_EventScript_ZanPartizanne_5:
# 181 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_ZanPartizanne_4
	goto CastleArena_EventScript_ZanPartizanne_1

CastleArena_EventScript_ZanPartizanne_8:
# 157 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_ZanPartizanne_3
	goto CastleArena_EventScript_ZanPartizanne_6


CastleArena_EventScript_Nago::
# 201 "data/maps/CastleArena/scripts.pory"
	lock
# 202 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Nago_2
# 216 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 217 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_1
CastleArena_EventScript_Nago_1:
# 226 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Nago_2:
# 204 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_0
	goto CastleArena_EventScript_Nago_1


CastleArena_EventScript_Shiro::
# 231 "data/maps/CastleArena/scripts.pory"
	lock
# 232 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 233 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Shiro_2
# 241 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Shiro_Text_1
CastleArena_EventScript_Shiro_1:
# 244 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Shiro_2:
# 235 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Shiro_Text_0
	goto CastleArena_EventScript_Shiro_1


CastleArena_EventScript_MoveTutor::
# 251 "data/maps/CastleArena/scripts.pory"
	lock
# 252 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 253 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_MoveTutor_2
# 266 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_MoveTutorEnabled
CastleArena_EventScript_MoveTutor_1:
# 268 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_MoveTutor_2:
# 255 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_MoveTutor_Text_0
	goto CastleArena_EventScript_MoveTutor_1


CastleArena_EventScript_MoveTutorEnabled::
# 273 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_MoveTutorEnabled_Text_0
# 281 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_MoveTutorEnabled_Text_1
# 283 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 284 "data/maps/CastleArena/scripts.pory"
	showmoneybox 0, 0
# 285 "data/maps/CastleArena/scripts.pory"
	multichoice 20, 0, MULTI_PALACE_MOVELIST, FALSE
# 286 "data/maps/CastleArena/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 287 "data/maps/CastleArena/scripts.pory"
	switch VAR_RESULT
# 288 "data/maps/CastleArena/scripts.pory"
	case 0, CastleArena_EventScript_MoveTutorEnabled_2
# 290 "data/maps/CastleArena/scripts.pory"
	case 1, CastleArena_EventScript_MoveTutorEnabled_3
# 292 "data/maps/CastleArena/scripts.pory"
	case 2, CastleArena_EventScript_MoveTutorEnabled_4
# 294 "data/maps/CastleArena/scripts.pory"
	case 3, CastleArena_EventScript_MoveTutorEnabled_5
# 296 "data/maps/CastleArena/scripts.pory"
	case 4, CastleArena_EventScript_MoveTutorEnabled_6
# 298 "data/maps/CastleArena/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_EventScript_MoveTutorEnabled_7
	return

CastleArena_EventScript_MoveTutorEnabled_2:
# 289 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Move1
	return

CastleArena_EventScript_MoveTutorEnabled_3:
# 291 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Move2
	return

CastleArena_EventScript_MoveTutorEnabled_4:
# 293 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Move3
	return

CastleArena_EventScript_MoveTutorEnabled_5:
# 295 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Move4
	return

CastleArena_EventScript_MoveTutorEnabled_6:
# 297 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Move5
	return

CastleArena_EventScript_MoveTutorEnabled_7:
# 299 "data/maps/CastleArena/scripts.pory"
	goto WaddleDeeArena_EventScript_MoveTutorLeave
	return


CastleArena_EventScript_Move1::
# 305 "data/maps/CastleArena/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
# 306 "data/maps/CastleArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 307 "data/maps/CastleArena/scripts.pory"
	checkmoney 1000
# 308 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_EventScript_Move1_2
CastleArena_EventScript_Move1_1:
# 312 "data/maps/CastleArena/scripts.pory"
	move_tutor MOVE_MYSTICAL_FIRE, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, CastleArena_EventScript_TaughtMove
	return

CastleArena_EventScript_Move1_2:
# 310 "data/maps/CastleArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto CastleArena_EventScript_Move1_1


CastleArena_EventScript_Move2::
# 317 "data/maps/CastleArena/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_TAIL
# 318 "data/maps/CastleArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 319 "data/maps/CastleArena/scripts.pory"
	checkmoney 1000
# 320 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_EventScript_Move2_2
CastleArena_EventScript_Move2_1:
# 324 "data/maps/CastleArena/scripts.pory"
	move_tutor MOVE_POISON_TAIL, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, CastleArena_EventScript_TaughtMove
	return

CastleArena_EventScript_Move2_2:
# 322 "data/maps/CastleArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto CastleArena_EventScript_Move2_1


CastleArena_EventScript_Move3::
# 329 "data/maps/CastleArena/scripts.pory"
	setvar VAR_0x8005, MOVE_STOMPING_TANTRUM
# 330 "data/maps/CastleArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 331 "data/maps/CastleArena/scripts.pory"
	checkmoney 1000
# 332 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_EventScript_Move3_2
CastleArena_EventScript_Move3_1:
# 336 "data/maps/CastleArena/scripts.pory"
	move_tutor MOVE_STOMPING_TANTRUM, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, CastleArena_EventScript_TaughtMove
	return

CastleArena_EventScript_Move3_2:
# 334 "data/maps/CastleArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto CastleArena_EventScript_Move3_1


CastleArena_EventScript_Move4::
# 341 "data/maps/CastleArena/scripts.pory"
	setvar VAR_0x8005, MOVE_PAYBACK
# 342 "data/maps/CastleArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 343 "data/maps/CastleArena/scripts.pory"
	checkmoney 1000
# 344 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_EventScript_Move4_2
CastleArena_EventScript_Move4_1:
# 348 "data/maps/CastleArena/scripts.pory"
	move_tutor MOVE_PAYBACK, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, CastleArena_EventScript_TaughtMove
	return

CastleArena_EventScript_Move4_2:
# 346 "data/maps/CastleArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto CastleArena_EventScript_Move4_1


CastleArena_EventScript_Move5::
# 353 "data/maps/CastleArena/scripts.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
# 354 "data/maps/CastleArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 355 "data/maps/CastleArena/scripts.pory"
	checkmoney 1000
# 356 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_EventScript_Move5_2
CastleArena_EventScript_Move5_1:
# 360 "data/maps/CastleArena/scripts.pory"
	move_tutor MOVE_HELPING_HAND, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, CastleArena_EventScript_TaughtMove
	return

CastleArena_EventScript_Move5_2:
# 358 "data/maps/CastleArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto CastleArena_EventScript_Move5_1


CastleArena_EventScript_TaughtMove::
# 365 "data/maps/CastleArena/scripts.pory"
	showmoneybox 0, 0
# 366 "data/maps/CastleArena/scripts.pory"
	delay 16
# 367 "data/maps/CastleArena/scripts.pory"
	removemoney 1500
# 368 "data/maps/CastleArena/scripts.pory"
	updatemoneybox
# 369 "data/maps/CastleArena/scripts.pory"
	playse SE_SHOP
# 370 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TaughtMove_Text_0
# 372 "data/maps/CastleArena/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 373 "data/maps/CastleArena/scripts.pory"
	hidemoneybox
# 374 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Commentator::
# 381 "data/maps/CastleArena/scripts.pory"
	lock
# 382 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 383 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Commentator_2
# 394 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Commentator_3
CastleArena_EventScript_Commentator_1:
# 406 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Commentator_2:
# 385 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Commentator_Text_0
	goto CastleArena_EventScript_Commentator_1

CastleArena_EventScript_Commentator_3:
# 396 "data/maps/CastleArena/scripts.pory"
	lock
# 397 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 398 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Commentator_Text_1
# 404 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorChoice
	goto CastleArena_EventScript_Commentator_1


CastleArena_EventScript_CommentatorChoice::
# 411 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_CommentatorChoice_Text_0
# 413 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 414 "data/maps/CastleArena/scripts.pory"
	multichoice 20, 6, MULTI_CHALLENGEINFO, FALSE
# 415 "data/maps/CastleArena/scripts.pory"
	switch VAR_RESULT
# 416 "data/maps/CastleArena/scripts.pory"
	case 0, CastleArena_EventScript_CommentatorChoice_2
# 418 "data/maps/CastleArena/scripts.pory"
	case 1, CastleArena_EventScript_CommentatorChoice_3
# 420 "data/maps/CastleArena/scripts.pory"
	case 2, CastleArena_EventScript_CommentatorChoice_4
# 422 "data/maps/CastleArena/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_EventScript_CommentatorChoice_5
	return

CastleArena_EventScript_CommentatorChoice_2:
# 417 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_BeginChallenge
	return

CastleArena_EventScript_CommentatorChoice_3:
# 419 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorInfo
	return

CastleArena_EventScript_CommentatorChoice_4:
# 421 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return

CastleArena_EventScript_CommentatorChoice_5:
# 423 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return


CastleArena_EventScript_CommentatorBye::
# 429 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_CommentatorBye_Text_0
# 431 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_CommentatorInfo::
# 436 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_CommentatorInfo_Text_0
# 453 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorChoice
	return


CastleArena_EventScript_BeginChallenge::
# 458 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_0
# 460 "data/maps/CastleArena/scripts.pory"
	closemessage
# 461 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 1
# 462 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 463 "data/maps/CastleArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 464 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq CastleArena_EventScript_BeginChallenge_2
# 470 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq CastleArena_EventScript_BeginChallenge_3
# 476 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq CastleArena_EventScript_BeginChallenge_4
CastleArena_EventScript_BeginChallenge_1:
# 482 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 483 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_BeginChallenge_Movement_4
# 484 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_5
# 485 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_6
# 486 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 487 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_7
# 488 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, CastleArena_EventScript_BeginChallenge_9
# 497 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, CastleArena_EventScript_BeginChallenge_10
CastleArena_EventScript_BeginChallenge_8:
# 506 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 507 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_BeginChallenge_Movement_8
# 508 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_BeginChallenge_Movement_9
# 509 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 510 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 511 "data/maps/CastleArena/scripts.pory"
	delay 40
# 512 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 513 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 514 "data/maps/CastleArena/scripts.pory"
	delay 20
# 515 "data/maps/CastleArena/scripts.pory"
	call CastleArena_EventScript_Challenger1
	return

CastleArena_EventScript_BeginChallenge_2:
# 466 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_0
# 467 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_1
# 468 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_3:
# 472 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_0
# 473 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_2
# 474 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_4:
# 478 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_0
# 479 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_3
# 480 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_9:
# 490 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_1
	goto CastleArena_EventScript_BeginChallenge_8

CastleArena_EventScript_BeginChallenge_10:
# 499 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_2
	goto CastleArena_EventScript_BeginChallenge_8


CastleArena_EventScript_Challenger1::
# 520 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 521 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 21, 16
# 522 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 523 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_0
# 527 "data/maps/CastleArena/scripts.pory"
	closemessage
# 528 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 529 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger1_Movement_0
# 530 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger1_Movement_1
# 531 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_2
# 532 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_WEST
# 533 "data/maps/CastleArena/scripts.pory"
	delay 32
# 534 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 535 "data/maps/CastleArena/scripts.pory"
	delay 32
# 536 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 537 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_FRANCISCA
# 538 "data/maps/CastleArena/scripts.pory"
	delay 30
# 539 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_3
# 540 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 541 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, CastleArena_EventScript_Challenger1_2
# 556 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, CastleArena_EventScript_Challenger1_3
CastleArena_EventScript_Challenger1_1:
# 570 "data/maps/CastleArena/scripts.pory"
	closemessage
# 571 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 572 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_4
# 573 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_5
# 574 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 575 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 576 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_EDGAR, CastleArena_Text_Francisca
# 577 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_3
# 579 "data/maps/CastleArena/scripts.pory"
	closemessage
# 580 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger1_Movement_6
# 581 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger1_Movement_7
# 582 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 583 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_NORTH
# 584 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 585 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 586 "data/maps/CastleArena/scripts.pory"
	delay 48
# 587 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 588 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 589 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_CASTLE_CROWD_2
# 590 "data/maps/CastleArena/scripts.pory"
	delay 60
# 591 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_8
# 592 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 593 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_4
# 595 "data/maps/CastleArena/scripts.pory"
	closemessage
# 596 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 597 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 598 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_9
# 599 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_10
# 600 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 601 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 602 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 603 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 17, 17
# 604 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 605 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ArenaHeal
	return

CastleArena_EventScript_Challenger1_2:
# 543 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_1
	goto CastleArena_EventScript_Challenger1_1

CastleArena_EventScript_Challenger1_3:
# 558 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_2
	goto CastleArena_EventScript_Challenger1_1


CastleArena_EventScript_Challenger2::
# 610 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 611 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 21, 16
# 612 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 613 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_0
# 617 "data/maps/CastleArena/scripts.pory"
	closemessage
# 618 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 619 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger2_Movement_0
# 620 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger2_Movement_1
# 621 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_2
# 622 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_EAST
# 623 "data/maps/CastleArena/scripts.pory"
	delay 18
# 624 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 625 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 626 "data/maps/CastleArena/scripts.pory"
	delay 18
# 627 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 628 "data/maps/CastleArena/scripts.pory"
	delay 18
# 629 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 630 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_FLAMBERGE
# 631 "data/maps/CastleArena/scripts.pory"
	delay 30
# 632 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_3
# 633 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 634 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, CastleArena_EventScript_Challenger2_2
# 651 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, CastleArena_EventScript_Challenger2_3
CastleArena_EventScript_Challenger2_1:
# 661 "data/maps/CastleArena/scripts.pory"
	closemessage
# 662 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 663 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 664 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_4
# 665 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_5
# 666 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 667 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 668 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ALBERT, CastleArena_Text_Flamberge
# 669 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_3
# 671 "data/maps/CastleArena/scripts.pory"
	closemessage
# 672 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger2_Movement_2
# 673 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger2_Movement_3
# 674 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 675 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 676 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 677 "data/maps/CastleArena/scripts.pory"
	delay 32
# 678 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 679 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_CASTLE_CROWD_2
# 680 "data/maps/CastleArena/scripts.pory"
	delay 60
# 681 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_8
# 682 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 683 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_4
# 688 "data/maps/CastleArena/scripts.pory"
	closemessage
# 689 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 690 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 691 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_9
# 692 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger2_Movement_4
# 693 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 694 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 695 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 696 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 18, 17
# 697 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 698 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ArenaHeal
	return

CastleArena_EventScript_Challenger2_2:
# 636 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_1
	goto CastleArena_EventScript_Challenger2_1

CastleArena_EventScript_Challenger2_3:
# 653 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_2
	goto CastleArena_EventScript_Challenger2_1


CastleArena_EventScript_GrandFinals::
# 703 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 704 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 705 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 706 "data/maps/CastleArena/scripts.pory"
	fadeoutbgm 1
# 707 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_7
# 708 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 709 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_2
# 722 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_3
CastleArena_EventScript_GrandFinals_1:
# 735 "data/maps/CastleArena/scripts.pory"
	closemessage
# 736 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_0
# 737 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 738 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_1
# 739 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_2
# 740 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_WEST
# 741 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 742 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_EAST
# 743 "data/maps/CastleArena/scripts.pory"
	delay 20
# 744 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_NORTH
# 745 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 746 "data/maps/CastleArena/scripts.pory"
	delay 20
# 747 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 748 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 749 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 750 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 751 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 21, 16
# 752 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 753 "data/maps/CastleArena/scripts.pory"
	delay 60
# 754 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_2
# 765 "data/maps/CastleArena/scripts.pory"
	closemessage
# 766 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 767 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_3
# 768 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_4
# 769 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_2
# 770 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 771 "data/maps/CastleArena/scripts.pory"
	delay 15
# 772 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_EAST
# 773 "data/maps/CastleArena/scripts.pory"
	delay 15
# 774 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 775 "data/maps/CastleArena/scripts.pory"
	delay 15
# 776 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 777 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_ZAN_PARTIZANNE
# 778 "data/maps/CastleArena/scripts.pory"
	delay 60
# 779 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_3
# 780 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 781 "data/maps/CastleArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 782 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_7
CastleArena_EventScript_GrandFinals_6:
# 800 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_10
CastleArena_EventScript_GrandFinals_9:
# 816 "data/maps/CastleArena/scripts.pory"
	closemessage
# 817 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_5
# 818 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_5
# 822 "data/maps/CastleArena/scripts.pory"
	closemessage
# 823 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 824 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 825 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_GrandFinals_Movement_6
# 826 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_7
# 827 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 828 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 829 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_SAMUEL, CastleArena_Text_ZanPartizanne
# 830 "data/maps/CastleArena/scripts.pory"
	fadeoutbgm 1
# 831 "data/maps/CastleArena/scripts.pory"
	delay 60
# 832 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_6
# 837 "data/maps/CastleArena/scripts.pory"
	closemessage
# 838 "data/maps/CastleArena/scripts.pory"
	playbgm MUS_B_FRONTIER, TRUE
# 839 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 840 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_8
# 841 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_9
# 842 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_10
# 843 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 844 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 845 "data/maps/CastleArena/scripts.pory"
	delay 20
# 846 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 847 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_EAST
# 848 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 849 "data/maps/CastleArena/scripts.pory"
	delay 20
# 850 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 851 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 852 "data/maps/CastleArena/scripts.pory"
	delay 20
# 853 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 854 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_PLAYER
# 855 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_GrandFinals_Text_7
# 856 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 857 "data/maps/CastleArena/scripts.pory"
	delay 60
# 858 "data/maps/CastleArena/scripts.pory"
	closemessage
# 859 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_8
# 860 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 861 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_8
# 862 "data/maps/CastleArena/scripts.pory"
	closemessage
# 863 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_GrandFinals_Movement_11
# 864 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 865 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 866 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 24, 17
# 867 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 868 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 869 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 870 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 871 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 872 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 873 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 874 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_12
# 875 "data/maps/CastleArena/scripts.pory"
	delay 60
# 876 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_GrandFinals_Movement_13
# 877 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_14
# 878 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 879 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 880 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Victory
	return

CastleArena_EventScript_GrandFinals_2:
# 711 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_0
	goto CastleArena_EventScript_GrandFinals_1

CastleArena_EventScript_GrandFinals_3:
# 724 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_1
	goto CastleArena_EventScript_GrandFinals_1

CastleArena_EventScript_GrandFinals_7:
# 784 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_3
	goto CastleArena_EventScript_GrandFinals_6

CastleArena_EventScript_GrandFinals_10:
# 802 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_4
	goto CastleArena_EventScript_GrandFinals_9


CastleArena_EventScript_Break::
# 885 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq CastleArena_EventScript_Break_2
# 890 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq CastleArena_EventScript_Break_3
CastleArena_EventScript_Break_1:
# 895 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 896 "data/maps/CastleArena/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_RETIRE, 0
# 897 "data/maps/CastleArena/scripts.pory"
	switch VAR_RESULT
# 898 "data/maps/CastleArena/scripts.pory"
	case 0, CastleArena_EventScript_Break_7
# 907 "data/maps/CastleArena/scripts.pory"
	case 1, CastleArena_EventScript_Break_8
# 909 "data/maps/CastleArena/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_EventScript_Break_9
	return

CastleArena_EventScript_Break_2:
# 887 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Break_Text_0
	goto CastleArena_EventScript_Break_1

CastleArena_EventScript_Break_3:
# 892 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Break_Text_1
	goto CastleArena_EventScript_Break_1

CastleArena_EventScript_Break_7:
# 899 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq CastleArena_EventScript_Break_10
# 903 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq CastleArena_EventScript_Break_11
	return

CastleArena_EventScript_Break_8:
# 908 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ForfeitConfirmation
	return

CastleArena_EventScript_Break_9:
# 910 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ForfeitConfirmation
	return

CastleArena_EventScript_Break_10:
# 901 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Challenger2
	return

CastleArena_EventScript_Break_11:
# 905 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_GrandFinals
	return


CastleArena_EventScript_ArenaHeal::
# 916 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ArenaHeal_Text_0
# 918 "data/maps/CastleArena/scripts.pory"
	special HealPlayerParty
# 919 "data/maps/CastleArena/scripts.pory"
	playse SE_USE_ITEM
# 920 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_ArenaHeal_Text_1
# 921 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 922 "data/maps/CastleArena/scripts.pory"
	delay 60
# 923 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Break
	return


CastleArena_EventScript_ForfeitConfirmation::
# 928 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ForfeitConfirmation_Text_0
# 933 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_ForfeitConfirmation_Text_1
# 935 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 936 "data/maps/CastleArena/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, WaddleDeeArena_Text_ToughItOut, WaddleDeeArena_Text_AcceptDefeat
# 937 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CastleArena_EventScript_ForfeitConfirmation_1
# 962 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Break
	return

CastleArena_EventScript_ForfeitConfirmation_1:
# 939 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ForfeitConfirmation_Text_2
# 941 "data/maps/CastleArena/scripts.pory"
	closemessage
# 942 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 943 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 22, 26
# 944 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 945 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 946 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 20, 26
# 947 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 948 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 949 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 21, 26
# 950 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 951 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 952 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_ForfeitConfirmation_Movement_0
# 953 "data/maps/CastleArena/scripts.pory"
	delay 60
# 954 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_GrandFinals_Movement_13
# 955 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_14
# 956 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 957 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 958 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return


CastleArena_EventScript_Victory::
# 968 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Victory_Text_0
# 973 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Victory_Text_1
# 975 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 976 "data/maps/CastleArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 977 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_BADGE03_GET
# 978 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Victory_Text_2
# 983 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Youngster::
# 1007 "data/maps/CastleArena/scripts.pory"
	lock
# 1008 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1009 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Youngster_2
# 1019 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Youngster_Text_1
CastleArena_EventScript_Youngster_1:
# 1025 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Youngster_2:
# 1011 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Youngster_Text_0
	goto CastleArena_EventScript_Youngster_1


CastleArena_EventScript_Lumberjack::
# 1030 "data/maps/CastleArena/scripts.pory"
	lock
# 1031 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1032 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Lumberjack_2
# 1043 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Lumberjack_Text_1
CastleArena_EventScript_Lumberjack_1:
# 1050 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Lumberjack_2:
# 1034 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Lumberjack_Text_0
	goto CastleArena_EventScript_Lumberjack_1


CastleArena_EventScript_Conductor::
# 1055 "data/maps/CastleArena/scripts.pory"
	lock
# 1056 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1057 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Conductor_2
# 1070 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Conductor_Text_1
CastleArena_EventScript_Conductor_1:
# 1077 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Conductor_2:
# 1059 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Conductor_Text_0
	goto CastleArena_EventScript_Conductor_1


CastleArena_EventScript_ShortcutGuide::
# 1082 "data/maps/CastleArena/scripts.pory"
	lock
# 1083 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1084 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ShortcutGuide_Text_0
# 1087 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Wintry::
# 1092 "data/maps/CastleArena/scripts.pory"
	lock
# 1093 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Wintry_Text_0
# 1097 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_WaddleDee::
# 1102 "data/maps/CastleArena/scripts.pory"
	lock
# 1103 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1104 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_WaddleDee_Text_0
# 1111 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Cafe::
# 1116 "data/maps/CastleArena/scripts.pory"
	lock
# 1117 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1118 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Cafe_2
# 1124 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_CafeWin
CastleArena_EventScript_Cafe_1:
# 1126 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Cafe_2:
# 1120 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Cafe
	goto CastleArena_EventScript_Cafe_1


CastleArena_EventScript_Socialite::
# 1131 "data/maps/CastleArena/scripts.pory"
	lock
# 1132 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1133 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Socialite_2
# 1139 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_SocialiteWin
CastleArena_EventScript_Socialite_1:
# 1141 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Socialite_2:
# 1135 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Socialite
	goto CastleArena_EventScript_Socialite_1


CastleArena_EventScript_TalkToCrowd1::
# 1146 "data/maps/CastleArena/scripts.pory"
	lockall
# 1147 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_CASTLE_CROWD_1, DIR_EAST
# 1148 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToCrowd1_2
# 1154 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_CafeWin
CastleArena_EventScript_TalkToCrowd1_1:
# 1156 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToCrowd1_2:
# 1150 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Cafe
	goto CastleArena_EventScript_TalkToCrowd1_1


CastleArena_EventScript_TalkToCrowd2::
# 1161 "data/maps/CastleArena/scripts.pory"
	lockall
# 1162 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_CASTLE_CROWD_2, DIR_WEST
# 1163 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToCrowd2_2
# 1169 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_SocialiteWin
CastleArena_EventScript_TalkToCrowd2_1:
# 1171 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToCrowd2_2:
# 1165 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Socialite
	goto CastleArena_EventScript_TalkToCrowd2_1


CastleArena_EventScript_TalkToVCrowd1::
# 1176 "data/maps/CastleArena/scripts.pory"
	lockall
# 1177 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 1178 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd1_2
# 1188 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd1_Text_1
CastleArena_EventScript_TalkToVCrowd1_1:
# 1194 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd1_2:
# 1180 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd1_Text_0
	goto CastleArena_EventScript_TalkToVCrowd1_1


CastleArena_EventScript_TalkToVCrowd2::
# 1199 "data/maps/CastleArena/scripts.pory"
	lockall
# 1200 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 1201 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd2_2
# 1214 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd2_Text_1
CastleArena_EventScript_TalkToVCrowd2_1:
# 1226 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd2_2:
# 1203 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd2_Text_0
	goto CastleArena_EventScript_TalkToVCrowd2_1


CastleArena_EventScript_TalkToVCrowd3::
# 1231 "data/maps/CastleArena/scripts.pory"
	lockall
# 1232 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 1233 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd3_2
# 1243 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd3_Text_1
CastleArena_EventScript_TalkToVCrowd3_1:
# 1246 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd3_2:
# 1235 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd3_Text_0
	goto CastleArena_EventScript_TalkToVCrowd3_1


CastleArena_EventScript_Soldier::
# 1288 "data/maps/CastleArena/scripts.pory"
	lock
# 1289 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1290 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Soldier_2
# 1307 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Soldier_Text_1
CastleArena_EventScript_Soldier_1:
# 1313 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Soldier_2:
# 1292 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Soldier_Text_0
	goto CastleArena_EventScript_Soldier_1


CastleArena_EventScript_Sign::
# 1320 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Sign_Text_0, MSGBOX_SIGN
# 1322 "data/maps/CastleArena/scripts.pory"
	closemessage
	return


# 466 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_0:
# 466 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 467 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_1:
# 467 "data/maps/CastleArena/scripts.pory"
	walk_left
# 467 "data/maps/CastleArena/scripts.pory"
	walk_down
# 467 "data/maps/CastleArena/scripts.pory"
	walk_down
# 467 "data/maps/CastleArena/scripts.pory"
	walk_right
# 467 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 473 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_2:
# 473 "data/maps/CastleArena/scripts.pory"
	walk_down
# 473 "data/maps/CastleArena/scripts.pory"
	walk_left
# 473 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 479 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_3:
# 479 "data/maps/CastleArena/scripts.pory"
	walk_down
# 479 "data/maps/CastleArena/scripts.pory"
	walk_right
# 479 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 483 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_4:
# 483 "data/maps/CastleArena/scripts.pory"
	walk_up
# 483 "data/maps/CastleArena/scripts.pory"
	walk_up
# 483 "data/maps/CastleArena/scripts.pory"
	walk_up
# 483 "data/maps/CastleArena/scripts.pory"
	walk_up
# 483 "data/maps/CastleArena/scripts.pory"
	walk_up
# 483 "data/maps/CastleArena/scripts.pory"
	walk_up
	step_end

# 484 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_5:
# 484 "data/maps/CastleArena/scripts.pory"
	walk_up
# 484 "data/maps/CastleArena/scripts.pory"
	walk_up
# 484 "data/maps/CastleArena/scripts.pory"
	walk_up
# 484 "data/maps/CastleArena/scripts.pory"
	walk_up
# 484 "data/maps/CastleArena/scripts.pory"
	walk_up
# 484 "data/maps/CastleArena/scripts.pory"
	walk_up
# 484 "data/maps/CastleArena/scripts.pory"
	walk_up
# 484 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 485 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_6:
# 485 "data/maps/CastleArena/scripts.pory"
	walk_up
# 485 "data/maps/CastleArena/scripts.pory"
	walk_up
# 485 "data/maps/CastleArena/scripts.pory"
	walk_up
# 485 "data/maps/CastleArena/scripts.pory"
	walk_up
# 485 "data/maps/CastleArena/scripts.pory"
	walk_up
# 485 "data/maps/CastleArena/scripts.pory"
	walk_up
# 485 "data/maps/CastleArena/scripts.pory"
	walk_left
# 485 "data/maps/CastleArena/scripts.pory"
	walk_left
# 485 "data/maps/CastleArena/scripts.pory"
	walk_left
# 485 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 487 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_7:
# 487 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
# 487 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 507 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_8:
# 507 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 507 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 507 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 507 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 508 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_9:
# 508 "data/maps/CastleArena/scripts.pory"
	face_down
# 508 "data/maps/CastleArena/scripts.pory"
	delay_16
# 508 "data/maps/CastleArena/scripts.pory"
	delay_16
# 508 "data/maps/CastleArena/scripts.pory"
	face_up
# 508 "data/maps/CastleArena/scripts.pory"
	delay_16
# 508 "data/maps/CastleArena/scripts.pory"
	delay_16
# 508 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 529 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_0:
# 529 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 529 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 530 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_1:
# 530 "data/maps/CastleArena/scripts.pory"
	face_up
# 530 "data/maps/CastleArena/scripts.pory"
	delay_16
# 530 "data/maps/CastleArena/scripts.pory"
	delay_16
# 530 "data/maps/CastleArena/scripts.pory"
	delay_16
# 530 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 531 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_2:
# 531 "data/maps/CastleArena/scripts.pory"
	walk_up
# 531 "data/maps/CastleArena/scripts.pory"
	walk_up
# 531 "data/maps/CastleArena/scripts.pory"
	walk_up
# 531 "data/maps/CastleArena/scripts.pory"
	walk_up
# 531 "data/maps/CastleArena/scripts.pory"
	walk_up
# 531 "data/maps/CastleArena/scripts.pory"
	walk_up
# 531 "data/maps/CastleArena/scripts.pory"
	walk_up
# 531 "data/maps/CastleArena/scripts.pory"
	walk_right
# 531 "data/maps/CastleArena/scripts.pory"
	walk_right
# 531 "data/maps/CastleArena/scripts.pory"
	walk_right
# 531 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 539 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_3:
# 539 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 539 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 572 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_4:
# 572 "data/maps/CastleArena/scripts.pory"
	walk_left
# 572 "data/maps/CastleArena/scripts.pory"
	walk_left
	step_end

# 573 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_5:
# 573 "data/maps/CastleArena/scripts.pory"
	walk_right
# 573 "data/maps/CastleArena/scripts.pory"
	walk_right
	step_end

# 580 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_6:
# 580 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 580 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 581 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_7:
# 581 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 581 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 581 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 581 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 581 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 591 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_8:
# 591 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 591 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 598 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_9:
# 598 "data/maps/CastleArena/scripts.pory"
	walk_left
# 598 "data/maps/CastleArena/scripts.pory"
	walk_left
# 598 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 599 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_10:
# 599 "data/maps/CastleArena/scripts.pory"
	walk_left
# 599 "data/maps/CastleArena/scripts.pory"
	walk_down
# 599 "data/maps/CastleArena/scripts.pory"
	walk_down
# 599 "data/maps/CastleArena/scripts.pory"
	walk_down
# 599 "data/maps/CastleArena/scripts.pory"
	walk_down
# 599 "data/maps/CastleArena/scripts.pory"
	walk_down
# 599 "data/maps/CastleArena/scripts.pory"
	walk_down
# 599 "data/maps/CastleArena/scripts.pory"
	walk_down
# 599 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 619 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_0:
# 619 "data/maps/CastleArena/scripts.pory"
	face_down
# 619 "data/maps/CastleArena/scripts.pory"
	delay_16
# 619 "data/maps/CastleArena/scripts.pory"
	face_up
# 619 "data/maps/CastleArena/scripts.pory"
	delay_16
# 619 "data/maps/CastleArena/scripts.pory"
	face_down
# 619 "data/maps/CastleArena/scripts.pory"
	delay_16
# 619 "data/maps/CastleArena/scripts.pory"
	face_up
# 619 "data/maps/CastleArena/scripts.pory"
	delay_16
# 619 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 620 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_1:
# 620 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 620 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 620 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 620 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 672 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_2:
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 672 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 673 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_3:
# 673 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 673 "data/maps/CastleArena/scripts.pory"
	delay_16
# 673 "data/maps/CastleArena/scripts.pory"
	delay_8
# 673 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 673 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 673 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 673 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 673 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
	step_end

# 692 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_4:
# 692 "data/maps/CastleArena/scripts.pory"
	walk_left
# 692 "data/maps/CastleArena/scripts.pory"
	walk_down
# 692 "data/maps/CastleArena/scripts.pory"
	walk_down
# 692 "data/maps/CastleArena/scripts.pory"
	walk_down
# 692 "data/maps/CastleArena/scripts.pory"
	walk_down
# 692 "data/maps/CastleArena/scripts.pory"
	walk_down
# 692 "data/maps/CastleArena/scripts.pory"
	walk_down
# 692 "data/maps/CastleArena/scripts.pory"
	walk_down
# 692 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 736 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_0:
# 736 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 736 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 736 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 736 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 736 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 738 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_1:
# 738 "data/maps/CastleArena/scripts.pory"
	face_up
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_left
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_down
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_right
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_up
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_left
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_down
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_right
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_up
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_left
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_down
# 738 "data/maps/CastleArena/scripts.pory"
	delay_8
# 738 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 739 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_2:
# 739 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 739 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 739 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 739 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 739 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 739 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 739 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 767 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_3:
# 767 "data/maps/CastleArena/scripts.pory"
	face_up
# 767 "data/maps/CastleArena/scripts.pory"
	delay_16
# 767 "data/maps/CastleArena/scripts.pory"
	face_down
# 767 "data/maps/CastleArena/scripts.pory"
	delay_16
# 767 "data/maps/CastleArena/scripts.pory"
	face_right
# 767 "data/maps/CastleArena/scripts.pory"
	delay_16
# 767 "data/maps/CastleArena/scripts.pory"
	delay_8
# 767 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 767 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 767 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 768 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_4:
# 768 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 768 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 768 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 768 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 768 "data/maps/CastleArena/scripts.pory"
	delay_16
# 768 "data/maps/CastleArena/scripts.pory"
	face_up
# 768 "data/maps/CastleArena/scripts.pory"
	delay_16
# 768 "data/maps/CastleArena/scripts.pory"
	delay_16
# 768 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 817 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_5:
# 817 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 817 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 817 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 817 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 817 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 825 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_6:
# 825 "data/maps/CastleArena/scripts.pory"
	walk_slow_right
# 825 "data/maps/CastleArena/scripts.pory"
	walk_fast_left
# 825 "data/maps/CastleArena/scripts.pory"
	walk_fast_left
	step_end

# 826 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_7:
# 826 "data/maps/CastleArena/scripts.pory"
	walk_slow_left
# 826 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 826 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
	step_end

# 840 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_8:
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 840 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 841 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_9:
# 841 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 841 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 841 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 841 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 841 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 841 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
	step_end

# 842 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_10:
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_down
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_up
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_down
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_up
# 842 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 863 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_11:
# 863 "data/maps/CastleArena/scripts.pory"
	walk_left
# 863 "data/maps/CastleArena/scripts.pory"
	walk_left
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	walk_down
# 863 "data/maps/CastleArena/scripts.pory"
	face_down
	step_end

# 874 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_12:
# 874 "data/maps/CastleArena/scripts.pory"
	walk_right
# 874 "data/maps/CastleArena/scripts.pory"
	walk_right
# 874 "data/maps/CastleArena/scripts.pory"
	walk_down
# 874 "data/maps/CastleArena/scripts.pory"
	walk_down
# 874 "data/maps/CastleArena/scripts.pory"
	walk_down
# 874 "data/maps/CastleArena/scripts.pory"
	walk_down
# 874 "data/maps/CastleArena/scripts.pory"
	walk_down
# 874 "data/maps/CastleArena/scripts.pory"
	walk_down
# 874 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 876 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_13:
# 876 "data/maps/CastleArena/scripts.pory"
	walk_down
# 876 "data/maps/CastleArena/scripts.pory"
	walk_down
# 876 "data/maps/CastleArena/scripts.pory"
	walk_down
# 876 "data/maps/CastleArena/scripts.pory"
	walk_down
# 876 "data/maps/CastleArena/scripts.pory"
	walk_down
# 876 "data/maps/CastleArena/scripts.pory"
	walk_down
	step_end

# 877 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_14:
# 877 "data/maps/CastleArena/scripts.pory"
	walk_down
# 877 "data/maps/CastleArena/scripts.pory"
	walk_down
# 877 "data/maps/CastleArena/scripts.pory"
	walk_down
# 877 "data/maps/CastleArena/scripts.pory"
	walk_down
# 877 "data/maps/CastleArena/scripts.pory"
	walk_down
# 877 "data/maps/CastleArena/scripts.pory"
	walk_down
# 877 "data/maps/CastleArena/scripts.pory"
	walk_down
	step_end

# 952 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_ForfeitConfirmation_Movement_0:
# 952 "data/maps/CastleArena/scripts.pory"
	walk_right
# 952 "data/maps/CastleArena/scripts.pory"
	walk_right
# 952 "data/maps/CastleArena/scripts.pory"
	walk_right
# 952 "data/maps/CastleArena/scripts.pory"
	walk_down
# 952 "data/maps/CastleArena/scripts.pory"
	walk_down
# 952 "data/maps/CastleArena/scripts.pory"
	walk_down
# 952 "data/maps/CastleArena/scripts.pory"
	walk_down
# 952 "data/maps/CastleArena/scripts.pory"
	walk_down
# 952 "data/maps/CastleArena/scripts.pory"
	walk_down
# 952 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

CastleArena_EventScript_Francisca_Text_0:
# 36 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}I wish Lord Hyness would have come with\n"
	.string "us to experience the Royal Royale…\p"
	.string "He rarely seems to enjoy going out if it\n"
	.string "doesn't aid his own research, though.\p"
	.string "Maybe I should catch a Helper to bring\n"
	.string "back to him? That would be nice…\p"
	.string "I bet he would be fond of Pierre. It has\n"
	.string "a delightfully large nose like his!$"

CastleArena_EventScript_Francisca_Text_1:
# 50 "data/maps/CastleArena/scripts.pory"
	.string "I should have expected no less from\n"
	.string "you, Kirby. To defeat both Ms. Flamberge\l"
	.string "and Ms. Zan after me is truly stellar.\p"
	.string "In fact, I would like to impart a little\n"
	.string "gift upon you. Take it, won't you?$"

CastleArena_EventScript_Francisca_Text_2:
# 57 "data/maps/CastleArena/scripts.pory"
	.string "Many Helpers can learn Ice Punch, even\n"
	.string "if they aren't of the Ice type.\p"
	.string "Use it to spread the power of the\n"
	.string "bitter cold amongst your team.$"

CastleArena_EventScript_Francisca_Text_3:
# 66 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}My, my, look who it is. Have you been\n"
	.string "keeping well, Kirby?\p"
	.string "My fellow sisters and I have been\n"
	.string "travelling together for some time.\p"
	.string "Now, we're participating in the Royal\n"
	.string "Royale as a collective as well.\p"
	.string "You might think there can only be one\n"
	.string "winner at the end of the day…\p"
	.string "But you'll soon find we're more than\n"
	.string "willing to share the spoils. Ohoho!$"

CastleArena_EventScript_Flamberge_Text_0:
# 90 "data/maps/CastleArena/scripts.pory"
	.string "You know, I asked Francisca why we\n"
	.string "didn't just move on after getting\l"
	.string "Brooches for the three of us…\p"
	.string "You know what she said? It'd be good\n"
	.string "to offer extras to potential followers.\p"
	.string "Maybe, though… she just really liked\n"
	.string "the thrill of building a big win streak!\p"
	.string "Ha ha ha! Oh, that Francisca! She's so\n"
	.string "cool when she's focused on battles!$"

CastleArena_EventScript_Flamberge_Text_1:
# 105 "data/maps/CastleArena/scripts.pory"
	.string "Hey, can't you see I'm busy trying to\n"
	.string "cheer poor Francisca up?\p"
	.string "Sheesh, you're annoying… look, will you\n"
	.string "quit being a pest if I give you this?$"

CastleArena_EventScript_Flamberge_Text_2:
# 111 "data/maps/CastleArena/scripts.pory"
	.string "That TM teaches Fire Punch. It's a cool\n"
	.string "move you can teach to your Helpers.\p"
	.string "…man, I really can't believe you managed\n"
	.string "to topple our invincible strategy.\p"
	.string "Will you ever stop being full of\n"
	.string "bothersome surprises?$"

CastleArena_EventScript_Flamberge_Text_3:
# 123 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE}Ahahaha! Look who it is! Let me guess,\n"
	.string "you're here to take on the Arena too?\p"
	.string "Lemme warn you, shorty, you're in for a\n"
	.string "world of trouble if you take it on!\p"
	.string "Us three sisters are way tougher now!\n"
	.string "We've been strengthening our teamwork!\l"
	.string "And now… we're basically invincible!$"

CastleArena_EventScript_ZanPartizanne_Text_0:
# 142 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}I must admit… that friend of yours,\n"
	.string "the king who put together this event,\l"
	.string "I did not assume much of him initially.\p"
	.string "He seemed… poorly fit for his status.\n"
	.string "Greedy. Slovenly. Easily corruptible.\p"
	.string "And yet, he put together a game to\n"
	.string "teach the importance of collaboration\l"
	.string "and teamwork, and unite his people…\p"
	.string "Perhaps I misjudged him. It seems he\n"
	.string "does know what makes a good leader,\l"
	.string "even if he struggles to show it…$"

CastleArena_EventScript_ZanPartizanne_Text_1:
# 159 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}…jamanke, Kirby. It's not easy to say\n"
	.string "that…\p"
	.string "I realize now, though, that we've been\n"
	.string "sidetracked from our original mission.\p"
	.string "We need to move on to other Arenas, so\n"
	.string "we may have a shot at the grand prize…\p"
	.string "And more importantly, we must continue \n"
	.string "to learn and practice from experience.\p"
	.string "Here. It's not much, but I hope you can\n"
	.string "forgive the trouble we've caused here.$"

CastleArena_EventScript_ZanPartizanne_Text_2:
# 174 "data/maps/CastleArena/scripts.pory"
	.string "This TM is for the move Thunder Punch.\n"
	.string "It has a change to paralyze the target.\p"
	.string "Stopping my opponents right where they\n"
	.string "stand has always been my strategy.$"

CastleArena_EventScript_ZanPartizanne_Text_3:
# 183 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}Ah… it's you, Kirby. Bonjam. Are you\n"
	.string "participating in the Royal Royale too?\p"
	.string "We, the three Mage-Sisters, would quite\n"
	.string "like to try our hand at the grand prize.\p"
	.string "I believe it would do wonders for our\n"
	.string "following, so I devised a plan with the\l"
	.string "other generals to guarantee victory.\p"
	.string "Should you choose to challenge the\n"
	.string "Arena regardless… well, good luck.$"

CastleArena_EventScript_Nago_Text_0:
# 204 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_NAGO}Mrrow… these girls are a real piece of\n"
	.string "work, I'll tell ya what!\p"
	.string "Gloating about their teamwork and their\n"
	.string "unstoppable Arena-winning strategy…\p"
	.string "It makes me wanna win against them all\n"
	.string "the more, and yet I just keep losing!\l"
	.string "Can't anyone do something about them?$"

CastleArena_EventScript_Nago_Text_1:
# 217 "data/maps/CastleArena/scripts.pory"
	.string "Kirby! I didn't even notice you there.\n"
	.string "Sorry about that, mrrow!\p"
	.string "I was really impressed by your Helpers.\n"
	.string "They might be even stronger than mine!\p"
	.string "Mrrow! Let's have a battle sometime,\n"
	.string "okay, buddy?$"

CastleArena_EventScript_Shiro_Text_0:
# 235 "data/maps/CastleArena/scripts.pory"
	.string "Myew… it really makes me sad to see\n"
	.string "Nago get so worked up. Can't we all\l"
	.string "get along and play nice?$"

CastleArena_EventScript_Shiro_Text_1:
# 241 "data/maps/CastleArena/scripts.pory"
	.string "Myew! Nago's looking a lot happier now.\n"
	.string "I'm so relieved!$"

CastleArena_EventScript_MoveTutor_Text_0:
# 255 "data/maps/CastleArena/scripts.pory"
	.string "I'm a movesmith. I know all sorts of\n"
	.string "long-forgotten techniques.\p"
	.string "What I'm looking for… is a commander\n"
	.string "of Helpers that can wield my power.\p"
	.string "Do you have what it takes to spark\n"
	.string "the fire kindling in my heart?$"

CastleArena_EventScript_MoveTutorEnabled_Text_0:
# 273 "data/maps/CastleArena/scripts.pory"
	.string "Having watched your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥1500, I'll train\n"
	.string "them these new techniques.$"

CastleArena_EventScript_MoveTutorEnabled_Text_1:
# 281 "data/maps/CastleArena/scripts.pory"
	.string "What do you say?\n"
	.string "Which move are you interested in?$"

CastleArena_EventScript_TaughtMove_Text_0:
# 370 "data/maps/CastleArena/scripts.pory"
	.string "All done! I hope you and your Helper will\n"
	.string "make the most of this new technique!$"

CastleArena_EventScript_Commentator_Text_0:
# 385 "data/maps/CastleArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "Even a trio of talented sisters didn't\n"
	.string "keep you and your Helpers from victory!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

CastleArena_EventScript_Commentator_Text_1:
# 398 "data/maps/CastleArena/scripts.pory"
	.string "Wwwwwelcome to the Castle\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

CastleArena_EventScript_CommentatorChoice_Text_0:
# 411 "data/maps/CastleArena/scripts.pory"
	.string "Today's challenge: a zesty expedition!\n"
	.string "How can I help you?$"

CastleArena_EventScript_CommentatorBye_Text_0:
# 429 "data/maps/CastleArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

CastleArena_EventScript_CommentatorInfo_Text_0:
# 436 "data/maps/CastleArena/scripts.pory"
	.string "Arenas host gauntlet-styled\n"
	.string "tournaments of Helper battles.\p"
	.string "In this Arena, your goal is to win\n"
	.string "{COLOR BLUE}3 rounds{COLOR DARK_GRAY} without any breaks.\p"
	.string "There's no preliminary bracket here,\n"
	.string "which means retiring takes you aaaaall\l"
	.string "the way back to the beginning!\p"
	.string "In exchange, you'll get a complementary\n"
	.string "{COLOR RED}full-party heal after each round{COLOR DARK_GRAY}.\p"
	.string "Defeat the final opponent, and you'll\n"
	.string "be awarded one Castle Brooch!\p"
	.string "Now then…$"

CastleArena_EventScript_BeginChallenge_Text_0:
# 458 "data/maps/CastleArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

CastleArena_EventScript_BeginChallenge_Text_1:
# 490 "data/maps/CastleArena/scripts.pory"
	.string "Welcome, one and all, to the lavish\n"
	.string "Castle Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Here's a royally recognized rising star…\l"
	.string "It's the wondrous warrior, Kirbyyy!!!$"

CastleArena_EventScript_BeginChallenge_Text_2:
# 499 "data/maps/CastleArena/scripts.pory"
	.string "Welcome, one and all, to the lavish\n"
	.string "Castle Arena!\p"
	.string "We've got a returning Kirby, taking\n"
	.string "another swing at the impenetrable trio!\l"
	.string "Can he break through them after all?$"

CastleArena_EventScript_Challenger1_Text_0:
# 523 "data/maps/CastleArena/scripts.pory"
	.string "And for his first opponent, a girl whose\n"
	.string "composure is as cold as her Helpers!\p"
	.string "Please welcome {COLOR BLUE}Francisca{COLOR DARK_GRAY} to the stage!$"

CastleArena_EventScript_Challenger1_Text_1:
# 543 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}…Bonjam. It's been a while, hasn't it?\p"
	.string "My sisters and I were traveling to\n"
	.string "spread word of our new doctrine, when\l"
	.string "we heard of this intruiging game…\p"
	.string "…and came up with a foolproof plan!\n"
	.string "With our powers combined, we have three\l"
	.string "times the odds of winning a Brooch!\p"
	.string "Now, stay right there while I smite your\n"
	.string "Helpers, won't you? Ahaha!$"

CastleArena_EventScript_Challenger1_Text_2:
# 558 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}…Bonjam. You're as resilient as I\n"
	.string "remember you being.\p"
	.string "Of course, our plan means we have to win\n"
	.string "three times as many Brooches, too…\p"
	.string "Having you slow our progress down is\n"
	.string "absolutely unacceptable.\p"
	.string "This time, I'll make sure you stay\n"
	.string "away from the rest of my sisters!$"

CastleArena_EventScript_Challenger1_Text_3:
# 577 "data/maps/CastleArena/scripts.pory"
	.string "His first opponent's been put on ice!\n"
	.string "Kirby takes the first win!$"

CastleArena_EventScript_Challenger1_Text_4:
# 593 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}I suppose it's up to my sisters now to\n"
	.string "do what I could not. Jambuhbye.$"

CastleArena_EventScript_Challenger2_Text_0:
# 613 "data/maps/CastleArena/scripts.pory"
	.string "Up next is an opponent who alway brings\n"
	.string "the heat when she battles her rivals!\p"
	.string "Let's hear it for {COLOR RED}Flamberge{COLOR DARK_GRAY}, everybody!$"

CastleArena_EventScript_Challenger2_Text_1:
# 636 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE} HEY, YOU! You little pink… whatever\n"
	.string "your name was!\p"
	.string "You were supposed to give up last round\n"
	.string "and let sweet Francisca take the win!\p"
	.string "But did you do that? NO! And you even\n"
	.string "defeated her SUPER CUTE HELPERS!\p"
	.string "Aaaaargh! Seeing you always gets me\n"
	.string "burning up! I've had it!\p"
	.string "Me and my Helpers are coming at you with\n"
	.string "all of our scorching rage!$"

CastleArena_EventScript_Challenger2_Text_2:
# 653 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE}WHAT did I tell you last time, huh?\n"
	.string "STOP DEFEATING MY PRECIOUS FRANCISCA!\p"
	.string "Man, you're so annoyingly MEDDLESOME! \n"
	.string "Vun, vun, VUN MEDDLESOME! Aaaarghh!!\p"
	.string "YOU'RE GOING DOWN!$"

CastleArena_EventScript_Challenger2_Text_3:
# 669 "data/maps/CastleArena/scripts.pory"
	.string "Flamberge's win streak was snuffed out!\n"
	.string "Kirby has scored a second victory!$"

CastleArena_EventScript_Challenger2_Text_4:
# 683 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE}Oops! I got so angry at you, when I\n"
	.string "should've checked on Francisca first!\p"
	.string "Don't think this is over, though. Zan's\n"
	.string "definitely gonna take you out!$"

CastleArena_EventScript_GrandFinals_Text_0:
# 711 "data/maps/CastleArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's FINAL ROUND time!\p"
	.string "On my right, a young hopeful looking to\n"
	.string "topple the trio of terror…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

CastleArena_EventScript_GrandFinals_Text_1:
# 724 "data/maps/CastleArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's FINAL ROUND time!\p"
	.string "On my right, a returnee determined to\n"
	.string "end the sisters' reign of dominance…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

CastleArena_EventScript_GrandFinals_Text_2:
# 754 "data/maps/CastleArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who reached the final round!\p"
	.string "The lightning-quick leader of the mage\n"
	.string "sisters is a force to be reckoned with.\p"
	.string "A name announced so often here, I've\n"
	.string "almost memorized the whole thing!\p"
	.string "Everyone welcome to the stage…\n"
	.string "{COLOR GREEN}Zan Partizanne{COLOR DARK_GRAY}!$"

CastleArena_EventScript_GrandFinals_Text_3:
# 784 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}Bonjam, Kirby. I'm surprised to see us\n"
	.string "meeting on the battlefield once more.\p"
	.string "You showed us the importance of strong\n"
	.string "relationships, and how that can bring\l"
	.string "about change for the better…\p"
	.string "So now, Franny, Berge, and I are putting\n"
	.string "those lessons to the test.\p"
	.string "Do you really think you can take down\n"
	.string "all three of us in a row?\p"
	.string "Come on, Kirby. I'll put a stop to your\n"
	.string "lucky streak right here and now!$"

CastleArena_EventScript_GrandFinals_Text_4:
# 802 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}Bonjam majaja, Kirby. \p"
	.string "If there's anything I'd never forget\n"
	.string "about you, it's your persistence.\p"
	.string "That annoying tenacity that forced us\n"
	.string "to cross paths over and over…\p"
	.string "You haven't changed at all, it seems.\n"
	.string "But we can't say the same for us.\p"
	.string "Allow me to remind you what it means to\n"
	.string "face against the generals of magic!$"

CastleArena_EventScript_GrandFinals_Text_5:
# 818 "data/maps/CastleArena/scripts.pory"
	.string "It's come down to Kirby vs.… uh… Zan!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

CastleArena_EventScript_GrandFinals_Text_6:
# 832 "data/maps/CastleArena/scripts.pory"
	.string "Folks… the battle of bonds has ended…\n"
	.string "The winner of this Castle Arena clash…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

CastleArena_EventScript_GrandFinals_Text_7:
# 855 "data/maps/CastleArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

CastleArena_EventScript_GrandFinals_Text_8:
# 861 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}…that's that, then. Jambuhbye…$"

CastleArena_EventScript_Break_Text_0:
# 887 "data/maps/CastleArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

CastleArena_EventScript_Break_Text_1:
# 892 "data/maps/CastleArena/scripts.pory"
	.string "This is it: the final round awaits!\n"
	.string "Ready for the ultimate battle, Kirby?$"

CastleArena_EventScript_ArenaHeal_Text_0:
# 916 "data/maps/CastleArena/scripts.pory"
	.string "Great job on that battle, Kirby. Let's\n"
	.string "heal up those hardworking Helpers!$"

CastleArena_EventScript_ArenaHeal_Text_1:
# 920 "data/maps/CastleArena/scripts.pory"
	.string "Your party has been fully healed!$"

CastleArena_EventScript_ForfeitConfirmation_Text_0:
# 928 "data/maps/CastleArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!$"

CastleArena_EventScript_ForfeitConfirmation_Text_1:
# 933 "data/maps/CastleArena/scripts.pory"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

CastleArena_EventScript_ForfeitConfirmation_Text_2:
# 939 "data/maps/CastleArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

CastleArena_EventScript_Victory_Text_0:
# 968 "data/maps/CastleArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Castle Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Castle Brooch!$"

CastleArena_EventScript_Victory_Text_1:
# 973 "data/maps/CastleArena/scripts.pory"
	.string "Kirby received the Castle Brooch\n"
	.string "from Commentator Waddle Dee!$"

CastleArena_EventScript_Victory_Text_2:
# 978 "data/maps/CastleArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I'm sure we'll see each other again\n"
	.string "at the next Arena. Until then!$"

CastleArena_EventScript_Youngster_Text_0:
# 1011 "data/maps/CastleArena/scripts.pory"
	.string "Wow, your Helpers must have been really\n"
	.string "good to win at the Arena here!\p"
	.string "I'm so inspired! I'm gonna go out and\n"
	.string "try to befriend ones just like yours!$"

CastleArena_EventScript_Youngster_Text_1:
# 1019 "data/maps/CastleArena/scripts.pory"
	.string "Is there any type of Helper that's good\n"
	.string "against Ice, Fire, and Electric…?\p"
	.string "Hmm… I'm not sure my team is diverse\n"
	.string "enough for the job here…$"

CastleArena_EventScript_Lumberjack_Text_0:
# 1034 "data/maps/CastleArena/scripts.pory"
	.string "It's really something how well those\n"
	.string "girls work together in battle, huh?\p"
	.string "Maybe I should be taking a closer listen\n"
	.string "to the words they preach about bonds\l"
	.string "bringing us closer to paradise.$"

CastleArena_EventScript_Lumberjack_Text_1:
# 1043 "data/maps/CastleArena/scripts.pory"
	.string "My Sandran and Digguh can hold their\n"
	.string "own against the red and yellow girls…\p"
	.string "But my luck usually leads me to get\n"
	.string "matched up against the blue one!\l"
	.string "Her team beats mine so easily!$"

CastleArena_EventScript_Conductor_Text_0:
# 1059 "data/maps/CastleArena/scripts.pory"
	.string "You actually made it, huh? I guess this\n"
	.string "Arena wasn't so unwinnable after all.\p"
	.string "I shouldn't have let my worries stop\n"
	.string "me from giving it my best shot in there…\p"
	.string "Maybe this was one of those lessons\n"
	.string "the Great King wanted us to take away?$"

CastleArena_EventScript_Conductor_Text_1:
# 1070 "data/maps/CastleArena/scripts.pory"
	.string "There's a whole lot of hubbub about\n"
	.string "this Arena being unwinnable.\p"
	.string "Did I choose the wrong Arena to visit\n"
	.string "first? Maybe I should head over to\l"
	.string "the Icecap Arena instead…$"

CastleArena_EventScript_ShortcutGuide_Text_0:
# 1084 "data/maps/CastleArena/scripts.pory"
	.string "If you need to leave back to the\n"
	.string "courtyard, this path's a shortcut.\l"
	.string "I wish it was open on the way up…$"

CastleArena_EventScript_Wintry_Text_0:
# 1093 "data/maps/CastleArena/scripts.pory"
	.string "Wow! I can see my friend at the top of\n"
	.string "the Icecap Arena all the way from here!\p"
	.string "Heeeeeeey!!! Helloooooooooo!!!!!$"

CastleArena_EventScript_WaddleDee_Text_0:
# 1104 "data/maps/CastleArena/scripts.pory"
	.string "I wonder whether the competitors who\n"
	.string "won their Brooch here before that trio\l"
	.string "showed up could have beat them?\p"
	.string "I've seen other strong-looking leaders\n"
	.string "here too. There was this bandana-clad\l"
	.string "Waddle Dee, and some artist girl…$"

CastleArena_EventScript_TalkToVCrowd1_Text_0:
# 1180 "data/maps/CastleArena/scripts.pory"
	.string "I can't get enough of seeing Francisca\n"
	.string "freeze her opponent's Helpers!\p"
	.string "Being frozen sounds like so much fun…\n"
	.string "Oh, Francisca, please let it be me next!$"

CastleArena_EventScript_TalkToVCrowd1_Text_1:
# 1188 "data/maps/CastleArena/scripts.pory"
	.string "What? You managed to defeat the\n"
	.string "wonderful Francisca? How could you!?\p"
	.string "Oooh… this burning feeling in my heart…\n"
	.string "is this what Flamberge always feels!?$"

CastleArena_EventScript_TalkToVCrowd2_Text_0:
# 1203 "data/maps/CastleArena/scripts.pory"
	.string "My pals here are real big fans of\n"
	.string "Francisca and Flamberge, so you'd think\l"
	.string "you'd know what to expect from me.\p"
	.string "There's just one problem though…\p"
	.string "I can't be the biggest fan of someone\n"
	.string "whose name I can't even remember!$"

CastleArena_EventScript_TalkToVCrowd2_Text_1:
# 1214 "data/maps/CastleArena/scripts.pory"
	.string "Whoa, you must be pretty talented if\n"
	.string "you managed to beat… uhh…\p"
	.string "Hold on, it's coming to me…\p"
	.string "…\p"
	.string "… Aha!\p"
	.string "Santa's Party Sack! That was it! Yeah,\n"
	.string "good job winning against her.$"

CastleArena_EventScript_TalkToVCrowd3_Text_0:
# 1235 "data/maps/CastleArena/scripts.pory"
	.string "I think Flamberge puts up the best\n"
	.string "performance of the three mage sisters.\p"
	.string "I'd be okay watching her battle over\n"
	.string "and over if nobody could defeat her…$"

CastleArena_EventScript_TalkToVCrowd3_Text_1:
# 1243 "data/maps/CastleArena/scripts.pory"
	.string "No way… you managed to defeat\n"
	.string "Flamberge? Who even are you?$"

CastleArena_EventScript_Soldier_Text_0:
# 1292 "data/maps/CastleArena/scripts.pory"
	.string "Seems like those girls are ready to move\n"
	.string "on elsewhere after you defeated them.\p"
	.string "It's a good thing that challengers will\n"
	.string "be able to earn Brooches here again.\p"
	.string "…it also cements that you're a serious\n"
	.string "contender for the Royal Royale's crown.\l"
	.string "Much to the Great King's chagrin…\p"
	.string "I wonder how things will shake out.\n"
	.string "For now, keep doing your best, alright?$"

CastleArena_EventScript_Soldier_Text_1:
# 1307 "data/maps/CastleArena/scripts.pory"
	.string "I'm keeping an eye on things here to see\n"
	.string "just how unbeatable that trio really is.\p"
	.string "It would be a problem if nobody could\n"
	.string "win the Royal Royal because of them…$"

CastleArena_EventScript_Sign_Text_0:
# 1320 "data/maps/CastleArena/scripts.pory"
	.string "Newly-opened: CASTLE ARENA\n"
	.string "Conquer it and win the Castle Brooch!$"

CastleArena_Text_Francisca::
# 986 "data/maps/CastleArena/scripts.pory"
	.string "My, my… you and your Helpers are in top\n"
	.string "form as always. How divine…$"

CastleArena_Text_Flamberge::
# 992 "data/maps/CastleArena/scripts.pory"
	.string "Jamblasted… JAMBLASTED!$"

CastleArena_Text_ZanPartizanne::
# 997 "data/maps/CastleArena/scripts.pory"
	.string "Janno… it can't be… are we really still\n"
	.string "unable to overcome you?$"

CastleArena_Text_Cafe::
# 1249 "data/maps/CastleArena/scripts.pory"
	.string "Arena seats seem like the perfect place\n"
	.string "to sell snacks to hungry customers, so\l"
	.string "I'm setting up a little food stand here!$"

CastleArena_Text_CafeWin::
# 1256 "data/maps/CastleArena/scripts.pory"
	.string "That was some seriously incredible\n"
	.string "Helper battling skill! Great work!\p"
	.string "With hot shots like you, I bet this\n"
	.string "place will draw huge crowds soon…\l"
	.string "and then I'll be busy, busy, busy!$"

CastleArena_Text_Socialite::
# 1266 "data/maps/CastleArena/scripts.pory"
	.string "It's easy to see the results coming\n"
	.string "when one group of competitors keep\l"
	.string "dominating every single tournament.\p"
	.string "Will you be able to inject some spice\n"
	.string "into this Arena, I wonder?$"

CastleArena_Text_SocialiteWin::
# 1276 "data/maps/CastleArena/scripts.pory"
	.string "Bravo! You and your Helpers were really\n"
	.string "something else!\p"
	.string "Knowing there are strong competitors\n"
	.string "like you traveling here has restored\l"
	.string "my enthusiasm for Arena spectating!$"
