# 1 "data/maps/MallowGardens/scripts.pory"

# 2 "data/maps/MallowGardens/scripts.pory"
MallowGardens_MapScripts::
# 3 "data/maps/MallowGardens/scripts.pory"
	.byte 0

MallowGardens_EventScript_Sign::
# 8 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/MallowGardens/scripts.pory"
	closemessage
	return


MallowGardens_EventScript_CastleSign::
# 15 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_CastleSign_Text_0, MSGBOX_SIGN
# 17 "data/maps/MallowGardens/scripts.pory"
	closemessage
	return


MallowGardens_EventScript_WaddleDee1::
# 22 "data/maps/MallowGardens/scripts.pory"
	lock
# 23 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 24 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_WaddleDee1_Text_0
# 26 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Gentleman::
# 31 "data/maps/MallowGardens/scripts.pory"
	lock
# 32 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Gentleman_Text_0
# 37 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_WaddleDee2::
# 42 "data/maps/MallowGardens/scripts.pory"
	lock
# 43 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 44 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_WaddleDee2_Text_0
# 48 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_WaddleDee3::
# 53 "data/maps/MallowGardens/scripts.pory"
	lock
# 54 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 55 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_WaddleDee3_Text_0
# 66 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Fluff::
# 71 "data/maps/MallowGardens/scripts.pory"
	lock
# 72 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 73 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Fluff_Text_0
# 78 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Worker::
# 83 "data/maps/MallowGardens/scripts.pory"
	lock
# 84 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 85 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Worker_Text_0
# 93 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Chef::
# 98 "data/maps/MallowGardens/scripts.pory"
	lock
# 99 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 100 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Chef_Text_0
# 109 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Socialite::
# 114 "data/maps/MallowGardens/scripts.pory"
	lock
# 115 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 116 "data/maps/MallowGardens/scripts.pory"
	goto_if_unset FLAG_RECEIVED_6_SODA_POP, MallowGardens_EventScript_Socialite_2
MallowGardens_EventScript_Socialite_1:
# 124 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Socialite_Text_1
# 126 "data/maps/MallowGardens/scripts.pory"
	release
	return

MallowGardens_EventScript_Socialite_2:
# 118 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Socialite_Text_0
# 121 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_SODA_POP, 2
# 122 "data/maps/MallowGardens/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
	goto MallowGardens_EventScript_Socialite_1


MallowGardens_EventScript_Parasol::
# 131 "data/maps/MallowGardens/scripts.pory"
	lock
# 132 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 133 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Parasol_Text_0
# 139 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_TriggerLeft::
# 144 "data/maps/MallowGardens/scripts.pory"
	lockall
# 145 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 146 "data/maps/MallowGardens/scripts.pory"
	setobjectxy LOCALID_COURTYARD_DEDEDE, 33, 43
# 147 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_TriggerCenter::
# 152 "data/maps/MallowGardens/scripts.pory"
	lockall
# 153 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 154 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_TriggerRight::
# 159 "data/maps/MallowGardens/scripts.pory"
	lockall
# 160 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 161 "data/maps/MallowGardens/scripts.pory"
	setobjectxy LOCALID_COURTYARD_DEDEDE, 35, 43
# 162 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_Dedede::
# 167 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_0
# 168 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 169 "data/maps/MallowGardens/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 170 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_0
# 175 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_1
# 176 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 177 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, Common_Movement_ExclamationMark
# 178 "data/maps/MallowGardens/scripts.pory"
	playse SE_PIN
# 179 "data/maps/MallowGardens/scripts.pory"
	waitse
# 180 "data/maps/MallowGardens/scripts.pory"
	delay 30
# 181 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_1
# 199 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 200 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_2
# 201 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 202 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_2
# 204 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 205 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_3
# 206 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 207 "data/maps/MallowGardens/scripts.pory"
	playse SE_WALL_HIT
# 208 "data/maps/MallowGardens/scripts.pory"
	waitse
# 209 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_3
# 214 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 215 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_4
# 216 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 217 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_4
# 230 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 231 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_5
# 232 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 233 "data/maps/MallowGardens/scripts.pory"
	fadedefaultbgm
# 234 "data/maps/MallowGardens/scripts.pory"
	removeobject LOCALID_COURTYARD_DEDEDE
# 235 "data/maps/MallowGardens/scripts.pory"
	setvar VAR_MALLOW_COURTYARD_STATE, 1
