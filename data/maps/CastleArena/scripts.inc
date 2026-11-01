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
	msgbox CastleArena_EventScript_Nago_Text_1, MSGBOX_YESNO
# 219 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CastleArena_EventScript_Nago_5
# 276 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_8
CastleArena_EventScript_Nago_1:
# 280 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Nago_2:
# 204 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_0
	goto CastleArena_EventScript_Nago_1

CastleArena_EventScript_Nago_5:
# 221 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_2
# 223 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_VITO, CastleArena_Text_Nago
# 224 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_3
# 233 "data/maps/CastleArena/scripts.pory"
	setspeaker NULL
# 234 "data/maps/CastleArena/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 235 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_4
# 237 "data/maps/CastleArena/scripts.pory"
	waitfanfare
# 238 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 239 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_5
# 241 "data/maps/CastleArena/scripts.pory"
	closemessage
# 242 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_NAGO, CastleArena_EventScript_Nago_Movement_0
# 243 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 244 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_SHIRO, DIR_NORTH
# 245 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 246 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_6
# 249 "data/maps/CastleArena/scripts.pory"
	closemessage
# 250 "data/maps/CastleArena/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 251 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_2, 22
	goto_if_eq CastleArena_EventScript_Nago_9
CastleArena_EventScript_Nago_8:
# 256 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_NAGO, CastleArena_EventScript_Nago_Movement_2
# 257 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_SHIRO, CastleArena_EventScript_Nago_Movement_3
# 258 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 259 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 260 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 261 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Nago_Text_7
# 263 "data/maps/CastleArena/scripts.pory"
	closemessage
# 264 "data/maps/CastleArena/scripts.pory"
	playse SE_LEDGE
# 265 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Nago_Movement_4
# 266 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 267 "data/maps/CastleArena/scripts.pory"
	waitse
# 268 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_SHIRO, CastleArena_EventScript_Nago_Movement_5
# 269 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 270 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_NAGO
# 271 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_SHIRO
# 272 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_FOUND_NAGO
	goto CastleArena_EventScript_Nago_1

CastleArena_EventScript_Nago_9:
# 253 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Nago_Movement_1
# 254 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_Nago_8


CastleArena_EventScript_Shiro::
# 285 "data/maps/CastleArena/scripts.pory"
	lock
# 286 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 287 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Shiro_2
# 295 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Shiro_Text_1
CastleArena_EventScript_Shiro_1:
# 298 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Shiro_2:
# 289 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Shiro_Text_0
	goto CastleArena_EventScript_Shiro_1


CastleArena_EventScript_Commentator::
# 305 "data/maps/CastleArena/scripts.pory"
	lock
# 306 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 307 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Commentator_2
# 318 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Commentator_3
CastleArena_EventScript_Commentator_1:
# 330 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Commentator_2:
# 309 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Commentator_Text_0
	goto CastleArena_EventScript_Commentator_1

CastleArena_EventScript_Commentator_3:
# 320 "data/maps/CastleArena/scripts.pory"
	lock
# 321 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 322 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Commentator_Text_1
# 328 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorChoice
	goto CastleArena_EventScript_Commentator_1


CastleArena_EventScript_CommentatorChoice::
# 335 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_CommentatorChoice_Text_0
# 337 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 338 "data/maps/CastleArena/scripts.pory"
	multichoice 20, 6, MULTI_CHALLENGEINFO, FALSE
# 339 "data/maps/CastleArena/scripts.pory"
	switch VAR_RESULT
# 340 "data/maps/CastleArena/scripts.pory"
	case 0, CastleArena_EventScript_CommentatorChoice_2
# 342 "data/maps/CastleArena/scripts.pory"
	case 1, CastleArena_EventScript_CommentatorChoice_3
# 344 "data/maps/CastleArena/scripts.pory"
	case 2, CastleArena_EventScript_CommentatorChoice_4
# 346 "data/maps/CastleArena/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_EventScript_CommentatorChoice_5
	return

CastleArena_EventScript_CommentatorChoice_2:
# 341 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_BeginChallenge
	return

CastleArena_EventScript_CommentatorChoice_3:
# 343 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorInfo
	return

CastleArena_EventScript_CommentatorChoice_4:
# 345 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return

CastleArena_EventScript_CommentatorChoice_5:
# 347 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return


CastleArena_EventScript_CommentatorBye::
# 353 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_CommentatorBye_Text_0
# 355 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_CommentatorInfo::
# 360 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_CommentatorInfo_Text_0
# 377 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorChoice
	return


CastleArena_EventScript_BeginChallenge::
# 382 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_0
# 384 "data/maps/CastleArena/scripts.pory"
	closemessage
# 385 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 1
# 386 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 387 "data/maps/CastleArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 388 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq CastleArena_EventScript_BeginChallenge_2
# 394 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq CastleArena_EventScript_BeginChallenge_3
# 400 "data/maps/CastleArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq CastleArena_EventScript_BeginChallenge_4
CastleArena_EventScript_BeginChallenge_1:
# 406 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 407 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_BeginChallenge_Movement_3
# 408 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_4
# 409 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_5
# 410 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 411 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_6
# 412 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, CastleArena_EventScript_BeginChallenge_9
# 421 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, CastleArena_EventScript_BeginChallenge_10
CastleArena_EventScript_BeginChallenge_8:
# 430 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 431 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_BeginChallenge_Movement_7
# 432 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_BeginChallenge_Movement_8
# 433 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 434 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 435 "data/maps/CastleArena/scripts.pory"
	delay 40
# 436 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 437 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 438 "data/maps/CastleArena/scripts.pory"
	delay 20
# 439 "data/maps/CastleArena/scripts.pory"
	call CastleArena_EventScript_Challenger1
	return

CastleArena_EventScript_BeginChallenge_2:
# 390 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_Nago_Movement_0
# 391 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_0
# 392 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_3:
# 396 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_Nago_Movement_0
# 397 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_1
# 398 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_4:
# 402 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_Nago_Movement_0
# 403 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_BeginChallenge_Movement_2
# 404 "data/maps/CastleArena/scripts.pory"
	waitmovement
	goto CastleArena_EventScript_BeginChallenge_1

CastleArena_EventScript_BeginChallenge_9:
# 414 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_1
	goto CastleArena_EventScript_BeginChallenge_8

CastleArena_EventScript_BeginChallenge_10:
# 423 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_BeginChallenge_Text_2
	goto CastleArena_EventScript_BeginChallenge_8


CastleArena_EventScript_Challenger1::
# 444 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 445 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 21, 16
# 446 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 447 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_0
# 451 "data/maps/CastleArena/scripts.pory"
	closemessage
# 452 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 453 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger1_Movement_0
# 454 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger1_Movement_1
# 455 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_2
# 456 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_WEST
# 457 "data/maps/CastleArena/scripts.pory"
	delay 32
# 458 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 459 "data/maps/CastleArena/scripts.pory"
	delay 32
# 460 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 461 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_FRANCISCA
# 462 "data/maps/CastleArena/scripts.pory"
	delay 30
# 463 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_3
# 464 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 465 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, CastleArena_EventScript_Challenger1_2
# 480 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, CastleArena_EventScript_Challenger1_3
CastleArena_EventScript_Challenger1_1:
# 494 "data/maps/CastleArena/scripts.pory"
	closemessage
