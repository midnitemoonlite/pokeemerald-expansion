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
	msgbox WaddleDeeArena_EventScript_Cafe_Text_0
# 25 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Staff::
# 30 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 31 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 32 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Staff_Text_0
# 39 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Hiker::
# 44 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 45 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 46 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Hiker_Text_0
# 52 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Gentleman::
# 57 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 58 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 59 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Gentleman_Text_0
# 67 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Nurse::
# 72 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 73 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 74 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 76 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Nurse_2
WaddleDeeArena_EventScript_Nurse_1:
# 87 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Nurse_2:
# 78 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 79 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 80 "data/maps/WaddleDeeArena/scripts.pory"
	playfanfare MUS_HEAL
# 81 "data/maps/WaddleDeeArena/scripts.pory"
	waitfanfare
# 82 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/WaddleDeeArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 84 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Nurse_Text_1
	goto WaddleDeeArena_EventScript_Nurse_1


WaddleDeeArena_EventScript_Commentator::
# 92 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 93 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 94 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_2
# 105 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeArena_EventScript_Commentator_3
WaddleDeeArena_EventScript_Commentator_1:
# 134 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_Commentator_2:
# 96 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_0
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_3:
# 107 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 108 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 109 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_1
# 114 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_6
# 118 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_Commentator_7
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_6:
# 116 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_7:
# 120 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Commentator_Text_2, MSGBOX_YESNO
# 122 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_Commentator_10
# 127 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_Commentator_11
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_10:
# 124 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 125 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation
	goto WaddleDeeArena_EventScript_Commentator_1

WaddleDeeArena_EventScript_Commentator_11:
# 129 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 130 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	goto WaddleDeeArena_EventScript_Commentator_1


WaddleDeeArena_EventScript_GrandFinalsPreparation::
# 139 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 140 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_2
# 146 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_3
# 152 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_GrandFinalsPreparation_4
WaddleDeeArena_EventScript_GrandFinalsPreparation_1:
# 158 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 162 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 163 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 164 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return

WaddleDeeArena_EventScript_GrandFinalsPreparation_2:
# 142 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 144 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_3:
# 148 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 149 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 150 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1

WaddleDeeArena_EventScript_GrandFinalsPreparation_4:
# 154 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 155 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 156 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_GrandFinalsPreparation_1


WaddleDeeArena_EventScript_CommentatorChoice::
# 169 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_CommentatorChoice_Text_0
# 171 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 172 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 173 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 174 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_CommentatorChoice_2
# 176 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_CommentatorChoice_3
# 178 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_CommentatorChoice_4
# 180 "data/maps/WaddleDeeArena/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeArena_EventScript_CommentatorChoice_5
	return

WaddleDeeArena_EventScript_CommentatorChoice_2:
# 175 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_BeginChallenge
	return

WaddleDeeArena_EventScript_CommentatorChoice_3:
# 177 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorInfo
	return

WaddleDeeArena_EventScript_CommentatorChoice_4:
# 179 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return

WaddleDeeArena_EventScript_CommentatorChoice_5:
# 181 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return


WaddleDeeArena_EventScript_CommentatorBye::
# 187 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_CommentatorBye_2
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_1
WaddleDeeArena_EventScript_CommentatorBye_1:
# 197 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_CommentatorBye_2:
# 189 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorBye_Text_0
	goto WaddleDeeArena_EventScript_CommentatorBye_1


WaddleDeeArena_EventScript_CommentatorInfo::
# 202 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_CommentatorInfo_Text_0
# 228 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorChoice
	return


WaddleDeeArena_EventScript_BeginChallenge::
# 233 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_0
# 235 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 236 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_HEALS, 1
# 237 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 238 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 239 "data/maps/WaddleDeeArena/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_TEMP_0
# 240 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_SOUTH
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_2
# 246 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_WEST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_3
# 252 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_TEMP_0, DIR_EAST
	goto_if_eq WaddleDeeArena_EventScript_BeginChallenge_4
WaddleDeeArena_EventScript_BeginChallenge_1:
# 258 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 259 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4
# 260 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5
# 261 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6
# 262 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 263 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 264 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_9
# 273 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_BeginChallenge_10
WaddleDeeArena_EventScript_BeginChallenge_8:
# 282 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_BeginChallenge_Movement_1
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_BeginChallenge_Movement_2
# 285 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 286 "data/maps/WaddleDeeArena/scripts.pory"
	call WaddleDeeArena_EventScript_Challenger1
	return

