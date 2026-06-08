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
# 13 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Cafe::
# 18 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 19 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 20 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Cafe_2
# 30 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Cafe_Text_1
WaddleDeeArena_EventScript_Cafe_1:
# 36 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Cafe_2:
# 22 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Cafe_Text_0
	goto WaddleDeeArena_EventScript_Cafe_1


WaddleDeeArena_EventScript_TalkToCafe::
# 41 "data/maps/WaddleDeeArena/scripts.pory"
	turnobject LOCALID_WADDLE_CROWD_1, DIR_SOUTH
# 42 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Cafe
	return


WaddleDeeArena_EventScript_Staff::
# 47 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 48 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 49 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Staff_2
# 61 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Staff_Text_1
WaddleDeeArena_EventScript_Staff_1:
# 67 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Staff_2:
# 51 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Staff_Text_0
	goto WaddleDeeArena_EventScript_Staff_1


WaddleDeeArena_EventScript_TalkToStaff::
# 72 "data/maps/WaddleDeeArena/scripts.pory"
	turnobject LOCALID_WADDLE_CROWD_2, DIR_EAST
# 73 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Staff
	return


WaddleDeeArena_EventScript_Hiker::
# 78 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 79 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 80 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Hiker_Text_0
# 86 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Gentleman::
# 91 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 92 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 93 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Gentleman_Text_0
# 101 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Nurse::
# 106 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 107 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 108 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 110 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Nurse_2
WaddleDeeArena_EventScript_Nurse_1:
# 121 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Nurse_2:
# 112 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 113 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 114 "data/maps/WaddleDeeArena/scripts.pory"
	playfanfare MUS_HEAL
# 115 "data/maps/WaddleDeeArena/scripts.pory"
	waitfanfare
# 116 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 117 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 118 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_1
	goto WaddleDeeArena_EventScript_Nurse_1


WaddleDeeArena_EventScript_Commentator::
# 126 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 127 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 128 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_2
# 139 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_3
WaddleDeeArena_EventScript_Commentator_1:
# 168 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Commentator_2:
# 130 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_0
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_3:
# 141 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 142 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_1
# 148 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_6
# 152 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_7
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_6:
# 150 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_7:
# 154 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_2, MSGBOX_YESNO
# 156 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Commentator_10
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Commentator_11
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_10:
# 158 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_11:
# 163 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 164 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	goto WaddleDeeArena_EventScript_Commentator_1


WaddleDeeArena_EventScript_GrandFinalsPreparation::
# 173 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 174 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_2
# 180 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_3
# 186 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_4
WaddleDeeArena_EventScript_GrandFinalsPreparation_1:
# 192 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 196 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return

WaddleDeeArena_EventScript_GrandFinalsPreparation_2:
# 176 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 177 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 178 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_3:
# 182 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 183 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 184 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_4:
# 188 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 189 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 190 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1


WaddleDeeArena_EventScript_CommentatorChoice::
# 203 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_CommentatorChoice_Text_0
# 205 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 206 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 207 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_CommentatorChoice_2
# 210 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_CommentatorChoice_3
# 212 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_CommentatorChoice_4
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_CommentatorChoice_5
	return

WaddleDeeArena_EventScript_CommentatorChoice_2:
# 209 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_BeginChallenge
	return

WaddleDeeArena_EventScript_CommentatorChoice_3:
# 211 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorInfo
	return

WaddleDeeArena_EventScript_CommentatorChoice_4:
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return

WaddleDeeArena_EventScript_CommentatorChoice_5:
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return


WaddleDeeArena_EventScript_CommentatorBye::
# 221 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_CommentatorBye_2
# 228 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_1
WaddleDeeArena_EventScript_CommentatorBye_1:
# 231 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_CommentatorBye_2:
# 223 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_0
	goto WaddleDeeArena_EventScript_CommentatorBye_1


WaddleDeeArena_EventScript_CommentatorInfo::
# 236 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorInfo_Text_0
# 262 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	return


