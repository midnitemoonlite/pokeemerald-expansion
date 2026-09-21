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


WaddleDeeArena_EventScript_Cafe::
# 23 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 24 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 25 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Cafe_2
# 35 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Cafe_Text_1
WaddleDeeArena_EventScript_Cafe_1:
# 41 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Cafe_2:
# 27 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Cafe_Text_0
	goto WaddleDeeArena_EventScript_Cafe_1


WaddleDeeArena_EventScript_TalkToCafe::
# 46 "data/maps/WaddleDeeArena/scripts.pory"
	turnobject LOCALID_WADDLE_CROWD_1, DIR_SOUTH
# 47 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Cafe
	return


WaddleDeeArena_EventScript_Staff::
# 52 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 53 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 54 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Staff_2
# 66 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Staff_Text_1
WaddleDeeArena_EventScript_Staff_1:
# 72 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Staff_2:
# 56 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Staff_Text_0
	goto WaddleDeeArena_EventScript_Staff_1


WaddleDeeArena_EventScript_TalkToStaff::
# 77 "data/maps/WaddleDeeArena/scripts.pory"
	turnobject LOCALID_WADDLE_CROWD_2, DIR_EAST
# 78 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Staff
	return


WaddleDeeArena_EventScript_Hiker::
# 83 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 84 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 85 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Hiker_Text_0
# 91 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Gentleman::
# 96 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 97 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 98 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Gentleman_Text_0
# 106 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Nurse::
# 111 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 112 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 113 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 115 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Nurse_2
WaddleDeeArena_EventScript_Nurse_1:
# 126 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Nurse_2:
# 117 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 118 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 119 "data/maps/WaddleDeeArena/scripts.pory"
	playfanfare MUS_HEAL
# 120 "data/maps/WaddleDeeArena/scripts.pory"
	waitfanfare
# 121 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 122 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 123 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_1
	goto WaddleDeeArena_EventScript_Nurse_1


WaddleDeeArena_EventScript_Commentator::
# 131 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 132 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 133 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_2
# 144 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_3
WaddleDeeArena_EventScript_Commentator_1:
# 173 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Commentator_2:
# 135 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_0
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_3:
# 146 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 147 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 148 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_1
# 153 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_6
# 157 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_7
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_6:
# 155 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_7:
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_2, MSGBOX_YESNO
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Commentator_10
# 166 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Commentator_11
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_10:
# 163 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 164 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_11:
# 168 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 169 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	goto WaddleDeeArena_EventScript_Commentator_1


WaddleDeeArena_EventScript_GrandFinalsPreparation::
# 178 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 179 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_2
# 185 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_3
# 191 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_4
WaddleDeeArena_EventScript_GrandFinalsPreparation_1:
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 201 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 202 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 203 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return

WaddleDeeArena_EventScript_GrandFinalsPreparation_2:
# 181 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 182 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 183 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_3:
# 187 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 188 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 189 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_4:
# 193 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 195 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1


WaddleDeeArena_EventScript_CommentatorChoice::
# 208 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_CommentatorChoice_Text_0
# 210 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 211 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 20, 6, MULTI_CHALLENGEINFO, FALSE
# 212 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 213 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_CommentatorChoice_2
# 215 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_CommentatorChoice_3
# 217 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_CommentatorChoice_4
# 219 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_CommentatorChoice_5
	return

WaddleDeeArena_EventScript_CommentatorChoice_2:
# 214 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_BeginChallenge
	return

WaddleDeeArena_EventScript_CommentatorChoice_3:
# 216 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorInfo
	return

WaddleDeeArena_EventScript_CommentatorChoice_4:
# 218 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return

WaddleDeeArena_EventScript_CommentatorChoice_5:
# 220 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return


WaddleDeeArena_EventScript_CommentatorBye::
# 226 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_CommentatorBye_2
# 233 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_1
WaddleDeeArena_EventScript_CommentatorBye_1:
# 236 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_CommentatorBye_2:
# 228 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_0
	goto WaddleDeeArena_EventScript_CommentatorBye_1


