# 1 "data/maps/FruityForest/scripts.pory"

# 2 "data/maps/FruityForest/scripts.pory"
FruityForest_MapScripts::
# 3 "data/maps/FruityForest/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FruityForest_OnFrame
# 4 "data/maps/FruityForest/scripts.pory"
	.byte 0
# 5 "data/maps/FruityForest/scripts.pory"

# 6 "data/maps/FruityForest/scripts.pory"
FruityForest_OnFrame::
# 7 "data/maps/FruityForest/scripts.pory"
	map_script_2 VAR_FRUITY_FOREST_STATE, 0, FruityForest_EventScript_FirstEntrance
# 8 "data/maps/FruityForest/scripts.pory"
	.2byte 0

FruityForest_EventScript_Trainer1::
# 12 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, FruityForest_Text_Trainer1Intro, FruityForest_Text_Trainer1Defeated
# 13 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_Trainer2::
# 38 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, FruityForest_Text_Trainer2Intro, FruityForest_Text_Trainer2Defeated
# 39 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_Trainer3::
# 60 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_MATT, FruityForest_Text_Trainer3Intro, FruityForest_Text_Trainer3Defeated
# 61 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_Trainer4::
# 86 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, FruityForest_Text_Trainer4Intro, FruityForest_Text_Trainer4Defeated
# 87 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_Trainer5::
# 113 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, FruityForest_Text_Trainer5Intro, FruityForest_Text_Trainer5Defeated
# 114 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_Trainer6::
# 139 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, FruityForest_Text_Trainer6Intro, FruityForest_Text_Trainer6Defeated
# 140 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer6Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_Trainer7::
# 165 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE, FruityForest_Text_Trainer7Intro, FruityForest_Text_Trainer7Defeated
# 166 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer7Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_Trainer8::
# 193 "data/maps/FruityForest/scripts.pory"
	trainerbattle_single TRAINER_LEAH, FruityForest_Text_Trainer8Intro, FruityForest_Text_Trainer8Defeated
# 194 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_Text_Trainer8Post, MSGBOX_AUTOCLOSE
	return


FruityForest_EventScript_WaddleDee::
# 222 "data/maps/FruityForest/scripts.pory"
	lock
# 223 "data/maps/FruityForest/scripts.pory"
	faceplayer
# 224 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_WaddleDee_Text_0
# 229 "data/maps/FruityForest/scripts.pory"
	release
	return


FruityForest_EventScript_BandanaWaddleDee::
# 234 "data/maps/FruityForest/scripts.pory"
	lock
# 235 "data/maps/FruityForest/scripts.pory"
	faceplayer
# 236 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_BandanaWaddleDee_Text_0
# 244 "data/maps/FruityForest/scripts.pory"
	release
	return


FruityForest_EventScript_FirstEntrance::
# 249 "data/maps/FruityForest/scripts.pory"
	lock
# 250 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_PITCH_MAMA, DIR_SOUTH
# 251 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_BWD_FOREST, DIR_SOUTH
# 252 "data/maps/FruityForest/scripts.pory"
	playse SE_PIN
# 253 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH_MAMA, Common_Movement_ExclamationMark
# 254 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 255 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_FirstEntrance_Text_0
# 256 "data/maps/FruityForest/scripts.pory"
	closemessage
# 257 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PLAYER, FruityForest_EventScript_FirstEntrance_Movement_0
# 258 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 259 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH_MAMA, FruityForest_EventScript_FirstEntrance_Movement_1
# 260 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 261 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_FirstEntrance_Text_1
# 269 "data/maps/FruityForest/scripts.pory"
	setvar VAR_FRUITY_FOREST_STATE, 1
# 270 "data/maps/FruityForest/scripts.pory"
	release
	return


FruityForest_EventScript_PitchMama::
# 275 "data/maps/FruityForest/scripts.pory"
	lock