# 495 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 496 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_4
# 497 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_5
# 498 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 499 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 500 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_EDGAR, CastleArena_Text_Francisca
# 501 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_3
# 503 "data/maps/CastleArena/scripts.pory"
	closemessage
# 504 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger1_Movement_6
# 505 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger1_Movement_7
# 506 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 507 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_NORTH
# 508 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 509 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 510 "data/maps/CastleArena/scripts.pory"
	delay 48
# 511 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 512 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 513 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_CASTLE_CROWD_2
# 514 "data/maps/CastleArena/scripts.pory"
	delay 60
# 515 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_8
# 516 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 517 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_4
# 519 "data/maps/CastleArena/scripts.pory"
	closemessage
# 520 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 521 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 522 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_9
# 523 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FRANCISCA, CastleArena_EventScript_Challenger1_Movement_10
# 524 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 525 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 526 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 527 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 17, 17
# 528 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 529 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ArenaHeal
	return

CastleArena_EventScript_Challenger1_2:
# 467 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_1
	goto CastleArena_EventScript_Challenger1_1

CastleArena_EventScript_Challenger1_3:
# 482 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger1_Text_2
	goto CastleArena_EventScript_Challenger1_1


CastleArena_EventScript_Challenger2::
# 534 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 535 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 21, 16
# 536 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 537 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_0
# 541 "data/maps/CastleArena/scripts.pory"
	closemessage
# 542 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 543 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger2_Movement_0
# 544 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger2_Movement_1
# 545 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_2
# 546 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_EAST
# 547 "data/maps/CastleArena/scripts.pory"
	delay 18
# 548 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 549 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 550 "data/maps/CastleArena/scripts.pory"
	delay 18
# 551 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 552 "data/maps/CastleArena/scripts.pory"
	delay 18
# 553 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 554 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_FLAMBERGE
# 555 "data/maps/CastleArena/scripts.pory"
	delay 30
# 556 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_3
# 557 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 558 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, CastleArena_EventScript_Challenger2_2
# 575 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, CastleArena_EventScript_Challenger2_3
CastleArena_EventScript_Challenger2_1:
# 585 "data/maps/CastleArena/scripts.pory"
	closemessage
# 586 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 587 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 588 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_4
# 589 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_5
# 590 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 591 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 592 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ALBERT, CastleArena_Text_Flamberge
# 593 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_3
# 595 "data/maps/CastleArena/scripts.pory"
	closemessage
# 596 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_Challenger2_Movement_2
# 597 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_Challenger2_Movement_3
# 598 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 599 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 600 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 601 "data/maps/CastleArena/scripts.pory"
	delay 32
# 602 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 603 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_CASTLE_CROWD_2
# 604 "data/maps/CastleArena/scripts.pory"
	delay 60
# 605 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger1_Movement_8
# 606 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 607 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_4
# 612 "data/maps/CastleArena/scripts.pory"
	closemessage
# 613 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 614 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 615 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Challenger1_Movement_9
# 616 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_FLAMBERGE, CastleArena_EventScript_Challenger2_Movement_4
# 617 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 618 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 619 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 620 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 18, 17
# 621 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 622 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ArenaHeal
	return

CastleArena_EventScript_Challenger2_2:
# 560 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_1
	goto CastleArena_EventScript_Challenger2_1

CastleArena_EventScript_Challenger2_3:
# 577 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Challenger2_Text_2
	goto CastleArena_EventScript_Challenger2_1


CastleArena_EventScript_GrandFinals::
# 627 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 628 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 629 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 630 "data/maps/CastleArena/scripts.pory"
	fadeoutbgm 1
# 631 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_BeginChallenge_Movement_6
# 632 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 633 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_2
# 646 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_3
CastleArena_EventScript_GrandFinals_1:
# 659 "data/maps/CastleArena/scripts.pory"
	closemessage
# 660 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_0
# 661 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 662 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_1
# 663 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_2
# 664 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_WEST
# 665 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 666 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_EAST
# 667 "data/maps/CastleArena/scripts.pory"
	delay 20
# 668 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_NORTH
# 669 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 670 "data/maps/CastleArena/scripts.pory"
	delay 20
# 671 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 672 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 673 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 674 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 675 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 21, 16
# 676 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 677 "data/maps/CastleArena/scripts.pory"
	delay 60
# 678 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_2
# 689 "data/maps/CastleArena/scripts.pory"
	closemessage
# 690 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 691 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_3
# 692 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_4
# 693 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_2
# 694 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 695 "data/maps/CastleArena/scripts.pory"
	delay 15
# 696 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_EAST
# 697 "data/maps/CastleArena/scripts.pory"
	delay 15
# 698 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 699 "data/maps/CastleArena/scripts.pory"
	delay 15
# 700 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 701 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_ZAN_PARTIZANNE
# 702 "data/maps/CastleArena/scripts.pory"
	delay 60
# 703 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_3
# 704 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 705 "data/maps/CastleArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 706 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_7
CastleArena_EventScript_GrandFinals_6:
# 724 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, CastleArena_EventScript_GrandFinals_10
CastleArena_EventScript_GrandFinals_9:
# 740 "data/maps/CastleArena/scripts.pory"
	closemessage
# 741 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_5
# 742 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_5
# 746 "data/maps/CastleArena/scripts.pory"
	closemessage
# 747 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 748 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 749 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_GrandFinals_Movement_6
# 750 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_7
# 751 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 752 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 753 "data/maps/CastleArena/scripts.pory"
	trainerbattle_no_intro TRAINER_SAMUEL, CastleArena_Text_ZanPartizanne
# 754 "data/maps/CastleArena/scripts.pory"
	fadeoutbgm 1
# 755 "data/maps/CastleArena/scripts.pory"
	delay 60
# 756 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_6
# 761 "data/maps/CastleArena/scripts.pory"
	closemessage
# 762 "data/maps/CastleArena/scripts.pory"
	playbgm MUS_B_FRONTIER, TRUE
# 763 "data/maps/CastleArena/scripts.pory"
	playse SE_APPLAUSE
# 764 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_1, CastleArena_EventScript_GrandFinals_Movement_8
# 765 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_CROWD_2, CastleArena_EventScript_GrandFinals_Movement_9
# 766 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_10
# 767 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_EAST
# 768 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_WEST
# 769 "data/maps/CastleArena/scripts.pory"
	delay 20
# 770 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 771 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_EAST
# 772 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_WEST
# 773 "data/maps/CastleArena/scripts.pory"
	delay 20
# 774 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_NORTH
# 775 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 776 "data/maps/CastleArena/scripts.pory"
	delay 20
# 777 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 778 "data/maps/CastleArena/scripts.pory"
	waitmovement LOCALID_PLAYER
# 779 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_GrandFinals_Text_7
# 780 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 781 "data/maps/CastleArena/scripts.pory"
	delay 60
# 782 "data/maps/CastleArena/scripts.pory"
	closemessage
# 783 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_Challenger1_Movement_8
# 784 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 785 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_8
# 786 "data/maps/CastleArena/scripts.pory"
	closemessage