WaddleDeeArena_EventScript_BeginChallenge::
# 267 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_0
# 269 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 270 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 1
# 271 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 272 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 273 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 274 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_2
# 280 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_3
# 286 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_4
WaddleDeeArena_EventScript_BeginChallenge_1:
# 292 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 293 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 296 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 298 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_9
# 307 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_10
WaddleDeeArena_EventScript_BeginChallenge_8:
# 316 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_BeginChallenge_Movement_1
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_BeginChallenge_Movement_2
# 319 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 320 "data/maps/WaddleDeeArena/scripts.pory"
	call WaddleDeeArena_EventScript_Challenger1
	return

WaddleDeeArena_EventScript_BeginChallenge_2:
# 276 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 277 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 278 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_3:
# 282 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_4:
# 288 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 289 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 290 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_9:
# 300 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_1
	goto WaddleDeeArena_EventScript_BeginChallenge_8

WaddleDeeArena_EventScript_BeginChallenge_10:
# 309 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_2
	goto WaddleDeeArena_EventScript_BeginChallenge_8


WaddleDeeArena_EventScript_Challenger1::
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_0
# 326 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 327 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_0
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_1
# 330 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_1
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 335 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_2
# 342 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_3
WaddleDeeArena_EventScript_Challenger1_1:
# 350 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 352 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 353 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 354 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 355 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 356 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ED, WaddleDeeArena_Text_Challenger1
# 357 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_3
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_6
# 360 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_7
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 363 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 364 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 365 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 369 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_1
# 370 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_Challenger1_2:
# 339 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_1
	goto WaddleDeeArena_EventScript_Challenger1_1

WaddleDeeArena_EventScript_Challenger1_3:
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_2
	goto WaddleDeeArena_EventScript_Challenger1_1


WaddleDeeArena_EventScript_Challenger2::
# 375 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_0
# 376 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_0
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_1
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_2
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 382 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 385 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 386 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 387 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_1
# 389 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 390 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 391 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 392 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 393 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 394 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_4, WaddleDeeArena_Text_Challenger2
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_2
# 398 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 399 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_2
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_3
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 404 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 405 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 408 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_2
# 409 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_Challenger3::
# 414 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_0
# 415 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 416 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_0
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_1
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_3
# 420 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 421 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 422 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 423 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 424 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 425 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 426 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_1
# 428 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 429 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 430 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 431 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 432 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 433 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DECLAN, WaddleDeeArena_Text_Challenger3
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_2
# 437 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 438 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 439 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_2
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_3
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 3
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 444 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 445 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 446 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 447 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 448 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 449 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_3
# 450 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_3
# 466 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_GrandFinals::
# 471 "data/maps/WaddleDeeArena/scripts.pory"
	fadeoutbgm 1
# 472 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 473 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 474 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_2
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_3
WaddleDeeArena_EventScript_GrandFinals_1:
# 500 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 501 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_0
# 502 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_1
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_2
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_2
# 516 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 517 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_3
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_4
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_ARENA_MAGOLOR
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_5
# 522 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 524 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 525 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 526 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 527 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_7
WaddleDeeArena_EventScript_GrandFinals_6:
# 546 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_10
WaddleDeeArena_EventScript_GrandFinals_9:
# 566 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_6
# 568 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_5
# 572 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 573 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 574 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 575 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_7
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_8
# 577 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 578 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 579 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_STARTER_MON
# 580 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_GrandFinals_14
# 582 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_GrandFinals_15
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_GrandFinals_16
WaddleDeeArena_EventScript_GrandFinals_12:
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	fadeoutbgm 1
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 590 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_6
# 595 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 596 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_B_FRONTIER, FALSE
# 597 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_9
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_10
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_11
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_GrandFinals_Text_7
# 603 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 604 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 605 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 606 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_12
# 607 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 608 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_8
# 610 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_13
# 612 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	setobjectxyperm LOCALID_ARENA_MAGOLOR, 9, 18
# 614 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 618 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 619 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_14
# 621 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 626 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Victory
	return

WaddleDeeArena_EventScript_GrandFinals_2:
# 476 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_0
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_3:
# 489 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_1
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_7:
# 529 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_3
	goto WaddleDeeArena_EventScript_GrandFinals_6

