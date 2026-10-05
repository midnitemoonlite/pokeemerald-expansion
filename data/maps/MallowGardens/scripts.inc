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


MallowGardens_EventScript_WaddleDee1::
# 15 "data/maps/MallowGardens/scripts.pory"
	lock
# 16 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 17 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_WaddleDee1_Text_0
# 19 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Gentleman::
# 24 "data/maps/MallowGardens/scripts.pory"
	lock
# 25 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Gentleman_Text_0
# 30 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_WaddleDee2::
# 35 "data/maps/MallowGardens/scripts.pory"
	lock
# 36 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 37 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_WaddleDee2_Text_0
# 41 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_WaddleDee3::
# 46 "data/maps/MallowGardens/scripts.pory"
	lock
# 47 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 48 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_WaddleDee3_Text_0
# 59 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Fluff::
# 64 "data/maps/MallowGardens/scripts.pory"
	lock
# 65 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 66 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Fluff_Text_0
# 71 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Worker::
# 76 "data/maps/MallowGardens/scripts.pory"
	lock
# 77 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 78 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Worker_Text_0
# 86 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Chef::
# 91 "data/maps/MallowGardens/scripts.pory"
	lock
# 92 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 93 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Chef_Text_0
# 102 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_Socialite::
# 107 "data/maps/MallowGardens/scripts.pory"
	lock
# 108 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 109 "data/maps/MallowGardens/scripts.pory"
	goto_if_unset FLAG_RECEIVED_6_SODA_POP, MallowGardens_EventScript_Socialite_2
MallowGardens_EventScript_Socialite_1:
# 117 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Socialite_Text_1
# 119 "data/maps/MallowGardens/scripts.pory"
	release
	return

MallowGardens_EventScript_Socialite_2:
# 111 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Socialite_Text_0
# 114 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_SODA_POP, 2
# 115 "data/maps/MallowGardens/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
	goto MallowGardens_EventScript_Socialite_1


MallowGardens_EventScript_Parasol::
# 124 "data/maps/MallowGardens/scripts.pory"
	lock
# 125 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 126 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Parasol_Text_0
# 132 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_TriggerLeft::
# 137 "data/maps/MallowGardens/scripts.pory"
	lockall
# 138 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 139 "data/maps/MallowGardens/scripts.pory"
	setobjectxy LOCALID_COURTYARD_DEDEDE, 33, 43
# 140 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_TriggerCenter::
# 145 "data/maps/MallowGardens/scripts.pory"
	lockall
# 146 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 147 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_TriggerRight::
# 152 "data/maps/MallowGardens/scripts.pory"
	lockall
# 153 "data/maps/MallowGardens/scripts.pory"
	addobject LOCALID_COURTYARD_DEDEDE
# 154 "data/maps/MallowGardens/scripts.pory"
	setobjectxy LOCALID_COURTYARD_DEDEDE, 35, 43
# 155 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_Dedede
	return


MallowGardens_EventScript_Dedede::
# 160 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_0
# 161 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 162 "data/maps/MallowGardens/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 163 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_0
# 168 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_1
# 169 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 170 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, Common_Movement_ExclamationMark
# 171 "data/maps/MallowGardens/scripts.pory"
	playse SE_PIN
# 172 "data/maps/MallowGardens/scripts.pory"
	waitse
# 173 "data/maps/MallowGardens/scripts.pory"
	delay 30
# 174 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_1
# 192 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 193 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_2
# 194 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 195 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_2
# 197 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 198 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_3
# 199 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 200 "data/maps/MallowGardens/scripts.pory"
	playse SE_WALL_HIT
# 201 "data/maps/MallowGardens/scripts.pory"
	waitse
# 202 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_3
# 207 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 208 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_4
# 209 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 210 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Dedede_Text_4
# 223 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 224 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_DEDEDE, MallowGardens_EventScript_Dedede_Movement_5
# 225 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 226 "data/maps/MallowGardens/scripts.pory"
	fadedefaultbgm
# 227 "data/maps/MallowGardens/scripts.pory"
	removeobject LOCALID_COURTYARD_DEDEDE
