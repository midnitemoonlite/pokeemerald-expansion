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


CastleArena_EventScript_Commentator::
# 251 "data/maps/CastleArena/scripts.pory"
	lock
# 252 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 253 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Commentator_2
# 264 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Commentator_3
CastleArena_EventScript_Commentator_1:
# 276 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Commentator_2:
# 255 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Commentator_Text_0
	goto CastleArena_EventScript_Commentator_1

CastleArena_EventScript_Commentator_3:
# 266 "data/maps/CastleArena/scripts.pory"
	lock
# 267 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 268 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Commentator_Text_1
# 274 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorChoice
	goto CastleArena_EventScript_Commentator_1


CastleArena_EventScript_CommentatorChoice::
# 281 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_CommentatorChoice_Text_0
# 283 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 284 "data/maps/CastleArena/scripts.pory"
	multichoice 20, 6, MULTI_CHALLENGEINFO, FALSE
# 285 "data/maps/CastleArena/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/CastleArena/scripts.pory"
	case 0, CastleArena_EventScript_CommentatorChoice_2
# 288 "data/maps/CastleArena/scripts.pory"
	case 1, CastleArena_EventScript_CommentatorChoice_3
# 290 "data/maps/CastleArena/scripts.pory"
	case 2, CastleArena_EventScript_CommentatorChoice_4
# 292 "data/maps/CastleArena/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_EventScript_CommentatorChoice_5
	return

CastleArena_EventScript_CommentatorChoice_2:
# 287 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_BeginChallenge
	return

CastleArena_EventScript_CommentatorChoice_3:
# 289 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorInfo
	return

CastleArena_EventScript_CommentatorChoice_4:
# 291 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return

CastleArena_EventScript_CommentatorChoice_5:
# 293 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return


CastleArena_EventScript_CommentatorBye::
# 299 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_CommentatorBye_Text_0
# 301 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_CommentatorInfo::
# 306 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_CommentatorInfo_Text_0
# 323 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorChoice
	return


CastleArena_EventScript_BeginChallenge::
# 328 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_0
# 330 "data/maps/CastleArena/scripts.pory"
	closemessage
# 331 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 1
# 332 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 333 "data/maps/CastleArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 334 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq CastleArena_EventScript_BeginChallenge_2
# 340 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq CastleArena_EventScript_BeginChallenge_3
# 346 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq CastleArena_EventScript_BeginChallenge_4
CastleArena_EventScript_BeginChallenge_1:
# 352 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 353 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_BeginChallenge_Movement_4
# 354 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_5
# 355 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_6
# 356 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 357 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_7
# 358 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, CastleArena_EventScript_BeginChallenge_9
# 367 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, CastleArena_EventScript_BeginChallenge_10
CastleArena_EventScript_BeginChallenge_8:
# 376 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 377 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_BeginChallenge_Movement_8
# 378 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_BeginChallenge_Movement_9
# 379 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 380 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 381 "data/maps/CastleArena/scripts.pory"
	delay 40
# 382 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 383 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 384 "data/maps/CastleArena/scripts.pory"
	delay 20
# 385 "data/maps/CastleArena/scripts.pory"
	call CastleArena_EventScript_Challenger1
	return

CastleArena_EventScript_BeginChallenge_2:
# 336 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_0
# 337 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_1
# 338 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_3:
# 342 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_0
# 343 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_2
# 344 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_4:
# 348 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_0
# 349 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_3
# 350 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_9:
# 360 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_1
	goto CastleArena_EventScript_BeginChallenge_8

CastleArena_EventScript_BeginChallenge_10:
# 369 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_2
	goto CastleArena_EventScript_BeginChallenge_8


CastleArena_EventScript_Challenger1::
# 390 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 391 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 21, 16
# 392 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 393 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_0
# 397 "data/maps/CastleArena/scripts.pory"
	closemessage
# 398 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 399 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger1_Movement_0
# 400 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger1_Movement_1
# 401 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_2
# 402 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_WEST
# 403 "data/maps/CastleArena/scripts.pory"
	delay 32
# 404 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 405 "data/maps/CastleArena/scripts.pory"
	delay 32
# 406 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 407 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_FRANCISCA
# 408 "data/maps/CastleArena/scripts.pory"
	delay 30
# 409 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_3
# 410 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 411 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, CastleArena_EventScript_Challenger1_2
# 426 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, CastleArena_EventScript_Challenger1_3
CastleArena_EventScript_Challenger1_1:
# 440 "data/maps/CastleArena/scripts.pory"
	closemessage
# 441 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 442 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_4
# 443 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_5
# 444 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 445 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 446 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_EDGAR, CastleArena_Text_Francisca
# 447 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_3
# 449 "data/maps/CastleArena/scripts.pory"
	closemessage
# 450 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger1_Movement_6
# 451 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger1_Movement_7
# 452 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 453 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_NORTH
# 454 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 455 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 456 "data/maps/CastleArena/scripts.pory"
	delay 48
# 457 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 458 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 459 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_CASTLE_CROWD_2
# 460 "data/maps/CastleArena/scripts.pory"
	delay 60
# 461 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_8
# 462 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 463 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_4
# 465 "data/maps/CastleArena/scripts.pory"
	closemessage
# 466 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 467 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 468 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_9
# 469 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_10
# 470 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 471 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 472 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 473 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 17, 17
# 474 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 475 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ArenaHeal
	return

CastleArena_EventScript_Challenger1_2:
# 413 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_1
	goto CastleArena_EventScript_Challenger1_1

CastleArena_EventScript_Challenger1_3:
# 428 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_2
	goto CastleArena_EventScript_Challenger1_1


CastleArena_EventScript_Challenger2::
# 480 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 481 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 21, 16
# 482 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 483 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_0
# 487 "data/maps/CastleArena/scripts.pory"
	closemessage