# 276 "data/maps/FruityForest/scripts.pory"
	goto_if_set FLAG_FOUND_PITCH, FruityForest_EventScript_PitchMama_2
# 367 "data/maps/FruityForest/scripts.pory"
	faceplayer
# 368 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_11
FruityForest_EventScript_PitchMama_1:
# 376 "data/maps/FruityForest/scripts.pory"
	release
	return

FruityForest_EventScript_PitchMama_2:
# 278 "data/maps/FruityForest/scripts.pory"
	getobjectfacingdirection LOCALID_PLAYER, VAR_RESULT
# 279 "data/maps/FruityForest/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq FruityForest_EventScript_PitchMama_6
FruityForest_EventScript_PitchMama_5:
# 284 "data/maps/FruityForest/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq FruityForest_EventScript_PitchMama_9
FruityForest_EventScript_PitchMama_8:
# 289 "data/maps/FruityForest/scripts.pory"
	addobject LOCALID_PITCH
# 290 "data/maps/FruityForest/scripts.pory"
	setobjectxy LOCALID_PITCH, 18, 42
# 291 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH, FruityForest_EventScript_PitchMama_Movement_2
# 292 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 293 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_PITCH_MAMA, DIR_WEST
# 294 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_BWD_FOREST, DIR_WEST
# 295 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_0
# 296 "data/maps/FruityForest/scripts.pory"
	closemessage
# 297 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH_MAMA, FruityForest_EventScript_PitchMama_Movement_3
# 298 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 299 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_1
# 301 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_PITCH_MAMA, DIR_SOUTH
# 302 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_2
# 304 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_3
# 309 "data/maps/FruityForest/scripts.pory"
	closemessage
# 310 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH_MAMA, FruityForest_EventScript_PitchMama_Movement_4
# 311 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 312 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_4
# 316 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH_MAMA, FruityForest_EventScript_PitchMama_Movement_5
# 317 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_5
# 323 "data/maps/FruityForest/scripts.pory"
	closemessage
# 324 "data/maps/FruityForest/scripts.pory"
	playse SE_LEDGE
# 325 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH, FruityForest_EventScript_PitchMama_Movement_6
# 326 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 327 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_6
# 328 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_PITCH, DIR_SOUTH
# 329 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_7
# 331 "data/maps/FruityForest/scripts.pory"
	setspeaker NULL
# 332 "data/maps/FruityForest/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 333 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_8
# 335 "data/maps/FruityForest/scripts.pory"
	waitfanfare
# 336 "data/maps/FruityForest/scripts.pory"
	waitmessage
# 337 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_PITCH, DIR_EAST
# 338 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_PITCH_MAMA, DIR_WEST
# 339 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_9
# 341 "data/maps/FruityForest/scripts.pory"
	closemessage
# 342 "data/maps/FruityForest/scripts.pory"
	turnobject LOCALID_BWD_FOREST, DIR_SOUTH
# 343 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PLAYER, FruityForest_EventScript_PitchMama_Movement_7
# 344 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH, FruityForest_EventScript_PitchMama_Movement_8
# 345 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH_MAMA, FruityForest_EventScript_PitchMama_Movement_9
# 346 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 347 "data/maps/FruityForest/scripts.pory"
	removeobject LOCALID_PITCH_MAMA
# 348 "data/maps/FruityForest/scripts.pory"
	playse SE_EXIT
# 349 "data/maps/FruityForest/scripts.pory"
	delay 30
# 350 "data/maps/FruityForest/scripts.pory"
	removeobject LOCALID_PITCH
# 351 "data/maps/FruityForest/scripts.pory"
	playse SE_EXIT
# 352 "data/maps/FruityForest/scripts.pory"
	waitse
# 353 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_PitchMama_Text_10
# 358 "data/maps/FruityForest/scripts.pory"
	closemessage
