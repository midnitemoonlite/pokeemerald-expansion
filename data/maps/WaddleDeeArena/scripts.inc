# 1 "data/maps/WaddleDeeArena/scripts.pory"

# 2 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_MapScripts::
# 3 "data/maps/WaddleDeeArena/scripts.pory"
    .byte 0

WaddleDeeArena_EventScript_Youngster::
# 8 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 9 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 10 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Youngster_Text_0
# 18 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_WaddleDee::
# 23 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 24 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 25 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_WaddleDee_Text_0
# 33 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Cafe::
# 38 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 39 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 40 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Cafe_2
# 50 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Cafe_Text_1
WaddleDeeArena_EventScript_Cafe_1:
# 56 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Cafe_2:
# 42 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Cafe_Text_0
	goto WaddleDeeArena_EventScript_Cafe_1


WaddleDeeArena_EventScript_TalkToCafe::
# 61 "data/maps/WaddleDeeArena/scripts.pory"
	turnobject LOCALID_WADDLE_CROWD_1, DIR_SOUTH
# 62 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Cafe
	return


WaddleDeeArena_EventScript_Staff::
# 67 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 68 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 69 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Staff_2
# 81 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Staff_Text_1
WaddleDeeArena_EventScript_Staff_1:
# 87 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Staff_2:
# 71 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Staff_Text_0
	goto WaddleDeeArena_EventScript_Staff_1


WaddleDeeArena_EventScript_TalkToStaff::
# 92 "data/maps/WaddleDeeArena/scripts.pory"
	turnobject LOCALID_WADDLE_CROWD_2, DIR_EAST
# 93 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Staff
	return


WaddleDeeArena_EventScript_Hiker::
# 98 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 99 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 100 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Hiker_Text_0
# 106 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Gentleman::
# 111 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 112 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 113 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Gentleman_Text_0
# 121 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Nurse::
# 126 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 127 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 128 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 130 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Nurse_2
WaddleDeeArena_EventScript_Nurse_1:
# 141 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Nurse_2:
# 132 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 133 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 134 "data/maps/WaddleDeeArena/scripts.pory"
	playfanfare MUS_HEAL
# 135 "data/maps/WaddleDeeArena/scripts.pory"
	waitfanfare
# 136 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 137 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 138 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_1
	goto WaddleDeeArena_EventScript_Nurse_1


WaddleDeeArena_EventScript_Commentator::
# 146 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 147 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 148 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_2
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_3
WaddleDeeArena_EventScript_Commentator_1:
# 188 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Commentator_2:
# 150 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_0
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_3:
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 162 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 163 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_1
# 168 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_6
# 172 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_7
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_6:
# 170 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_7:
# 174 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_2, MSGBOX_YESNO
# 176 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Commentator_10
# 181 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Commentator_11
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_10:
# 178 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 179 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_11:
# 183 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 184 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	goto WaddleDeeArena_EventScript_Commentator_1


WaddleDeeArena_EventScript_GrandFinalsPreparation::
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_2
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_3
# 206 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_4
WaddleDeeArena_EventScript_GrandFinalsPreparation_1:
# 212 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 216 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 217 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 218 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return

WaddleDeeArena_EventScript_GrandFinalsPreparation_2:
# 196 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_3:
# 202 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 203 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 204 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_4:
# 208 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 209 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 210 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1


WaddleDeeArena_EventScript_CommentatorChoice::
# 223 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_CommentatorChoice_Text_0
# 225 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 226 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 20, 6, MULTI_CHALLENGEINFO, FALSE
# 227 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_CommentatorChoice_2
# 230 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_CommentatorChoice_3
# 232 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_CommentatorChoice_4
# 234 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_CommentatorChoice_5
	return

WaddleDeeArena_EventScript_CommentatorChoice_2:
# 229 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_BeginChallenge
	return

WaddleDeeArena_EventScript_CommentatorChoice_3:
# 231 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorInfo
	return