# 488 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 489 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger2_Movement_0
# 490 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger2_Movement_1
# 491 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_2
# 492 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_EAST
# 493 "data/maps/CastleArena/scripts.pory"
	delay 18
# 494 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 495 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 496 "data/maps/CastleArena/scripts.pory"
	delay 18
# 497 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 498 "data/maps/CastleArena/scripts.pory"
	delay 18
# 499 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 500 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_FLAMBERGE
# 501 "data/maps/CastleArena/scripts.pory"
	delay 30
# 502 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_3
# 503 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 504 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, CastleArena_EventScript_Challenger2_2
# 521 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, CastleArena_EventScript_Challenger2_3
CastleArena_EventScript_Challenger2_1:
# 531 "data/maps/CastleArena/scripts.pory"
	closemessage
# 532 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 533 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 534 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_4
# 535 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_5
# 536 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 537 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 538 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ALBERT, CastleArena_Text_Flamberge
# 539 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_3
# 541 "data/maps/CastleArena/scripts.pory"
	closemessage
# 542 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger2_Movement_2
# 543 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger2_Movement_3
# 544 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 545 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 546 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 547 "data/maps/CastleArena/scripts.pory"
	delay 32
# 548 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 549 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_CASTLE_CROWD_2
# 550 "data/maps/CastleArena/scripts.pory"
	delay 60
# 551 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_8
# 552 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 553 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_4
# 558 "data/maps/CastleArena/scripts.pory"
	closemessage
# 559 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 560 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 561 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_9
# 562 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger2_Movement_4
# 563 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 564 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 565 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 566 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 18, 17
# 567 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 568 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ArenaHeal
	return

CastleArena_EventScript_Challenger2_2:
# 506 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_1
	goto CastleArena_EventScript_Challenger2_1

CastleArena_EventScript_Challenger2_3:
# 523 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_2
	goto CastleArena_EventScript_Challenger2_1


CastleArena_EventScript_GrandFinals::
# 573 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 574 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 575 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 576 "data/maps/CastleArena/scripts.pory"
	fadeoutbgm 1
# 577 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_7
# 578 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 579 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_2
# 592 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_3
CastleArena_EventScript_GrandFinals_1:
# 605 "data/maps/CastleArena/scripts.pory"
	closemessage
# 606 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_0
# 607 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 608 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_1
# 609 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_2
# 610 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_WEST
# 611 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 612 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_EAST
# 613 "data/maps/CastleArena/scripts.pory"
	delay 20
# 614 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_NORTH
# 615 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 616 "data/maps/CastleArena/scripts.pory"
	delay 20
# 617 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 618 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 619 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 620 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 621 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 21, 16
# 622 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 623 "data/maps/CastleArena/scripts.pory"
	delay 60
# 624 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_2
# 635 "data/maps/CastleArena/scripts.pory"
	closemessage
# 636 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 637 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_3
# 638 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_4
# 639 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_2
# 640 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 641 "data/maps/CastleArena/scripts.pory"
	delay 15
# 642 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_EAST
# 643 "data/maps/CastleArena/scripts.pory"
	delay 15
# 644 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 645 "data/maps/CastleArena/scripts.pory"
	delay 15
# 646 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 647 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_ZAN_PARTIZANNE
# 648 "data/maps/CastleArena/scripts.pory"
	delay 60
# 649 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_3
# 650 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 651 "data/maps/CastleArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 652 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_7
CastleArena_EventScript_GrandFinals_6:
# 670 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_10
CastleArena_EventScript_GrandFinals_9:
# 686 "data/maps/CastleArena/scripts.pory"
	closemessage
# 687 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_5
# 688 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_5
# 692 "data/maps/CastleArena/scripts.pory"
	closemessage
# 693 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 694 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 695 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_GrandFinals_Movement_6
# 696 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_7
# 697 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 698 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 699 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_SAMUEL, CastleArena_Text_ZanPartizanne
# 700 "data/maps/CastleArena/scripts.pory"
	fadeoutbgm 1
# 701 "data/maps/CastleArena/scripts.pory"
	delay 60
# 702 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_6
# 707 "data/maps/CastleArena/scripts.pory"
	closemessage
# 708 "data/maps/CastleArena/scripts.pory"
	playbgm MUS_B_FRONTIER, TRUE
# 709 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 710 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_8
# 711 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_9
# 712 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_10
# 713 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 714 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 715 "data/maps/CastleArena/scripts.pory"
	delay 20
# 716 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 717 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_EAST
# 718 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 719 "data/maps/CastleArena/scripts.pory"
	delay 20
# 720 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 721 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 722 "data/maps/CastleArena/scripts.pory"
	delay 20
# 723 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 724 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_PLAYER
# 725 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_GrandFinals_Text_7
# 726 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 727 "data/maps/CastleArena/scripts.pory"
	delay 60
# 728 "data/maps/CastleArena/scripts.pory"
	closemessage
# 729 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_8
# 730 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 731 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_8
# 732 "data/maps/CastleArena/scripts.pory"
	closemessage
# 733 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_GrandFinals_Movement_11
# 734 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 735 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 736 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 24, 17
# 737 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 738 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 739 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 740 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 741 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 742 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 743 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 744 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_12
# 745 "data/maps/CastleArena/scripts.pory"
	delay 60
# 746 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_GrandFinals_Movement_13
# 747 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_14
# 748 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 749 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 750 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Victory
	return

CastleArena_EventScript_GrandFinals_2:
# 581 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_0
	goto CastleArena_EventScript_GrandFinals_1

CastleArena_EventScript_GrandFinals_3:
# 594 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_1
	goto CastleArena_EventScript_GrandFinals_1

CastleArena_EventScript_GrandFinals_7:
# 654 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_3
	goto CastleArena_EventScript_GrandFinals_6

CastleArena_EventScript_GrandFinals_10:
# 672 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_4
	goto CastleArena_EventScript_GrandFinals_9