WaddleDeeArena_EventScript_CommentatorInfo::
# 241 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorInfo_Text_0
# 267 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	return


WaddleDeeArena_EventScript_BeginChallenge::
# 272 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_0
# 274 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 275 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 1
# 276 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 277 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 278 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 279 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_2
# 285 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_3
# 291 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_4
WaddleDeeArena_EventScript_BeginChallenge_1:
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 298 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 299 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 300 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 301 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 302 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 303 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_9
# 312 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_10
WaddleDeeArena_EventScript_BeginChallenge_8:
# 321 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_BeginChallenge_Movement_1
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_BeginChallenge_Movement_2
# 324 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	call WaddleDeeArena_EventScript_Challenger1
	return

WaddleDeeArena_EventScript_BeginChallenge_2:
# 281 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 282 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_3:
# 287 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 288 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 289 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_4:
# 293 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_9:
# 305 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_1
	goto WaddleDeeArena_EventScript_BeginChallenge_8

WaddleDeeArena_EventScript_BeginChallenge_10:
# 314 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_2
	goto WaddleDeeArena_EventScript_BeginChallenge_8


WaddleDeeArena_EventScript_Challenger1::
# 330 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_0
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_0
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_1
# 335 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_1
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 337 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 338 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 339 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 340 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 341 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 342 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_2
# 347 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_3
WaddleDeeArena_EventScript_Challenger1_1:
# 352 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 353 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 354 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 355 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 356 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 357 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 358 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ED, WaddleDeeArena_Text_Challenger1
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_3
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_6
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_7
# 363 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 364 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 365 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 369 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 370 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 371 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_1
# 372 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_Challenger1_2:
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_1
	goto WaddleDeeArena_EventScript_Challenger1_1

WaddleDeeArena_EventScript_Challenger1_3:
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_2
	goto WaddleDeeArena_EventScript_Challenger1_1


WaddleDeeArena_EventScript_Challenger2::
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_0
# 378 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 379 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_0
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_1
# 382 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_2
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 385 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 386 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 387 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 388 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 389 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_1
# 391 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 392 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 393 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 394 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 397 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_4, WaddleDeeArena_Text_Challenger2
# 398 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_2
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_2
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_3
# 404 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 405 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 408 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 409 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 410 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_2
# 411 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_Challenger3::
# 416 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_0
# 417 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 418 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_0
# 420 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_1
# 421 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_3
# 422 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 423 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 424 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 425 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 426 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 427 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 428 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_1
# 430 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 431 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 432 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 433 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 434 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 435 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 436 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DECLAN, WaddleDeeArena_Text_Challenger3
# 437 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_2
# 439 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 441 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_2
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_3
# 444 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 3
# 445 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 446 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 447 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 448 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 449 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 450 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 451 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_3
# 452 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_3
# 468 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_GrandFinals::
# 473 "data/maps/WaddleDeeArena/scripts.pory"
	fadeoutbgm 1
# 474 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 475 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 476 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_2
# 489 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_3
WaddleDeeArena_EventScript_GrandFinals_1:
# 502 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_0
# 504 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_1
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_2
# 507 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 508 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_2
# 518 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 519 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_3
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_4
# 522 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_ARENA_MAGOLOR
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_5
# 524 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 525 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 526 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 527 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 528 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 529 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_7
WaddleDeeArena_EventScript_GrandFinals_6:
# 548 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_10
WaddleDeeArena_EventScript_GrandFinals_9:
# 568 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 569 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_6
# 570 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_5
# 574 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 575 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 577 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_7
# 578 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_8
# 579 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 580 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 581 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_STARTER_MON
# 582 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_GrandFinals_14
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_GrandFinals_15
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_GrandFinals_16
WaddleDeeArena_EventScript_GrandFinals_12:
# 590 "data/maps/WaddleDeeArena/scripts.pory"
	fadeoutbgm 1