WaddleDeeArena_EventScript_CommentatorChoice_4:
# 233 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return

WaddleDeeArena_EventScript_CommentatorChoice_5:
# 235 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return


WaddleDeeArena_EventScript_CommentatorBye::
# 241 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_CommentatorBye_2
# 248 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_1
WaddleDeeArena_EventScript_CommentatorBye_1:
# 251 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_CommentatorBye_2:
# 243 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_0
	goto WaddleDeeArena_EventScript_CommentatorBye_1


WaddleDeeArena_EventScript_CommentatorInfo::
# 256 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorInfo_Text_0
# 282 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	return


WaddleDeeArena_EventScript_BeginChallenge::
# 287 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_0
# 289 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 290 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 1
# 291 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 292 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 293 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_2
# 300 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_3
# 306 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_4
WaddleDeeArena_EventScript_BeginChallenge_1:
# 312 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 313 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 314 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 315 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 316 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_9
# 327 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_10
WaddleDeeArena_EventScript_BeginChallenge_8:
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_BeginChallenge_Movement_1
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_BeginChallenge_Movement_2
# 339 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 340 "data/maps/WaddleDeeArena/scripts.pory"
	call WaddleDeeArena_EventScript_Challenger1
	return

WaddleDeeArena_EventScript_BeginChallenge_2:
# 296 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 298 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_3:
# 302 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 303 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 304 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_4:
# 308 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 309 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 310 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_9:
# 320 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_1
	goto WaddleDeeArena_EventScript_BeginChallenge_8

WaddleDeeArena_EventScript_BeginChallenge_10:
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_2
	goto WaddleDeeArena_EventScript_BeginChallenge_8


WaddleDeeArena_EventScript_Challenger1::
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_0
# 346 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 347 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_0
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_1
# 350 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_1
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 352 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 353 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 354 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 355 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 356 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 357 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_2
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_3
WaddleDeeArena_EventScript_Challenger1_1:
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 369 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 370 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 371 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 372 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 373 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ED, WaddleDeeArena_Text_Challenger1
# 374 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_3
# 376 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_6
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_7
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 382 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 385 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 386 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_1
# 387 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_Challenger1_2:
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_1
	goto WaddleDeeArena_EventScript_Challenger1_1

WaddleDeeArena_EventScript_Challenger1_3:
# 364 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_2
	goto WaddleDeeArena_EventScript_Challenger1_1


WaddleDeeArena_EventScript_Challenger2::
# 392 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_0
# 393 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 394 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_0
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_1
# 397 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_2
# 398 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 399 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 404 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_1
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 408 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 409 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 410 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 411 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 412 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_4, WaddleDeeArena_Text_Challenger2
# 413 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_2
# 415 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 416 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_2
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_3
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 420 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 421 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 422 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 423 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 424 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 425 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_2
# 426 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_Challenger3::
# 431 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_0
# 432 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 433 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_0
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_1
# 436 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_3
# 437 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 438 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 439 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_1
# 445 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 446 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 447 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 448 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 449 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 450 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 451 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DECLAN, WaddleDeeArena_Text_Challenger3
# 452 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_2
# 454 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 455 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 456 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_2
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_3
# 459 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 3
# 460 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 461 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 462 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 463 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 464 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 465 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 466 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_3
# 467 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_3
# 483 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_GrandFinals::
# 488 "data/maps/WaddleDeeArena/scripts.pory"
	fadeoutbgm 1
