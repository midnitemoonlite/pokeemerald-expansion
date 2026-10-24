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
	msgbox MallowGardens_EventScript_Socialite_Text_0
# 125 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Parasol::
# 130 "data/maps/MallowGardens/scripts.pory"
	lock
# 131 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 132 "data/maps/MallowGardens/scripts.pory"
	goto_if_unset FLAG_RECEIVED_6_SODA_POP, MallowGardens_EventScript_Parasol_2
MallowGardens_EventScript_Parasol_1:
# 140 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Parasol_Text_1
# 142 "data/maps/MallowGardens/scripts.pory"
	release
	return

MallowGardens_EventScript_Parasol_2:
# 134 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Parasol_Text_0
# 137 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_SODA_POP, 2
# 138 "data/maps/MallowGardens/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
	goto MallowGardens_EventScript_Parasol_1


MallowGardens_EventScript_TriggerLeft::
# 147 "data/maps/MallowGardens/scripts.pory"
	lockall
# 148 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 149 "data/maps/MallowGardens/scripts.pory"
	setobjectxy LOCALID_COURTYARD_DEDEDE, 33, 43
# 150 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_TriggerCenter::
# 155 "data/maps/MallowGardens/scripts.pory"
	lockall
# 156 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 157 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_TriggerRight::
# 162 "data/maps/MallowGardens/scripts.pory"
	lockall
# 163 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 164 "data/maps/MallowGardens/scripts.pory"
	setobjectxy LOCALID_COURTYARD_DEDEDE, 35, 43
# 165 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_Dedede::
# 170 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_0
# 171 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 172 "data/maps/MallowGardens/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 173 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_0
# 178 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_1
# 179 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 180 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, Common_Movement_ExclamationMark
# 181 "data/maps/MallowGardens/scripts.pory"
	playse SE_PIN
# 182 "data/maps/MallowGardens/scripts.pory"
	waitse
# 183 "data/maps/MallowGardens/scripts.pory"
	delay 30
# 184 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_1
# 202 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 203 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_2
# 204 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 205 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_2
# 207 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 208 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_3
# 209 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 210 "data/maps/MallowGardens/scripts.pory"
	playse SE_WALL_HIT
# 211 "data/maps/MallowGardens/scripts.pory"
	waitse
# 212 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_3
# 217 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 218 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_4
# 219 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 220 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_4
# 233 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 234 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_5
# 235 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 236 "data/maps/MallowGardens/scripts.pory"
	fadedefaultbgm
# 237 "data/maps/MallowGardens/scripts.pory"
	removeobject LOCALID_COURTYARD_DEDEDE
# 238 "data/maps/MallowGardens/scripts.pory"
	setvar VAR_MALLOW_COURTYARD_STATE, 1
# 239 "data/maps/MallowGardens/scripts.pory"
	releaseall
	return


MallowGardens_EventScript_Soldier::
# 244 "data/maps/MallowGardens/scripts.pory"
	lockall
# 245 "data/maps/MallowGardens/scripts.pory"
	compare VAR_MALLOW_COURTYARD_STATE, 2
	goto_if_ne MallowGardens_EventScript_Soldier_2
MallowGardens_EventScript_Soldier_1:
# 304 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 305 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_4
# 318 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_Soldier_Movement_0
# 319 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 320 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_5
# 322 "data/maps/MallowGardens/scripts.pory"
	release
	return

MallowGardens_EventScript_Soldier_2:
# 247 "data/maps/MallowGardens/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, 0
# 248 "data/maps/MallowGardens/scripts.pory"
	getplayerxy VAR_TEMP_5, VAR_TEMP_6
# 249 "data/maps/MallowGardens/scripts.pory"
	compare VAR_TEMP_5, 64
	goto_if_eq MallowGardens_EventScript_Soldier_5
# 259 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_Soldier_Movement_1
# 260 "data/maps/MallowGardens/scripts.pory"
	waitmovement