CastleArena_EventScript_Break::
# 755 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq CastleArena_EventScript_Break_2
# 760 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq CastleArena_EventScript_Break_3
CastleArena_EventScript_Break_1:
# 765 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 766 "data/maps/CastleArena/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_RETIRE, 0
# 767 "data/maps/CastleArena/scripts.pory"
	switch VAR_RESULT
# 768 "data/maps/CastleArena/scripts.pory"
	case 0, CastleArena_EventScript_Break_7
# 777 "data/maps/CastleArena/scripts.pory"
	case 1, CastleArena_EventScript_Break_8
# 779 "data/maps/CastleArena/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_EventScript_Break_9
	return

CastleArena_EventScript_Break_2:
# 757 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Break_Text_0
	goto CastleArena_EventScript_Break_1

CastleArena_EventScript_Break_3:
# 762 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Break_Text_1
	goto CastleArena_EventScript_Break_1

CastleArena_EventScript_Break_7:
# 769 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq CastleArena_EventScript_Break_10
# 773 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq CastleArena_EventScript_Break_11
	return

CastleArena_EventScript_Break_8:
# 778 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ForfeitConfirmation
	return

CastleArena_EventScript_Break_9:
# 780 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ForfeitConfirmation
	return

CastleArena_EventScript_Break_10:
# 771 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Challenger2
	return

CastleArena_EventScript_Break_11:
# 775 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_GrandFinals
	return


CastleArena_EventScript_ArenaHeal::
# 786 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ArenaHeal_Text_0
# 788 "data/maps/CastleArena/scripts.pory"
	special HealPlayerParty
# 789 "data/maps/CastleArena/scripts.pory"
	playse SE_USE_ITEM
# 790 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_ArenaHeal_Text_1
# 791 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 792 "data/maps/CastleArena/scripts.pory"
	delay 60
# 793 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Break
	return


CastleArena_EventScript_ForfeitConfirmation::
# 798 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ForfeitConfirmation_Text_0
# 803 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_ForfeitConfirmation_Text_1
# 805 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 806 "data/maps/CastleArena/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, WaddleDeeArena_Text_ToughItOut, WaddleDeeArena_Text_AcceptDefeat
# 807 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CastleArena_EventScript_ForfeitConfirmation_1
# 832 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Break
	return

CastleArena_EventScript_ForfeitConfirmation_1:
# 809 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ForfeitConfirmation_Text_2
# 811 "data/maps/CastleArena/scripts.pory"
	closemessage
# 812 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 813 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 22, 26
# 814 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 815 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 816 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 20, 26
# 817 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 818 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 819 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 21, 26
# 820 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 821 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 822 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_ForfeitConfirmation_Movement_0
# 823 "data/maps/CastleArena/scripts.pory"
	delay 60
# 824 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_GrandFinals_Movement_13
# 825 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_14
# 826 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 827 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 828 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return


CastleArena_EventScript_Victory::
# 838 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Victory_Text_0
# 843 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Victory_Text_1
# 845 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 846 "data/maps/CastleArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 847 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_BADGE03_GET
# 848 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Victory_Text_2
# 853 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Youngster::
# 877 "data/maps/CastleArena/scripts.pory"
	lock
# 878 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 879 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Youngster_2
# 889 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Youngster_Text_1
CastleArena_EventScript_Youngster_1:
# 895 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Youngster_2:
# 881 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Youngster_Text_0
	goto CastleArena_EventScript_Youngster_1


CastleArena_EventScript_Lumberjack::
# 900 "data/maps/CastleArena/scripts.pory"
	lock
# 901 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 902 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Lumberjack_2
# 913 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Lumberjack_Text_1
CastleArena_EventScript_Lumberjack_1:
# 920 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Lumberjack_2:
# 904 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Lumberjack_Text_0
	goto CastleArena_EventScript_Lumberjack_1


CastleArena_EventScript_Conductor::
# 925 "data/maps/CastleArena/scripts.pory"
	lock
# 926 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 927 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Conductor_2
# 940 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Conductor_Text_1
CastleArena_EventScript_Conductor_1:
# 947 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Conductor_2:
# 929 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Conductor_Text_0
	goto CastleArena_EventScript_Conductor_1


CastleArena_EventScript_ShortcutGuide::
# 952 "data/maps/CastleArena/scripts.pory"
	lock
# 953 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 954 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ShortcutGuide_Text_0
# 957 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Wintry::
# 962 "data/maps/CastleArena/scripts.pory"
	lock
# 963 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Wintry_Text_0
# 967 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_WaddleDee::
# 972 "data/maps/CastleArena/scripts.pory"
	lock
# 973 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 974 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_WaddleDee_Text_0
# 981 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Cafe::
# 986 "data/maps/CastleArena/scripts.pory"
	lock
# 987 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 988 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Cafe_2
# 994 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_CafeWin
CastleArena_EventScript_Cafe_1:
# 996 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Cafe_2:
# 990 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Cafe
	goto CastleArena_EventScript_Cafe_1


CastleArena_EventScript_Socialite::
# 1001 "data/maps/CastleArena/scripts.pory"
	lock
# 1002 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1003 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Socialite_2
# 1009 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_SocialiteWin
CastleArena_EventScript_Socialite_1:
# 1011 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Socialite_2:
# 1005 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Socialite
	goto CastleArena_EventScript_Socialite_1


CastleArena_EventScript_TalkToCrowd1::
# 1016 "data/maps/CastleArena/scripts.pory"
	lockall
# 1017 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_CASTLE_CROWD_1, DIR_EAST
# 1018 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToCrowd1_2
# 1024 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_CafeWin
CastleArena_EventScript_TalkToCrowd1_1:
# 1026 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToCrowd1_2:
# 1020 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Cafe
	goto CastleArena_EventScript_TalkToCrowd1_1