# 359 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_BWD_FOREST, FruityForest_EventScript_PitchMama_Movement_10
# 360 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 361 "data/maps/FruityForest/scripts.pory"
	removeobject LOCALID_BWD_FOREST
# 362 "data/maps/FruityForest/scripts.pory"
	setvar VAR_FRUITY_FOREST_STATE, 3
# 363 "data/maps/FruityForest/scripts.pory"
	setflag FLAG_HIDE_FRUITY_FOREST_NPCS
	goto FruityForest_EventScript_PitchMama_1

FruityForest_EventScript_PitchMama_6:
# 281 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PLAYER, FruityForest_EventScript_PitchMama_Movement_0
# 282 "data/maps/FruityForest/scripts.pory"
	waitmovement
	goto FruityForest_EventScript_PitchMama_5

FruityForest_EventScript_PitchMama_9:
# 286 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PLAYER, FruityForest_EventScript_PitchMama_Movement_1
# 287 "data/maps/FruityForest/scripts.pory"
	waitmovement
	goto FruityForest_EventScript_PitchMama_8


FruityForest_EventScript_Pitch::
# 381 "data/maps/FruityForest/scripts.pory"
	lock
# 382 "data/maps/FruityForest/scripts.pory"
	faceplayer
# 383 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_Pitch_Text_0
# 406 "data/maps/FruityForest/scripts.pory"
	closemessage
# 407 "data/maps/FruityForest/scripts.pory"
	getobjectfacingdirection LOCALID_PITCH, VAR_RESULT
# 408 "data/maps/FruityForest/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq FruityForest_EventScript_Pitch_2
# 413 "data/maps/FruityForest/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq FruityForest_EventScript_Pitch_3
# 418 "data/maps/FruityForest/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq FruityForest_EventScript_Pitch_4
# 423 "data/maps/FruityForest/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq FruityForest_EventScript_Pitch_5
FruityForest_EventScript_Pitch_1:
# 428 "data/maps/FruityForest/scripts.pory"
	removeobject LOCALID_PITCH
# 429 "data/maps/FruityForest/scripts.pory"
	setflag FLAG_FOUND_PITCH
# 430 "data/maps/FruityForest/scripts.pory"
	setvar VAR_FRUITY_FOREST_STATE, 2
# 431 "data/maps/FruityForest/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 432 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_Pitch_Text_1
# 434 "data/maps/FruityForest/scripts.pory"
	waitfanfare
# 435 "data/maps/FruityForest/scripts.pory"
	waitmessage
# 436 "data/maps/FruityForest/scripts.pory"
	release
	return

FruityForest_EventScript_Pitch_2:
# 410 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH, FruityForest_EventScript_FirstEntrance_Movement_0
# 411 "data/maps/FruityForest/scripts.pory"
	waitmovement
	goto FruityForest_EventScript_Pitch_1

FruityForest_EventScript_Pitch_3:
# 415 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH, FruityForest_EventScript_Pitch_Movement_0
# 416 "data/maps/FruityForest/scripts.pory"
	waitmovement
	goto FruityForest_EventScript_Pitch_1

FruityForest_EventScript_Pitch_4:
# 420 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH, FruityForest_EventScript_Pitch_Movement_1
# 421 "data/maps/FruityForest/scripts.pory"
	waitmovement
	goto FruityForest_EventScript_Pitch_1

FruityForest_EventScript_Pitch_5:
# 425 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PITCH, FruityForest_EventScript_Pitch_Movement_2
# 426 "data/maps/FruityForest/scripts.pory"
	waitmovement
	goto FruityForest_EventScript_Pitch_1


FruityForest_EventScript_ReturnPitch::
# 441 "data/maps/FruityForest/scripts.pory"
	lock
# 442 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_BWD_FOREST, FruityForest_EventScript_ReturnPitch_Movement_0
# 443 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 444 "data/maps/FruityForest/scripts.pory"
	msgbox FruityForest_EventScript_ReturnPitch_Text_0