MallowGardens_EventScript_Soldier_4:
# 262 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_0, MSGBOX_YESNO
# 270 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_EventScript_Soldier_8
# 300 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_5:
# 251 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, Common_Movement_ExclamationMark
# 252 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 253 "data/maps/MallowGardens/scripts.pory"
	delay 60
# 254 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_PLAYER, MallowGardens_EventScript_Soldier_Movement_0
# 255 "data/maps/MallowGardens/scripts.pory"
	waitmovement
	goto MallowGardens_EventScript_Soldier_4

MallowGardens_EventScript_Soldier_8:
# 272 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_1, MSGBOX_YESNO
# 273 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_EventScript_Soldier_11
# 295 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_11:
# 275 "data/maps/MallowGardens/scripts.pory"
	message MallowGardens_EventScript_Soldier_Text_2
# 277 "data/maps/MallowGardens/scripts.pory"
	waitmessage
# 278 "data/maps/MallowGardens/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, MallowGardens_Text_NoRegrets, MallowGardens_Text_No
# 279 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MallowGardens_EventScript_Soldier_14
# 290 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_14:
# 281 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_3
# 283 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_4, MallowGardens_Text_SoldierDefeated
# 284 "data/maps/MallowGardens/scripts.pory"
	setvar VAR_MALLOW_COURTYARD_STATE, 2
# 285 "data/maps/MallowGardens/scripts.pory"
	release
	end


MallowGardens_EventScript_SoldierDeny::
# 337 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_SoldierDeny_Text_0
# 339 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 340 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_SoldierDeny_Movement_0
# 341 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 342 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_PLAYER, MallowGardens_EventScript_SoldierDeny_Movement_1
# 343 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 344 "data/maps/MallowGardens/scripts.pory"
	fadedefaultbgm
# 345 "data/maps/MallowGardens/scripts.pory"
	release
	end


MallowGardens_EventScript_Aide::
# 351 "data/maps/MallowGardens/scripts.pory"
	lock
# 352 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 353 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Aide_Text_0
# 363 "data/maps/MallowGardens/scripts.pory"
	playse SE_SELECT
# 364 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 365 "data/maps/MallowGardens/scripts.pory"
	delay 60
# 366 "data/maps/MallowGardens/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 367 "data/maps/MallowGardens/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge MallowGardens_EventScript_Aide_1
# 371 "data/maps/MallowGardens/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_lt MallowGardens_EventScript_Aide_2
	return

MallowGardens_EventScript_Aide_1:
# 369 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_AideSuccess
	return

MallowGardens_EventScript_Aide_2:
# 373 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_AideFailure
	return


MallowGardens_EventScript_AideSuccess::
# 379 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideSuccess_Text_0
# 386 "data/maps/MallowGardens/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedDowsingMachine, ITEM_DOWSING_MACHINE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 387 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_TM12
# 388 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_NUGGET
# 389 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_GREAT_BALL, 10
# 390 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideSuccess_Text_1
# 401 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 402 "data/maps/MallowGardens/scripts.pory"
	playse SE_EXIT
# 403 "data/maps/MallowGardens/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 404 "data/maps/MallowGardens/scripts.pory"
	setflag FLAG_BINDER_GATE_03
# 405 "data/maps/MallowGardens/scripts.pory"
	removeobject LOCALID_COURTYARD_AIDE
# 406 "data/maps/MallowGardens/scripts.pory"
	delay 30
# 407 "data/maps/MallowGardens/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 408 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_AideFailure::
# 413 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideFailure_Text_0
# 421 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_SoldierAlt::
# 426 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_single TRAINER_RICKY_4, MallowGardens_Text_SoldierIntro, MallowGardens_Text_SoldierDefeated, MallowGardens_Text_SoldierPost
	return


MallowGardens_EventScript_Trainer::
# 450 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, MallowGardens_Text_TrainerIntro, MallowGardens_Text_TrainerDefeated
# 451 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_Text_TrainerPost, MSGBOX_AUTOCLOSE
	return