WaddleDeeArena_EventScript_BeginChallenge_2:
# 242 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 243 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1
# 244 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_3:
# 248 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 249 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3
# 250 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_4:
# 254 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0
# 255 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2
# 256 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
	goto WaddleDeeArena_EventScript_BeginChallenge_1

WaddleDeeArena_EventScript_BeginChallenge_9:
# 266 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_1
	goto WaddleDeeArena_EventScript_BeginChallenge_8

WaddleDeeArena_EventScript_BeginChallenge_10:
# 275 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_BeginChallenge_Text_2
	goto WaddleDeeArena_EventScript_BeginChallenge_8


WaddleDeeArena_EventScript_Challenger1::
# 291 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_0
# 292 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 293 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_0
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_1
# 296 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_1
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 298 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 299 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 300 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 301 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 302 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 303 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_2
# 308 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_Challenger1_3
WaddleDeeArena_EventScript_Challenger1_1:
# 316 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 317 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 319 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 320 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 321 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 322 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_ED, WaddleDeeArena_Text_Challenger1
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_3
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger1_Movement_6
# 326 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger1_Movement_7
# 327 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 328 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 329 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 1
# 330 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_1, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 333 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 334 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 335 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_1
# 336 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_Challenger1_2:
# 305 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_1
	goto WaddleDeeArena_EventScript_Challenger1_1

WaddleDeeArena_EventScript_Challenger1_3:
# 310 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger1_Text_2
	goto WaddleDeeArena_EventScript_Challenger1_1


WaddleDeeArena_EventScript_Challenger2::
# 341 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_0
# 342 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 343 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_0
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_1
# 346 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_2
# 347 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 348 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 349 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 350 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 351 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 352 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 353 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_1
# 355 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 356 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 357 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 358 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 359 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 360 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 361 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_4, WaddleDeeArena_Text_Challenger2
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger2_Text_2
# 364 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 365 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger2_Movement_2
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger2_Movement_3
# 368 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 2
# 369 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 370 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 371 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_2, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 372 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 373 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 374 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_2
# 375 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_Challenger3::
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_0
# 381 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 382 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_0
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_1
# 385 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_CHALLENGER_3
# 386 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_2
# 387 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 388 "data/maps/WaddleDeeArena/scripts.pory"
	delay 30
# 389 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 390 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 391 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 392 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_1
# 394 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 395 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 396 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_4
# 397 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_5
# 398 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 399 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 400 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_DECLAN, WaddleDeeArena_Text_Challenger3
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_2
# 403 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 404 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 405 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_Challenger3_Movement_2
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_Challenger3_Movement_3
# 408 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 3
# 409 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_GRAND_FINALS_ACTIVE
# 410 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 411 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_Challenger1_Movement_8
# 412 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CHALLENGER_3, WaddleDeeArena_EventScript_Challenger1_Movement_9
# 413 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 414 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 415 "data/maps/WaddleDeeArena/scripts.pory"
	removeobject LOCALID_WADDLE_CHALLENGER_3
# 416 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Challenger3_Text_3
# 432 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_GrandFinals::
# 437 "data/maps/WaddleDeeArena/scripts.pory"
	fadeoutbgm 1
# 438 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_BeginChallenge_Movement_0
# 439 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 440 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_2
# 453 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_3
WaddleDeeArena_EventScript_GrandFinals_1:
# 466 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 467 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_0
# 468 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 469 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_1
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_2
# 471 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 472 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_2
# 482 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 483 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_3
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_4
# 486 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_ARENA_MAGOLOR
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_5
# 488 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 489 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 490 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_Challenger1_Movement_3
# 491 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 492 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 493 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_7
WaddleDeeArena_EventScript_GrandFinals_6:
# 512 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_RETRY, WaddleDeeArena_EventScript_GrandFinals_10
WaddleDeeArena_EventScript_GrandFinals_9:
# 532 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 533 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_6
# 534 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_5
# 538 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 539 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_RETRY
# 540 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 541 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_7
# 542 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_8
# 543 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 544 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 545 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_STARTER_MON
# 546 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_GrandFinals_14
# 548 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_GrandFinals_15
# 550 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_GrandFinals_16
WaddleDeeArena_EventScript_GrandFinals_12:
# 553 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 554 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 555 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_6
# 560 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 561 "data/maps/WaddleDeeArena/scripts.pory"
	playbgm MUS_B_FRONTIER, FALSE