CastleArena_EventScript_TalkToCrowd2::
# 1031 "data/maps/CastleArena/scripts.pory"
	lockall
# 1032 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_CASTLE_CROWD_2, DIR_WEST
# 1033 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToCrowd2_2
# 1039 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_SocialiteWin
CastleArena_EventScript_TalkToCrowd2_1:
# 1041 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToCrowd2_2:
# 1035 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Socialite
	goto CastleArena_EventScript_TalkToCrowd2_1


CastleArena_EventScript_TalkToVCrowd1::
# 1046 "data/maps/CastleArena/scripts.pory"
	lockall
# 1047 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 1048 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd1_2
# 1058 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd1_Text_1
CastleArena_EventScript_TalkToVCrowd1_1:
# 1064 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd1_2:
# 1050 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd1_Text_0
	goto CastleArena_EventScript_TalkToVCrowd1_1


CastleArena_EventScript_TalkToVCrowd2::
# 1069 "data/maps/CastleArena/scripts.pory"
	lockall
# 1070 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 1071 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd2_2
# 1084 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd2_Text_1
CastleArena_EventScript_TalkToVCrowd2_1:
# 1096 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd2_2:
# 1073 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd2_Text_0
	goto CastleArena_EventScript_TalkToVCrowd2_1


CastleArena_EventScript_TalkToVCrowd3::
# 1101 "data/maps/CastleArena/scripts.pory"
	lockall
# 1102 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 1103 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd3_2
# 1113 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd3_Text_1
CastleArena_EventScript_TalkToVCrowd3_1:
# 1116 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd3_2:
# 1105 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd3_Text_0
	goto CastleArena_EventScript_TalkToVCrowd3_1


CastleArena_EventScript_Soldier::
# 1158 "data/maps/CastleArena/scripts.pory"
	lock
# 1159 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1160 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Soldier_2
# 1177 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Soldier_Text_1
CastleArena_EventScript_Soldier_1:
# 1183 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Soldier_2:
# 1162 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Soldier_Text_0
	goto CastleArena_EventScript_Soldier_1


CastleArena_EventScript_Sign::
# 1190 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Sign_Text_0, MSGBOX_SIGN
# 1192 "data/maps/CastleArena/scripts.pory"
	closemessage
	return


# 336 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_0:
# 336 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 337 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_1:
# 337 "data/maps/CastleArena/scripts.pory"
	walk_left
# 337 "data/maps/CastleArena/scripts.pory"
	walk_down
# 337 "data/maps/CastleArena/scripts.pory"
	walk_down
# 337 "data/maps/CastleArena/scripts.pory"
	walk_right
# 337 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 343 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_2:
# 343 "data/maps/CastleArena/scripts.pory"
	walk_down
# 343 "data/maps/CastleArena/scripts.pory"
	walk_left
# 343 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 349 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_3:
# 349 "data/maps/CastleArena/scripts.pory"
	walk_down
# 349 "data/maps/CastleArena/scripts.pory"
	walk_right
# 349 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 353 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_4:
# 353 "data/maps/CastleArena/scripts.pory"
	walk_up
# 353 "data/maps/CastleArena/scripts.pory"
	walk_up
# 353 "data/maps/CastleArena/scripts.pory"
	walk_up
# 353 "data/maps/CastleArena/scripts.pory"
	walk_up
# 353 "data/maps/CastleArena/scripts.pory"
	walk_up
# 353 "data/maps/CastleArena/scripts.pory"
	walk_up
	step_end

# 354 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_5:
# 354 "data/maps/CastleArena/scripts.pory"
	walk_up
# 354 "data/maps/CastleArena/scripts.pory"
	walk_up
# 354 "data/maps/CastleArena/scripts.pory"
	walk_up
# 354 "data/maps/CastleArena/scripts.pory"
	walk_up
# 354 "data/maps/CastleArena/scripts.pory"
	walk_up
# 354 "data/maps/CastleArena/scripts.pory"
	walk_up
# 354 "data/maps/CastleArena/scripts.pory"
	walk_up
# 354 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 355 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_6:
# 355 "data/maps/CastleArena/scripts.pory"
	walk_up
# 355 "data/maps/CastleArena/scripts.pory"
	walk_up
# 355 "data/maps/CastleArena/scripts.pory"
	walk_up
# 355 "data/maps/CastleArena/scripts.pory"
	walk_up
# 355 "data/maps/CastleArena/scripts.pory"
	walk_up
# 355 "data/maps/CastleArena/scripts.pory"
	walk_up
# 355 "data/maps/CastleArena/scripts.pory"
	walk_left
# 355 "data/maps/CastleArena/scripts.pory"
	walk_left
# 355 "data/maps/CastleArena/scripts.pory"
	walk_left
# 355 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 357 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_7:
# 357 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
# 357 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 377 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_8:
# 377 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 377 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 377 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 377 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 378 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_9:
# 378 "data/maps/CastleArena/scripts.pory"
	face_down
# 378 "data/maps/CastleArena/scripts.pory"
	delay_16
# 378 "data/maps/CastleArena/scripts.pory"
	delay_16
# 378 "data/maps/CastleArena/scripts.pory"
	face_up
# 378 "data/maps/CastleArena/scripts.pory"
	delay_16
# 378 "data/maps/CastleArena/scripts.pory"
	delay_16
# 378 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 399 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_0:
# 399 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 399 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 400 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_1:
# 400 "data/maps/CastleArena/scripts.pory"
	face_up
# 400 "data/maps/CastleArena/scripts.pory"
	delay_16
# 400 "data/maps/CastleArena/scripts.pory"
	delay_16
# 400 "data/maps/CastleArena/scripts.pory"
	delay_16
# 400 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 401 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_2:
# 401 "data/maps/CastleArena/scripts.pory"
	walk_up
# 401 "data/maps/CastleArena/scripts.pory"
	walk_up