# 591 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 592 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_6
# 597 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 598 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_B_FRONTIER, FALSE
# 599 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_9
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_10
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_11
# 603 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 604 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_GrandFinals_Text_7
# 605 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 606 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 607 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 608 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_12
# 609 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 610 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_8
# 612 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_13
# 614 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 615 "data/maps/WaddleDeeArena/scripts.pory"
	setobjectxyperm LOCALID_ARENA_MAGOLOR, 9, 18
# 616 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 617 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 618 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 619 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 620 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 621 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_14
# 623 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 626 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 627 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 628 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Victory
	return

WaddleDeeArena_EventScript_GrandFinals_2:
# 478 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_0
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_3:
# 491 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_1
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_7:
# 531 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_3
	goto WaddleDeeArena_EventScript_GrandFinals_6

WaddleDeeArena_EventScript_GrandFinals_10:
# 550 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_4
	goto WaddleDeeArena_EventScript_GrandFinals_9

WaddleDeeArena_EventScript_GrandFinals_14:
# 583 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_15:
# 585 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_1, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_16:
# 587 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_2, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12


WaddleDeeArena_EventScript_Victory::
# 633 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_0
# 638 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Victory_Text_1
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 641 "data/maps/WaddleDeeArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 642 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_BADGE01_GET
# 643 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_HIDE_WADDLE_DEE_ARENA_PARTICIPANTS
# 644 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 2
# 645 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_2
# 650 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Break::
# 655 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_2
# 660 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_3
# 665 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_4
WaddleDeeArena_EventScript_Break_1:
# 670 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 671 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, 0
# 672 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 673 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_Break_9
# 686 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_Break_10
# 688 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_Break_11
# 690 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_Break_12
	return

WaddleDeeArena_EventScript_Break_2:
# 657 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_0
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_3:
# 662 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_1
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_4:
# 667 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_2
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_9:
# 674 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_13
# 678 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_14
# 682 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_15
	return

WaddleDeeArena_EventScript_Break_10:
# 687 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ArenaHeal
	return

WaddleDeeArena_EventScript_Break_11:
# 689 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ForfeitConfirmation
	return

WaddleDeeArena_EventScript_Break_12:
# 691 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ForfeitConfirmation
	return

WaddleDeeArena_EventScript_Break_13:
# 676 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger2
	return

WaddleDeeArena_EventScript_Break_14:
# 680 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger3
	return

WaddleDeeArena_EventScript_Break_15:
# 684 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return


WaddleDeeArena_EventScript_ArenaHeal::
# 697 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_1
# 739 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_2
	return

WaddleDeeArena_EventScript_ArenaHeal_1:
# 699 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_5
# 731 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_6
	return

WaddleDeeArena_EventScript_ArenaHeal_2:
# 741 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_4
# 743 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 744 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 745 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 746 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 747 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 748 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_5:
# 701 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_HEALS, 0
	goto_if_gt WaddleDeeArena_EventScript_ArenaHeal_9
# 723 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_2
# 728 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_6:
# 733 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_3
# 736 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_9:
# 703 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_0, MSGBOX_YESNO
# 705 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_ArenaHeal_13
WaddleDeeArena_EventScript_ArenaHeal_12:
# 716 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_ArenaHeal_15
	return

WaddleDeeArena_EventScript_ArenaHeal_13:
# 707 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 708 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 709 "data/maps/WaddleDeeArena/scripts.pory"
	subvar VAR_ARENA_HEALS, 1
# 710 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 711 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 712 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 713 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 714 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	goto WaddleDeeArena_EventScript_ArenaHeal_12

WaddleDeeArena_EventScript_ArenaHeal_15:
# 718 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_ForfeitConfirmation::
# 754 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_1
# 783 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_2
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_1:
# 756 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0, MSGBOX_YESNO
# 764 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_ForfeitConfirmation_5
# 778 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_ForfeitConfirmation_6
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_2:
# 785 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2
# 787 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 788 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 789 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 790 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 791 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 792 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 793 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 794 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 795 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
# 796 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_5:
# 766 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 769 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 771 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 772 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 773 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 774 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 775 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 776 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_6:
# 780 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_TalkToMagolor::
# 802 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 803 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 804 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_2
# 818 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_3
WaddleDeeArena_EventScript_TalkToMagolor_1:
# 842 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_TalkToMagolor_2:
# 806 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_0
	goto WaddleDeeArena_EventScript_TalkToMagolor_1