# 787 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_ZAN_PARTIZANNE, CastleArena_EventScript_GrandFinals_Movement_11
# 788 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 789 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 790 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 24, 17
# 791 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 792 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 793 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 794 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 795 "data/maps/CastleArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 796 "data/maps/CastleArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 797 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 798 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_GrandFinals_Movement_12
# 799 "data/maps/CastleArena/scripts.pory"
	delay 60
# 800 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_GrandFinals_Movement_13
# 801 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_14
# 802 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 803 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 804 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Victory
	return

CastleArena_EventScript_GrandFinals_2:
# 635 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_0
	goto CastleArena_EventScript_GrandFinals_1

CastleArena_EventScript_GrandFinals_3:
# 648 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_1
	goto CastleArena_EventScript_GrandFinals_1

CastleArena_EventScript_GrandFinals_7:
# 708 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_3
	goto CastleArena_EventScript_GrandFinals_6

CastleArena_EventScript_GrandFinals_10:
# 726 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_GrandFinals_Text_4
	goto CastleArena_EventScript_GrandFinals_9


CastleArena_EventScript_Break::
# 809 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq CastleArena_EventScript_Break_2
# 814 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq CastleArena_EventScript_Break_3
CastleArena_EventScript_Break_1:
# 819 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 820 "data/maps/CastleArena/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_RETIRE, 0
# 821 "data/maps/CastleArena/scripts.pory"
	switch VAR_RESULT
# 822 "data/maps/CastleArena/scripts.pory"
	case 0, CastleArena_EventScript_Break_7
# 831 "data/maps/CastleArena/scripts.pory"
	case 1, CastleArena_EventScript_Break_8
# 833 "data/maps/CastleArena/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_EventScript_Break_9
	return

CastleArena_EventScript_Break_2:
# 811 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Break_Text_0
	goto CastleArena_EventScript_Break_1

CastleArena_EventScript_Break_3:
# 816 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Break_Text_1
	goto CastleArena_EventScript_Break_1

CastleArena_EventScript_Break_7:
# 823 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq CastleArena_EventScript_Break_10
# 827 "data/maps/CastleArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq CastleArena_EventScript_Break_11
	return

CastleArena_EventScript_Break_8:
# 832 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ForfeitConfirmation
	return

CastleArena_EventScript_Break_9:
# 834 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_ForfeitConfirmation
	return

CastleArena_EventScript_Break_10:
# 825 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Challenger2
	return

CastleArena_EventScript_Break_11:
# 829 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_GrandFinals
	return


CastleArena_EventScript_ArenaHeal::
# 840 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ArenaHeal_Text_0
# 842 "data/maps/CastleArena/scripts.pory"
	special HealPlayerParty
# 843 "data/maps/CastleArena/scripts.pory"
	playse SE_USE_ITEM
# 844 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_ArenaHeal_Text_1
# 845 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 846 "data/maps/CastleArena/scripts.pory"
	delay 60
# 847 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Break
	return


CastleArena_EventScript_ForfeitConfirmation::
# 852 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ForfeitConfirmation_Text_0
# 857 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_ForfeitConfirmation_Text_1
# 859 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 860 "data/maps/CastleArena/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, WaddleDeeArena_Text_ToughItOut, WaddleDeeArena_Text_AcceptDefeat
# 861 "data/maps/CastleArena/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CastleArena_EventScript_ForfeitConfirmation_1
# 886 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_Break
	return

CastleArena_EventScript_ForfeitConfirmation_1:
# 863 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ForfeitConfirmation_Text_2
# 865 "data/maps/CastleArena/scripts.pory"
	closemessage
# 866 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FRANCISCA
# 867 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FRANCISCA, 22, 26
# 868 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FRANCISCA
# 869 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_FLAMBERGE
# 870 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_FLAMBERGE, 20, 26
# 871 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_FLAMBERGE
# 872 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_ZAN_PARTIZANNE
# 873 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_ZAN_PARTIZANNE, 21, 26
# 874 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_ZAN_PARTIZANNE
# 875 "data/maps/CastleArena/scripts.pory"
	special SpawnCameraObject
# 876 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_ForfeitConfirmation_Movement_0
# 877 "data/maps/CastleArena/scripts.pory"
	delay 60
# 878 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CAMERA, CastleArena_EventScript_GrandFinals_Movement_13
# 879 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_CASTLE_COMMENTATOR, CastleArena_EventScript_GrandFinals_Movement_14
# 880 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 881 "data/maps/CastleArena/scripts.pory"
	special RemoveCameraObject
# 882 "data/maps/CastleArena/scripts.pory"
	goto CastleArena_EventScript_CommentatorBye
	return


CastleArena_EventScript_Victory::
# 892 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Victory_Text_0
# 897 "data/maps/CastleArena/scripts.pory"
	message CastleArena_EventScript_Victory_Text_1
# 899 "data/maps/CastleArena/scripts.pory"
	waitmessage
# 900 "data/maps/CastleArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 901 "data/maps/CastleArena/scripts.pory"
	setflag FLAG_BADGE03_GET
# 902 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Victory_Text_2
# 907 "data/maps/CastleArena/scripts.pory"
	closemessage
# 908 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_NAGO
# 909 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_NAGO, 21, 22
# 910 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_NAGO
# 911 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_NAGO, CastleArena_EventScript_BeginChallenge_Movement_3
# 912 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 913 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_PLAYER, CastleArena_EventScript_Nago_Movement_0
# 914 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 915 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Victory_Text_3
# 928 "data/maps/CastleArena/scripts.pory"
	closemessage
# 929 "data/maps/CastleArena/scripts.pory"
	applymovement LOCALID_NAGO, CastleArena_EventScript_GrandFinals_Movement_13
# 930 "data/maps/CastleArena/scripts.pory"
	waitmovement
# 931 "data/maps/CastleArena/scripts.pory"
	removeobject LOCALID_NAGO
# 932 "data/maps/CastleArena/scripts.pory"
	setobjectxyperm LOCALID_NAGO, 21, 28
# 933 "data/maps/CastleArena/scripts.pory"
	addobject LOCALID_NAGO
# 934 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Youngster::
# 964 "data/maps/CastleArena/scripts.pory"
	lock
# 965 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 966 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Youngster_2
# 976 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Youngster_Text_1
CastleArena_EventScript_Youngster_1:
# 982 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Youngster_2:
# 968 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Youngster_Text_0
	goto CastleArena_EventScript_Youngster_1


CastleArena_EventScript_Lumberjack::
# 987 "data/maps/CastleArena/scripts.pory"
	lock
# 988 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 989 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Lumberjack_2
# 1000 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Lumberjack_Text_1
CastleArena_EventScript_Lumberjack_1:
# 1007 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Lumberjack_2:
# 991 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Lumberjack_Text_0
	goto CastleArena_EventScript_Lumberjack_1


CastleArena_EventScript_Conductor::
# 1012 "data/maps/CastleArena/scripts.pory"
	lock
# 1013 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1014 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Conductor_2
# 1027 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Conductor_Text_1
CastleArena_EventScript_Conductor_1:
# 1034 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Conductor_2:
# 1016 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Conductor_Text_0
	goto CastleArena_EventScript_Conductor_1


CastleArena_EventScript_ShortcutGuide::
# 1039 "data/maps/CastleArena/scripts.pory"
	lock