WaddleDeeArena_EventScript_GrandFinals_10:
# 548 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_4
	goto WaddleDeeArena_EventScript_GrandFinals_9

WaddleDeeArena_EventScript_GrandFinals_14:
# 581 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_15:
# 583 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_1, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_16:
# 585 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_2, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12


WaddleDeeArena_EventScript_Victory::
# 631 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_0
# 636 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Victory_Text_1
# 638 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 639 "data/maps/WaddleDeeArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_BADGE01_GET
# 641 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_HIDE_WADDLE_DEE_ARENA_PARTICIPANTS
# 642 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 2
# 643 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_2
# 648 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Break::
# 653 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_2
# 658 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_3
# 663 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_4
WaddleDeeArena_EventScript_Break_1:
# 668 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 669 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 17, 6, MULTI_GO_ON_REST_RETIRE, 0
# 670 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 671 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_Break_9
# 684 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_Break_10
# 686 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_Break_11
# 688 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_Break_12
	return

WaddleDeeArena_EventScript_Break_2:
# 655 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_0
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_3:
# 660 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_1
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_4:
# 665 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_2
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_9:
# 672 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_13
# 676 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_14
# 680 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_15
	return

WaddleDeeArena_EventScript_Break_10:
# 685 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ArenaHeal
	return

WaddleDeeArena_EventScript_Break_11:
# 687 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ForfeitConfirmation
	return

WaddleDeeArena_EventScript_Break_12:
# 689 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ForfeitConfirmation
	return

WaddleDeeArena_EventScript_Break_13:
# 674 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger2
	return

WaddleDeeArena_EventScript_Break_14:
# 678 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger3
	return

WaddleDeeArena_EventScript_Break_15:
# 682 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return


WaddleDeeArena_EventScript_ArenaHeal::
# 695 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_1
# 737 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_2
	return

WaddleDeeArena_EventScript_ArenaHeal_1:
# 697 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_5
# 729 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_6
	return

WaddleDeeArena_EventScript_ArenaHeal_2:
# 739 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_4
# 741 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 742 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 743 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 744 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 745 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 746 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_5:
# 699 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_HEALS, 0
	goto_if_gt WaddleDeeArena_EventScript_ArenaHeal_9
# 721 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_2
# 726 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_6:
# 731 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_3
# 734 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_9:
# 701 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_0, MSGBOX_YESNO
# 703 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_ArenaHeal_13
WaddleDeeArena_EventScript_ArenaHeal_12:
# 714 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_ArenaHeal_15
	return

WaddleDeeArena_EventScript_ArenaHeal_13:
# 705 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 706 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 707 "data/maps/WaddleDeeArena/scripts.pory"
	subvar VAR_ARENA_HEALS, 1
# 708 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 709 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 710 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 711 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 712 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	goto WaddleDeeArena_EventScript_ArenaHeal_12

WaddleDeeArena_EventScript_ArenaHeal_15:
# 716 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_ForfeitConfirmation::
# 752 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_1
# 781 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_2
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_1:
# 754 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0, MSGBOX_YESNO
# 762 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_ForfeitConfirmation_5
# 776 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_ForfeitConfirmation_6
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_2:
# 783 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2
# 785 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 786 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 787 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 788 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 789 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 790 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 791 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 792 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 793 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
# 794 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_5:
# 764 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1
# 766 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 767 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 769 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 771 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 772 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 773 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 774 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_6:
# 778 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_TalkToMagolor::
# 800 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 801 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 802 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_2
# 816 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_3
WaddleDeeArena_EventScript_TalkToMagolor_1:
# 840 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_TalkToMagolor_2:
# 804 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_0
	goto WaddleDeeArena_EventScript_TalkToMagolor_1

WaddleDeeArena_EventScript_TalkToMagolor_3:
# 818 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_1
# 829 "data/maps/WaddleDeeArena/scripts.pory"
	giveitem ITEM_TM53
# 830 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_2
# 838 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	goto WaddleDeeArena_EventScript_TalkToMagolor_1