# 562 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_APPLAUSE
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_1, WaddleDeeArena_EventScript_GrandFinals_Movement_9
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_WADDLE_CROWD_2, WaddleDeeArena_EventScript_GrandFinals_Movement_10
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_11
# 566 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_GrandFinals_Text_7
# 568 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 569 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 570 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 571 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_12
# 572 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 573 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_8
# 575 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_MAGOLOR, WaddleDeeArena_EventScript_GrandFinals_Movement_13
# 577 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 578 "data/maps/WaddleDeeArena/scripts.pory"
	setobjectxyperm LOCALID_ARENA_MAGOLOR, 9, 18
# 579 "data/maps/WaddleDeeArena/scripts.pory"
	addobject LOCALID_WADDLE_TUTOR
# 580 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 581 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_HEALED_THIS_ROUND
# 582 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_ARENA_RETRY
# 583 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_GRAND_FINALS_ACTIVE
# 584 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_ARENA_BATTLES, 0
# 585 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_GrandFinals_Movement_14
# 587 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 590 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 591 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 592 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Victory
	return

WaddleDeeArena_EventScript_GrandFinals_2:
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_0
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_3:
# 455 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_1
	goto WaddleDeeArena_EventScript_GrandFinals_1

WaddleDeeArena_EventScript_GrandFinals_7:
# 495 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_3
	goto WaddleDeeArena_EventScript_GrandFinals_6

WaddleDeeArena_EventScript_GrandFinals_10:
# 514 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_GrandFinals_Text_4
	goto WaddleDeeArena_EventScript_GrandFinals_9

WaddleDeeArena_EventScript_GrandFinals_14:
# 547 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_15:
# 549 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_1, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12

WaddleDeeArena_EventScript_GrandFinals_16:
# 551 "data/maps/WaddleDeeArena/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_2, WaddleDeeArena_Text_Magolor
	goto WaddleDeeArena_EventScript_GrandFinals_12


WaddleDeeArena_EventScript_Victory::
# 597 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_0
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Victory_Text_1
# 604 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 605 "data/maps/WaddleDeeArena/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 606 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_BADGE01_GET
# 607 "data/maps/WaddleDeeArena/scripts.pory"
	clearflag FLAG_HIDE_WADDLE_DEE_ARENA_PARTICIPANTS
# 608 "data/maps/WaddleDeeArena/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 2
# 609 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Victory_Text_2
# 614 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


WaddleDeeArena_EventScript_Break::
# 619 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_2
# 624 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_3
# 629 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_4
WaddleDeeArena_EventScript_Break_1:
# 634 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 635 "data/maps/WaddleDeeArena/scripts.pory"
	multichoice 17, 6, MULTI_GO_ON_REST_RETIRE, 0
# 636 "data/maps/WaddleDeeArena/scripts.pory"
	switch VAR_RESULT
# 637 "data/maps/WaddleDeeArena/scripts.pory"
	case 0, WaddleDeeArena_EventScript_Break_9
# 650 "data/maps/WaddleDeeArena/scripts.pory"
	case 1, WaddleDeeArena_EventScript_Break_10
# 652 "data/maps/WaddleDeeArena/scripts.pory"
	case 2, WaddleDeeArena_EventScript_Break_11
	return

WaddleDeeArena_EventScript_Break_2:
# 621 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_0
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_3:
# 626 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_1
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_4:
# 631 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_Break_Text_2
	goto WaddleDeeArena_EventScript_Break_1

WaddleDeeArena_EventScript_Break_9:
# 638 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 1
	goto_if_eq WaddleDeeArena_EventScript_Break_12
# 642 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 2
	goto_if_eq WaddleDeeArena_EventScript_Break_13
# 646 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_BATTLES, 3
	goto_if_eq WaddleDeeArena_EventScript_Break_14
	return

WaddleDeeArena_EventScript_Break_10:
# 651 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ArenaHeal
	return

WaddleDeeArena_EventScript_Break_11:
# 653 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_ForfeitConfirmation
	return