# 1040 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1041 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_ShortcutGuide_Text_0
# 1044 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Wintry::
# 1049 "data/maps/CastleArena/scripts.pory"
	lock
# 1050 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Wintry_Text_0
# 1054 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_WaddleDee::
# 1059 "data/maps/CastleArena/scripts.pory"
	lock
# 1060 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1061 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_WaddleDee_Text_0
# 1068 "data/maps/CastleArena/scripts.pory"
	release
	return


CastleArena_EventScript_Cafe::
# 1073 "data/maps/CastleArena/scripts.pory"
	lock
# 1074 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1075 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Cafe_2
# 1081 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_CafeWin
CastleArena_EventScript_Cafe_1:
# 1083 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Cafe_2:
# 1077 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Cafe
	goto CastleArena_EventScript_Cafe_1


CastleArena_EventScript_Socialite::
# 1088 "data/maps/CastleArena/scripts.pory"
	lock
# 1089 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1090 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_Socialite_2
# 1096 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_SocialiteWin
CastleArena_EventScript_Socialite_1:
# 1098 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Socialite_2:
# 1092 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Socialite
	goto CastleArena_EventScript_Socialite_1


CastleArena_EventScript_TalkToCrowd1::
# 1103 "data/maps/CastleArena/scripts.pory"
	lockall
# 1104 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_CASTLE_CROWD_1, DIR_EAST
# 1105 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToCrowd1_2
# 1111 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_CafeWin
CastleArena_EventScript_TalkToCrowd1_1:
# 1113 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToCrowd1_2:
# 1107 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Cafe
	goto CastleArena_EventScript_TalkToCrowd1_1


CastleArena_EventScript_TalkToCrowd2::
# 1118 "data/maps/CastleArena/scripts.pory"
	lockall
# 1119 "data/maps/CastleArena/scripts.pory"
	turnobject LOCALID_CASTLE_CROWD_2, DIR_WEST
# 1120 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToCrowd2_2
# 1126 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_SocialiteWin
CastleArena_EventScript_TalkToCrowd2_1:
# 1128 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToCrowd2_2:
# 1122 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_Text_Socialite
	goto CastleArena_EventScript_TalkToCrowd2_1


CastleArena_EventScript_TalkToVCrowd1::
# 1133 "data/maps/CastleArena/scripts.pory"
	lockall
# 1134 "data/maps/CastleArena/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 1135 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd1_2
# 1145 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd1_Text_1
CastleArena_EventScript_TalkToVCrowd1_1:
# 1151 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd1_2:
# 1137 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd1_Text_0
	goto CastleArena_EventScript_TalkToVCrowd1_1


CastleArena_EventScript_TalkToVCrowd2::
# 1156 "data/maps/CastleArena/scripts.pory"
	lockall
# 1157 "data/maps/CastleArena/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 1158 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd2_2
# 1171 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd2_Text_1
CastleArena_EventScript_TalkToVCrowd2_1:
# 1183 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd2_2:
# 1160 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd2_Text_0
	goto CastleArena_EventScript_TalkToVCrowd2_1


CastleArena_EventScript_TalkToVCrowd3::
# 1188 "data/maps/CastleArena/scripts.pory"
	lockall
# 1189 "data/maps/CastleArena/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 1190 "data/maps/CastleArena/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_EventScript_TalkToVCrowd3_2
# 1200 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd3_Text_1
CastleArena_EventScript_TalkToVCrowd3_1:
# 1203 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_TalkToVCrowd3_2:
# 1192 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_TalkToVCrowd3_Text_0
	goto CastleArena_EventScript_TalkToVCrowd3_1


CastleArena_EventScript_Soldier::
# 1245 "data/maps/CastleArena/scripts.pory"
	lock
# 1246 "data/maps/CastleArena/scripts.pory"
	faceplayer
# 1247 "data/maps/CastleArena/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, CastleArena_EventScript_Soldier_2
# 1264 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Soldier_Text_1
CastleArena_EventScript_Soldier_1:
# 1270 "data/maps/CastleArena/scripts.pory"
	release
	return

CastleArena_EventScript_Soldier_2:
# 1249 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Soldier_Text_0
	goto CastleArena_EventScript_Soldier_1


CastleArena_EventScript_Sign::
# 1277 "data/maps/CastleArena/scripts.pory"
	msgbox CastleArena_EventScript_Sign_Text_0, MSGBOX_SIGN
# 1279 "data/maps/CastleArena/scripts.pory"
	closemessage
	return


# 242 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Nago_Movement_0:
# 242 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 253 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Nago_Movement_1:
# 253 "data/maps/CastleArena/scripts.pory"
	walk_up
# 253 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 256 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Nago_Movement_2:
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
# 256 "data/maps/CastleArena/scripts.pory"
	walk_right
	step_end

# 257 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Nago_Movement_3:
# 257 "data/maps/CastleArena/scripts.pory"
	walk_up
# 257 "data/maps/CastleArena/scripts.pory"
	walk_right
# 257 "data/maps/CastleArena/scripts.pory"
	walk_right
# 257 "data/maps/CastleArena/scripts.pory"
	walk_right
# 257 "data/maps/CastleArena/scripts.pory"
	walk_right
# 257 "data/maps/CastleArena/scripts.pory"
	delay_16
# 257 "data/maps/CastleArena/scripts.pory"
	delay_16
# 257 "data/maps/CastleArena/scripts.pory"
	delay_16
# 257 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 265 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Nago_Movement_4:
# 265 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 265 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 265 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 268 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Nago_Movement_5:
# 268 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 268 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 268 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 268 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 268 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 268 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 268 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 268 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
	step_end

# 391 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_0:
# 391 "data/maps/CastleArena/scripts.pory"
	walk_left
# 391 "data/maps/CastleArena/scripts.pory"
	walk_down
# 391 "data/maps/CastleArena/scripts.pory"
	walk_down
# 391 "data/maps/CastleArena/scripts.pory"
	walk_right
# 391 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 397 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_1:
# 397 "data/maps/CastleArena/scripts.pory"
	walk_down
# 397 "data/maps/CastleArena/scripts.pory"
	walk_left
# 397 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 403 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_2:
# 403 "data/maps/CastleArena/scripts.pory"
	walk_down
# 403 "data/maps/CastleArena/scripts.pory"
	walk_right
# 403 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 407 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_3:
# 407 "data/maps/CastleArena/scripts.pory"
	walk_up
# 407 "data/maps/CastleArena/scripts.pory"
	walk_up
# 407 "data/maps/CastleArena/scripts.pory"
	walk_up
# 407 "data/maps/CastleArena/scripts.pory"
	walk_up
# 407 "data/maps/CastleArena/scripts.pory"
	walk_up
# 407 "data/maps/CastleArena/scripts.pory"
	walk_up
	step_end

# 408 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_4:
# 408 "data/maps/CastleArena/scripts.pory"
	walk_up
# 408 "data/maps/CastleArena/scripts.pory"
	walk_up
# 408 "data/maps/CastleArena/scripts.pory"
	walk_up
# 408 "data/maps/CastleArena/scripts.pory"
	walk_up
# 408 "data/maps/CastleArena/scripts.pory"
	walk_up
# 408 "data/maps/CastleArena/scripts.pory"
	walk_up