# 236 "data/maps/MallowGardens/scripts.pory"
	releaseall
	return


MallowGardens_EventScript_Soldier::
# 241 "data/maps/MallowGardens/scripts.pory"
	lockall
# 242 "data/maps/MallowGardens/scripts.pory"
	compare VAR_MALLOW_COURTYARD_STATE, 2
	goto_if_ne MallowGardens_EventScript_Soldier_2
MallowGardens_EventScript_Soldier_1:
# 301 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 302 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_4
# 315 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_Soldier_Movement_0
# 316 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 317 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_5
# 319 "data/maps/MallowGardens/scripts.pory"
	release
	return

MallowGardens_EventScript_Soldier_2:
# 244 "data/maps/MallowGardens/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, 0
# 245 "data/maps/MallowGardens/scripts.pory"
	getplayerxy VAR_TEMP_5, VAR_TEMP_6
# 246 "data/maps/MallowGardens/scripts.pory"
	compare VAR_TEMP_5, 64
	goto_if_eq MallowGardens_EventScript_Soldier_5
# 256 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_Soldier_Movement_1
# 257 "data/maps/MallowGardens/scripts.pory"
	waitmovement
MallowGardens_EventScript_Soldier_4:
# 259 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_0, MSGBOX_YESNO
# 267 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_EventScript_Soldier_8
# 297 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_5:
# 248 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, Common_Movement_ExclamationMark
# 249 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 250 "data/maps/MallowGardens/scripts.pory"
	delay 60
# 251 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_PLAYER, MallowGardens_EventScript_Soldier_Movement_0
# 252 "data/maps/MallowGardens/scripts.pory"
	waitmovement
	goto MallowGardens_EventScript_Soldier_4

MallowGardens_EventScript_Soldier_8:
# 269 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_1, MSGBOX_YESNO
# 270 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_EventScript_Soldier_11
# 292 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_11:
# 272 "data/maps/MallowGardens/scripts.pory"
	message MallowGardens_EventScript_Soldier_Text_2
# 274 "data/maps/MallowGardens/scripts.pory"
	waitmessage
# 275 "data/maps/MallowGardens/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, MallowGardens_Text_NoRegrets, MallowGardens_Text_No
# 276 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MallowGardens_EventScript_Soldier_14
# 287 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_14:
# 278 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_3
# 280 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_4, MallowGardens_Text_SoldierDefeated
# 281 "data/maps/MallowGardens/scripts.pory"
	setvar VAR_MALLOW_COURTYARD_STATE, 2
# 282 "data/maps/MallowGardens/scripts.pory"
	release
	end


MallowGardens_EventScript_SoldierDeny::
# 334 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_SoldierDeny_Text_0
# 336 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 337 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_SoldierDeny_Movement_0
# 338 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 339 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_PLAYER, MallowGardens_EventScript_SoldierDeny_Movement_1
# 340 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 341 "data/maps/MallowGardens/scripts.pory"
	fadedefaultbgm
# 342 "data/maps/MallowGardens/scripts.pory"
	release
	end


MallowGardens_EventScript_Aide::
# 348 "data/maps/MallowGardens/scripts.pory"
	lock
# 349 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 350 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Aide_Text_0
# 360 "data/maps/MallowGardens/scripts.pory"
	playse SE_SELECT
# 361 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 362 "data/maps/MallowGardens/scripts.pory"
	delay 60
# 363 "data/maps/MallowGardens/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 364 "data/maps/MallowGardens/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge MallowGardens_EventScript_Aide_1
# 368 "data/maps/MallowGardens/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_lt MallowGardens_EventScript_Aide_2
	return

MallowGardens_EventScript_Aide_1:
# 366 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_AideSuccess
	return

MallowGardens_EventScript_Aide_2:
# 370 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_AideFailure
	return


MallowGardens_EventScript_AideSuccess::
# 376 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideSuccess_Text_0
# 383 "data/maps/MallowGardens/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedDowsingMachine, ITEM_DOWSING_MACHINE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 384 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_TM12
# 385 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_NUGGET
# 386 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_GREAT_BALL, 10
# 387 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideSuccess_Text_1
# 398 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 399 "data/maps/MallowGardens/scripts.pory"
	playse SE_EXIT
# 400 "data/maps/MallowGardens/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 401 "data/maps/MallowGardens/scripts.pory"
	setflag FLAG_BINDER_GATE_03