# 489 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 490 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 491 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_2
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_3
WaddleDeeArena_EventScript_GrandFinals_1:
# 517 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_0
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_1
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_2
# 522 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_2
# 533 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 534 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_3
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_4
# 537 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_ARENA_MAGOLOR
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_5
# 539 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 540 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 541 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 542 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 543 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 544 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_7
WaddleDeeArena_EventScript_GrandFinals_6:
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_10
WaddleDeeArena_EventScript_GrandFinals_9:
# 583 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_6
# 585 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_5
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 590 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 591 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 592 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_7
# 593 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_8
# 594 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 595 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 596 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_STARTER_MON
# 597 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_GrandFinals_14
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_GrandFinals_15
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_GrandFinals_16
WaddleDeeArena_EventScript_GrandFinals_12:
# 605 "data/maps/WaddleDeeArena/scripts.pory"
	fadeoutbgm 1
# 606 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 607 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_6
# 612 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_B_FRONTIER, TRUE
# 614 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_9
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_10
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_11
# 618 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 619 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_GrandFinals_Text_7
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 621 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_12
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_8
# 627 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_13
# 629 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 630 "data/maps/WaddleDeeArena/scripts.pory"
	setobjectxyperm LOCALID_ARENA_MAGOLOR, 9, 18
# 631 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 632 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 633 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 634 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 635 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 636 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_14
# 638 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 641 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 642 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 643 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Victory
	return

WaddleDeeArena_EventScript_GrandFinals_2:
# 493 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_0
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_3:
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_1
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_7:
# 546 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_3
	goto WaddleDeeArena_EventScript_GrandFinals_6

WaddleDeeArena_EventScript_GrandFinals_10:
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_4
	goto WaddleDeeArena_EventScript_GrandFinals_9

WaddleDeeArena_EventScript_GrandFinals_14:
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_15:
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_1, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_16:
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_2, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12


WaddleDeeArena_EventScript_Victory::
# 648 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_0
# 653 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Victory_Text_1
# 655 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 656 "data/maps/WaddleDeeArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 657 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_BADGE01_GET
# 658 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_HIDE_WADDLE_DEE_ARENA_PARTICIPANTS
# 659 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 2
# 660 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_2
# 665 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Break::
# 670 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_2
# 675 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_3
# 680 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_4
WaddleDeeArena_EventScript_Break_1:
# 685 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 686 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, 0
# 687 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 688 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_Break_9
# 701 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_Break_10
# 703 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_Break_11
# 705 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_Break_12
	return

WaddleDeeArena_EventScript_Break_2:
# 672 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_0
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_3:
# 677 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_1
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_4:
# 682 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_2
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_9:
# 689 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_13
# 693 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_14
# 697 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_15
	return

WaddleDeeArena_EventScript_Break_10:
# 702 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ArenaHeal
	return

WaddleDeeArena_EventScript_Break_11:
# 704 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ForfeitConfirmation
	return

WaddleDeeArena_EventScript_Break_12:
# 706 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ForfeitConfirmation
	return

WaddleDeeArena_EventScript_Break_13:
# 691 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger2
	return

WaddleDeeArena_EventScript_Break_14:
# 695 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger3
	return

WaddleDeeArena_EventScript_Break_15:
# 699 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return


WaddleDeeArena_EventScript_ArenaHeal::
# 712 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_1
# 754 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_2
	return

WaddleDeeArena_EventScript_ArenaHeal_1:
# 714 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_5
# 746 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_6
	return

WaddleDeeArena_EventScript_ArenaHeal_2:
# 756 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_4
# 758 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 759 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 760 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 761 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 762 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 763 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_5:
# 716 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_HEALS, 0
	goto_if_gt WaddleDeeArena_EventScript_ArenaHeal_9
# 738 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_2
# 743 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_6:
# 748 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_3
# 751 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_9:
# 718 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_0, MSGBOX_YESNO
# 720 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_ArenaHeal_13
WaddleDeeArena_EventScript_ArenaHeal_12:
# 731 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_ArenaHeal_15
	return

WaddleDeeArena_EventScript_ArenaHeal_13:
# 722 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 723 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 724 "data/maps/WaddleDeeArena/scripts.pory"
	subvar VAR_ARENA_HEALS, 1