# 408 "data/maps/CastleArena/scripts.pory"
	walk_up
# 408 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 409 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_5:
# 409 "data/maps/CastleArena/scripts.pory"
	walk_up
# 409 "data/maps/CastleArena/scripts.pory"
	walk_up
# 409 "data/maps/CastleArena/scripts.pory"
	walk_up
# 409 "data/maps/CastleArena/scripts.pory"
	walk_up
# 409 "data/maps/CastleArena/scripts.pory"
	walk_up
# 409 "data/maps/CastleArena/scripts.pory"
	walk_up
# 409 "data/maps/CastleArena/scripts.pory"
	walk_left
# 409 "data/maps/CastleArena/scripts.pory"
	walk_left
# 409 "data/maps/CastleArena/scripts.pory"
	walk_left
# 409 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 411 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_6:
# 411 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
# 411 "data/maps/CastleArena/scripts.pory"
	walk_in_place_down
	step_end

# 431 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_7:
# 431 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 431 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 431 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 431 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 432 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_BeginChallenge_Movement_8:
# 432 "data/maps/CastleArena/scripts.pory"
	face_down
# 432 "data/maps/CastleArena/scripts.pory"
	delay_16
# 432 "data/maps/CastleArena/scripts.pory"
	delay_16
# 432 "data/maps/CastleArena/scripts.pory"
	face_up
# 432 "data/maps/CastleArena/scripts.pory"
	delay_16
# 432 "data/maps/CastleArena/scripts.pory"
	delay_16
# 432 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 453 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_0:
# 453 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 453 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 454 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_1:
# 454 "data/maps/CastleArena/scripts.pory"
	face_up
# 454 "data/maps/CastleArena/scripts.pory"
	delay_16
# 454 "data/maps/CastleArena/scripts.pory"
	delay_16
# 454 "data/maps/CastleArena/scripts.pory"
	delay_16
# 454 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 455 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_2:
# 455 "data/maps/CastleArena/scripts.pory"
	walk_up
# 455 "data/maps/CastleArena/scripts.pory"
	walk_up
# 455 "data/maps/CastleArena/scripts.pory"
	walk_up
# 455 "data/maps/CastleArena/scripts.pory"
	walk_up
# 455 "data/maps/CastleArena/scripts.pory"
	walk_up
# 455 "data/maps/CastleArena/scripts.pory"
	walk_up
# 455 "data/maps/CastleArena/scripts.pory"
	walk_up
# 455 "data/maps/CastleArena/scripts.pory"
	walk_right
# 455 "data/maps/CastleArena/scripts.pory"
	walk_right
# 455 "data/maps/CastleArena/scripts.pory"
	walk_right
# 455 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 463 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_3:
# 463 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 463 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 496 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_4:
# 496 "data/maps/CastleArena/scripts.pory"
	walk_left
# 496 "data/maps/CastleArena/scripts.pory"
	walk_left
	step_end

# 497 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_5:
# 497 "data/maps/CastleArena/scripts.pory"
	walk_right
# 497 "data/maps/CastleArena/scripts.pory"
	walk_right
	step_end

# 504 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_6:
# 504 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 504 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 505 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_7:
# 505 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 505 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 505 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 505 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 505 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 515 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_8:
# 515 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 515 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 522 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_9:
# 522 "data/maps/CastleArena/scripts.pory"
	walk_left
# 522 "data/maps/CastleArena/scripts.pory"
	walk_left
# 522 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 523 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger1_Movement_10:
# 523 "data/maps/CastleArena/scripts.pory"
	walk_left
# 523 "data/maps/CastleArena/scripts.pory"
	walk_down
# 523 "data/maps/CastleArena/scripts.pory"
	walk_down
# 523 "data/maps/CastleArena/scripts.pory"
	walk_down
# 523 "data/maps/CastleArena/scripts.pory"
	walk_down
# 523 "data/maps/CastleArena/scripts.pory"
	walk_down
# 523 "data/maps/CastleArena/scripts.pory"
	walk_down
# 523 "data/maps/CastleArena/scripts.pory"
	walk_down
# 523 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 543 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_0:
# 543 "data/maps/CastleArena/scripts.pory"
	face_down
# 543 "data/maps/CastleArena/scripts.pory"
	delay_16
# 543 "data/maps/CastleArena/scripts.pory"
	face_up
# 543 "data/maps/CastleArena/scripts.pory"
	delay_16
# 543 "data/maps/CastleArena/scripts.pory"
	face_down
# 543 "data/maps/CastleArena/scripts.pory"
	delay_16
# 543 "data/maps/CastleArena/scripts.pory"
	face_up
# 543 "data/maps/CastleArena/scripts.pory"
	delay_16
# 543 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 544 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_1:
# 544 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 544 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 544 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
# 544 "data/maps/CastleArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 596 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_2:
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 596 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 597 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_3:
# 597 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 597 "data/maps/CastleArena/scripts.pory"
	delay_16
# 597 "data/maps/CastleArena/scripts.pory"
	delay_8
# 597 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 597 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 597 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 597 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
# 597 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_left
	step_end

# 616 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_Challenger2_Movement_4:
# 616 "data/maps/CastleArena/scripts.pory"
	walk_left
# 616 "data/maps/CastleArena/scripts.pory"
	walk_down
# 616 "data/maps/CastleArena/scripts.pory"
	walk_down
# 616 "data/maps/CastleArena/scripts.pory"
	walk_down
# 616 "data/maps/CastleArena/scripts.pory"
	walk_down
# 616 "data/maps/CastleArena/scripts.pory"
	walk_down
# 616 "data/maps/CastleArena/scripts.pory"
	walk_down
# 616 "data/maps/CastleArena/scripts.pory"
	walk_down
# 616 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 660 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_0:
# 660 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 660 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 660 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 660 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 660 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 662 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_1:
# 662 "data/maps/CastleArena/scripts.pory"
	face_up
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_left
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_down
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_right
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_up
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_left
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_down
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_right
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_up
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_left
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_down
# 662 "data/maps/CastleArena/scripts.pory"
	delay_8
# 662 "data/maps/CastleArena/scripts.pory"
	face_right
	step_end

# 663 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_2:
# 663 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 663 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 663 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 663 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 663 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 663 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 663 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
	step_end

# 691 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_3:
# 691 "data/maps/CastleArena/scripts.pory"
	face_up
# 691 "data/maps/CastleArena/scripts.pory"
	delay_16
# 691 "data/maps/CastleArena/scripts.pory"
	face_down
# 691 "data/maps/CastleArena/scripts.pory"
	delay_16
# 691 "data/maps/CastleArena/scripts.pory"
	face_right
# 691 "data/maps/CastleArena/scripts.pory"
	delay_16
# 691 "data/maps/CastleArena/scripts.pory"
	delay_8
# 691 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 691 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
# 691 "data/maps/CastleArena/scripts.pory"
	walk_in_place_right
	step_end

# 692 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_4:
# 692 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 692 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 692 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 692 "data/maps/CastleArena/scripts.pory"
	walk_in_place_left
# 692 "data/maps/CastleArena/scripts.pory"
	delay_16
# 692 "data/maps/CastleArena/scripts.pory"
	face_up
# 692 "data/maps/CastleArena/scripts.pory"
	delay_16