# 401 "data/maps/CastleArena/scripts.pory"
	walk_up
# 401 "data/maps/CastleArena/scripts.pory"
	walk_up
# 401 "data/maps/CastleArena/scripts.pory"
	walk_up
# 401 "data/maps/CastleArena/scripts.pory"
	walk_up
# 401 "data/maps/CastleArena/scripts.pory"
	walk_up
# 401 "data/maps/CastleArena/scripts.pory"
	walk_right
# 401 "data/maps/CastleArena/scripts.pory"
	walk_right
# 401 "data/maps/CastleArena/scripts.pory"
	walk_right
# 401 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 409 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_3:
# 409 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 409 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 442 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_4:
# 442 "data/maps/CastleArena/scripts.pory"
	walk_left
# 442 "data/maps/CastleArena/scripts.pory"
	walk_left
	step_end

# 443 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_5:
# 443 "data/maps/CastleArena/scripts.pory"
	walk_right
# 443 "data/maps/CastleArena/scripts.pory"
	walk_right
	step_end

# 450 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_6:
# 450 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 450 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 451 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_7:
# 451 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 451 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 451 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 451 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 451 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 461 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_8:
# 461 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 461 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 468 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_9:
# 468 "data/maps/CastleArena/scripts.pory"
	walk_left
# 468 "data/maps/CastleArena/scripts.pory"
	walk_left
# 468 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 469 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_10:
# 469 "data/maps/CastleArena/scripts.pory"
	walk_left
# 469 "data/maps/CastleArena/scripts.pory"
	walk_down
# 469 "data/maps/CastleArena/scripts.pory"
	walk_down
# 469 "data/maps/CastleArena/scripts.pory"
	walk_down
# 469 "data/maps/CastleArena/scripts.pory"
	walk_down
# 469 "data/maps/CastleArena/scripts.pory"
	walk_down
# 469 "data/maps/CastleArena/scripts.pory"
	walk_down
# 469 "data/maps/CastleArena/scripts.pory"
	walk_down
# 469 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 489 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_0:
# 489 "data/maps/CastleArena/scripts.pory"
	face_down
# 489 "data/maps/CastleArena/scripts.pory"
	delay_16
# 489 "data/maps/CastleArena/scripts.pory"
	face_up
# 489 "data/maps/CastleArena/scripts.pory"
	delay_16
# 489 "data/maps/CastleArena/scripts.pory"
	face_down
# 489 "data/maps/CastleArena/scripts.pory"
	delay_16
# 489 "data/maps/CastleArena/scripts.pory"
	face_up
# 489 "data/maps/CastleArena/scripts.pory"
	delay_16
# 489 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 490 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_1:
# 490 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 490 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 490 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 490 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 542 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_2:
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 542 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 543 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_3:
# 543 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 543 "data/maps/CastleArena/scripts.pory"
	delay_16
# 543 "data/maps/CastleArena/scripts.pory"
	delay_8
# 543 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 543 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 543 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 543 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 543 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
	step_end

# 562 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_4:
# 562 "data/maps/CastleArena/scripts.pory"
	walk_left
# 562 "data/maps/CastleArena/scripts.pory"
	walk_down
# 562 "data/maps/CastleArena/scripts.pory"
	walk_down
# 562 "data/maps/CastleArena/scripts.pory"
	walk_down
# 562 "data/maps/CastleArena/scripts.pory"
	walk_down
# 562 "data/maps/CastleArena/scripts.pory"
	walk_down
# 562 "data/maps/CastleArena/scripts.pory"
	walk_down
# 562 "data/maps/CastleArena/scripts.pory"
	walk_down
# 562 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 606 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_0:
# 606 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 606 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 606 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 606 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 606 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 608 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_1:
# 608 "data/maps/CastleArena/scripts.pory"
	face_up
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_left
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_down
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_right
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_up
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_left
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_down
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_right
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_up
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_left
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_down
# 608 "data/maps/CastleArena/scripts.pory"
	delay_8
# 608 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 609 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_2:
# 609 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 609 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 609 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 609 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 609 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 609 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 609 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 637 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_3:
# 637 "data/maps/CastleArena/scripts.pory"
	face_up
# 637 "data/maps/CastleArena/scripts.pory"
	delay_16
# 637 "data/maps/CastleArena/scripts.pory"
	face_down
# 637 "data/maps/CastleArena/scripts.pory"
	delay_16
# 637 "data/maps/CastleArena/scripts.pory"
	face_right
# 637 "data/maps/CastleArena/scripts.pory"
	delay_16
# 637 "data/maps/CastleArena/scripts.pory"
	delay_8
# 637 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 637 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 637 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 638 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_4:
# 638 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 638 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 638 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 638 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 638 "data/maps/CastleArena/scripts.pory"
	delay_16
# 638 "data/maps/CastleArena/scripts.pory"
	face_up
# 638 "data/maps/CastleArena/scripts.pory"
	delay_16
# 638 "data/maps/CastleArena/scripts.pory"
	delay_16
# 638 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 687 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_5:
# 687 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 687 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 687 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 687 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 687 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 695 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_6:
# 695 "data/maps/CastleArena/scripts.pory"
	walk_slow_right
# 695 "data/maps/CastleArena/scripts.pory"
	walk_fast_left
# 695 "data/maps/CastleArena/scripts.pory"
	walk_fast_left
	step_end

# 696 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_7:
# 696 "data/maps/CastleArena/scripts.pory"
	walk_slow_left
# 696 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 696 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
	step_end

# 710 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_8:
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 710 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 711 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_9:
# 711 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 711 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 711 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 711 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 711 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 711 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
	step_end

# 712 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_10:
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_down
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_up
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_down
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_up
# 712 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 733 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_11:
# 733 "data/maps/CastleArena/scripts.pory"
	walk_left
# 733 "data/maps/CastleArena/scripts.pory"
	walk_left
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	walk_down
# 733 "data/maps/CastleArena/scripts.pory"
	face_down
	step_end