# 725 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 726 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 727 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 728 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 729 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	goto WaddleDeeArena_EventScript_ArenaHeal_12

WaddleDeeArena_EventScript_ArenaHeal_15:
# 733 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_ForfeitConfirmation::
# 769 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_1
# 799 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_2
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_1:
# 771 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0
# 776 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1
# 778 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 779 "data/maps/WaddleDeeArena/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, WaddleDeeArena_Text_ToughItOut, WaddleDeeArena_Text_AcceptDefeat
# 780 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WaddleDeeArena_EventScript_ForfeitConfirmation_5
# 796 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_2:
# 801 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_3
# 803 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 804 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 805 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 806 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 807 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 808 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 809 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 810 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 811 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
# 812 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_5:
# 782 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2
# 784 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 785 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 787 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 788 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 789 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 790 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 791 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 792 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return


WaddleDeeArena_EventScript_TalkToMagolor::
# 818 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 819 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 820 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_2
# 834 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_3
WaddleDeeArena_EventScript_TalkToMagolor_1:
# 858 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_TalkToMagolor_2:
# 822 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_0
	goto WaddleDeeArena_EventScript_TalkToMagolor_1

WaddleDeeArena_EventScript_TalkToMagolor_3:
# 836 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_1
# 847 "data/maps/WaddleDeeArena/scripts.pory"
	giveitem ITEM_TM53
# 848 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_2
# 856 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	goto WaddleDeeArena_EventScript_TalkToMagolor_1


# 196 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0:
# 196 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 197 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1:
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 203 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2:
# 203 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 203 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 203 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 209 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3:
# 209 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 209 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 209 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 213 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4:
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5:
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 215 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6:
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 317 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_0:
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 337 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_1:
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 338 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_2:
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 348 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_0:
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 349 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_1:
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 351 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_2:
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 354 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_3:
# 354 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
# 354 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 369 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_4:
# 369 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 369 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 370 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_5:
# 370 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 370 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
	step_end

# 376 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_6:
# 376 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 376 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 376 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 376 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 376 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 377 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_7:
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 382 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_8:
# 382 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 382 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 382 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 383 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_9:
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 395 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_0:
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 396 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_1:
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 417 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_2:
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 418 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_3:
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 434 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_0:
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 435 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_1:
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 457 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_2:
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 457 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 458 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_3:
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 458 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
	step_end

# 518 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_0:
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 520 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_1:
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 521 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_2:
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 535 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_3:
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 535 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 536 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_4:
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 536 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 538 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_5:
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 584 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_6:
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 592 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_7:
# 592 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_right
# 592 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
# 592 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
	step_end

# 593 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_8:
# 593 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_left
# 593 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
# 593 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
	step_end

# 615 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_9:
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 616 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_10:
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 617 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_11:
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 623 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_12:
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 628 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_13:
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 637 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_14:
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 639 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_15:
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 640 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_16:
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 786 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0:
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

WaddleDeeArena_EventScript_Youngster_Text_0:
# 10 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I heard this bit of advice from the\n"
	.string "Great King… \p"
	.string "When a Helper uses a move that shares\n"
	.string "its type, that move gets stronger.\p"
	.string "No wonder some folks like to load up\n"
	.string "on a single type of Helper, huh?$"

WaddleDeeArena_EventScript_WaddleDee_Text_0:
# 25 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Have you met the craftsman hanging out\n"
	.string "inside the item shop yet?\p"
	.string "Apparently he knows special moves that\n"
	.string "can be taught to Helpers.\p"
	.string "If you get a Brooch, you should pay\n"
	.string "him a visit and see what he offers.$"

WaddleDeeArena_EventScript_Cafe_Text_0:
# 42 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I've got some time off, so I came to\n"
	.string "see what the Arenas were like.\p"
	.string "I can't wait to see what kinds of\n"
	.string "battles will take place in here!$"