WaddleDeeArena_EventScript_Break_12:
# 640 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger2
	return

WaddleDeeArena_EventScript_Break_13:
# 644 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Challenger3
	return

WaddleDeeArena_EventScript_Break_14:
# 648 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_GrandFinals
	return


WaddleDeeArena_EventScript_ArenaHeal::
# 659 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_1
# 701 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ArenaHeal_2
	return

WaddleDeeArena_EventScript_ArenaHeal_1:
# 661 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_5
# 693 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_ARENA_HEALED_THIS_ROUND, WaddleDeeArena_EventScript_ArenaHeal_6
	return

WaddleDeeArena_EventScript_ArenaHeal_2:
# 703 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_4
# 705 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 706 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 707 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 708 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 709 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 710 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_5:
# 663 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_ARENA_HEALS, 0
	goto_if_gt WaddleDeeArena_EventScript_ArenaHeal_9
# 685 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_2
# 690 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_6:
# 695 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_3
# 698 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return

WaddleDeeArena_EventScript_ArenaHeal_9:
# 665 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ArenaHeal_Text_0, MSGBOX_YESNO
# 667 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_ArenaHeal_13
WaddleDeeArena_EventScript_ArenaHeal_12:
# 678 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_ArenaHeal_15
	return

WaddleDeeArena_EventScript_ArenaHeal_13:
# 669 "data/maps/WaddleDeeArena/scripts.pory"
	special HealPlayerParty
# 670 "data/maps/WaddleDeeArena/scripts.pory"
	playse SE_USE_ITEM
# 671 "data/maps/WaddleDeeArena/scripts.pory"
	subvar VAR_ARENA_HEALS, 1
# 672 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_ARENA_HEALED_THIS_ROUND
# 673 "data/maps/WaddleDeeArena/scripts.pory"
	message WaddleDeeArena_EventScript_ArenaHeal_Text_1
# 674 "data/maps/WaddleDeeArena/scripts.pory"
	waitmessage
# 675 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 676 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	goto WaddleDeeArena_EventScript_ArenaHeal_12

WaddleDeeArena_EventScript_ArenaHeal_15:
# 680 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_ForfeitConfirmation::
# 716 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_1
# 745 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_GRAND_FINALS_ACTIVE, WaddleDeeArena_EventScript_ForfeitConfirmation_2
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_1:
# 718 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0, MSGBOX_YESNO
# 726 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeArena_EventScript_ForfeitConfirmation_5
# 740 "data/maps/WaddleDeeArena/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeArena_EventScript_ForfeitConfirmation_6
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_2:
# 747 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2
# 749 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 750 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 751 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 752 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 753 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 754 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 755 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 756 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 757 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
# 758 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_5:
# 728 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1
# 730 "data/maps/WaddleDeeArena/scripts.pory"
	closemessage
# 731 "data/maps/WaddleDeeArena/scripts.pory"
	special SpawnCameraObject
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0
# 733 "data/maps/WaddleDeeArena/scripts.pory"
	delay 60
# 734 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_CAMERA, WaddleDeeArena_EventScript_GrandFinals_Movement_15
# 735 "data/maps/WaddleDeeArena/scripts.pory"
	applymovement LOCALID_ARENA_COMMENTATOR, WaddleDeeArena_EventScript_GrandFinals_Movement_16
# 736 "data/maps/WaddleDeeArena/scripts.pory"
	waitmovement
# 737 "data/maps/WaddleDeeArena/scripts.pory"
	special RemoveCameraObject
# 738 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_CommentatorBye
	return

WaddleDeeArena_EventScript_ForfeitConfirmation_6:
# 742 "data/maps/WaddleDeeArena/scripts.pory"
	goto WaddleDeeArena_EventScript_Break
	return


WaddleDeeArena_EventScript_TalkToMagolor::
# 764 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 765 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 766 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_2
# 780 "data/maps/WaddleDeeArena/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, WaddleDeeArena_EventScript_TalkToMagolor_3
WaddleDeeArena_EventScript_TalkToMagolor_1:
# 804 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return

WaddleDeeArena_EventScript_TalkToMagolor_2:
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_0
	goto WaddleDeeArena_EventScript_TalkToMagolor_1

