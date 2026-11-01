# 1 "data/maps/CastleArena_Mart/scripts.pory"

# 2 "data/maps/CastleArena_Mart/scripts.pory"
CastleArena_Mart_MapScripts::
# 3 "data/maps/CastleArena_Mart/scripts.pory"
	.byte 0

CastleArena_Mart_EventScript_Clerk::
# 8 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 9 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/CastleArena_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/CastleArena_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/CastleArena_Mart/scripts.pory"
	pokemart CastleArena_Mart
# 13 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/CastleArena_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/CastleArena_Mart/scripts.pory"
CastleArena_Mart:
# 20 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 22 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 23 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 29 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 31 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 32 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

CastleArena_Mart_EventScript_Nurse::
# 37 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 38 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 39 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_Nurse_Text_0
# 44 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return


CastleArena_Mart_EventScript_Chef::
# 49 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 50 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 51 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_Chef_Text_0
# 56 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return


CastleArena_Mart_EventScript_Worker::
# 61 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 62 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 63 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_Worker_Text_0
# 68 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return


CastleArena_Mart_EventScript_MoveTutor::
# 75 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 76 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 77 "data/maps/CastleArena_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CastleArena_Mart_EventScript_MoveTutor_2
# 83 "data/maps/CastleArena_Mart/scripts.pory"
	goto CastleArena_Mart_EventScript_MoveTutorEnabled
CastleArena_Mart_EventScript_MoveTutor_1:
# 85 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return

CastleArena_Mart_EventScript_MoveTutor_2:
# 79 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox MoveTutor_Text_MoveTutorNotEnabled, MSGBOX_DEFAULT
	goto CastleArena_Mart_EventScript_MoveTutor_1


CastleArena_Mart_EventScript_MoveTutorEnabled::
# 90 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_MoveTutorEnabled_Text_0
# 98 "data/maps/CastleArena_Mart/scripts.pory"
	message CastleArena_Mart_EventScript_MoveTutorEnabled_Text_1
# 100 "data/maps/CastleArena_Mart/scripts.pory"
	waitmessage
# 101 "data/maps/CastleArena_Mart/scripts.pory"
	showmoneybox 0, 0
# 102 "data/maps/CastleArena_Mart/scripts.pory"
	multichoice 20, 0, MULTI_PALACE_MOVELIST, FALSE
# 103 "data/maps/CastleArena_Mart/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 104 "data/maps/CastleArena_Mart/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/CastleArena_Mart/scripts.pory"
	case 0, CastleArena_Mart_EventScript_MoveTutorEnabled_2
# 107 "data/maps/CastleArena_Mart/scripts.pory"
	case 1, CastleArena_Mart_EventScript_MoveTutorEnabled_3
# 109 "data/maps/CastleArena_Mart/scripts.pory"
	case 2, CastleArena_Mart_EventScript_MoveTutorEnabled_4
# 111 "data/maps/CastleArena_Mart/scripts.pory"
	case 3, CastleArena_Mart_EventScript_MoveTutorEnabled_5
# 113 "data/maps/CastleArena_Mart/scripts.pory"
	case 4, CastleArena_Mart_EventScript_MoveTutorEnabled_6
# 115 "data/maps/CastleArena_Mart/scripts.pory"
	case MULTI_B_PRESSED, CastleArena_Mart_EventScript_MoveTutorEnabled_7
	return

CastleArena_Mart_EventScript_MoveTutorEnabled_2:
# 106 "data/maps/CastleArena_Mart/scripts.pory"
	goto CastleArena_Mart_EventScript_Move1
	return

CastleArena_Mart_EventScript_MoveTutorEnabled_3:
# 108 "data/maps/CastleArena_Mart/scripts.pory"
	goto CastleArena_Mart_EventScript_Move2
	return

CastleArena_Mart_EventScript_MoveTutorEnabled_4:
# 110 "data/maps/CastleArena_Mart/scripts.pory"
	goto CastleArena_Mart_EventScript_Move3
	return

CastleArena_Mart_EventScript_MoveTutorEnabled_5:
# 112 "data/maps/CastleArena_Mart/scripts.pory"
	goto CastleArena_Mart_EventScript_Move4
	return

CastleArena_Mart_EventScript_MoveTutorEnabled_6:
# 114 "data/maps/CastleArena_Mart/scripts.pory"
	goto CastleArena_Mart_EventScript_Move5
	return

CastleArena_Mart_EventScript_MoveTutorEnabled_7:
# 116 "data/maps/CastleArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_MoveTutorLeave
	return


CastleArena_Mart_EventScript_Move1::
# 122 "data/maps/CastleArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
# 123 "data/maps/CastleArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 124 "data/maps/CastleArena_Mart/scripts.pory"
	checkmoney 1000
# 125 "data/maps/CastleArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_Mart_EventScript_Move1_2
CastleArena_Mart_EventScript_Move1_1:
# 129 "data/maps/CastleArena_Mart/scripts.pory"
	move_tutor MOVE_MYSTICAL_FIRE, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, CastleArena_Mart_EventScript_TaughtMove
	return

CastleArena_Mart_EventScript_Move1_2:
# 127 "data/maps/CastleArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto CastleArena_Mart_EventScript_Move1_1