# 170 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_0:
# 170 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 170 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 170 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 170 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 170 "data/maps/MallowGardens/scripts.pory"
	walk_down
	step_end

# 178 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_1:
# 178 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
# 178 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
# 178 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
	step_end

# 203 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_2:
# 203 "data/maps/MallowGardens/scripts.pory"
	walk_slow_up
	step_end

# 208 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_3:
# 208 "data/maps/MallowGardens/scripts.pory"
	walk_fast_down
	step_end

# 218 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_4:
# 218 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 218 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_slow_down
	step_end

# 234 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_5:
# 234 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 234 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 234 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 234 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 234 "data/maps/MallowGardens/scripts.pory"
	walk_up
	step_end

# 254 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Soldier_Movement_0:
# 254 "data/maps/MallowGardens/scripts.pory"
	face_right
	step_end

# 259 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Soldier_Movement_1:
# 259 "data/maps/MallowGardens/scripts.pory"
	face_up
	step_end

# 340 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_SoldierDeny_Movement_0:
# 340 "data/maps/MallowGardens/scripts.pory"
	face_left
	step_end

# 342 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_SoldierDeny_Movement_1:
# 342 "data/maps/MallowGardens/scripts.pory"
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
# 116 "data/maps/MallowGardens/scripts.pory"
	.string "Mallow Castle is filled with Helpers\n"
	.string "that love to blow themselves up.\p"
	.string "I can't say I get why they would,\n"
	.string "but it's very dangerous indeed.\p"
	.string "I would recommend stocking up on\n"
	.string "Dedede Dolls so you can easily\l"
	.string "get out of a scary battle.$"

MallowGardens_EventScript_Parasol_Text_0:
# 134 "data/maps/MallowGardens/scripts.pory"
	.string "Oh, your Helpers are cute! Are you\n"
	.string "making sure to take care of them?\l"
	.string "Here, they might appreciate this.$"

MallowGardens_EventScript_Parasol_Text_1:
# 140 "data/maps/MallowGardens/scripts.pory"
	.string "Waddle Dee Café has all sorts of treats\n"
	.string "I'm sure your Helpers would love.$"

MallowGardens_EventScript_Dedede_Text_0:
# 173 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Well, howdy-do, Kirby! Fancy seein' ya\n"
	.string "all the way out here!\p"
	.string "Ya haven't given up on the Royal Royale\n"
	.string "yet, have ya? Lemme just see here…$"

MallowGardens_EventScript_Dedede_Text_1:
# 184 "data/maps/MallowGardens/scripts.pory"
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
# 205 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Uh huh… look, Kirby, I like ya, so\n"
	.string "here's a little piece of advice from me:$"

MallowGardens_EventScript_Dedede_Text_3:
# 212 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Don't.\p"
	.string "You.\p"
	.string "Dare.$"

MallowGardens_EventScript_Dedede_Text_4:
# 220 "data/maps/MallowGardens/scripts.pory"
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
# 262 "data/maps/MallowGardens/scripts.pory"
	.string "Halt! Under the Great King's orders,\n"
	.string "nobody is allowed through here!\p"
	.string "Yes, that means you, Kirby. If I have\n"
	.string "to teach you this lesson the hard way,\l"
	.string "I'm not afraid to get my hands dirty.\p"
	.string "Are you really going to cross me?$"

MallowGardens_EventScript_Soldier_Text_1:
# 272 "data/maps/MallowGardens/scripts.pory"
	.string "Are you sure?$"

MallowGardens_EventScript_Soldier_Text_2:
# 275 "data/maps/MallowGardens/scripts.pory"
	.string "You're going to lose this battle.\n"
	.string "You're sure you won't regret this?$"

MallowGardens_EventScript_Soldier_Text_3:
# 281 "data/maps/MallowGardens/scripts.pory"
	.string "Well, that's how it is, then. Enjoy your\n"
	.string "trip back to the break room!$"