WaddleDeeArena_EventScript_TalkToMagolor_3:
# 782 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_1
# 793 "data/maps/WaddleDeeArena/scripts.pory"
	giveitem ITEM_TM60
# 794 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_TalkToMagolor_Text_2
# 802 "data/maps/WaddleDeeArena/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	goto WaddleDeeArena_EventScript_TalkToMagolor_1


WaddleDeeArena_EventScript_Tutor::
# 809 "data/maps/WaddleDeeArena/scripts.pory"
	lock
# 810 "data/maps/WaddleDeeArena/scripts.pory"
	faceplayer
# 811 "data/maps/WaddleDeeArena/scripts.pory"
	msgbox WaddleDeeArena_EventScript_Tutor_Text_0
# 822 "data/maps/WaddleDeeArena/scripts.pory"
	release
	return


# 142 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_0:
# 142 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 143 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_1:
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 143 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 149 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_2:
# 149 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 149 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 149 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 155 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_3:
# 155 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 155 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 155 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 159 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_4:
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 159 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
	step_end

# 160 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_5:
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 160 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 161 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinalsPreparation_Movement_6:
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 161 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 263 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_0:
# 263 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 263 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 283 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_1:
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 283 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 284 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_BeginChallenge_Movement_2:
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 284 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 294 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_0:
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 294 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 295 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_1:
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 295 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
	step_end

# 297 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_2:
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 297 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 300 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_3:
# 300 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
# 300 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 318 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_4:
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 318 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 319 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_5:
# 319 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 319 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
	step_end

# 325 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_6:
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 325 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 326 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_7:
# 326 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 326 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 326 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 326 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 331 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_8:
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 331 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 332 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger1_Movement_9:
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 332 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 344 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_0:
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 344 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 345 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_1:
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 345 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 366 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_2:
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 366 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 367 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger2_Movement_3:
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
# 367 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_right
	step_end

# 383 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_0:
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
# 383 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_down
	step_end

# 384 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_1:
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 384 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 406 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_2:
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 406 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 407 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_Challenger3_Movement_3:
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_16
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 407 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
	step_end

# 467 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_0:
# 467 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 467 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 467 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 467 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 467 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 469 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_1:
# 469 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 469 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 469 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 469 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 469 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 469 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 470 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_2:
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 470 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 484 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_3:
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 484 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
	step_end

# 485 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_4:
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 485 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 487 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_5:
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_up
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 487 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_left
	step_end

# 533 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_6:
# 533 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 533 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 533 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 533 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
# 533 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_down
	step_end

# 541 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_7:
# 541 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_right
# 541 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
# 541 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_left
	step_end

# 542 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_8:
# 542 "data/maps/WaddleDeeArena/scripts.pory"
	walk_slow_left
# 542 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
# 542 "data/maps/WaddleDeeArena/scripts.pory"
	walk_fast_right
	step_end

# 563 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_9:
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_faster_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 563 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
	step_end

# 564 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_10:
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_up
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_left
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_down
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	delay_8
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	face_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
# 564 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_fast_right
	step_end

# 565 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_11:
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_down
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_left
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_up
# 565 "data/maps/WaddleDeeArena/scripts.pory"
	jump_in_place_right
	step_end

# 571 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_12:
# 571 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
# 571 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_slow_left
	step_end

# 576 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_13:
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 576 "data/maps/WaddleDeeArena/scripts.pory"
	walk_left
	step_end

# 586 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_14:
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 586 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

# 588 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_15:
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 588 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 589 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_GrandFinals_Movement_16:
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 589 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
	step_end

# 732 "data/maps/WaddleDeeArena/scripts.pory"
WaddleDeeArena_EventScript_ForfeitConfirmation_Movement_0:
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_right
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_down
# 732 "data/maps/WaddleDeeArena/scripts.pory"
	walk_in_place_up
	step_end

WaddleDeeArena_EventScript_Youngster_Text_0:
# 10 "data/maps/WaddleDeeArena/scripts.pory"
	.string "If you need more time to prepare before\n"
	.string "taking on the Arena, there's a nurse\l"
	.string "and PC waiting in the back.$"

WaddleDeeArena_EventScript_Cafe_Text_0:
# 20 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I've got some time off, so I came to\n"
	.string "see what the Arenas were like.\p"
	.string "I can't wait to see what kinds of\n"
	.string "battles will take place in here!$"