WaddleDeeArena_EventScript_TalkToMagolor_3:
# 820 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_1
# 831 "data/maps/WaddleDeeArena/scripts.pory"
	giveitem ITEM_TM53
# 832 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_2
# 840 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	goto WaddleDeeArena_EventScript_TalkToMagolor_1


WaddleDeeArena_EventScript_MoveTutor::
# 847 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 848 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 849 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_MoveTutor_2
# 862 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_MoveTutorEnabled
WaddleDeeArena_EventScript_MoveTutor_1:
# 864 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_MoveTutor_2:
# 851 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_MoveTutor_Text_0
	goto WaddleDeeArena_EventScript_MoveTutor_1


WaddleDeeArena_EventScript_MoveTutorEnabled::
# 869 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_MoveTutorEnabled_Text_0
# 877 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_MoveTutorEnabled_Text_1
# 879 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 880 "data/maps/WaddleDeeArena/scripts.pory"
	showmoneybox 0, 0
# 881 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 20, 0, MULTI_WADDLE_DEE_MOVELIST, FALSE
# 882 "data/maps/WaddleDeeArena/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 883 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 884 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_MoveTutorEnabled_2
# 886 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_MoveTutorEnabled_3
# 888 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_MoveTutorEnabled_4
# 890 "data/maps/WaddleDeeArena/scripts.pory"
	case 3, WaddleDeeArena_EventScript_MoveTutorEnabled_5
# 892 "data/maps/WaddleDeeArena/scripts.pory"
	case 4, WaddleDeeArena_EventScript_MoveTutorEnabled_6
# 894 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_MoveTutorEnabled_7
	return

WaddleDeeArena_EventScript_MoveTutorEnabled_2:
# 885 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Move1
	return

WaddleDeeArena_EventScript_MoveTutorEnabled_3:
# 887 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Move2
	return

WaddleDeeArena_EventScript_MoveTutorEnabled_4:
# 889 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Move3
	return

WaddleDeeArena_EventScript_MoveTutorEnabled_5:
# 891 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Move4
	return

WaddleDeeArena_EventScript_MoveTutorEnabled_6:
# 893 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Move5
	return

WaddleDeeArena_EventScript_MoveTutorEnabled_7:
# 895 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_MoveTutorLeave
	return


WaddleDeeArena_EventScript_Move1::
# 901 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
# 902 "data/maps/WaddleDeeArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 903 "data/maps/WaddleDeeArena/scripts.pory"
	checkmoney 500
# 904 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Move1_2
WaddleDeeArena_EventScript_Move1_1:
# 908 "data/maps/WaddleDeeArena/scripts.pory"
	move_tutor MOVE_GRASS_KNOT, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, WaddleDeeArena_EventScript_TaughtMove
	return

WaddleDeeArena_EventScript_Move1_2:
# 906 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto WaddleDeeArena_EventScript_Move1_1


WaddleDeeArena_EventScript_Move2::
# 913 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SHADE
# 914 "data/maps/WaddleDeeArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 915 "data/maps/WaddleDeeArena/scripts.pory"
	checkmoney 500
# 916 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Move2_2
WaddleDeeArena_EventScript_Move2_1:
# 920 "data/maps/WaddleDeeArena/scripts.pory"
	move_tutor MOVE_NIGHT_SHADE, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, WaddleDeeArena_EventScript_TaughtMove
	return

WaddleDeeArena_EventScript_Move2_2:
# 918 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto WaddleDeeArena_EventScript_Move2_1


WaddleDeeArena_EventScript_Move3::
# 925 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_0x8005, MOVE_VACUUM_WAVE
# 926 "data/maps/WaddleDeeArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 927 "data/maps/WaddleDeeArena/scripts.pory"
	checkmoney 500