# 402 "data/maps/MallowGardens/scripts.pory"
	removeobject LOCALID_COURTYARD_AIDE
# 403 "data/maps/MallowGardens/scripts.pory"
	delay 30
# 404 "data/maps/MallowGardens/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 405 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_AideFailure::
# 410 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideFailure_Text_0
# 418 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_SoldierAlt::
# 423 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_single TRAINER_RICKY_4, MallowGardens_Text_SoldierIntro, MallowGardens_Text_SoldierDefeated, MallowGardens_Text_SoldierPost
	return


MallowGardens_EventScript_Trainer::
# 447 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, MallowGardens_Text_TrainerIntro, MallowGardens_Text_TrainerDefeated
# 448 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_Text_TrainerPost, MSGBOX_AUTOCLOSE
	return


# 167 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_0:
# 167 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 167 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 167 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 167 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 167 "data/maps/MallowGardens/scripts.pory"
	walk_down
	step_end

# 175 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_1:
# 175 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
# 175 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
# 175 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
	step_end

# 200 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_2:
# 200 "data/maps/MallowGardens/scripts.pory"
	walk_slow_up
	step_end

# 205 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_3:
# 205 "data/maps/MallowGardens/scripts.pory"
	walk_fast_down
	step_end

# 215 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_4:
# 215 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 215 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_slow_down
	step_end

# 231 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_5:
# 231 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 231 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 231 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 231 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 231 "data/maps/MallowGardens/scripts.pory"
	walk_up
	step_end

# 251 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Soldier_Movement_0:
# 251 "data/maps/MallowGardens/scripts.pory"
	face_right
	step_end

# 256 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Soldier_Movement_1:
# 256 "data/maps/MallowGardens/scripts.pory"
	face_up
	step_end

# 337 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_SoldierDeny_Movement_0:
# 337 "data/maps/MallowGardens/scripts.pory"
	face_left
	step_end

# 339 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_SoldierDeny_Movement_1:
# 339 "data/maps/MallowGardens/scripts.pory"
	walk_up
	step_end

MallowGardens_EventScript_Sign_Text_0:
# 8 "data/maps/MallowGardens/scripts.pory"
	.string "MALLOW COURTYARD\n"
	.string "Behold Dream Land's largest garden.$"

MallowGardens_EventScript_CastleSign_Text_0:
# 15 "data/maps/MallowGardens/scripts.pory"
	.string "Now approaching: MALLOW CASTLE\n"
	.string "A lavish palace from a bygone age.$"

MallowGardens_EventScript_WaddleDee1_Text_0:
# 24 "data/maps/MallowGardens/scripts.pory"
	.string "Wowww… I was hoping to find a rest area\n"
	.string "here, but this place is massive!$"

MallowGardens_EventScript_Gentleman_Text_0:
# 32 "data/maps/MallowGardens/scripts.pory"
	.string "Goodness… what's with that dreadful\n"
	.string "looking castle over there?\p"
	.string "It's nothing like Mallow Castle…\n"
	.string "looking at it gives me the creeps…$"

MallowGardens_EventScript_WaddleDee2_Text_0:
# 44 "data/maps/MallowGardens/scripts.pory"
	.string "Isn't running through the grass so much\n"
	.string "fun? You never know what to expect!\p"
	.string "Oh! Here comes another Helper! Yaaay!$"

MallowGardens_EventScript_WaddleDee3_Text_0:
# 55 "data/maps/MallowGardens/scripts.pory"
	.string "Down there…\p"
	.string "There's a really menacing guard. I think\n"
	.string "they're trying to protect something…\p"
	.string "I tried talking to them, but they sent\n"
	.string "out some scary strong Helpers to force\l"
	.string "me back to the courtyard!\p"
	.string "If I were you, I'd stay as far away\n"
	.string "from there as possible.$"

MallowGardens_EventScript_Fluff_Text_0:
# 73 "data/maps/MallowGardens/scripts.pory"
	.string "How come this castle isn't one of the\n"
	.string "Great King's? Does he not want it?\p"
	.string "I dunno, I think it looks pretty big…\n"
	.string "or maybe it belongs to someone else?$"

MallowGardens_EventScript_Worker_Text_0:
# 85 "data/maps/MallowGardens/scripts.pory"
	.string "I saw a few strangely-dressed girls\n"
	.string "heading inside the castle earlier.\p"
	.string "They mentioned having some kind of\n"
	.string "“unbeatable arena strategy” planned…\p"
	.string "The competition in the Royal Royale\n"
	.string "keeps getting tougher and tougher, hm?$"