WaddleDeeArena_EventScript_Staff_Text_0:
# 32 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My boss is planning on challenging the\n"
	.string "Arena, so I'm here to cheer him on.\p"
	.string "His Psychic-type Helpers are something\n"
	.string "else, I tell ya!\p"
	.string "Gooooo, boss! You've got this!$"

WaddleDeeArena_EventScript_Hiker_Text_0:
# 46 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Supposedly, each of the different\n"
	.string "Arenas have slightly differnt rules.\p"
	.string "Whenever you get to a new Arena, it\n"
	.string "might not be a bad idea to scope out\l"
	.string "what you'll be getting into.$"

WaddleDeeArena_EventScript_Gentleman_Text_0:
# 59 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Raising Helpers is quite difficult…\n"
	.string "I'm not sure I've got what it takes.\p"
	.string "But watching others battle with their\n"
	.string "Helpers is even more exciting!\p"
	.string "There might be some serious candidates\n"
	.string "for the new king of Dream Land here!$"

WaddleDeeArena_EventScript_Nurse_Text_0:
# 74 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you planning on entering the Arena?\n"
	.string "I can heal up your Helpers first!$"

WaddleDeeArena_EventScript_Nurse_Text_1:
# 84 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You and your Helpers are in top form.\n"
	.string "Best of luck in the Arena!$"

WaddleDeeArena_EventScript_Commentator_Text_0:
# 96 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Once more: congraaaaatulations on your\n"
	.string "fantaaaaabulous win, Kirby!\p"
	.string "It's no small feat, overcoming Magolor\n"
	.string "and his magical bag of tricks!\p"
	.string "I'll be rooting for you at the other\n"
	.string "Arenas! Good luck, Kirby of the Stars!$"

WaddleDeeArena_EventScript_Commentator_Text_1:
# 109 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Wwwwwelcome to the Waddle Dee\n"
	.string "Arenaaaaa!\p"
	.string "I'm your host, Commentator Waddle Dee,\n"
	.string "here to officiate heated Helper brawls!$"

WaddleDeeArena_EventScript_Commentator_Text_2:
# 120 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Next up: grand finals!\n"
	.string "Are you prepared for the last battle?$"

WaddleDeeArena_EventScript_CommentatorChoice_Text_0:
# 169 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Today's challenge: a sweet breeze!\n"
	.string "How can I help you?$"

WaddleDeeArena_EventScript_CommentatorBye_Text_0:
# 189 "data/maps/WaddleDeeArena/scripts.pory"
	.string "When you're ready for the grand finals,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorBye_Text_1:
# 194 "data/maps/WaddleDeeArena/scripts.pory"
	.string "If you ever want to brave the Arena,\n"
	.string "you know the Waddle Dee to talk to!$"

WaddleDeeArena_EventScript_CommentatorInfo_Text_0:
# 202 "data/maps/WaddleDeeArena/scripts.pory"
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
# 233 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, you've been signed up.\n"
	.string "Come with me onto the stage, please!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_1:
# 266 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "We've got some exciting battles today!\n"
	.string "Starring none other than our hero...\l"
	.string "it's the pink pugilist, Kirbyyy!!!$"

WaddleDeeArena_EventScript_BeginChallenge_Text_2:
# 275 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Welcome, one and all, to the brand-new\n"
	.string "Waddle Dee Arena!\p"
	.string "Unable to settle for anything other\n"
	.string "than victory, Kirby has returned!\l"
	.string "Is it time for his first big win?$"

WaddleDeeArena_EventScript_Challenger1_Text_0:
# 291 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Let's have our first challenger, please!$"

WaddleDeeArena_EventScript_Challenger1_Text_1:
# 305 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We're both having our first Arena\n"
	.string "battle here. Let's make it a good one!$"

WaddleDeeArena_EventScript_Challenger1_Text_2:
# 310 "data/maps/WaddleDeeArena/scripts.pory"
	.string "We both couldn't reach the top of the\n"
	.string "tournament last time…\p"
	.string "Let's see if one of us will be able to\n"
	.string "accomplish it this time!$"

WaddleDeeArena_EventScript_Challenger1_Text_3:
# 323 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This could be the start of something\n"
	.string "big! Kirby takes the first win!$"