WaddleDeeArena_EventScript_Cafe_Text_1:
# 50 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Hey, congratulations on your victory!\n"
	.string "All the competitors were so cool.\p"
	.string "I think I get why the Great King is\n"
	.string "making such a big deal of this game now!$"

WaddleDeeArena_EventScript_Staff_Text_0:
# 71 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My boss is planning on challenging the\n"
	.string "Arena, so I'm here to cheer him on.\p"
	.string "His Psychic-type Helpers are something\n"
	.string "else, I tell ya!\p"
	.string "Gooooo, boss! You've got this!$"

WaddleDeeArena_EventScript_Staff_Text_1:
# 81 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Wow, you managed to best my boss's\n"
	.string "Helpers? You're something else!\p"
	.string "Don't tell him, but… I'll be\n"
	.string "rooting for you too!$"

WaddleDeeArena_EventScript_Hiker_Text_0:
# 100 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Supposedly, each of the various\n"
	.string "Arenas have slightly different rules.\p"
	.string "Whenever you get to a new Arena, it\n"
	.string "might not be a bad idea to scope out\l"
	.string "what you'll be getting into.$"

WaddleDeeArena_EventScript_Gentleman_Text_0:
# 113 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Raising Helpers is quite difficult…\n"
	.string "I'm not sure I've got what it takes.\p"
	.string "But watching others battle with their\n"
	.string "Helpers is even more exciting!\p"
	.string "There might be some serious candidates\n"
	.string "for the new king of Dream Land here!$"

WaddleDeeArena_EventScript_Nurse_Text_0:
# 128 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you planning on entering the Arena?\n"
	.string "I can heal up your Helpers first!$"

WaddleDeeArena_EventScript_Nurse_Text_1:
# 138 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You and your Helpers are in top form.\n"
	.string "Best of luck in the Arena!$"

WaddleDeeArena_EventScript_Commentator_Text_0:
# 150 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "It's no small feat, overcoming Magolor\n"
	.string "and his magical bag of tricks!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

WaddleDeeArena_EventScript_Commentator_Text_1:
# 163 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Wwwwwelcome to the Waddle Dee\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

WaddleDeeArena_EventScript_Commentator_Text_2:
# 174 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Next up: grand finals!\n"
	.string "Are you prepared for the last battle?$"

WaddleDeeArena_EventScript_CommentatorChoice_Text_0:
# 223 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Today's challenge: a sweet breeze!\n"
	.string "How can I help you?$"

WaddleDeeArena_EventScript_CommentatorBye_Text_0:
# 243 "data/maps/WaddleDeeArena/scripts.pory"
	.string "When you're ready for the grand finals,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorBye_Text_1:
# 248 "data/maps/WaddleDeeArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorInfo_Text_0:
# 256 "data/maps/WaddleDeeArena/scripts.pory"
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
	.string "{COLOR BLUE}3 rounds{COLOR DARK_GRAY} with {COLOR RED}1 full-party heal{COLOR DARK_GRAY}.\p"
	.string "If you top the preliminary bracket,\n"
	.string "you'll be entered into grand finals!\p"
	.string "You'll have the chance to adjust your\n"
	.string "team and save before the last fight.\p"
	.string "Defeat the final opponent, and you'll\n"
	.string "be awarded one Waddle Dee Brooch!\p"
	.string "Now then…$"

WaddleDeeArena_EventScript_BeginChallenge_Text_0:
# 287 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_1:
# 320 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Starring none other than our hero...\l"
	.string "it's the pink pugilist, Kirbyyy!!!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_2:
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "Unable to settle for anything other\n"
	.string "than victory, Kirby has returned!\l"
	.string "Is it time for his first big win?$"

WaddleDeeArena_EventScript_Challenger1_Text_0:
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Let's have our first challenger, please!$"

WaddleDeeArena_EventScript_Challenger1_Text_1:
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We're both having our first Arena\n"
	.string "battle here. Let's make it a good one!$"