# 744 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_12:
# 744 "data/maps/CastleArena/scripts.pory"
	walk_right
# 744 "data/maps/CastleArena/scripts.pory"
	walk_right
# 744 "data/maps/CastleArena/scripts.pory"
	walk_down
# 744 "data/maps/CastleArena/scripts.pory"
	walk_down
# 744 "data/maps/CastleArena/scripts.pory"
	walk_down
# 744 "data/maps/CastleArena/scripts.pory"
	walk_down
# 744 "data/maps/CastleArena/scripts.pory"
	walk_down
# 744 "data/maps/CastleArena/scripts.pory"
	walk_down
# 744 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 746 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_13:
# 746 "data/maps/CastleArena/scripts.pory"
	walk_down
# 746 "data/maps/CastleArena/scripts.pory"
	walk_down
# 746 "data/maps/CastleArena/scripts.pory"
	walk_down
# 746 "data/maps/CastleArena/scripts.pory"
	walk_down
# 746 "data/maps/CastleArena/scripts.pory"
	walk_down
# 746 "data/maps/CastleArena/scripts.pory"
	walk_down
	step_end

# 747 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_14:
# 747 "data/maps/CastleArena/scripts.pory"
	walk_down
# 747 "data/maps/CastleArena/scripts.pory"
	walk_down
# 747 "data/maps/CastleArena/scripts.pory"
	walk_down
# 747 "data/maps/CastleArena/scripts.pory"
	walk_down
# 747 "data/maps/CastleArena/scripts.pory"
	walk_down
# 747 "data/maps/CastleArena/scripts.pory"
	walk_down
# 747 "data/maps/CastleArena/scripts.pory"
	walk_down
	step_end

# 822 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_ForfeitConfirmation_Movement_0:
# 822 "data/maps/CastleArena/scripts.pory"
	walk_right
# 822 "data/maps/CastleArena/scripts.pory"
	walk_right
# 822 "data/maps/CastleArena/scripts.pory"
	walk_right
# 822 "data/maps/CastleArena/scripts.pory"
	walk_down
# 822 "data/maps/CastleArena/scripts.pory"
	walk_down
# 822 "data/maps/CastleArena/scripts.pory"
	walk_down
# 822 "data/maps/CastleArena/scripts.pory"
	walk_down
# 822 "data/maps/CastleArena/scripts.pory"
	walk_down
# 822 "data/maps/CastleArena/scripts.pory"
	walk_down
# 822 "data/maps/CastleArena/scripts.pory"
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

CastleArena_EventScript_Commentator_Text_0:
# 255 "data/maps/CastleArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "Even a trio of talented sisters didn't\n"
	.string "keep you and your Helpers from victory!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

CastleArena_EventScript_Commentator_Text_1:
# 268 "data/maps/CastleArena/scripts.pory"
	.string "Wwwwwelcome to the Castle\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

CastleArena_EventScript_CommentatorChoice_Text_0:
# 281 "data/maps/CastleArena/scripts.pory"
	.string "Today's challenge: a zesty expedition!\n"
	.string "How can I help you?$"

CastleArena_EventScript_CommentatorBye_Text_0:
# 299 "data/maps/CastleArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

CastleArena_EventScript_CommentatorInfo_Text_0:
# 306 "data/maps/CastleArena/scripts.pory"
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
# 328 "data/maps/CastleArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

CastleArena_EventScript_BeginChallenge_Text_1:
# 360 "data/maps/CastleArena/scripts.pory"
	.string "Welcome, one and all, to the lavish\n"
	.string "Castle Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Here's a royally recognized rising star…\l"
	.string "It's the wondrous warrior, Kirbyyy!!!$"

CastleArena_EventScript_BeginChallenge_Text_2:
# 369 "data/maps/CastleArena/scripts.pory"
	.string "Welcome, one and all, to the lavish\n"
	.string "Castle Arena!\p"
	.string "We've got a returning Kirby, taking\n"
	.string "another swing at the impenetrable trio!\l"
	.string "Can he break through them after all?$"

CastleArena_EventScript_Challenger1_Text_0:
# 393 "data/maps/CastleArena/scripts.pory"
	.string "And for his first opponent, a girl whose\n"
	.string "composure is as cold as her Helpers!\p"
	.string "Please welcome {COLOR BLUE}Francisca{COLOR DARK_GRAY} to the stage!$"

CastleArena_EventScript_Challenger1_Text_1:
# 413 "data/maps/CastleArena/scripts.pory"
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
# 428 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}…Bonjam. You're as resilient as I\n"
	.string "remember you being.\p"
	.string "Of course, our plan means we have to win\n"
	.string "three times as many Brooches, too…\p"
	.string "Having you slow our progress down is\n"
	.string "absolutely unacceptable.\p"
	.string "This time, I'll make sure you stay\n"
	.string "away from the rest of my sisters!$"

CastleArena_EventScript_Challenger1_Text_3:
# 447 "data/maps/CastleArena/scripts.pory"
	.string "His first opponent's been put on ice!\n"
	.string "Kirby takes the first win!$"

CastleArena_EventScript_Challenger1_Text_4:
# 463 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}I suppose it's up to my sisters now to\n"
	.string "do what I could not. Jambuhbye.$"

CastleArena_EventScript_Challenger2_Text_0:
# 483 "data/maps/CastleArena/scripts.pory"
	.string "Up next is an opponent who alway brings\n"
	.string "the heat when she battles her rivals!\p"
	.string "Let's hear it for {COLOR RED}Flamberge{COLOR DARK_GRAY}, everybody!$"