# 928 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Move3_2
WaddleDeeArena_EventScript_Move3_1:
# 932 "data/maps/WaddleDeeArena/scripts.pory"
	move_tutor MOVE_VACUUM_WAVE, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, WaddleDeeArena_EventScript_TaughtMove
	return

WaddleDeeArena_EventScript_Move3_2:
# 930 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto WaddleDeeArena_EventScript_Move3_1


WaddleDeeArena_EventScript_Move4::
# 937 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 938 "data/maps/WaddleDeeArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 939 "data/maps/WaddleDeeArena/scripts.pory"
	checkmoney 500
# 940 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Move4_2
WaddleDeeArena_EventScript_Move4_1:
# 944 "data/maps/WaddleDeeArena/scripts.pory"
	move_tutor MOVE_SWAGGER, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, WaddleDeeArena_EventScript_TaughtMove
	return

WaddleDeeArena_EventScript_Move4_2:
# 942 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto WaddleDeeArena_EventScript_Move4_1


WaddleDeeArena_EventScript_Move5::
# 949 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
# 950 "data/maps/WaddleDeeArena/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 951 "data/maps/WaddleDeeArena/scripts.pory"
	checkmoney 500
# 952 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Move5_2
WaddleDeeArena_EventScript_Move5_1:
# 956 "data/maps/WaddleDeeArena/scripts.pory"
	move_tutor MOVE_TOXIC_SPIKES, WaddleDeeArena_Text_TeachMove, WaddleDeeArena_Text_SelectMon, WaddleDeeArena_EventScript_MoveTutorLeave, WaddleDeeArena_EventScript_TaughtMove
	return

WaddleDeeArena_EventScript_Move5_2:
# 954 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CantAfford
	goto WaddleDeeArena_EventScript_Move5_1


WaddleDeeArena_EventScript_CantAfford::
# 961 "data/maps/WaddleDeeArena/scripts.pory"
	hidemoneybox
# 962 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CantAfford_Text_0
# 964 "data/maps/WaddleDeeArena/scripts.pory"
	release
	end


WaddleDeeArena_EventScript_TaughtMove::
# 982 "data/maps/WaddleDeeArena/scripts.pory"
	showmoneybox 0, 0
# 983 "data/maps/WaddleDeeArena/scripts.pory"
	delay 16
# 984 "data/maps/WaddleDeeArena/scripts.pory"
	removemoney 500
# 985 "data/maps/WaddleDeeArena/scripts.pory"
	updatemoneybox
# 986 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_SHOP
# 987 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TaughtMove_Text_0
# 989 "data/maps/WaddleDeeArena/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 990 "data/maps/WaddleDeeArena/scripts.pory"
	hidemoneybox
# 991 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_MoveTutorLeave::
# 996 "data/maps/WaddleDeeArena/scripts.pory"
	hidemoneybox
# 997 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_MoveTutorLeave_Text_0
# 999 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


# 181 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0:
# 181 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 182 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1:
# 182 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 182 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 182 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 182 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 182 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 188 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2:
# 188 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 188 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 188 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 194 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3:
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 198 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4:
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 198 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
	step_end

# 199 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5:
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 199 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 200 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6:
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 200 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 302 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_0:
# 302 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 302 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 322 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_1:
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 323 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_2:
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 333 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_0:
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 334 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_1:
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 336 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_2:
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 339 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_3:
# 339 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
# 339 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 354 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_4:
# 354 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 354 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 355 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_5:
# 355 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 355 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
	step_end

# 361 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_6:
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 362 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_7:
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 367 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_8:
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 368 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_9:
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 380 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_0:
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 381 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_1:
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 402 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_2:
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 402 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 403 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_3:
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 419 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_0:
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 419 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 420 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_1:
# 420 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 420 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 420 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 420 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 442 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_2:
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 443 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_3:
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 443 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
	step_end

# 503 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_0:
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 503 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 505 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_1:
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 505 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 506 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_2:
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 506 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 520 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_3:
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 520 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 521 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_4:
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 521 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 523 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_5:
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 523 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 569 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_6:
# 569 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 569 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 569 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 569 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 569 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 577 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_7:
# 577 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_right
# 577 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
# 577 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
	step_end