WaddleDeeArena_EventScript_Challenger1_Text_2:
# 364 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We both couldn't win last time… let's\n"
	.string "see if one of us will do it this time!$"

WaddleDeeArena_EventScript_Challenger1_Text_3:
# 374 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This could be the start of something\n"
	.string "big! Kirby takes the first win!$"

WaddleDeeArena_EventScript_Challenger2_Text_0:
# 392 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Challenger number two, step right up!$"

WaddleDeeArena_EventScript_Challenger2_Text_1:
# 404 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Prepare to be dazzled by my adorable\n"
	.string "little Helpers!$"

WaddleDeeArena_EventScript_Challenger2_Text_2:
# 413 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Things are starting to heat up!\n"
	.string "Kirby has scored a second victory!$"

WaddleDeeArena_EventScript_Challenger3_Text_0:
# 431 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Everyone welcome our final challenger!$"

WaddleDeeArena_EventScript_Challenger3_Text_1:
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My Helper and I have made it so far.\n"
	.string "We can't back down now!$"

WaddleDeeArena_EventScript_Challenger3_Text_2:
# 452 "data/maps/WaddleDeeArena/scripts.pory"
	.string "What an amazing battle! Kirby has swept\n"
	.string "the preliminary bracket!!$"

WaddleDeeArena_EventScript_Challenger3_Text_3:
# 467 "data/maps/WaddleDeeArena/scripts.pory"
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

WaddleDeeArena_EventScript_GrandFinals_Text_0:
# 493 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is making his Royal Royale debut…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_1:
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is back and hungry for a Brooch…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_2:
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who made it to grand finals!\p"
	.string "This sly spell caster hasn't just made a\n"
	.string "name for himself through construction.\p"
	.string "It turns out he's also a dangerously\n"
	.string "devious opponent in Helper battles!\p"
	.string "Everyone welcome {COLOR BLUE}Magolor{COLOR DARK_GRAY} to the stage!$"

WaddleDeeArena_EventScript_GrandFinals_Text_3:
# 546 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}Hey, Kirby! Surprised to see me?\p"
	.string "I've been working hard setting up a\n"
	.string "load of shops here in Waddle Dee Town!\p"
	.string "But with that pesky avalanche blocking\n"
	.string "most of them, I've had to change plans…\p"
	.string "So now I'm tearing up the Arena scene!\n"
	.string "Hee hee hee!\p"
	.string "I'll warn you, Kirby, my Helpers are\n"
	.string "a real cut above the rest…\p"
	.string "Prepare to bow before the might of\n"
	.string "my magical team!$"

WaddleDeeArena_EventScript_GrandFinals_Text_4:
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}Good to see you again, Kirby!\p"
	.string "I had a hunch you might enter this\n"
	.string "Arena again. You're a persistent one!\p"
	.string "Do you know why I came back, hoping\n"
	.string "to challenge you again?\p"
	.string "It's because Helper battles are sooo\n"
	.string "much fun! I gotta hand it to Dedede,\l"
	.string "he really knows how to make a game.\p"
	.string "And the best part is seeing your foe's\n"
	.string "face when their team's been cornered!\p"
	.string "So go on, Kirby! Give me an exhilarating\n"
	.string "battle I won't ever forget!$"

WaddleDeeArena_EventScript_GrandFinals_Text_5:
# 585 "data/maps/WaddleDeeArena/scripts.pory"
	.string "It's come down to Kirby vs. Magolor!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_6:
# 607 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Folks… we've witnessed history today.\n"
	.string "Claiming his first Arena championship…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

WaddleDeeArena_EventScript_GrandFinals_Text_7:
# 619 "data/maps/WaddleDeeArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

WaddleDeeArena_EventScript_GrandFinals_Text_8:
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}What a humbling loss… I'll just have to\n"
	.string "try harder next time! Hee hee hee…!$"