# 228 "data/maps/MallowGardens/scripts.pory"
	setvar VAR_MALLOW_COURTYARD_STATE, 1
# 229 "data/maps/MallowGardens/scripts.pory"
	releaseall
	return


MallowGardens_EventScript_Soldier::
# 234 "data/maps/MallowGardens/scripts.pory"
	lockall
# 235 "data/maps/MallowGardens/scripts.pory"
	compare VAR_MALLOW_COURTYARD_STATE, 2
	goto_if_ne MallowGardens_EventScript_Soldier_2
MallowGardens_EventScript_Soldier_1:
# 294 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 295 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_4
# 308 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_Soldier_Movement_0
# 309 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 310 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_5
# 312 "data/maps/MallowGardens/scripts.pory"
	release
	return

MallowGardens_EventScript_Soldier_2:
# 237 "data/maps/MallowGardens/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, 0
# 238 "data/maps/MallowGardens/scripts.pory"
	getplayerxy VAR_TEMP_5, VAR_TEMP_6
# 239 "data/maps/MallowGardens/scripts.pory"
	compare VAR_TEMP_5, 64
	goto_if_eq MallowGardens_EventScript_Soldier_5
# 249 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_Soldier_Movement_1
# 250 "data/maps/MallowGardens/scripts.pory"
	waitmovement
MallowGardens_EventScript_Soldier_4:
# 252 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_0, MSGBOX_YESNO
# 260 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_EventScript_Soldier_8
# 290 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_5:
# 241 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, Common_Movement_ExclamationMark
# 242 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 243 "data/maps/MallowGardens/scripts.pory"
	delay 60
# 244 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_PLAYER, MallowGardens_EventScript_Soldier_Movement_0
# 245 "data/maps/MallowGardens/scripts.pory"
	waitmovement
	goto MallowGardens_EventScript_Soldier_4

MallowGardens_EventScript_Soldier_8:
# 262 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_1, MSGBOX_YESNO
# 263 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_EventScript_Soldier_11
# 285 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_11:
# 265 "data/maps/MallowGardens/scripts.pory"
	message MallowGardens_EventScript_Soldier_Text_2
# 267 "data/maps/MallowGardens/scripts.pory"
	waitmessage
# 268 "data/maps/MallowGardens/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, MallowGardens_Text_NoRegrets, MallowGardens_Text_No
# 269 "data/maps/MallowGardens/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MallowGardens_EventScript_Soldier_14
# 280 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_SoldierDeny
	goto MallowGardens_EventScript_Soldier_1

MallowGardens_EventScript_Soldier_14:
# 271 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Soldier_Text_3
# 273 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_4, MallowGardens_Text_SoldierDefeated
# 274 "data/maps/MallowGardens/scripts.pory"
	setvar VAR_MALLOW_COURTYARD_STATE, 2
# 275 "data/maps/MallowGardens/scripts.pory"
	release
	end


MallowGardens_EventScript_SoldierDeny::
# 327 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_SoldierDeny_Text_0
# 329 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 330 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_COURTYARD_SOLDIER, MallowGardens_EventScript_SoldierDeny_Movement_0
# 331 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 332 "data/maps/MallowGardens/scripts.pory"
	applymovement LOCALID_PLAYER, MallowGardens_EventScript_SoldierDeny_Movement_1
# 333 "data/maps/MallowGardens/scripts.pory"
	waitmovement
# 334 "data/maps/MallowGardens/scripts.pory"
	fadedefaultbgm
# 335 "data/maps/MallowGardens/scripts.pory"
	release
	end


MallowGardens_EventScript_Aide::
# 341 "data/maps/MallowGardens/scripts.pory"
	lock
# 342 "data/maps/MallowGardens/scripts.pory"
	faceplayer
# 343 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_Aide_Text_0
# 353 "data/maps/MallowGardens/scripts.pory"
	playse SE_SELECT
# 354 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 355 "data/maps/MallowGardens/scripts.pory"
	delay 60