# 692 "data/maps/CastleArena/scripts.pory"
	delay_16
# 692 "data/maps/CastleArena/scripts.pory"
	face_left
	step_end

# 741 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_5:
# 741 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 741 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 741 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 741 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
# 741 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 749 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_6:
# 749 "data/maps/CastleArena/scripts.pory"
	walk_slow_right
# 749 "data/maps/CastleArena/scripts.pory"
	walk_fast_left
# 749 "data/maps/CastleArena/scripts.pory"
	walk_fast_left
	step_end

# 750 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_7:
# 750 "data/maps/CastleArena/scripts.pory"
	walk_slow_left
# 750 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
# 750 "data/maps/CastleArena/scripts.pory"
	walk_fast_right
	step_end

# 764 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_8:
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
# 764 "data/maps/CastleArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 765 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_9:
# 765 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 765 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 765 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 765 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 765 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 765 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
	step_end

# 766 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_10:
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_down
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_up
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_down
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_left
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_up
# 766 "data/maps/CastleArena/scripts.pory"
	jump_in_place_right
	step_end

# 787 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_11:
# 787 "data/maps/CastleArena/scripts.pory"
	walk_left
# 787 "data/maps/CastleArena/scripts.pory"
	walk_left
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	walk_down
# 787 "data/maps/CastleArena/scripts.pory"
	face_down
	step_end

# 798 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_12:
# 798 "data/maps/CastleArena/scripts.pory"
	walk_right
# 798 "data/maps/CastleArena/scripts.pory"
	walk_right
# 798 "data/maps/CastleArena/scripts.pory"
	walk_down
# 798 "data/maps/CastleArena/scripts.pory"
	walk_down
# 798 "data/maps/CastleArena/scripts.pory"
	walk_down
# 798 "data/maps/CastleArena/scripts.pory"
	walk_down
# 798 "data/maps/CastleArena/scripts.pory"
	walk_down
# 798 "data/maps/CastleArena/scripts.pory"
	walk_down
# 798 "data/maps/CastleArena/scripts.pory"
	walk_in_place_up
	step_end

# 800 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_13:
# 800 "data/maps/CastleArena/scripts.pory"
	walk_down
# 800 "data/maps/CastleArena/scripts.pory"
	walk_down
# 800 "data/maps/CastleArena/scripts.pory"
	walk_down
# 800 "data/maps/CastleArena/scripts.pory"
	walk_down
# 800 "data/maps/CastleArena/scripts.pory"
	walk_down
# 800 "data/maps/CastleArena/scripts.pory"
	walk_down
	step_end

# 801 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_GrandFinals_Movement_14:
# 801 "data/maps/CastleArena/scripts.pory"
	walk_down
# 801 "data/maps/CastleArena/scripts.pory"
	walk_down
# 801 "data/maps/CastleArena/scripts.pory"
	walk_down
# 801 "data/maps/CastleArena/scripts.pory"
	walk_down
# 801 "data/maps/CastleArena/scripts.pory"
	walk_down
# 801 "data/maps/CastleArena/scripts.pory"
	walk_down
# 801 "data/maps/CastleArena/scripts.pory"
	walk_down
	step_end

# 876 "data/maps/CastleArena/scripts.pory"
CastleArena_EventScript_ForfeitConfirmation_Movement_0:
# 876 "data/maps/CastleArena/scripts.pory"
	walk_right
# 876 "data/maps/CastleArena/scripts.pory"
	walk_right
# 876 "data/maps/CastleArena/scripts.pory"
	walk_right
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
# 876 "data/maps/CastleArena/scripts.pory"
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
	.string "{SPEAKER NAME_NAGO}Mrrow… okay, Kirby, I'll make it quick:\n"
	.string "I want to have a battle with you!$"

CastleArena_EventScript_Nago_Text_2:
# 221 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_NAGO}All right! Let's see if I can defeat the\n"
	.string "one who beat all three mage sisters!$"

CastleArena_EventScript_Nago_Text_3:
# 224 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_NAGO}Thanks, Kirby. You know I always want to\n"
	.string "help you out however I can…\p"
	.string "I just wanted to make sure I wouldn't\n"
	.string "regret splitting time from this game.\l"
	.string "Helper battles are so much fun, mrrow!\p"
	.string "I'm behind you all the way now, mrrow.\n"
	.string "Here, let's trade numbers!$"

CastleArena_EventScript_Nago_Text_4:
# 235 "data/maps/CastleArena/scripts.pory"
	.string "Obtained {COLOR RED}Nago's phone number{COLOR DARK_GRAY}!\n"
	.string "Now you can call for Nago's help!$"

CastleArena_EventScript_Nago_Text_5:
# 239 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_NAGO}With my rock-smashing strength, no\n"
	.string "Star Blocks will be able to stop us!$"

CastleArena_EventScript_Nago_Text_6:
# 246 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_NAGO}Alright, Shiro, let's get a move on.\n"
	.string "We've got other Arenas to visit, and a\l"
	.string "kingly mystery to sniff out, mrrow!$"

CastleArena_EventScript_Nago_Text_7:
# 261 "data/maps/CastleArena/scripts.pory"
	.string "Bye-bye, Kirby! Thank you for all your\n"
	.string "help, myew!$"

CastleArena_EventScript_Nago_Text_8:
# 276 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_NAGO}Mrrow? Are your Helpers not ready? Well,\n"
	.string "I'll wait for you here then.$"

CastleArena_EventScript_Shiro_Text_0:
# 289 "data/maps/CastleArena/scripts.pory"
	.string "Myew… it really makes me sad to see\n"
	.string "Nago get so worked up. Can't we all\l"
	.string "get along and play nice?$"

CastleArena_EventScript_Shiro_Text_1:
# 295 "data/maps/CastleArena/scripts.pory"
	.string "Myew! Nago's looking a lot happier now.\n"
	.string "I'm so relieved!$"

CastleArena_EventScript_Commentator_Text_0:
# 309 "data/maps/CastleArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "Even a trio of talented sisters didn't\n"
	.string "keep you and your Helpers from victory!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

CastleArena_EventScript_Commentator_Text_1:
# 322 "data/maps/CastleArena/scripts.pory"
	.string "Wwwwwelcome to the Castle\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

CastleArena_EventScript_CommentatorChoice_Text_0:
# 335 "data/maps/CastleArena/scripts.pory"
	.string "Today's challenge: a zesty expedition!\n"
	.string "How can I help you?$"

CastleArena_EventScript_CommentatorBye_Text_0:
# 353 "data/maps/CastleArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

CastleArena_EventScript_CommentatorInfo_Text_0:
# 360 "data/maps/CastleArena/scripts.pory"
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
# 382 "data/maps/CastleArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

CastleArena_EventScript_BeginChallenge_Text_1:
# 414 "data/maps/CastleArena/scripts.pory"
	.string "Welcome, one and all, to the lavish\n"
	.string "Castle Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Here's a royally recognized rising star…\l"
	.string "It's the wondrous warrior, Kirbyyy!!!$"

CastleArena_EventScript_BeginChallenge_Text_2:
# 423 "data/maps/CastleArena/scripts.pory"
	.string "Welcome, one and all, to the lavish\n"
	.string "Castle Arena!\p"
	.string "We've got a returning Kirby, taking\n"
	.string "another swing at the impenetrable trio!\l"
	.string "Can he break through them after all?$"