WaddleDeeArena_EventScript_Victory_Text_0:
# 648 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Waddle Dee Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Waddle Dee Brooch!$"

WaddleDeeArena_EventScript_Victory_Text_1:
# 653 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Kirby received the Waddle Dee Brooch\n"
	.string "from Commentator Waddle Dee!$"

WaddleDeeArena_EventScript_Victory_Text_2:
# 660 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I hope you'll keep visiting different\n"
	.string "Arenas and claiming more Brooches!$"

WaddleDeeArena_EventScript_Break_Text_0:
# 672 "data/maps/WaddleDeeArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

WaddleDeeArena_EventScript_Break_Text_1:
# 677 "data/maps/WaddleDeeArena/scripts.pory"
	.string "The last battle in the preliminary\n"
	.string "bracket awaits! Are you prepared?$"

WaddleDeeArena_EventScript_Break_Text_2:
# 682 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Now then, Kirby: the grand finals await!\n"
	.string "Are you ready for the TRUE final bout?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_0:
# 718 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You have {COLOR RED}one full-party heal{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use it now?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_1:
# 726 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Your party has been fully healed!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_2:
# 738 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Unfortunately, you've already used up\n"
	.string "all of your heals, Kirby.\p"
	.string "You'll have to tough out the remaining\n"
	.string "battles with your party as they are!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_3:
# 748 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You already healed up this round, Kirby!\n"
	.string "If you have any heals remaining,\l"
	.string "let's save them for future rounds, OK?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_4:
# 756 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, one complimentary full-party\n"
	.string "heal for our pink warrior, coming up!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0:
# 771 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1:
# 776 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2:
# 782 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_3:
# 801 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, folks! Stay tuned! The grand\n"
	.string "finals will begin after a short break!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_0:
# 822 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}I should study up on what makes the\n"
	.string "Royal Royale so fun to play.\p"
	.string "That knowledge could be put to good\n"
	.string "use for improving my own games!\p"
	.string "Oh, yes! Kirby, you'll find my arcade\n"
	.string "on the northwest section of town.\p"
	.string "There's lots of fun games to play\n"
	.string "inside. I hope you'll check it out!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_1:
# 836 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}Huh? You're checking in on me to see\n"
	.string "if I'm doing alright?\p"
	.string "Gee, Kirby, you're one silly fellow.\n"
	.string "Of course I'm not upset!\p"
	.string "…well, okay, maybe a little…\n"
	.string "…but it's fine! A loss is a loss.\p"
	.string "Here, let me give you a little souvenir\n"
	.string "to mark our battle.$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_2:
# 848 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}Trick is a move that swaps your Helper's\n"
	.string "item with the target's.\p"
	.string "You might find items on your journey\n"
	.string "you think you may have no use for…\p"
	.string "But you can always make them someone\n"
	.string "else's problem! Hee hee hee!$"

WaddleDeeArena_Text_Challenger1::
# 861 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Not everyone who makes it to the Arena\n"
	.string "will be able to win…$"

WaddleDeeArena_Text_Challenger2::
# 867 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Oh no?! My darling Helpers!$"

WaddleDeeArena_Text_Challenger3::
# 872 "data/maps/WaddleDeeArena/scripts.pory"
	.string "So this is the strength of someone\n"
	.string "who can reach grand finals…$"

WaddleDeeArena_Text_Magolor::
# 878 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Bravo, Kirby! I'll admit, I didn't think\n"
	.string "you had it in you to defeat me.\p"
	.string "But I suppose bringing the best out of\n"
	.string "your friends is what you do, right?$"

WaddleDeeArena_Text_ToughItOut::
# 887 "data/maps/WaddleDeeArena/scripts.pory"
	.string "TOUGH IT OUT$"

WaddleDeeArena_Text_AcceptDefeat::
# 892 "data/maps/WaddleDeeArena/scripts.pory"
	.string "ACCEPT DEFEAT$"