WaddleDeeArena_EventScript_MoveTutor::
# 845 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 846 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 847 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_MoveTutor_2
# 860 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_MoveTutor_Text_1
WaddleDeeArena_EventScript_MoveTutor_1:
# 875 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_MoveTutor_2:
# 849 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_MoveTutor_Text_0
	goto WaddleDeeArena_EventScript_MoveTutor_1


# 176 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0:
# 176 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 177 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1:
# 177 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 177 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 177 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 177 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 177 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 183 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2:
# 183 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 183 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 183 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 189 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3:
# 189 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 189 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 189 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 193 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4:
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5:
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 195 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6:
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 297 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_0:
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 317 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_1:
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 318 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_2:
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 328 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_0:
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 329 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_1:
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 331 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_2:
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 334 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_3:
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 352 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_4:
# 352 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 352 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 353 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_5:
# 353 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 353 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
	step_end

# 359 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_6:
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 360 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_7:
# 360 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 360 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 360 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 360 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 365 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_8:
# 365 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 365 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 365 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 366 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_9:
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 378 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_0:
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 379 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_1:
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 400 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_2:
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 401 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_3:
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 417 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_0:
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 418 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_1:
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 440 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_2:
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 441 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_3:
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
	step_end

# 501 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_0:
# 501 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 501 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 501 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 501 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 501 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 503 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_1:
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 504 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_2:
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 518 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_3:
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 519 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_4:
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 521 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_5:
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 567 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_6:
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 575 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_7:
# 575 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_right
# 575 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
# 575 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
	step_end

# 576 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_8:
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_left
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
	step_end

# 598 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_9:
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 599 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_10:
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 600 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_11:
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 606 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_12:
# 606 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
# 606 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 611 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_13:
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 611 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 620 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_14:
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 622 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_15:
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 623 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_16:
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 768 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0:
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

WaddleDeeArena_EventScript_Youngster_Text_0:
# 10 "data/maps/WaddleDeeArena/scripts.pory"
	.string "If you need more time to prepare before\n"
	.string "taking on the Arena, there's a nurse\l"
	.string "and PC waiting in the back.$"

WaddleDeeArena_EventScript_Cafe_Text_0:
# 22 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I've got some time off, so I came to\n"
	.string "see what the Arenas were like.\p"
	.string "I can't wait to see what kinds of\n"
	.string "battles will take place in here!$"

WaddleDeeArena_EventScript_Cafe_Text_1:
# 30 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Hey, congratulations on your victory!\n"
	.string "All the competitors were so cool.\p"
	.string "I think I get why the Great King is\n"
	.string "making such a big deal of this game now!$"

WaddleDeeArena_EventScript_Staff_Text_0:
# 51 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My boss is planning on challenging the\n"
	.string "Arena, so I'm here to cheer him on.\p"
	.string "His Psychic-type Helpers are something\n"
	.string "else, I tell ya!\p"
	.string "Gooooo, boss! You've got this!$"

WaddleDeeArena_EventScript_Staff_Text_1:
# 61 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Wow, you managed to best my boss's\n"
	.string "Helpers? You're something else!\p"
	.string "Don't tell him, but… I'll be\n"
	.string "rooting for you too!$"

WaddleDeeArena_EventScript_Hiker_Text_0:
# 80 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Supposedly, each of the various\n"
	.string "Arenas have slightly different rules.\p"
	.string "Whenever you get to a new Arena, it\n"
	.string "might not be a bad idea to scope out\l"
	.string "what you'll be getting into.$"

WaddleDeeArena_EventScript_Gentleman_Text_0:
# 93 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Raising Helpers is quite difficult…\n"
	.string "I'm not sure I've got what it takes.\p"
	.string "But watching others battle with their\n"
	.string "Helpers is even more exciting!\p"
	.string "There might be some serious candidates\n"
	.string "for the new king of Dream Land here!$"

WaddleDeeArena_EventScript_Nurse_Text_0:
# 108 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you planning on entering the Arena?\n"
	.string "I can heal up your Helpers first!$"

WaddleDeeArena_EventScript_Nurse_Text_1:
# 118 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You and your Helpers are in top form.\n"
	.string "Best of luck in the Arena!$"