# 445 "data/maps/FruityForest/scripts.pory"
	closemessage
# 446 "data/maps/FruityForest/scripts.pory"
	applymovement LOCALID_PLAYER, FruityForest_EventScript_Pitch_Movement_1
# 447 "data/maps/FruityForest/scripts.pory"
	waitmovement
# 448 "data/maps/FruityForest/scripts.pory"
	release
	return


# 257 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_FirstEntrance_Movement_0:
# 257 "data/maps/FruityForest/scripts.pory"
	walk_up
	step_end

# 259 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_FirstEntrance_Movement_1:
# 259 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_down
# 259 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_down
# 259 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_down
# 259 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_down
# 259 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_down
# 259 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_down
	step_end

# 281 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_0:
# 281 "data/maps/FruityForest/scripts.pory"
	walk_left
# 281 "data/maps/FruityForest/scripts.pory"
	walk_down
# 281 "data/maps/FruityForest/scripts.pory"
	walk_down
# 281 "data/maps/FruityForest/scripts.pory"
	walk_right
# 281 "data/maps/FruityForest/scripts.pory"
	walk_in_place_up
	step_end

# 286 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_1:
# 286 "data/maps/FruityForest/scripts.pory"
	walk_down
# 286 "data/maps/FruityForest/scripts.pory"
	walk_right
# 286 "data/maps/FruityForest/scripts.pory"
	walk_in_place_up
	step_end

# 291 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_2:
# 291 "data/maps/FruityForest/scripts.pory"
	walk_left
# 291 "data/maps/FruityForest/scripts.pory"
	walk_up
# 291 "data/maps/FruityForest/scripts.pory"
	walk_in_place_right
	step_end

# 297 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_3:
# 297 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/FruityForest/scripts.pory"
	walk_in_place_faster_left
	step_end

# 310 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_4:
# 310 "data/maps/FruityForest/scripts.pory"
	face_left
# 310 "data/maps/FruityForest/scripts.pory"
	delay_16
# 310 "data/maps/FruityForest/scripts.pory"
	delay_16
# 310 "data/maps/FruityForest/scripts.pory"
	face_down
# 310 "data/maps/FruityForest/scripts.pory"
	delay_16
# 310 "data/maps/FruityForest/scripts.pory"
	delay_16
# 310 "data/maps/FruityForest/scripts.pory"
	face_left
# 310 "data/maps/FruityForest/scripts.pory"
	delay_16
# 310 "data/maps/FruityForest/scripts.pory"
	delay_16
	step_end

# 316 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_5:
# 316 "data/maps/FruityForest/scripts.pory"
	face_down
# 316 "data/maps/FruityForest/scripts.pory"
	delay_16
# 316 "data/maps/FruityForest/scripts.pory"
	delay_16
	step_end

# 325 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_6:
# 325 "data/maps/FruityForest/scripts.pory"
	jump_in_place_right
	step_end

# 343 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_7:
# 343 "data/maps/FruityForest/scripts.pory"
	walk_left
# 343 "data/maps/FruityForest/scripts.pory"
	walk_in_place_right
	step_end

# 344 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_8:
# 344 "data/maps/FruityForest/scripts.pory"
	walk_right
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
# 344 "data/maps/FruityForest/scripts.pory"
	walk_down
	step_end

# 345 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_9:
# 345 "data/maps/FruityForest/scripts.pory"
	walk_down
# 345 "data/maps/FruityForest/scripts.pory"
	walk_down
# 345 "data/maps/FruityForest/scripts.pory"
	walk_down
# 345 "data/maps/FruityForest/scripts.pory"
	walk_down
# 345 "data/maps/FruityForest/scripts.pory"
	walk_down
# 345 "data/maps/FruityForest/scripts.pory"
	walk_down
# 345 "data/maps/FruityForest/scripts.pory"
	walk_down
	step_end