WaddleDeeArena_EventScript_Challenger2_Text_0:
# 341 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Challenger number two, step right up!$"

WaddleDeeArena_EventScript_Challenger2_Text_1:
# 353 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Prepare to be dazzled by my adorable\n"
	.string "little Helpers!$"

WaddleDeeArena_EventScript_Challenger2_Text_2:
# 362 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Things are starting to heat up!\n"
	.string "Kirby has scored a second victory!$"

WaddleDeeArena_EventScript_Challenger3_Text_0:
# 380 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Everyone welcome our final challenger!$"

WaddleDeeArena_EventScript_Challenger3_Text_1:
# 392 "data/maps/WaddleDeeArena/scripts.pory"
	.string "My Helper and I have made it so far.\n"
	.string "We can't back down now!$"

WaddleDeeArena_EventScript_Challenger3_Text_2:
# 401 "data/maps/WaddleDeeArena/scripts.pory"
	.string "What an amazing battle! Kirby has swept\n"
	.string "the preliminary bracket!!$"

WaddleDeeArena_EventScript_Challenger3_Text_3:
# 416 "data/maps/WaddleDeeArena/scripts.pory"
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
# 442 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is making his Royal Royale debut…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_1:
# 455 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Can you feel it? The tension in the air?\n"
	.string "The electric buzz from the crowd?\p"
	.string "That can only mean one thing:\n"
	.string "it's GRAND FINALS time!\p"
	.string "On my right, this little pink hero\n"
	.string "is back and hungry for a Brooch…\p"
	.string "Everyone give it up for Kirbyyyyy!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_2:
# 472 "data/maps/WaddleDeeArena/scripts.pory"
	.string "And to my left, the other undefeated\n"
	.string "challenger who made it to grand finals!\p"
	.string "This sly spell caster hasn't just made a\n"
	.string "name for himself through construction.\p"
	.string "It turns out he's also a dangerously\n"
	.string "devious opponent in Helper battles!\p"
	.string "Everyone welcome {COLOR BLUE}Magolor{COLOR DARK_GRAY} to the stage!$"

WaddleDeeArena_EventScript_GrandFinals_Text_3:
# 495 "data/maps/WaddleDeeArena/scripts.pory"
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
# 514 "data/maps/WaddleDeeArena/scripts.pory"
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
# 534 "data/maps/WaddleDeeArena/scripts.pory"
	.string "It's come down to Kirby vs. Magolor!\n"
	.string "Who will reign supreme in the Arena?!\p"
	.string "Everyone make some noiseeeee!!!!!$"

WaddleDeeArena_EventScript_GrandFinals_Text_6:
# 555 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Folks… we've witnessed history today.\n"
	.string "Claiming his first Arena championship…\p"
	.string "It's the pink puffball himself!\n"
	.string "KIRBY WINS!$"

WaddleDeeArena_EventScript_GrandFinals_Text_7:
# 567 "data/maps/WaddleDeeArena/scripts.pory"
	.string "KIRBY! KIRBY! KIRBY! KIRBY!$"

WaddleDeeArena_EventScript_GrandFinals_Text_8:
# 573 "data/maps/WaddleDeeArena/scripts.pory"
	.string "{SPEAKER NAME_MAGOLOR}What a humbling loss… I'll just have to\n"
	.string "try harder next time! Hee hee hee…!$"

WaddleDeeArena_EventScript_Victory_Text_0:
# 597 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Congratulations again on conquering\n"
	.string "the Waddle Dee Arena, Kirby!\p"
	.string "Here's your reward to commemorate the\n"
	.string "occasion: the Waddle Dee Brooch!$"

WaddleDeeArena_EventScript_Victory_Text_1:
# 602 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Kirby received the Waddle Dee Brooch\n"
	.string "from Commentator Waddle Dee!$"

WaddleDeeArena_EventScript_Victory_Text_2:
# 609 "data/maps/WaddleDeeArena/scripts.pory"
	.string "This Brooch certifies that you'll be\n"
	.string "able to safely train stronger Helpers.\p"
	.string "I hope you'll keep visiting different\n"
	.string "Arenas and claiming more Brooches!$"

WaddleDeeArena_EventScript_Break_Text_0:
# 621 "data/maps/WaddleDeeArena/scripts.pory"
	.string "There's just two rounds to go now.\n"
	.string "Are you ready for the next battle?$"