WaddleDeeArena_EventScript_Commentator_Text_0:
# 130 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "It's no small feat, overcoming Magolor\n"
	.string "and his magical bag of tricks!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

WaddleDeeArena_EventScript_Commentator_Text_1:
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Wwwwwelcome to the Waddle Dee\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

WaddleDeeArena_EventScript_Commentator_Text_2:
# 154 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Next up: grand finals!\n"
	.string "Are you prepared for the last battle?$"

WaddleDeeArena_EventScript_CommentatorChoice_Text_0:
# 203 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Today's challenge: a sweet breeze!\n"
	.string "How can I help you?$"

WaddleDeeArena_EventScript_CommentatorBye_Text_0:
# 223 "data/maps/WaddleDeeArena/scripts.pory"
	.string "When you're ready for the grand finals,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorBye_Text_1:
# 228 "data/maps/WaddleDeeArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorInfo_Text_0:
# 236 "data/maps/WaddleDeeArena/scripts.pory"
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
# 267 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_1:
# 300 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Starring none other than our hero...\l"
	.string "it's the pink pugilist, Kirbyyy!!!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_2:
# 309 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "Unable to settle for anything other\n"
	.string "than victory, Kirby has returned!\l"
	.string "Is it time for his first big win?$"

WaddleDeeArena_EventScript_Challenger1_Text_0:
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Let's have our first challenger, please!$"

WaddleDeeArena_EventScript_Challenger1_Text_1:
# 339 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We're both having our first Arena\n"
	.string "battle here. Let's make it a good one!$"

WaddleDeeArena_EventScript_Challenger1_Text_2:
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We both couldn't reach the top of the\n"
	.string "tournament last time…\p"
	.string "Let's see if one of us will be able to\n"
	.string "accomplish it this time!$"

WaddleDeeArena_EventScript_Challenger1_Text_3:
# 357 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This could be the start of something\n"
	.string "big! Kirby takes the first win!$"

WaddleDeeArena_EventScript_Challenger2_Text_0:
# 375 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Challenger number two, step right up!$"

WaddleDeeArena_EventScript_Challenger2_Text_1:
# 387 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Prepare to be dazzled by my adorable\n"
	.string "little Helpers!$"

WaddleDeeArena_EventScript_Challenger2_Text_2:
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Things are starting to heat up!\n"
	.string "Kirby has scored a second victory!$"

WaddleDeeArena_EventScript_Challenger3_Text_0:
# 414 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Everyone welcome our final challenger!$"

WaddleDeeArena_EventScript_Challenger3_Text_1:
# 426 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My Helper and I have made it so far.\n"
	.string "We can't back down now!$"

WaddleDeeArena_EventScript_Challenger3_Text_2:
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	.string "What an amazing battle! Kirby has swept\n"
	.string "the preliminary bracket!!$"

WaddleDeeArena_EventScript_Challenger3_Text_3:
# 450 "data/maps/WaddleDeeArena/scripts.pory"
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
# 476 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is making his Royal Royale debut…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_1:
# 489 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is back and hungry for a Brooch…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_2:
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who made it to grand finals!\p"
	.string "This sly spell caster hasn't just made a\n"
	.string "name for himself through construction.\p"
	.string "It turns out he's also a dangerously\n"
	.string "devious opponent in Helper battles!\p"
	.string "Everyone welcome {COLOR BLUE}Magolor{COLOR DARK_GRAY} to the stage!$"

WaddleDeeArena_EventScript_GrandFinals_Text_3:
# 529 "data/maps/WaddleDeeArena/scripts.pory"
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
# 548 "data/maps/WaddleDeeArena/scripts.pory"
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
# 568 "data/maps/WaddleDeeArena/scripts.pory"
	.string "It's come down to Kirby vs. Magolor!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_6:
# 590 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Folks… we've witnessed history today.\n"
	.string "Claiming his first Arena championship…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

WaddleDeeArena_EventScript_GrandFinals_Text_7:
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

WaddleDeeArena_EventScript_GrandFinals_Text_8:
# 608 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}What a humbling loss… I'll just have to\n"
	.string "try harder next time! Hee hee hee…!$"