# 356 "data/maps/MallowGardens/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 357 "data/maps/MallowGardens/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge MallowGardens_EventScript_Aide_1
# 361 "data/maps/MallowGardens/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_lt MallowGardens_EventScript_Aide_2
	return

MallowGardens_EventScript_Aide_1:
# 359 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_AideSuccess
	return

MallowGardens_EventScript_Aide_2:
# 363 "data/maps/MallowGardens/scripts.pory"
	goto MallowGardens_EventScript_AideFailure
	return


MallowGardens_EventScript_AideSuccess::
# 369 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideSuccess_Text_0
# 376 "data/maps/MallowGardens/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedDowsingMachine, ITEM_DOWSING_MACHINE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 377 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_TM12
# 378 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_NUGGET
# 379 "data/maps/MallowGardens/scripts.pory"
	giveitem ITEM_GREAT_BALL, 10
# 380 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideSuccess_Text_1
# 391 "data/maps/MallowGardens/scripts.pory"
	closemessage
# 392 "data/maps/MallowGardens/scripts.pory"
	playse SE_EXIT
# 393 "data/maps/MallowGardens/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 394 "data/maps/MallowGardens/scripts.pory"
	setflag FLAG_BINDER_GATE_03
# 395 "data/maps/MallowGardens/scripts.pory"
	removeobject LOCALID_COURTYARD_AIDE
# 396 "data/maps/MallowGardens/scripts.pory"
	delay 30
# 397 "data/maps/MallowGardens/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 398 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_AideFailure::
# 403 "data/maps/MallowGardens/scripts.pory"
	msgbox MallowGardens_EventScript_AideFailure_Text_0
# 411 "data/maps/MallowGardens/scripts.pory"
	release
	return


MallowGardens_EventScript_SoldierAlt::
# 416 "data/maps/MallowGardens/scripts.pory"
	trainerbattle_single TRAINER_RICKY_4, MallowGardens_Text_SoldierIntro, MallowGardens_Text_SoldierDefeated, MallowGardens_Text_SoldierPost
	return


# 160 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_0:
# 160 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 160 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 160 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 160 "data/maps/MallowGardens/scripts.pory"
	walk_down
# 160 "data/maps/MallowGardens/scripts.pory"
	walk_down
	step_end

# 168 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_1:
# 168 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
# 168 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
# 168 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_down
	step_end

# 193 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_2:
# 193 "data/maps/MallowGardens/scripts.pory"
	walk_slow_up
	step_end

# 198 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_3:
# 198 "data/maps/MallowGardens/scripts.pory"
	walk_fast_down
	step_end

# 208 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_4:
# 208 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 208 "data/maps/MallowGardens/scripts.pory"
	walk_in_place_slow_down
	step_end

# 224 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Dedede_Movement_5:
# 224 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 224 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 224 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 224 "data/maps/MallowGardens/scripts.pory"
	walk_up
# 224 "data/maps/MallowGardens/scripts.pory"
	walk_up
	step_end

# 244 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Soldier_Movement_0:
# 244 "data/maps/MallowGardens/scripts.pory"
	face_right
	step_end

# 249 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_Soldier_Movement_1:
# 249 "data/maps/MallowGardens/scripts.pory"
	face_up
	step_end

# 330 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_SoldierDeny_Movement_0:
# 330 "data/maps/MallowGardens/scripts.pory"
	face_left
	step_end

# 332 "data/maps/MallowGardens/scripts.pory"
MallowGardens_EventScript_SoldierDeny_Movement_1:
# 332 "data/maps/MallowGardens/scripts.pory"
	walk_up
	step_end

MallowGardens_EventScript_Sign_Text_0:
# 8 "data/maps/MallowGardens/scripts.pory"
	.string "Now approaching: MALLOW CASTLE\n"
	.string "A lavish palace from a bygone age.$"

MallowGardens_EventScript_WaddleDee1_Text_0:
# 17 "data/maps/MallowGardens/scripts.pory"
	.string "Wowww… I was hoping to find a rest area\n"
	.string "here, but this place is massive!$"