# 578 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_8:
# 578 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_left
# 578 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
# 578 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
	step_end

# 600 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_9:
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 600 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 601 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_10:
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 601 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 602 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_11:
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 608 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_12:
# 608 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
# 608 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 613 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_13:
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 613 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 622 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_14:
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
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
# 622 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 624 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_15:
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 625 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_16:
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 625 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 770 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0:
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 770 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 770 "data/maps/WaddleDeeArena/scripts.pory"
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

WaddleDeeArena_EventScript_Cafe_Text_0:
# 27 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I've got some time off, so I came to\n"
	.string "see what the Arenas were like.\p"
	.string "I can't wait to see what kinds of\n"
	.string "battles will take place in here!$"

WaddleDeeArena_EventScript_Cafe_Text_1:
# 35 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Hey, congratulations on your victory!\n"
	.string "All the competitors were so cool.\p"
	.string "I think I get why the Great King is\n"
	.string "making such a big deal of this game now!$"

WaddleDeeArena_EventScript_Staff_Text_0:
# 56 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My boss is planning on challenging the\n"
	.string "Arena, so I'm here to cheer him on.\p"
	.string "His Psychic-type Helpers are something\n"
	.string "else, I tell ya!\p"
	.string "Gooooo, boss! You've got this!$"

WaddleDeeArena_EventScript_Staff_Text_1:
# 66 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Wow, you managed to best my boss's\n"
	.string "Helpers? You're something else!\p"
	.string "Don't tell him, but… I'll be\n"
	.string "rooting for you too!$"

WaddleDeeArena_EventScript_Hiker_Text_0:
# 85 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Supposedly, each of the various\n"
	.string "Arenas have slightly different rules.\p"
	.string "Whenever you get to a new Arena, it\n"
	.string "might not be a bad idea to scope out\l"
	.string "what you'll be getting into.$"

WaddleDeeArena_EventScript_Gentleman_Text_0:
# 98 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Raising Helpers is quite difficult…\n"
	.string "I'm not sure I've got what it takes.\p"
	.string "But watching others battle with their\n"
	.string "Helpers is even more exciting!\p"
	.string "There might be some serious candidates\n"
	.string "for the new king of Dream Land here!$"

WaddleDeeArena_EventScript_Nurse_Text_0:
# 113 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you planning on entering the Arena?\n"
	.string "I can heal up your Helpers first!$"

WaddleDeeArena_EventScript_Nurse_Text_1:
# 123 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You and your Helpers are in top form.\n"
	.string "Best of luck in the Arena!$"

WaddleDeeArena_EventScript_Commentator_Text_0:
# 135 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "It's no small feat, overcoming Magolor\n"
	.string "and his magical bag of tricks!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

WaddleDeeArena_EventScript_Commentator_Text_1:
# 148 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Wwwwwelcome to the Waddle Dee\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

WaddleDeeArena_EventScript_Commentator_Text_2:
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Next up: grand finals!\n"
	.string "Are you prepared for the last battle?$"

WaddleDeeArena_EventScript_CommentatorChoice_Text_0:
# 208 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Today's challenge: a sweet breeze!\n"
	.string "How can I help you?$"

WaddleDeeArena_EventScript_CommentatorBye_Text_0:
# 228 "data/maps/WaddleDeeArena/scripts.pory"
	.string "When you're ready for the grand finals,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorBye_Text_1:
# 233 "data/maps/WaddleDeeArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorInfo_Text_0:
# 241 "data/maps/WaddleDeeArena/scripts.pory"
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
# 272 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_1:
# 305 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Starring none other than our hero...\l"
	.string "it's the pink pugilist, Kirbyyy!!!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_2:
# 314 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "Unable to settle for anything other\n"
	.string "than victory, Kirby has returned!\l"
	.string "Is it time for his first big win?$"

WaddleDeeArena_EventScript_Challenger1_Text_0:
# 330 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Let's have our first challenger, please!$"

WaddleDeeArena_EventScript_Challenger1_Text_1:
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We're both having our first Arena\n"
	.string "battle here. Let's make it a good one!$"