WaddleDeeArena_EventScript_Victory_Text_0:
# 631 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Waddle Dee Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Waddle Dee Brooch!$"

WaddleDeeArena_EventScript_Victory_Text_1:
# 636 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Kirby received the Waddle Dee Brooch\n"
	.string "from Commentator Waddle Dee!$"

WaddleDeeArena_EventScript_Victory_Text_2:
# 643 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I hope you'll keep visiting different\n"
	.string "Arenas and claiming more Brooches!$"

WaddleDeeArena_EventScript_Break_Text_0:
# 655 "data/maps/WaddleDeeArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

WaddleDeeArena_EventScript_Break_Text_1:
# 660 "data/maps/WaddleDeeArena/scripts.pory"
	.string "The last battle in the preliminary\n"
	.string "bracket awaits! Are you prepared?$"

WaddleDeeArena_EventScript_Break_Text_2:
# 665 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Now then, Kirby: the grand finals await!\n"
	.string "Are you ready for the TRUE final bout?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_0:
# 701 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You have {COLOR RED}one full-party heal{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use it now?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_1:
# 709 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Your party has been fully healed!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_2:
# 721 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Unfortunately, you've already used up\n"
	.string "all of your heals, Kirby.\p"
	.string "You'll have to tough out the remaining\n"
	.string "battles with your party as they are!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_3:
# 731 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You already healed up this round, Kirby!\n"
	.string "If you have any heals remaining,\l"
	.string "let's save them for future rounds, OK?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_4:
# 739 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, one complimentary full-party\n"
	.string "heal for our pink warrior, coming up!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0:
# 754 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!\p"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1:
# 764 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2:
# 783 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, folks! Stay tuned! The grand\n"
	.string "finals will begin after a short break!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_0:
# 804 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I should study up on what makes the\n"
	.string "Royal Royale so fun to play.\p"
	.string "That knowledge could be put to good\n"
	.string "use for improving my own games!\p"
	.string "Oh, yes! Kirby, you'll find my arcade\n"
	.string "on the northwest section of town.\p"
	.string "There's lots of fun games to play\n"
	.string "inside. I hope you'll check it out!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_1:
# 818 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Huh? You're checking in on me to see\n"
	.string "if I'm doing alright?\p"
	.string "Gee, Kirby, you're one silly fellow.\n"
	.string "Of course I'm not upset!\p"
	.string "…well, okay, maybe a little…\n"
	.string "…but it's fine! A loss is a loss.\p"
	.string "Here, let me give you a little souvenir\n"
	.string "to mark our battle.$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_2:
# 830 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Trick is a move that swaps your Helper's\n"
	.string "item with the target's.\p"
	.string "You might find items on your journey\n"
	.string "you think you may have no use for…\p"
	.string "But you can always make them someone\n"
	.string "else's problem! Hee hee hee!$"

WaddleDeeArena_EventScript_MoveTutor_Text_0:
# 849 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I'm a movesmith. I know all sorts of\n"
	.string "long-forgotten techniques.\p"
	.string "What I'm looking for… is a commander\n"
	.string "of Helpers that can wield my power.\p"
	.string "Do you have what it takes to spark\n"
	.string "the fire kindling in my heart?$"

WaddleDeeArena_EventScript_MoveTutor_Text_1:
# 860 "data/maps/WaddleDeeArena/scripts.pory"
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

WaddleDeeArena_Text_Challenger1::
# 878 "data/maps/WaddleDeeArena/scripts.pory"
	.string "For every battle that has a winner,\n"
	.string "there must be another who doesn't…$"

WaddleDeeArena_Text_Challenger2::
# 884 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Oh no?! My darling Helpers!$"

WaddleDeeArena_Text_Challenger3::
# 889 "data/maps/WaddleDeeArena/scripts.pory"
	.string "So this is the strength of someone\n"
	.string "who can reach grand finals…$"

WaddleDeeArena_Text_Magolor::
# 895 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Bravo, Kirby! I'll admit, I didn't think\n"
	.string "you had it in you to defeat me.\p"
	.string "But I suppose bringing the best out of\n"
	.string "your friends is what you do, right?$"