# 359 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_PitchMama_Movement_10:
# 359 "data/maps/FruityForest/scripts.pory"
	walk_up
# 359 "data/maps/FruityForest/scripts.pory"
	walk_up
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
# 359 "data/maps/FruityForest/scripts.pory"
	walk_left
	step_end

# 415 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_Pitch_Movement_0:
# 415 "data/maps/FruityForest/scripts.pory"
	walk_down
	step_end

# 420 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_Pitch_Movement_1:
# 420 "data/maps/FruityForest/scripts.pory"
	walk_right
	step_end

# 425 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_Pitch_Movement_2:
# 425 "data/maps/FruityForest/scripts.pory"
	walk_left
	step_end

# 442 "data/maps/FruityForest/scripts.pory"
FruityForest_EventScript_ReturnPitch_Movement_0:
# 442 "data/maps/FruityForest/scripts.pory"
	walk_in_place_left
	step_end

FruityForest_EventScript_WaddleDee_Text_0:
# 224 "data/maps/FruityForest/scripts.pory"
	.string "This forest is really dense… even the\n"
	.string "little plants are tough to get around.\p"
	.string "You probably won't make it far if you\n"
	.string "don't have a good way to get past them.$"

FruityForest_EventScript_BandanaWaddleDee_Text_0:
# 236 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}…well, I didn't expect to run into you\n"
	.string "again so soon, Kirby!\p"
	.string "Do you think you can go deeper into the\n"
	.string "forest and look for Pitch?\p"
	.string "I'm watching the exit on this end just\n"
	.string "in case he comes this way…$"

FruityForest_EventScript_FirstEntrance_Text_0:
# 255 "data/maps/FruityForest/scripts.pory"
	.string "Oh, you there! Please help me!$"

FruityForest_EventScript_FirstEntrance_Text_1:
# 261 "data/maps/FruityForest/scripts.pory"
	.string "Sniffle… my poor little baby has gone\n"
	.string "missing in the forest!\p"
	.string "I've looked everywhere, and I haven't\n"
	.string "been able to find him.\p"
	.string "Please! You must help me find my\n"
	.string "darling Pitch!$"

FruityForest_EventScript_PitchMama_Text_0:
# 295 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_PITCH}Mama!$"

FruityForest_EventScript_PitchMama_Text_1:
# 299 "data/maps/FruityForest/scripts.pory"
	.string "My baby Pitch! Ohh, I'm so relieved to\n"
	.string "see you! You're not hurt, are you?$"

FruityForest_EventScript_PitchMama_Text_2:
# 302 "data/maps/FruityForest/scripts.pory"
	.string "I can't thank you enough for finding\n"
	.string "my darling son!$"

FruityForest_EventScript_PitchMama_Text_3:
# 304 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_PITCH}Mama, Kirby's going on an adventure with\n"
	.string "Helpers! Can I pleaaaase go with him?\p"
	.string "I promise I'll be safe with him! We\n"
	.string "worked together to get here!$"

FruityForest_EventScript_PitchMama_Text_4:
# 312 "data/maps/FruityForest/scripts.pory"
	.string "After all this trouble you caused,\n"
	.string "you're asking to leave AGAIN?\p"
	.string "…$"

FruityForest_EventScript_PitchMama_Text_5:
# 317 "data/maps/FruityForest/scripts.pory"
	.string "…Kirby. As much as I hate to admit it,\n"
	.string "I'm worried Pitch won't sit still.\p"
	.string "It might be time to let him spread his\n"
	.string "wings a little bit. As long as you're\l"
	.string "willing to supervise him, of course!$"

FruityForest_EventScript_PitchMama_Text_6:
# 327 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_PITCH}Yaaaaaaay! Thank you, Mama!$"

FruityForest_EventScript_PitchMama_Text_7:
# 329 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_PITCH}I know! Kirby, I'll give you my number!\n"
	.string "That way, I can come whenever you want!$"