CastleArena_EventScript_Challenger2_Text_1:
# 506 "data/maps/CastleArena/scripts.pory"
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
# 523 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE}WHAT did I tell you last time, huh?\n"
	.string "STOP DEFEATING MY PRECIOUS FRANCISCA!\p"
	.string "Man, you're so annoyingly MEDDLESOME! \n"
	.string "Vun, vun, VUN MEDDLESOME! Aaaarghh!!\p"
	.string "YOU'RE GOING DOWN!$"

CastleArena_EventScript_Challenger2_Text_3:
# 539 "data/maps/CastleArena/scripts.pory"
	.string "Flamberge's win streak was snuffed out!\n"
	.string "Kirby has scored a second victory!$"

CastleArena_EventScript_Challenger2_Text_4:
# 553 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE}Oops! I got so angry at you, when I\n"
	.string "should've checked on Francisca first!\p"
	.string "Don't think this is over, though. Zan's\n"
	.string "definitely gonna take you out!$"

CastleArena_EventScript_GrandFinals_Text_0:
# 581 "data/maps/CastleArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's FINAL ROUND time!\p"
	.string "On my right, a young hopeful looking to\n"
	.string "topple the trio of terror…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

CastleArena_EventScript_GrandFinals_Text_1:
# 594 "data/maps/CastleArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's FINAL ROUND time!\p"
	.string "On my right, a returnee determined to\n"
	.string "end the sisters' reign of dominance…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

CastleArena_EventScript_GrandFinals_Text_2:
# 624 "data/maps/CastleArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who reached the final round!\p"
	.string "The lightning-quick leader of the mage\n"
	.string "sisters is a force to be reckoned with.\p"
	.string "A name announced so often here, I've\n"
	.string "almost memorized the whole thing!\p"
	.string "Everyone welcome to the stage…\n"
	.string "{COLOR GREEN}Zan Partizanne{COLOR DARK_GRAY}!$"

CastleArena_EventScript_GrandFinals_Text_3:
# 654 "data/maps/CastleArena/scripts.pory"
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
# 672 "data/maps/CastleArena/scripts.pory"
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
# 688 "data/maps/CastleArena/scripts.pory"
	.string "It's come down to Kirby vs.… uh… Zan!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

CastleArena_EventScript_GrandFinals_Text_6:
# 702 "data/maps/CastleArena/scripts.pory"
	.string "Folks… the battle of bonds has ended…\n"
	.string "The winner of this Castle Arena clash…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

CastleArena_EventScript_GrandFinals_Text_7:
# 725 "data/maps/CastleArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

CastleArena_EventScript_GrandFinals_Text_8:
# 731 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}…that's that, then. Jambuhbye…$"

CastleArena_EventScript_Break_Text_0:
# 757 "data/maps/CastleArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

CastleArena_EventScript_Break_Text_1:
# 762 "data/maps/CastleArena/scripts.pory"
	.string "This is it: the final round awaits!\n"
	.string "Ready for the ultimate battle, Kirby?$"

CastleArena_EventScript_ArenaHeal_Text_0:
# 786 "data/maps/CastleArena/scripts.pory"
	.string "Great job on that battle, Kirby. Let's\n"
	.string "heal up those hardworking Helpers!$"

CastleArena_EventScript_ArenaHeal_Text_1:
# 790 "data/maps/CastleArena/scripts.pory"
	.string "Your party has been fully healed!$"

CastleArena_EventScript_ForfeitConfirmation_Text_0:
# 798 "data/maps/CastleArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!$"

CastleArena_EventScript_ForfeitConfirmation_Text_1:
# 803 "data/maps/CastleArena/scripts.pory"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

CastleArena_EventScript_ForfeitConfirmation_Text_2:
# 809 "data/maps/CastleArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

CastleArena_EventScript_Victory_Text_0:
# 838 "data/maps/CastleArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Castle Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Castle Brooch!$"

CastleArena_EventScript_Victory_Text_1:
# 843 "data/maps/CastleArena/scripts.pory"
	.string "Kirby received the Castle Brooch\n"
	.string "from Commentator Waddle Dee!$"

CastleArena_EventScript_Victory_Text_2:
# 848 "data/maps/CastleArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I'm sure we'll see each other again\n"
	.string "at the next Arena. Until then!$"

CastleArena_EventScript_Youngster_Text_0:
# 881 "data/maps/CastleArena/scripts.pory"
	.string "Wow, your Helpers must have been really\n"
	.string "good to win at the Arena here!\p"
	.string "I'm so inspired! I'm gonna go out and\n"
	.string "try to befriend ones just like yours!$"

CastleArena_EventScript_Youngster_Text_1:
# 889 "data/maps/CastleArena/scripts.pory"
	.string "Is there any type of Helper that's good\n"
	.string "against Ice, Fire, and Electric…?\p"
	.string "Hmm… I'm not sure my team is diverse\n"
	.string "enough for the job here…$"

CastleArena_EventScript_Lumberjack_Text_0:
# 904 "data/maps/CastleArena/scripts.pory"
	.string "It's really something how well those\n"
	.string "girls work together in battle, huh?\p"
	.string "Maybe I should be taking a closer listen\n"
	.string "to the words they preach about bonds\l"
	.string "bringing us closer to paradise.$"

CastleArena_EventScript_Lumberjack_Text_1:
# 913 "data/maps/CastleArena/scripts.pory"
	.string "My Sandran and Digguh can hold their\n"
	.string "own against the red and yellow girls…\p"
	.string "But my luck usually leads me to get\n"
	.string "matched up against the blue one!\l"
	.string "Her team beats mine so easily!$"

CastleArena_EventScript_Conductor_Text_0:
# 929 "data/maps/CastleArena/scripts.pory"
	.string "You actually made it, huh? I guess this\n"
	.string "Arena wasn't so unwinnable after all.\p"
	.string "I shouldn't have let my worries stop\n"
	.string "me from giving it my best shot in there…\p"
	.string "Maybe this was one of those lessons\n"
	.string "the Great King wanted us to take away?$"