CastleArena_Mart_EventScript_Move2::
# 134 "data/maps/CastleArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_TAIL
# 135 "data/maps/CastleArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 136 "data/maps/CastleArena_Mart/scripts.pory"
	checkmoney 1000
# 137 "data/maps/CastleArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_Mart_EventScript_Move2_2
CastleArena_Mart_EventScript_Move2_1:
# 141 "data/maps/CastleArena_Mart/scripts.pory"
	move_tutor MOVE_POISON_TAIL, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, CastleArena_Mart_EventScript_TaughtMove
	return

CastleArena_Mart_EventScript_Move2_2:
# 139 "data/maps/CastleArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto CastleArena_Mart_EventScript_Move2_1


CastleArena_Mart_EventScript_Move3::
# 146 "data/maps/CastleArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_STOMPING_TANTRUM
# 147 "data/maps/CastleArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 148 "data/maps/CastleArena_Mart/scripts.pory"
	checkmoney 1000
# 149 "data/maps/CastleArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_Mart_EventScript_Move3_2
CastleArena_Mart_EventScript_Move3_1:
# 153 "data/maps/CastleArena_Mart/scripts.pory"
	move_tutor MOVE_STOMPING_TANTRUM, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, CastleArena_Mart_EventScript_TaughtMove
	return

CastleArena_Mart_EventScript_Move3_2:
# 151 "data/maps/CastleArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto CastleArena_Mart_EventScript_Move3_1


CastleArena_Mart_EventScript_Move4::
# 158 "data/maps/CastleArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_PAYBACK
# 159 "data/maps/CastleArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 160 "data/maps/CastleArena_Mart/scripts.pory"
	checkmoney 1000
# 161 "data/maps/CastleArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_Mart_EventScript_Move4_2
CastleArena_Mart_EventScript_Move4_1:
# 165 "data/maps/CastleArena_Mart/scripts.pory"
	move_tutor MOVE_PAYBACK, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, CastleArena_Mart_EventScript_TaughtMove
	return

CastleArena_Mart_EventScript_Move4_2:
# 163 "data/maps/CastleArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto CastleArena_Mart_EventScript_Move4_1


CastleArena_Mart_EventScript_Move5::
# 170 "data/maps/CastleArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
# 171 "data/maps/CastleArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 172 "data/maps/CastleArena_Mart/scripts.pory"
	checkmoney 1000
# 173 "data/maps/CastleArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CastleArena_Mart_EventScript_Move5_2
CastleArena_Mart_EventScript_Move5_1:
# 177 "data/maps/CastleArena_Mart/scripts.pory"
	move_tutor MOVE_HELPING_HAND, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, CastleArena_Mart_EventScript_TaughtMove
	return

CastleArena_Mart_EventScript_Move5_2:
# 175 "data/maps/CastleArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto CastleArena_Mart_EventScript_Move5_1


CastleArena_Mart_EventScript_TaughtMove::
# 182 "data/maps/CastleArena_Mart/scripts.pory"
	showmoneybox 0, 0
# 183 "data/maps/CastleArena_Mart/scripts.pory"
	delay 16
# 184 "data/maps/CastleArena_Mart/scripts.pory"
	removemoney 1500
# 185 "data/maps/CastleArena_Mart/scripts.pory"
	updatemoneybox
# 186 "data/maps/CastleArena_Mart/scripts.pory"
	playse SE_SHOP
# 187 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_TaughtMove_Text_0
# 189 "data/maps/CastleArena_Mart/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 190 "data/maps/CastleArena_Mart/scripts.pory"
	hidemoneybox
# 191 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return


CastleArena_Mart_EventScript_Nurse_Text_0:
# 39 "data/maps/CastleArena_Mart/scripts.pory"
	.string "Umm… isn't this supposed to be the\n"
	.string "break room? Where am I?\p"
	.string "Ohhhh… don't tell me I mixed up\n"
	.string "my colors again…$"

CastleArena_Mart_EventScript_Chef_Text_0:
# 51 "data/maps/CastleArena_Mart/scripts.pory"
	.string "I'm stocking up on as many 1-Ups as I\n"
	.string "can. They're a miracle item!\p"
	.string "I can't believe how generous the Great\n"
	.string "King is for offering them in shops now.$"

CastleArena_Mart_EventScript_Worker_Text_0:
# 63 "data/maps/CastleArena_Mart/scripts.pory"
	.string "With the avalanche in Waddle Dee Town,\n"
	.string "Dream Land is basically split in half…\p"
	.string "I wonder what kinds of competitors are\n"
	.string "battling in the Arenas over there.$"

CastleArena_Mart_EventScript_MoveTutorEnabled_Text_0:
# 90 "data/maps/CastleArena_Mart/scripts.pory"
	.string "Having heard of your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥1500, I'll train\n"
	.string "them these new techniques.$"

CastleArena_Mart_EventScript_MoveTutorEnabled_Text_1:
# 98 "data/maps/CastleArena_Mart/scripts.pory"
	.string "What do you say?\n"
	.string "Which move are you interested in?$"

CastleArena_Mart_EventScript_TaughtMove_Text_0:
# 187 "data/maps/CastleArena_Mart/scripts.pory"
	.string "All done! I hope you and your Helper will\n"
	.string "make the most of this new technique!$"