FruityForest_EventScript_PitchMama_Text_8:
# 333 "data/maps/FruityForest/scripts.pory"
	.string "Obtained {COLOR RED}Pitch's phone number{COLOR DARK_GRAY}!\n"
	.string "Now you can call for Pitch's help!$"

FruityForest_EventScript_PitchMama_Text_9:
# 339 "data/maps/FruityForest/scripts.pory"
	.string "Now then, my little birdie, we must be on\n"
	.string "our way! Say bye to your friends!$"

FruityForest_EventScript_PitchMama_Text_10:
# 353 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}I'm glad Pitch and his mother were\n"
	.string "reunited. And you got a new teammate\l"
	.string "out of the event, too!\p"
	.string "Well, for real now, catch you later!$"

FruityForest_EventScript_PitchMama_Text_11:
# 368 "data/maps/FruityForest/scripts.pory"
	.string "Piiiiiiitch! Where aaaare youuuu?\p"
	.string "Ohhh… what if something happened to\n"
	.string "him…? No! I can't assume the worst!\p"
	.string "Please, you must help me find my\n"
	.string "darling Pitch!$"

FruityForest_EventScript_Pitch_Text_0:
# 383 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_PITCH}Kirby? Is that you?\n"
	.string "What are you doing here?\p"
	.string "Huh? Mama is looking for me? Oh,\n"
	.string "I'm sorry… I didn't mean to worry her…\p"
	.string "I really wanted to try catching a\n"
	.string "Helper, but Mama wouldn't let me.\p"
	.string "It's no fair… I came all this way\n"
	.string "thinking I could find something cool…\p"
	.string "Wait… Kirby! Those are some cool\n"
	.string "Helpers you have there!\p"
	.string "Awesome! Are you finding lots of\n"
	.string "Helpers? Can I come with you?\p"
	.string "I'll even help you! I'm really good\n"
	.string "at cutting down little trees, you see.\p"
	.string "Let's go ask Mama! With my help, finding\n"
	.string "where she's waiting should be easy!$"

FruityForest_EventScript_Pitch_Text_1:
# 432 "data/maps/FruityForest/scripts.pory"
	.string "You found Pitch! Use his ability to cut\n"
	.string "trees to take him back to the entrance!$"

FruityForest_EventScript_ReturnPitch_Text_0:
# 444 "data/maps/FruityForest/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Kirby! That way's a dead end.$"

FruityForest_Text_Trainer1Intro::
# 16 "data/maps/FruityForest/scripts.pory"
	.string "You're wondering why I would bring a\n"
	.string "parasol to a shaded place like this?$"

FruityForest_Text_Trainer1Defeated::
# 22 "data/maps/FruityForest/scripts.pory"
	.string "Tee hee! Okay, I'll tell you my secret!$"

FruityForest_Text_Trainer1Post::
# 27 "data/maps/FruityForest/scripts.pory"
	.string "You see, Capillers are known to drop\n"
	.string "from trees and startle travelers.\p"
	.string "My trusty parasol makes sure they\n"
	.string "don't land on top of me!$"

FruityForest_Text_Trainer2Intro::
# 42 "data/maps/FruityForest/scripts.pory"
	.string "Nomf nomf… hrmf? Fyou wanf a baffle?$"

FruityForest_Text_Trainer2Defeated::
# 47 "data/maps/FruityForest/scripts.pory"
	.string "Buf I'm buffy eafing… nomf chomf…$"

FruityForest_Text_Trainer2Post::
# 52 "data/maps/FruityForest/scripts.pory"
	.string "Gulp… ahh, that was delicious!\n"
	.string "Nothing like a freshly picked apple!$"

FruityForest_Text_Trainer3Intro::
# 64 "data/maps/FruityForest/scripts.pory"
	.string "If I beat you in a Helper battle, do\n"
	.string "you think you could tell me the way out?$"