MallowGardens_EventScript_Chef_Text_0:
# 100 "data/maps/MallowGardens/scripts.pory"
	.string "Have you looked up at the night sky\n"
	.string "lately, Kirby?\p"
	.string "Maybe it's just my imagination, but I\n"
	.string "feel like lately I'm seeing fewer\l"
	.string "stars shining than usual.\p"
	.string "You don't think that means anything\n"
	.string "bad, does it?$"

MallowGardens_EventScript_Socialite_Text_0:
# 118 "data/maps/MallowGardens/scripts.pory"
	.string "Oh, your Helpers are cute! Are you\n"
	.string "making sure to take care of them?\l"
	.string "Here, they might appreciate this.$"

MallowGardens_EventScript_Socialite_Text_1:
# 124 "data/maps/MallowGardens/scripts.pory"
	.string "Waddle Dee Café has all sorts of treats\n"
	.string "I'm sure your Helpers would love.$"

MallowGardens_EventScript_Parasol_Text_0:
# 133 "data/maps/MallowGardens/scripts.pory"
	.string "Just wondering, Kirby… why don't you fly\n"
	.string "over the Star Blocks on the road?\p"
	.string "Oh, I see… you're worried about the\n"
	.string "Helpers of yours that can't fly?\l"
	.string "That's so considerate of you!$"

MallowGardens_EventScript_Dedede_Text_0:
# 170 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Well, howdy-do, Kirby! Fancy seein' ya\n"
	.string "all the way out here!\p"
	.string "Ya haven't given up on the Royal Royale\n"
	.string "yet, have ya? Lemme just see here…$"

MallowGardens_EventScript_Dedede_Text_1:
# 181 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Whoa-ho! Ya already got two brooches!\n"
	.string "That's better than I was expecting!\p"
	.string "And you're fillin' out yer cards nicely\n"
	.string "too. Heard so from the library staff!\l"
	.string "Thanks for bein' a real pal, Kirby!\p"
	.string "It'll probably get tougher from here.\n"
	.string "Not sure how much more you can handle…\p"
	.string "But I bet you've got a plan, yeah? Take\n"
	.string "on another arena or two, then wait 'till\l"
	.string "the avalanche in town's all cleaned up?\p"
	.string "…\p"
	.string "Sorry, did I hear ya say you're gonna\n"
	.string "look into the blockade north o' town?$"

MallowGardens_EventScript_Dedede_Text_2:
# 202 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Uh huh… look, Kirby, I like ya, so\n"
	.string "here's a little piece of advice from me:$"

MallowGardens_EventScript_Dedede_Text_3:
# 209 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Don't.\p"
	.string "You.\p"
	.string "Dare.$"

MallowGardens_EventScript_Dedede_Text_4:
# 217 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Ahem… you know, we've all got our own\n"
	.string "business to take care of, yeah?\p"
	.string "Best not to stick your nose in other\n"
	.string "folk's affairs… wherever your nose is…\p"
	.string "Just focus on playin' this game and\n"
	.string "havin' some fun, got it? \p"
	.string "Then you can go home, take a nap or\n"
	.string "somethin', and not bother me.\p"
	.string "Peace!$"

MallowGardens_EventScript_Soldier_Text_0:
# 259 "data/maps/MallowGardens/scripts.pory"
	.string "Halt! Under the Great King's orders,\n"
	.string "nobody is allowed through here!\p"
	.string "Yes, that means you, Kirby. If I have\n"
	.string "to teach you this lesson the hard way,\l"
	.string "I'm not afraid to get my hands dirty.\p"
	.string "Are you really going to cross me?$"

MallowGardens_EventScript_Soldier_Text_1:
# 269 "data/maps/MallowGardens/scripts.pory"
	.string "Are you sure?$"

MallowGardens_EventScript_Soldier_Text_2:
# 272 "data/maps/MallowGardens/scripts.pory"
	.string "You're going to lose this battle.\n"
	.string "You're sure you won't regret this?$"

MallowGardens_EventScript_Soldier_Text_3:
# 278 "data/maps/MallowGardens/scripts.pory"
	.string "Well, that's how it is, then. Enjoy your\n"
	.string "trip back to the break room!$"