MallowGardens_EventScript_Soldier_Text_4:
# 305 "data/maps/MallowGardens/scripts.pory"
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
# 320 "data/maps/MallowGardens/scripts.pory"
	.string "The soldier looked away, without saying\n"
	.string "another word.$"

MallowGardens_EventScript_SoldierDeny_Text_0:
# 337 "data/maps/MallowGardens/scripts.pory"
	.string "That's right. Go on, and don't set foot\n"
	.string "near this place ever again.$"

MallowGardens_EventScript_Aide_Text_0:
# 353 "data/maps/MallowGardens/scripts.pory"
	.string "Hello, Kirby!\n"
	.string "I'm a researcher from Waddle Dee Town.\p"
	.string "The Great King has sent me here to\n"
	.string "take a look at your Info Card Binder.\p"
	.string "Specifically, we're hoping to see that\n"
	.string "you've recruited at least {COLOR RED}30{COLOR DARK_GRAY} Helpers.\p"
	.string "Now then, may I see your binder?$"

MallowGardens_EventScript_AideSuccess_Text_0:
# 379 "data/maps/MallowGardens/scripts.pory"
	.string "Wonderful! You've already registered\n"
	.string "{STR_VAR_2} Helpers so far!\p"
	.string "As a reward for your due diligence,\n"
	.string "I have here a care package for you.\p"
	.string "Please, go ahead and open it!$"

MallowGardens_EventScript_AideSuccess_Text_1:
# 390 "data/maps/MallowGardens/scripts.pory"
	.string "Of particular note is a new tool made\n"
	.string "at the lab: the Dowsing Machine.\p"
	.string "You can use it to find items on the\n"
	.string "ground that are hidden from plain sight.\p"
	.string "Such items might be of benefit to you\n"
	.string "and your Helpers.\p"
	.string "Now then, I must report the good news\n"
	.string "to the Great King. Carry on!$"

MallowGardens_EventScript_AideFailure_Text_0:
# 413 "data/maps/MallowGardens/scripts.pory"
	.string "Hm… it seems you've only registered\n"
	.string "{STR_VAR_2} Helpers so far.\l"
	.string "The Great King will be most displeased.\p"
	.string "I'm sorry, but I can't return like this.\p"
	.string "Could I ask you to return once you've\n"
	.string "recruited at least {COLOR RED}30{COLOR DARK_GRAY} Helpers?$"

MallowGardens_Text_NoRegrets::
# 325 "data/maps/MallowGardens/scripts.pory"
	.string "NO REGRETS!$"

MallowGardens_Text_No::
# 330 "data/maps/MallowGardens/scripts.pory"
	.string "YES REGRETS$"

MallowGardens_Text_SoldierIntro::
# 429 "data/maps/MallowGardens/scripts.pory"
	.string "Halt! Under the Great King's orders,\n"
	.string "nobody is allowed through here!\p"
	.string "You and your Helpers are going to have\n"
	.string "have to learn this lesson the hard way!$"

MallowGardens_Text_SoldierDefeated::
# 438 "data/maps/MallowGardens/scripts.pory"
	.string "What?! Forgive me, Great King!$"

MallowGardens_Text_SoldierPost::
# 443 "data/maps/MallowGardens/scripts.pory"
	.string "Look$"

MallowGardens_Text_TrainerIntro::
# 454 "data/maps/MallowGardens/scripts.pory"
	.string "I sniffed it! From aaall the way at the\n"
	.string "beach, squeak! There's treasure here!$"

MallowGardens_Text_TrainerDefeated::
# 460 "data/maps/MallowGardens/scripts.pory"
	.string "Squeak… maybe that treasure is better\n"
	.string "off in your hands, after all.$"

MallowGardens_Text_TrainerPost::
# 466 "data/maps/MallowGardens/scripts.pory"
	.string "I've gotten pretty far from the rest of\n"
	.string "the squad… how will I get back?$"