WaddleDeeArena_EventScript_Break_Text_1:
# 626 "data/maps/WaddleDeeArena/scripts.pory"
	.string "The last battle in the preliminary\n"
	.string "bracket awaits! Are you prepared?$"

WaddleDeeArena_EventScript_Break_Text_2:
# 631 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Now then, Kirby: the grand finals await!\n"
	.string "Are you ready for the TRUE final bout?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_0:
# 665 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You have {COLOR RED}one full-party heal{COLOR DARK_GRAY} left.\n"
	.string "Would you like to use it now?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_1:
# 673 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Your party has been fully healed!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_2:
# 685 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Unfortunately, you've already used up\n"
	.string "all of your heals, Kirby.\p"
	.string "You'll have to tough out the remaining\n"
	.string "battles with your party as they are!$"

WaddleDeeArena_EventScript_ArenaHeal_Text_3:
# 695 "data/maps/WaddleDeeArena/scripts.pory"
	.string "You already healed up this round, Kirby!\n"
	.string "If you have any heals remaining,\l"
	.string "let's save them for future rounds, OK?$"

WaddleDeeArena_EventScript_ArenaHeal_Text_4:
# 703 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, one complimentary full-party\n"
	.string "heal for our pink warrior, coming up!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_0:
# 718 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Are you really sure you want to\n"
	.string "throw in the towel now?\p"
	.string "Just a heads up; {COLOR RED}you'll have to start\n"
	.string "the tournament anew if you do{COLOR DARK_GRAY}!\p"
	.string "Are you absolutely, positively sure\n"
	.string "you want to retire now?$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_1:
# 728 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Well, sorry, folks! Looks like this\n"
	.string "promising run is being cut short!$"

WaddleDeeArena_EventScript_ForfeitConfirmation_Text_2:
# 747 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Alright, folks! Stay tuned! The grand\n"
	.string "finals will begin after a short break!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_0:
# 768 "data/maps/WaddleDeeArena/scripts.pory"
	.string "I should study up on what makes the\n"
	.string "Royal Royale so fun to play.\p"
	.string "That knowledge could be put to good\n"
	.string "use for improving my own games!\p"
	.string "Oh, yes! Kirby, you'll find my arcade\n"
	.string "on the northwest section of town.\p"
	.string "There's lots of fun games to play\n"
	.string "inside. I hope you'll check it out!$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_1:
# 782 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Huh? You're checking in on me to see\n"
	.string "if I'm doing alright?\p"
	.string "Gee, Kirby, you're one silly fellow.\n"
	.string "Of course I'm not upset!\p"
	.string "…well, okay, maybe a little…\n"
	.string "…but it's fine! A loss is a loss.\p"
	.string "Here, let me give you a little souvenir\n"
	.string "to mark our battle.$"

WaddleDeeArena_EventScript_TalkToMagolor_Text_2:
# 794 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Trick is a move that swaps your Helper's\n"
	.string "item with the target's.\p"
	.string "You might find items on your journey\n"
	.string "you think you may have no use for…\p"
	.string "But you can always make them someone\n"
	.string "else's problem! Hee hee hee!$"

WaddleDeeArena_EventScript_Tutor_Text_0:
# 811 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Having watched your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥500, I'll train\n"
	.string "them these new techniques.\p"
	.string "What do you say?\n"
	.string "Which move are you interested in?$"

WaddleDeeArena_Text_Challenger1::
# 825 "data/maps/WaddleDeeArena/scripts.pory"
	.string "For every battle that has a winner,\n"
	.string "there must be another who doesn't…$"

WaddleDeeArena_Text_Challenger2::
# 831 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Oh no?! My darling Helpers!$"

WaddleDeeArena_Text_Challenger3::
# 836 "data/maps/WaddleDeeArena/scripts.pory"
	.string "So this is the strength of someone\n"
	.string "who can reach grand finals…$"

WaddleDeeArena_Text_Magolor::
# 842 "data/maps/WaddleDeeArena/scripts.pory"
	.string "Bravo, Kirby! I'll admit, I didn't think\n"
	.string "you had it in you to defeat me.\p"
	.string "But I suppose bringing the best out of\n"
	.string "your friends is what you do, right?$"