MallowGardens_EventScript_Gentleman_Text_0:
# 25 "data/maps/MallowGardens/scripts.pory"
	.string "Goodness… what's with that dreadful\n"
	.string "looking castle over there?\p"
	.string "It's nothing like Mallow Castle…\n"
	.string "looking at it gives me the creeps…$"

MallowGardens_EventScript_WaddleDee2_Text_0:
# 37 "data/maps/MallowGardens/scripts.pory"
	.string "Isn't running through the grass so much\n"
	.string "fun? You never know what to expect!\p"
	.string "Oh! Here comes another Helper! Yaaay!$"

MallowGardens_EventScript_WaddleDee3_Text_0:
# 48 "data/maps/MallowGardens/scripts.pory"
	.string "Down there…\p"
	.string "There's a really menacing guard. I think\n"
	.string "they're trying to protect something…\p"
	.string "I tried talking to them, but they sent\n"
	.string "out some scary strong Helpers to force\l"
	.string "me back to the courtyard!\p"
	.string "If I were you, I'd stay as far away\n"
	.string "from there as possible.$"

MallowGardens_EventScript_Fluff_Text_0:
# 66 "data/maps/MallowGardens/scripts.pory"
	.string "How come this castle isn't one of the\n"
	.string "Great King's? Does he not want it?\p"
	.string "I dunno, I think it looks pretty big…\n"
	.string "or maybe it belongs to someone else?$"

MallowGardens_EventScript_Worker_Text_0:
# 78 "data/maps/MallowGardens/scripts.pory"
	.string "I saw a few strangely-dressed girls\n"
	.string "heading inside the castle earlier.\p"
	.string "They mentioned having some kind of\n"
	.string "“unbeatable arena strategy” planned…\p"
	.string "The competition in the Royal Royale\n"
	.string "keeps getting tougher and tougher, hm?$"

MallowGardens_EventScript_Chef_Text_0:
# 93 "data/maps/MallowGardens/scripts.pory"
	.string "Have you looked up at the night sky\n"
	.string "lately, Kirby?\p"
	.string "Maybe it's just my imagination, but I\n"
	.string "feel like lately I'm seeing fewer\l"
	.string "stars shining than usual.\p"
	.string "You don't think that means anything\n"
	.string "bad, does it?$"

MallowGardens_EventScript_Socialite_Text_0:
# 111 "data/maps/MallowGardens/scripts.pory"
	.string "Oh, your Helpers are cute! Are you\n"
	.string "making sure to take care of them?\l"
	.string "Here, they might appreciate this.$"

MallowGardens_EventScript_Socialite_Text_1:
# 117 "data/maps/MallowGardens/scripts.pory"
	.string "Waddle Dee Café has all sorts of treats\n"
	.string "I'm sure your Helpers would love.$"

MallowGardens_EventScript_Parasol_Text_0:
# 126 "data/maps/MallowGardens/scripts.pory"
	.string "Just wondering, Kirby… why don't you fly\n"
	.string "over the Star Blocks on the road?\p"
	.string "Oh, I see… you're worried about the\n"
	.string "Helpers of yours that can't fly?\l"
	.string "That's so considerate of you!$"

MallowGardens_EventScript_Dedede_Text_0:
# 163 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Well, howdy-do, Kirby! Fancy seein' ya\n"
	.string "all the way out here!\p"
	.string "Ya haven't given up on the Royal Royale\n"
	.string "yet, have ya? Lemme just see here…$"

MallowGardens_EventScript_Dedede_Text_1:
# 174 "data/maps/MallowGardens/scripts.pory"
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
# 195 "data/maps/MallowGardens/scripts.pory"
	.string "Uh huh… look, Kirby, I like ya, so\n"
	.string "here's a little piece of advice from me:$"

MallowGardens_EventScript_Dedede_Text_3:
# 202 "data/maps/MallowGardens/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Don't.\p"
	.string "You.\p"
	.string "Dare.$"

MallowGardens_EventScript_Dedede_Text_4:
# 210 "data/maps/MallowGardens/scripts.pory"
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
# 252 "data/maps/MallowGardens/scripts.pory"
	.string "Halt! Under the Great King's orders,\n"
	.string "nobody is allowed through here!\p"
	.string "Yes, that means you, Kirby. If I have\n"
	.string "to teach you this lesson the hard way,\l"
	.string "I'm not afraid to get my hands dirty.\p"
	.string "Are you really going to cross me?$"