MallowGardens_EventScript_Soldier_Text_4:
# 302 "data/maps/MallowGardens/scripts.pory"
	.string "That castle… it appeared out of thin\n"
	.string "air here, not too long ago.\p"
	.string "When King Dedede heard the news, this\n"
	.string "horrible look came over his face…\l"
	.string "and he ordered it to be guarded.\p"
	.string "Whatever's in there, at all costs, we\n"
	.string "can't allow it to get out of there.\p"
	.string "Kirby… I know you're strong, but…\p"
	.string "…$"

MallowGardens_EventScript_Soldier_Text_5:
# 317 "data/maps/MallowGardens/scripts.pory"
	.string "The soldier looked away, without saying\n"
	.string "another word.$"

MallowGardens_EventScript_SoldierDeny_Text_0:
# 334 "data/maps/MallowGardens/scripts.pory"
	.string "That's right. Go on, and don't set foot\n"
	.string "near this place ever again.$"

MallowGardens_EventScript_Aide_Text_0:
# 350 "data/maps/MallowGardens/scripts.pory"
	.string "Hello, Kirby!\n"
	.string "I'm a researcher from Waddle Dee Town.\p"
	.string "The Great King has sent me here to\n"
	.string "take a look at your Info Card Binder.\p"
	.string "Specifically, we're hoping to see that\n"
	.string "you've recruited at least {COLOR RED}30{COLOR DARK_GRAY} Helpers.\p"
	.string "Now then, may I see your binder?$"

MallowGardens_EventScript_AideSuccess_Text_0:
# 376 "data/maps/MallowGardens/scripts.pory"
	.string "Wonderful! You've already registered\n"
	.string "{STR_VAR_2} Helpers so far!\p"
	.string "As a reward for your due diligence,\n"
	.string "I have here a care package for you.\p"
	.string "Please, go ahead and open it!$"

MallowGardens_EventScript_AideSuccess_Text_1:
# 387 "data/maps/MallowGardens/scripts.pory"
	.string "Of particular note is a new tool made\n"
	.string "at the lab: the Dowsing Machine.\p"
	.string "You can use it to find items on the\n"
	.string "ground that are hidden from plain sight.\p"
	.string "Such items might be of benefit to you\n"
	.string "and your Helpers.\p"
	.string "Now then, I must report the good news\n"
	.string "to the Great King. Carry on!$"

MallowGardens_EventScript_AideFailure_Text_0:
# 410 "data/maps/MallowGardens/scripts.pory"
	.string "Hm… it seems you've only registered\n"
	.string "{STR_VAR_2} Helpers so far.\l"
	.string "The Great King will be most displeased.\p"
	.string "I'm sorry, but I can't return like this.\p"
	.string "Could I ask you to return once you've\n"
	.string "recruited at least {COLOR RED}30{COLOR DARK_GRAY} Helpers?$"

MallowGardens_Text_NoRegrets::
# 322 "data/maps/MallowGardens/scripts.pory"
	.string "NO REGRETS!$"

MallowGardens_Text_No::
# 327 "data/maps/MallowGardens/scripts.pory"
	.string "YES REGRETS$"

MallowGardens_Text_SoldierIntro::
# 426 "data/maps/MallowGardens/scripts.pory"
	.string "Halt! Under the Great King's orders,\n"
	.string "nobody is allowed through here!\p"
	.string "You and your Helpers are going to have\n"
	.string "have to learn this lesson the hard way!$"

MallowGardens_Text_SoldierDefeated::
# 435 "data/maps/MallowGardens/scripts.pory"
	.string "What?! Forgive me, Great King!$"

MallowGardens_Text_SoldierPost::
# 440 "data/maps/MallowGardens/scripts.pory"
	.string "Look$"

MallowGardens_Text_TrainerIntro::
# 451 "data/maps/MallowGardens/scripts.pory"
	.string "I sniffed it! From aaall the way at the\n"
	.string "beach, squeak! There's treasure here!$"

MallowGardens_Text_TrainerDefeated::
# 457 "data/maps/MallowGardens/scripts.pory"
	.string "Squeak… maybe that treasure is better\n"
	.string "off in your hands, after all.$"

MallowGardens_Text_TrainerPost::
# 463 "data/maps/MallowGardens/scripts.pory"
	.string "I've gotten pretty far from the rest of\n"
	.string "the squad… how will I get back?$"