CastleArena_EventScript_Conductor_Text_1:
# 940 "data/maps/CastleArena/scripts.pory"
	.string "There's a whole lot of hubbub about\n"
	.string "this Arena being unwinnable.\p"
	.string "Did I choose the wrong Arena to visit\n"
	.string "first? Maybe I should head over to\l"
	.string "the Icecap Arena instead…$"

CastleArena_EventScript_ShortcutGuide_Text_0:
# 954 "data/maps/CastleArena/scripts.pory"
	.string "If you need to leave back to the\n"
	.string "courtyard, this path's a shortcut.\l"
	.string "I wish it was open on the way up…$"

CastleArena_EventScript_Wintry_Text_0:
# 963 "data/maps/CastleArena/scripts.pory"
	.string "Wow! I can see my friend at the top of\n"
	.string "the Icecap Arena all the way from here!\p"
	.string "Heeeeeeey!!! Helloooooooooo!!!!!$"

CastleArena_EventScript_WaddleDee_Text_0:
# 974 "data/maps/CastleArena/scripts.pory"
	.string "I wonder whether the competitors who\n"
	.string "won their Brooch here before that trio\l"
	.string "showed up could have beat them?\p"
	.string "I've seen other strong-looking leaders\n"
	.string "here too. There was this bandana-clad\l"
	.string "Waddle Dee, and some artist girl…$"

CastleArena_EventScript_TalkToVCrowd1_Text_0:
# 1050 "data/maps/CastleArena/scripts.pory"
	.string "I can't get enough of seeing Francisca\n"
	.string "freeze her opponent's Helpers!\p"
	.string "Being frozen sounds like so much fun…\n"
	.string "Oh, Francisca, please let it be me next!$"

CastleArena_EventScript_TalkToVCrowd1_Text_1:
# 1058 "data/maps/CastleArena/scripts.pory"
	.string "What? You managed to defeat the\n"
	.string "wonderful Francisca? How could you!?\p"
	.string "Oooh… this burning feeling in my heart…\n"
	.string "is this what Flamberge always feels!?$"

CastleArena_EventScript_TalkToVCrowd2_Text_0:
# 1073 "data/maps/CastleArena/scripts.pory"
	.string "My pals here are real big fans of\n"
	.string "Francisca and Flamberge, so you'd think\l"
	.string "you'd know what to expect from me.\p"
	.string "There's just one problem though…\p"
	.string "I can't be the biggest fan of someone\n"
	.string "whose name I can't even remember!$"

CastleArena_EventScript_TalkToVCrowd2_Text_1:
# 1084 "data/maps/CastleArena/scripts.pory"
	.string "Whoa, you must be pretty talented if\n"
	.string "you managed to beat… uhh…\p"
	.string "Hold on, it's coming to me…\p"
	.string "…\p"
	.string "… Aha!\p"
	.string "Santa's Party Sack! That was it! Yeah,\n"
	.string "good job winning against her.$"

CastleArena_EventScript_TalkToVCrowd3_Text_0:
# 1105 "data/maps/CastleArena/scripts.pory"
	.string "I think Flamberge puts up the best\n"
	.string "performance of the three mage sisters.\p"
	.string "I'd be okay watching her battle over\n"
	.string "and over if nobody could defeat her…$"

CastleArena_EventScript_TalkToVCrowd3_Text_1:
# 1113 "data/maps/CastleArena/scripts.pory"
	.string "No way… you managed to defeat\n"
	.string "Flamberge? Who even are you?$"

CastleArena_EventScript_Soldier_Text_0:
# 1162 "data/maps/CastleArena/scripts.pory"
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
# 1177 "data/maps/CastleArena/scripts.pory"
	.string "I'm keeping an eye on things here to see\n"
	.string "just how unbeatable that trio really is.\p"
	.string "It would be a problem if nobody could\n"
	.string "win the Royal Royal because of them…$"

CastleArena_EventScript_Sign_Text_0:
# 1190 "data/maps/CastleArena/scripts.pory"
	.string "Newly-opened: CASTLE ARENA\n"
	.string "Conquer it and win the Castle Brooch!$"

CastleArena_Text_Francisca::
# 856 "data/maps/CastleArena/scripts.pory"
	.string "My, my… you and your Helpers are in top\n"
	.string "form as always. How divine…$"

CastleArena_Text_Flamberge::
# 862 "data/maps/CastleArena/scripts.pory"
	.string "Jamblasted… JAMBLASTED!$"

CastleArena_Text_ZanPartizanne::
# 867 "data/maps/CastleArena/scripts.pory"
	.string "Janno… it can't be… are we really still\n"
	.string "unable to overcome you?$"

CastleArena_Text_Cafe::
# 1119 "data/maps/CastleArena/scripts.pory"
	.string "Arena seats seem like the perfect place\n"
	.string "to sell snacks to hungry customers, so\l"
	.string "I'm setting up a little food stand here!$"

CastleArena_Text_CafeWin::
# 1126 "data/maps/CastleArena/scripts.pory"
	.string "That was some seriously incredible\n"
	.string "Helper battling skill! Great work!\p"
	.string "With hot shots like you, I bet this\n"
	.string "place will draw huge crowds soon…\l"
	.string "and then I'll be busy, busy, busy!$"

CastleArena_Text_Socialite::
# 1136 "data/maps/CastleArena/scripts.pory"
	.string "It's easy to see the results coming\n"
	.string "when one group of competitors keep\l"
	.string "dominating every single tournament.\p"
	.string "Will you be able to inject some spice\n"
	.string "into this Arena, I wonder?$"

CastleArena_Text_SocialiteWin::
# 1146 "data/maps/CastleArena/scripts.pory"
	.string "Bravo! You and your Helpers were really\n"
	.string "something else!\p"
	.string "Knowing there are strong competitors\n"
	.string "like you traveling here has restored\l"
	.string "my enthusiasm for Arena spectating!$"