CastleArena_EventScript_Challenger1_Text_0:
# 447 "data/maps/CastleArena/scripts.pory"
	.string "And for his first opponent, a girl whose\n"
	.string "composure is as cold as her Helpers!\p"
	.string "Please welcome {COLOR BLUE}Francisca{COLOR DARK_GRAY} to the stage!$"

CastleArena_EventScript_Challenger1_Text_1:
# 467 "data/maps/CastleArena/scripts.pory"
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
# 482 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}…Bonjam. You're as resilient as I\n"
	.string "remember you being.\p"
	.string "Of course, our plan means we have to win\n"
	.string "three times as many Brooches, too…\p"
	.string "Having you slow our progress down is\n"
	.string "absolutely unacceptable.\p"
	.string "This time, I'll make sure you stay\n"
	.string "away from the rest of my sisters!$"

CastleArena_EventScript_Challenger1_Text_3:
# 501 "data/maps/CastleArena/scripts.pory"
	.string "His first opponent's been put on ice!\n"
	.string "Kirby takes the first win!$"

CastleArena_EventScript_Challenger1_Text_4:
# 517 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FRANCISCA}I suppose it's up to my sisters now to\n"
	.string "do what I could not. Jambuhbye.$"

CastleArena_EventScript_Challenger2_Text_0:
# 537 "data/maps/CastleArena/scripts.pory"
	.string "Up next is an opponent who alway brings\n"
	.string "the heat when she battles her rivals!\p"
	.string "Let's hear it for {COLOR RED}Flamberge{COLOR DARK_GRAY}, everybody!$"

CastleArena_EventScript_Challenger2_Text_1:
# 560 "data/maps/CastleArena/scripts.pory"
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
# 577 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE}WHAT did I tell you last time, huh?\n"
	.string "STOP DEFEATING MY PRECIOUS FRANCISCA!\p"
	.string "Man, you're so annoyingly MEDDLESOME! \n"
	.string "Vun, vun, VUN MEDDLESOME! Aaaarghh!!\p"
	.string "YOU'RE GOING DOWN!$"

CastleArena_EventScript_Challenger2_Text_3:
# 593 "data/maps/CastleArena/scripts.pory"
	.string "Flamberge's win streak was snuffed out!\n"
	.string "Kirby has scored a second victory!$"

CastleArena_EventScript_Challenger2_Text_4:
# 607 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_FLAMBERGE}Oops! I got so angry at you, when I\n"
	.string "should've checked on Francisca first!\p"
	.string "Don't think this is over, though. Zan's\n"
	.string "definitely gonna take you out!$"

CastleArena_EventScript_GrandFinals_Text_0:
# 635 "data/maps/CastleArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's FINAL ROUND time!\p"
	.string "On my right, a young hopeful looking to\n"
	.string "topple the trio of terror…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

CastleArena_EventScript_GrandFinals_Text_1:
# 648 "data/maps/CastleArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's FINAL ROUND time!\p"
	.string "On my right, a returnee determined to\n"
	.string "end the sisters' reign of dominance…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

CastleArena_EventScript_GrandFinals_Text_2:
# 678 "data/maps/CastleArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who reached the final round!\p"
	.string "The lightning-quick leader of the mage\n"
	.string "sisters is a force to be reckoned with.\p"
	.string "A name announced so often here, I've\n"
	.string "almost memorized the whole thing!\p"
	.string "Everyone welcome to the stage…\n"
	.string "{COLOR GREEN}Zan Partizanne{COLOR DARK_GRAY}!$"

CastleArena_EventScript_GrandFinals_Text_3:
# 708 "data/maps/CastleArena/scripts.pory"
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
# 726 "data/maps/CastleArena/scripts.pory"
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
# 742 "data/maps/CastleArena/scripts.pory"
	.string "It's come down to Kirby vs.… uh… Zan!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

CastleArena_EventScript_GrandFinals_Text_6:
# 756 "data/maps/CastleArena/scripts.pory"
	.string "Folks… the battle of bonds has ended…\n"
	.string "The winner of this Castle Arena clash…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

CastleArena_EventScript_GrandFinals_Text_7:
# 779 "data/maps/CastleArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

CastleArena_EventScript_GrandFinals_Text_8:
# 785 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_ZAN}…that's that, then. Jambuhbye…$"

CastleArena_EventScript_Break_Text_0:
# 811 "data/maps/CastleArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

CastleArena_EventScript_Break_Text_1:
# 816 "data/maps/CastleArena/scripts.pory"
	.string "This is it: the final round awaits!\n"
	.string "Ready for the ultimate battle, Kirby?$"

CastleArena_EventScript_ArenaHeal_Text_0:
# 840 "data/maps/CastleArena/scripts.pory"
	.string "Great job on that battle, Kirby. Let's\n"
	.string "heal up those hardworking Helpers!$"

CastleArena_EventScript_ArenaHeal_Text_1:
# 844 "data/maps/CastleArena/scripts.pory"
	.string "Your party has been fully healed!$"

CastleArena_EventScript_ForfeitConfirmation_Text_0:
# 852 "data/maps/CastleArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!$"

CastleArena_EventScript_ForfeitConfirmation_Text_1:
# 857 "data/maps/CastleArena/scripts.pory"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

CastleArena_EventScript_ForfeitConfirmation_Text_2:
# 863 "data/maps/CastleArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

CastleArena_EventScript_Victory_Text_0:
# 892 "data/maps/CastleArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Castle Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Castle Brooch!$"

CastleArena_EventScript_Victory_Text_1:
# 897 "data/maps/CastleArena/scripts.pory"
	.string "Kirby received the Castle Brooch\n"
	.string "from Commentator Waddle Dee!$"

CastleArena_EventScript_Victory_Text_2:
# 902 "data/maps/CastleArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I'm sure we'll see each other again\n"
	.string "at the next Arena. Until then!$"

CastleArena_EventScript_Victory_Text_3:
# 915 "data/maps/CastleArena/scripts.pory"
	.string "{SPEAKER NAME_NAGO}Kirby! I didn't even notice you before!\n"
	.string "I kept losing to those mage sisters,\l"
	.string "and it riled me up… sorry, mrrow!\p"
	.string "It's good to see you around. Have you\n"
	.string "been enjoying the Royal Royale?\p"
	.string "Hm? You're investgating a secret you\n"
	.string "think King Dedede is hiding? Hmm…\p"
	.string "Tell you what, mrrow. Talk to me down at\n"
	.string "the square after you rest up, okay?\l"
	.string "We'll strike up a little deal!$"

CastleArena_EventScript_Youngster_Text_0:
# 968 "data/maps/CastleArena/scripts.pory"
	.string "Wow, your Helpers must have been really\n"
	.string "good to win at the Arena here!\p"
	.string "I'm so inspired! I'm gonna go out and\n"
	.string "try to befriend ones just like yours!$"

CastleArena_EventScript_Youngster_Text_1:
# 976 "data/maps/CastleArena/scripts.pory"
	.string "Is there any type of Helper that's good\n"
	.string "against Ice, Fire, and Electric…?\p"
	.string "Hmm… I'm not sure my team is diverse\n"
	.string "enough for the job here…$"