FruityForest_Text_Trainer3Defeated::
# 70 "data/maps/FruityForest/scripts.pory"
	.string "I'm gonna be late…$"

FruityForest_Text_Trainer3Post::
# 75 "data/maps/FruityForest/scripts.pory"
	.string "I got lost in the forest while trying\n"
	.string "to make a delivery.\p"
	.string "I feel like I must be getting close to\n"
	.string "the exit, though…$"

FruityForest_Text_Trainer4Intro::
# 90 "data/maps/FruityForest/scripts.pory"
	.string "Well, would you look at that! Seems like\n"
	.string "I've run into a hungry customer!$"

FruityForest_Text_Trainer4Defeated::
# 96 "data/maps/FruityForest/scripts.pory"
	.string "You've got a real appetite for Helper\n"
	.string "battles, don't you?$"

FruityForest_Text_Trainer4Post::
# 102 "data/maps/FruityForest/scripts.pory"
	.string "I'm picking fresh forest ingredients\n"
	.string "while the Waddle Dee Café is closed.\p"
	.string "It should reopen soon… I hope you'll\n"
	.string "stop by Waddle Dee Town when it does!$"

FruityForest_Text_Trainer5Intro::
# 117 "data/maps/FruityForest/scripts.pory"
	.string "Bug-type Helpers are my favorite!\n"
	.string "Let me show you why!$"

FruityForest_Text_Trainer5Defeated::
# 123 "data/maps/FruityForest/scripts.pory"
	.string "My beautiful bugs…!$"

FruityForest_Text_Trainer5Post::
# 128 "data/maps/FruityForest/scripts.pory"
	.string "None of my friends understand\n"
	.string "Bug-types the way I do…\p"
	.string "If only I knew someone who loved\n"
	.string "Bug-types as much as me!$"

FruityForest_Text_Trainer6Intro::
# 143 "data/maps/FruityForest/scripts.pory"
	.string "How dare you intrude upon the sacred\n"
	.string "forest?$"

FruityForest_Text_Trainer6Defeated::
# 149 "data/maps/FruityForest/scripts.pory"
	.string "No…! The forest's power… failed me…!$"

FruityForest_Text_Trainer6Post::
# 154 "data/maps/FruityForest/scripts.pory"
	.string "I imagine the guardian of the forest\n"
	.string "would sound something like that.\p"
	.string "To be honest, though, I've never even\n"
	.string "seen what they look like…$"

FruityForest_Text_Trainer7Intro::
# 169 "data/maps/FruityForest/scripts.pory"
	.string "Waaaah! A scary forest monster!$"

FruityForest_Text_Trainer7Defeated::
# 174 "data/maps/FruityForest/scripts.pory"
	.string "Huh…? Wait, that's just Kirby!$"

FruityForest_Text_Trainer7Post::
# 179 "data/maps/FruityForest/scripts.pory"
	.string "Sorry for mistaking you for a monster,\n"
	.string "Kirby!\p"
	.string "There's so many creepy Helpers in this\n"
	.string "place, it's put me on edge.\p"
	.string "Apples that chase you down, enormous\n"
	.string "worms… ugh, I need to get out of here!$"

FruityForest_Text_Trainer8Intro::
# 197 "data/maps/FruityForest/scripts.pory"
	.string "So you know a thing or two about\n"
	.string "cutting down trees, eh?\p"
	.string "Swell! Let's have a battle between\n"
	.string "lumberjacks then!$"

FruityForest_Text_Trainer8Defeated::
# 206 "data/maps/FruityForest/scripts.pory"
	.string "Hohoho! Your Helpers are grand!$"

FruityForest_Text_Trainer8Post::
# 211 "data/maps/FruityForest/scripts.pory"
	.string "Gnarled little trees can show up in\n"
	.string "the most inconvenient of spots.\p"
	.string "It's good you can handle them, but\n"
	.string "leave the real logging to me!$"