MallowGardens_EventScript_Soldier_Text_1:
# 262 "data/maps/MallowGardens/scripts.pory"
	.string "Are you sure?$"

MallowGardens_EventScript_Soldier_Text_2:
# 265 "data/maps/MallowGardens/scripts.pory"
	.string "You're going to lose this battle.\n"
	.string "You're sure you won't regret this?$"

MallowGardens_EventScript_Soldier_Text_3:
# 271 "data/maps/MallowGardens/scripts.pory"
	.string "Well, that's how it is, then. Enjoy your\n"
	.string "trip back to the break room!$"

MallowGardens_EventScript_Soldier_Text_4:
# 295 "data/maps/MallowGardens/scripts.pory"
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
# 310 "data/maps/MallowGardens/scripts.pory"
	.string "The soldier looked away, without saying\n"
	.string "another word.$"

MallowGardens_EventScript_SoldierDeny_Text_0:
# 327 "data/maps/MallowGardens/scripts.pory"
	.string "That's right. Go on, and don't set foot\n"
	.string "near this place ever again.$"

MallowGardens_EventScript_Aide_Text_0:
# 343 "data/maps/MallowGardens/scripts.pory"
	.string "Hello, Kirby!\n"
	.string "I'm a researcher from Waddle Dee Town.\p"
	.string "The Great King has sent me here to\n"
	.string "take a look at your Info Card Binder.\p"
	.string "Specifically, we're hoping to see that\n"
	.string "you've recruited at least {COLOR RED}30{COLOR DARK_GRAY} Helpers.\p"
	.string "Now then, may I see your binder?$"

MallowGardens_EventScript_AideSuccess_Text_0:
# 369 "data/maps/MallowGardens/scripts.pory"
	.string "Wonderful! You've already registered\n"
	.string "{STR_VAR_2} Helpers so far!\p"
	.string "As a reward for your due diligence,\n"
	.string "I have here a care package for you.\p"
	.string "Please, go ahead and open it!$"

MallowGardens_EventScript_AideSuccess_Text_1:
# 380 "data/maps/MallowGardens/scripts.pory"
	.string "Of particular note is a new tool made\n"
	.string "at the lab: the Dowsing Machine.\p"
	.string "You can use it to find items on the\n"
	.string "ground that are hidden from plain sight.\p"
	.string "Such items might be of benefit to you\n"
	.string "and your Helpers.\p"
	.string "Now then, I must report the good news\n"
	.string "to the Great King. Carry on!$"

MallowGardens_EventScript_AideFailure_Text_0:
# 403 "data/maps/MallowGardens/scripts.pory"
	.string "Hm… it seems you've only registered\n"
	.string "{STR_VAR_2} Helpers so far.\l"
	.string "The Great King will be most displeased.\p"
	.string "I'm sorry, but I can't return like this.\p"
	.string "Could I ask you to return once you've\n"
	.string "recruited at least {COLOR RED}30{COLOR DARK_GRAY} Helpers?$"

MallowGardens_Text_NoRegrets::
# 315 "data/maps/MallowGardens/scripts.pory"
	.string "NO REGRETS!$"

MallowGardens_Text_No::
# 320 "data/maps/MallowGardens/scripts.pory"
	.string "NO$"

MallowGardens_Text_SoldierIntro::
# 420 "data/maps/MallowGardens/scripts.pory"
	.string "Halt! Under the Great King's orders,\n"
	.string "nobody is allowed through here!\p"
	.string "You and your Helpers are going to have\n"
	.string "have to learn this lesson the hard way!$"

MallowGardens_Text_SoldierDefeated::
# 429 "data/maps/MallowGardens/scripts.pory"
	.string "What?! Forgive me, Great King!$"

MallowGardens_Text_SoldierPost::
# 434 "data/maps/MallowGardens/scripts.pory"
	.string "Look$"