CastleArena_EventScript_Lumberjack_Text_0:
# 991 "data/maps/CastleArena/scripts.pory"
	.string "It's really something how well those\n"
	.string "girls work together in battle, huh?\p"
	.string "Maybe I should be taking a closer listen\n"
	.string "to the words they preach about bonds\l"
	.string "bringing us closer to paradise.$"

CastleArena_EventScript_Lumberjack_Text_1:
# 1000 "data/maps/CastleArena/scripts.pory"
	.string "My Sandran and Digguh can hold their\n"
	.string "own against the red and yellow girls…\p"
	.string "But my luck usually leads me to get\n"
	.string "matched up against the blue one!\l"
	.string "Her team beats mine so easily!$"

CastleArena_EventScript_Conductor_Text_0:
# 1016 "data/maps/CastleArena/scripts.pory"
	.string "You actually made it, huh? I guess this\n"
	.string "Arena wasn't so unwinnable after all.\p"
	.string "I shouldn't have let my worries stop\n"
	.string "me from giving it my best shot in there…\p"
	.string "Maybe this was one of those lessons\n"
	.string "the Great King wanted us to take away?$"

CastleArena_EventScript_Conductor_Text_1:
# 1027 "data/maps/CastleArena/scripts.pory"
	.string "There's a whole lot of hubbub about\n"
	.string "this Arena being unwinnable.\p"
	.string "Did I choose the wrong Arena to visit\n"
	.string "first? Maybe I should head over to\l"
	.string "the Icecap Arena instead…$"

CastleArena_EventScript_ShortcutGuide_Text_0:
# 1041 "data/maps/CastleArena/scripts.pory"
	.string "If you need to leave back to the\n"
	.string "courtyard, this path's a shortcut.\l"
	.string "I wish it was open on the way up…$"

CastleArena_EventScript_Wintry_Text_0:
# 1050 "data/maps/CastleArena/scripts.pory"
	.string "Wow! I can see my friend at the top of\n"
	.string "the Icecap Arena all the way from here!\p"
	.string "Heeeeeeey!!! Helloooooooooo!!!!!$"

CastleArena_EventScript_WaddleDee_Text_0:
# 1061 "data/maps/CastleArena/scripts.pory"
	.string "I wonder whether the competitors who\n"
	.string "won their Brooch here before that trio\l"
	.string "showed up could have beat them?\p"
	.string "I've seen other strong-looking leaders\n"
	.string "here too. There was this bandana-clad\l"
	.string "Waddle Dee, and some artist girl…$"

CastleArena_EventScript_TalkToVCrowd1_Text_0:
# 1137 "data/maps/CastleArena/scripts.pory"
	.string "I can't get enough of seeing Francisca\n"
	.string "freeze her opponent's Helpers!\p"
	.string "Being frozen sounds like so much fun…\n"
	.string "Oh, Francisca, please let it be me next!$"

CastleArena_EventScript_TalkToVCrowd1_Text_1:
# 1145 "data/maps/CastleArena/scripts.pory"
	.string "What? You managed to defeat the\n"
	.string "wonderful Francisca? How could you!?\p"
	.string "Oooh… this burning feeling in my heart…\n"
	.string "is this what Flamberge always feels!?$"

CastleArena_EventScript_TalkToVCrowd2_Text_0:
# 1160 "data/maps/CastleArena/scripts.pory"
	.string "My pals here are real big fans of\n"
	.string "Francisca and Flamberge, so you'd think\l"
	.string "you'd know what to expect from me.\p"
	.string "There's just one problem though…\p"
	.string "I can't be the biggest fan of someone\n"
	.string "whose name I can't even remember!$"

CastleArena_EventScript_TalkToVCrowd2_Text_1:
# 1171 "data/maps/CastleArena/scripts.pory"
	.string "Whoa, you must be pretty talented if\n"
	.string "you managed to beat… uhh…\p"
	.string "Hold on, it's coming to me…\p"
	.string "…\p"
	.string "… Aha!\p"
	.string "Santa's Party Sack! That was it! Yeah,\n"
	.string "good job winning against her.$"

CastleArena_EventScript_TalkToVCrowd3_Text_0:
# 1192 "data/maps/CastleArena/scripts.pory"
	.string "I think Flamberge puts up the best\n"
	.string "performance of the three mage sisters.\p"
	.string "I'd be okay watching her battle over\n"
	.string "and over if nobody could defeat her…$"

CastleArena_EventScript_TalkToVCrowd3_Text_1:
# 1200 "data/maps/CastleArena/scripts.pory"
	.string "No way… you managed to defeat\n"
	.string "Flamberge? Who even are you?$"

CastleArena_EventScript_Soldier_Text_0:
# 1249 "data/maps/CastleArena/scripts.pory"
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
# 1264 "data/maps/CastleArena/scripts.pory"
	.string "I'm keeping an eye on things here to see\n"
	.string "just how unbeatable that trio really is.\p"
	.string "It would be a problem if nobody could\n"
	.string "win the Royal Royal because of them…$"

CastleArena_EventScript_Sign_Text_0:
# 1277 "data/maps/CastleArena/scripts.pory"
	.string "Newly-opened: CASTLE ARENA\n"
	.string "Conquer it and win the Castle Brooch!$"

CastleArena_Text_Francisca::
# 937 "data/maps/CastleArena/scripts.pory"
	.string "My, my… you and your Helpers are in top\n"
	.string "form as always. How divine…$"

CastleArena_Text_Flamberge::
# 943 "data/maps/CastleArena/scripts.pory"
	.string "Jamblasted… JAMBLASTED!$"

CastleArena_Text_ZanPartizanne::
# 948 "data/maps/CastleArena/scripts.pory"
	.string "Janno… it can't be… are we really still\n"
	.string "unable to overcome you?$"

CastleArena_Text_Nago::
# 954 "data/maps/CastleArena/scripts.pory"
	.string "There's no doubt about it. Your Helpers\n"
	.string "are the real deal, mrrow!$"

CastleArena_Text_Cafe::
# 1206 "data/maps/CastleArena/scripts.pory"
	.string "Arena seats seem like the perfect place\n"
	.string "to sell snacks to hungry customers, so\l"
	.string "I'm setting up a little food stand here!$"

CastleArena_Text_CafeWin::
# 1213 "data/maps/CastleArena/scripts.pory"
	.string "That was some seriously incredible\n"
	.string "Helper battling skill! Great work!\p"
	.string "With hot shots like you, I bet this\n"
	.string "place will draw huge crowds soon…\l"
	.string "and then I'll be busy, busy, busy!$"

CastleArena_Text_Socialite::
# 1223 "data/maps/CastleArena/scripts.pory"
	.string "It's easy to see the results coming\n"
	.string "when one group of competitors keep\l"
	.string "dominating every single tournament.\p"
	.string "Will you be able to inject some spice\n"
	.string "into this Arena, I wonder?$"

CastleArena_Text_SocialiteWin::
# 1233 "data/maps/CastleArena/scripts.pory"
	.string "Bravo! You and your Helpers were really\n"
	.string "something else!\p"
	.string "Knowing there are strong competitors\n"
	.string "like you traveling here has restored\l"
	.string "my enthusiasm for Arena spectating!$"