WaddleDeeArena_EventScript_Challenger1_Text_2:
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We both couldn't win last time… let's\n"
	.string "see if one of us will do it this time!$"

WaddleDeeArena_EventScript_Challenger1_Text_3:
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This could be the start of something\n"
	.string "big! Kirby takes the first win!$"

WaddleDeeArena_EventScript_Challenger2_Text_0:
# 377 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Challenger number two, step right up!$"

WaddleDeeArena_EventScript_Challenger2_Text_1:
# 389 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Prepare to be dazzled by my adorable\n"
	.string "little Helpers!$"

WaddleDeeArena_EventScript_Challenger2_Text_2:
# 398 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Things are starting to heat up!\n"
	.string "Kirby has scored a second victory!$"

WaddleDeeArena_EventScript_Challenger3_Text_0:
# 416 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Everyone welcome our final challenger!$"

WaddleDeeArena_EventScript_Challenger3_Text_1:
# 428 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My Helper and I have made it so far.\n"
	.string "We can't back down now!$"

WaddleDeeArena_EventScript_Challenger3_Text_2:
# 437 "data/maps/WaddleDeeArena/scripts.pory"
	.string "What an amazing battle! Kirby has swept\n"
	.string "the preliminary bracket!!$"

WaddleDeeArena_EventScript_Challenger3_Text_3:
# 452 "data/maps/WaddleDeeArena/scripts.pory"
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
# 478 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is making his Royal Royale debut…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_1:
# 491 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is back and hungry for a Brooch…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_2:
# 508 "data/maps/WaddleDeeArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who made it to grand finals!\p"
	.string "This sly spell caster hasn't just made a\n"
	.string "name for himself through construction.\p"
	.string "It turns out he's also a dangerously\n"
	.string "devious opponent in Helper battles!\p"
	.string "Everyone welcome {COLOR BLUE}Magolor{COLOR DARK_GRAY} to the stage!$"

WaddleDeeArena_EventScript_GrandFinals_Text_3:
# 531 "data/maps/WaddleDeeArena/scripts.pory"
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
# 550 "data/maps/WaddleDeeArena/scripts.pory"
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
# 570 "data/maps/WaddleDeeArena/scripts.pory"
	.string "It's come down to Kirby vs. Magolor!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_6:
# 592 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Folks… we've witnessed history today.\n"
	.string "Claiming his first Arena championship…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

WaddleDeeArena_EventScript_GrandFinals_Text_7:
# 604 "data/maps/WaddleDeeArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

WaddleDeeArena_EventScript_GrandFinals_Text_8:
# 610 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}What a humbling loss… I'll just have to\n"
	.string "try harder next time! Hee hee hee…!$"

WaddleDeeArena_EventScript_Victory_Text_0:
# 633 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Waddle Dee Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Waddle Dee Brooch!$"

WaddleDeeArena_EventScript_Victory_Text_1:
# 638 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Kirby received the Waddle Dee Brooch\n"
	.string "from Commentator Waddle Dee!$"

WaddleDeeArena_EventScript_Victory_Text_2:
# 645 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I hope you'll keep visiting different\n"
	.string "Arenas and claiming more Brooches!$"

WaddleDeeArena_EventScript_Break_Text_0:
# 657 "data/maps/WaddleDeeArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

WaddleDeeArena_EventScript_Break_Text_1:
# 662 "data/maps/WaddleDeeArena/scripts.pory"
	.string "The last battle in the preliminary\n"
	.string "bracket awaits! Are you prepared?$"

WaddleDeeArena_EventScript_Break_Text_2:
# 667 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Now then, Kirby: the grand finals await!\n"
	.string "Are you ready for the TRUE final bout?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_0:
# 703 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You have {COLOR RED}one full-party heal{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use it now?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_1:
# 711 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Your party has been fully healed!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_2:
# 723 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Unfortunately, you've already used up\n"
	.string "all of your heals, Kirby.\p"
	.string "You'll have to tough out the remaining\n"
	.string "battles with your party as they are!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_3:
# 733 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You already healed up this round, Kirby!\n"
	.string "If you have any heals remaining,\l"
	.string "let's save them for future rounds, OK?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_4:
# 741 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, one complimentary full-party\n"
	.string "heal for our pink warrior, coming up!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0:
# 756 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!\p"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1:
# 766 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2:
# 785 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, folks! Stay tuned! The grand\n"
	.string "finals will begin after a short break!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_0:
# 806 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I should study up on what makes the\n"
	.string "Royal Royale so fun to play.\p"
	.string "That knowledge could be put to good\n"
	.string "use for improving my own games!\p"
	.string "Oh, yes! Kirby, you'll find my arcade\n"
	.string "on the northwest section of town.\p"
	.string "There's lots of fun games to play\n"
	.string "inside. I hope you'll check it out!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_1:
# 820 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Huh? You're checking in on me to see\n"
	.string "if I'm doing alright?\p"
	.string "Gee, Kirby, you're one silly fellow.\n"
	.string "Of course I'm not upset!\p"
	.string "…well, okay, maybe a little…\n"
	.string "…but it's fine! A loss is a loss.\p"
	.string "Here, let me give you a little souvenir\n"
	.string "to mark our battle.$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_2:
# 832 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Trick is a move that swaps your Helper's\n"
	.string "item with the target's.\p"
	.string "You might find items on your journey\n"
	.string "you think you may have no use for…\p"
	.string "But you can always make them someone\n"
	.string "else's problem! Hee hee hee!$"

WaddleDeeArena_EventScript_MoveTutor_Text_0:
# 851 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I'm a movesmith. I know all sorts of\n"
	.string "long-forgotten techniques.\p"
	.string "What I'm looking for… is a commander\n"
	.string "of Helpers that can wield my power.\p"
	.string "Do you have what it takes to spark\n"
	.string "the fire kindling in my heart?$"

WaddleDeeArena_EventScript_MoveTutorEnabled_Text_0:
# 869 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Having watched your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥500, I'll train\n"
	.string "them these new techniques.$"

WaddleDeeArena_EventScript_MoveTutorEnabled_Text_1:
# 877 "data/maps/WaddleDeeArena/scripts.pory"
	.string "What do you say?\n"
	.string "Which move are you interested in?$"

WaddleDeeArena_EventScript_CantAfford_Text_0:
# 962 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You can't afford to teach this move.\n"
	.string "My skills don't come for free…$"

WaddleDeeArena_EventScript_TaughtMove_Text_0:
# 987 "data/maps/WaddleDeeArena/scripts.pory"
	.string "All done! I hope you and your Helper will\n"
	.string "make the most of this new technique!$"

WaddleDeeArena_EventScript_MoveTutorLeave_Text_0:
# 997 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Return to me if you ever wish to teach\n"
	.string "your Helpers some special moves!$"

WaddleDeeArena_Text_TeachMove::
# 968 "data/maps/WaddleDeeArena/scripts.pory"
	.string "So, you want me to teach\n"
	.string "{STR_VAR_1}?$"

WaddleDeeArena_Text_SelectMon::
# 974 "data/maps/WaddleDeeArena/scripts.pory"
	.string "And which of your Helpers should I\n"
	.string "teach the move to?$"

WaddleDeeArena_Text_Challenger1::
# 1002 "data/maps/WaddleDeeArena/scripts.pory"
	.string "For every battle that has a winner,\n"
	.string "there must be another who doesn't…$"

WaddleDeeArena_Text_Challenger2::
# 1008 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Oh no?! My darling Helpers!$"

WaddleDeeArena_Text_Challenger3::
# 1013 "data/maps/WaddleDeeArena/scripts.pory"
	.string "So this is the strength of someone\n"
	.string "who can reach grand finals…$"

WaddleDeeArena_Text_Magolor::
# 1019 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Bravo, Kirby! I'll admit, I didn't think\n"
	.string "you had it in you to defeat me.\p"
	.string "But I suppose bringing the best out of\n"
	.string "your friends is what you do, right?$"
