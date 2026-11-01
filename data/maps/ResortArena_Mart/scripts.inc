# 1 "data/maps/ResortArena_Mart/scripts.pory"

# 2 "data/maps/ResortArena_Mart/scripts.pory"
ResortArena_Mart_MapScripts::
# 3 "data/maps/ResortArena_Mart/scripts.pory"
	.byte 0

ResortArena_Mart_EventScript_Clerk::
# 8 "data/maps/ResortArena_Mart/scripts.pory"
	lock
# 9 "data/maps/ResortArena_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/ResortArena_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/ResortArena_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/ResortArena_Mart/scripts.pory"
	pokemart ResortArena_Mart
# 13 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/ResortArena_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/ResortArena_Mart/scripts.pory"
ResortArena_Mart:
# 20 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 22 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_POTION
# 23 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 24 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 25 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 27 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 28 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 29 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

ResortArena_Mart_EventScript_Youngster::
# 34 "data/maps/ResortArena_Mart/scripts.pory"
	lock
# 35 "data/maps/ResortArena_Mart/scripts.pory"
	faceplayer
# 36 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox ResortArena_Mart_EventScript_Youngster_Text_0
# 41 "data/maps/ResortArena_Mart/scripts.pory"
	release
	return


ResortArena_Mart_EventScript_Manager::
# 46 "data/maps/ResortArena_Mart/scripts.pory"
	lock
# 47 "data/maps/ResortArena_Mart/scripts.pory"
	faceplayer
# 48 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox ResortArena_Mart_EventScript_Manager_Text_0
# 53 "data/maps/ResortArena_Mart/scripts.pory"
	release
	return


ResortArena_Mart_EventScript_MoveTutor::
# 58 "data/maps/ResortArena_Mart/scripts.pory"
	lock
# 59 "data/maps/ResortArena_Mart/scripts.pory"
	faceplayer
# 60 "data/maps/ResortArena_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_Mart_EventScript_MoveTutor_2
# 66 "data/maps/ResortArena_Mart/scripts.pory"
	goto ResortArena_Mart_EventScript_MoveTutorEnabled
ResortArena_Mart_EventScript_MoveTutor_1:
# 68 "data/maps/ResortArena_Mart/scripts.pory"
	release
	return

ResortArena_Mart_EventScript_MoveTutor_2:
# 62 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox MoveTutor_Text_MoveTutorNotEnabled, MSGBOX_DEFAULT
	goto ResortArena_Mart_EventScript_MoveTutor_1


ResortArena_Mart_EventScript_MoveTutorEnabled::
# 73 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox ResortArena_Mart_EventScript_MoveTutorEnabled_Text_0
# 81 "data/maps/ResortArena_Mart/scripts.pory"
	message ResortArena_Mart_EventScript_MoveTutorEnabled_Text_1
# 83 "data/maps/ResortArena_Mart/scripts.pory"
	waitmessage
# 84 "data/maps/ResortArena_Mart/scripts.pory"
	showmoneybox 0, 0
# 85 "data/maps/ResortArena_Mart/scripts.pory"
	multichoice 20, 0, MULTI_RESORT_MOVELIST, FALSE
# 86 "data/maps/ResortArena_Mart/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 87 "data/maps/ResortArena_Mart/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/ResortArena_Mart/scripts.pory"
	case 0, ResortArena_Mart_EventScript_MoveTutorEnabled_2
# 90 "data/maps/ResortArena_Mart/scripts.pory"
	case 1, ResortArena_Mart_EventScript_MoveTutorEnabled_3
# 92 "data/maps/ResortArena_Mart/scripts.pory"
	case 2, ResortArena_Mart_EventScript_MoveTutorEnabled_4
# 94 "data/maps/ResortArena_Mart/scripts.pory"
	case 3, ResortArena_Mart_EventScript_MoveTutorEnabled_5
# 96 "data/maps/ResortArena_Mart/scripts.pory"
	case 4, ResortArena_Mart_EventScript_MoveTutorEnabled_6
# 98 "data/maps/ResortArena_Mart/scripts.pory"
	case MULTI_B_PRESSED, ResortArena_Mart_EventScript_MoveTutorEnabled_7
	return

ResortArena_Mart_EventScript_MoveTutorEnabled_2:
# 89 "data/maps/ResortArena_Mart/scripts.pory"
	goto ResortArena_Mart_EventScript_Move1
	return

ResortArena_Mart_EventScript_MoveTutorEnabled_3:
# 91 "data/maps/ResortArena_Mart/scripts.pory"
	goto ResortArena_Mart_EventScript_Move2
	return

ResortArena_Mart_EventScript_MoveTutorEnabled_4:
# 93 "data/maps/ResortArena_Mart/scripts.pory"
	goto ResortArena_Mart_EventScript_Move3
	return

ResortArena_Mart_EventScript_MoveTutorEnabled_5:
# 95 "data/maps/ResortArena_Mart/scripts.pory"
	goto ResortArena_Mart_EventScript_Move4
	return

ResortArena_Mart_EventScript_MoveTutorEnabled_6:
# 97 "data/maps/ResortArena_Mart/scripts.pory"
	goto ResortArena_Mart_EventScript_Move5
	return

ResortArena_Mart_EventScript_MoveTutorEnabled_7:
# 99 "data/maps/ResortArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_MoveTutorLeave
	return


ResortArena_Mart_EventScript_Move1::
# 105 "data/maps/ResortArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 106 "data/maps/ResortArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 107 "data/maps/ResortArena_Mart/scripts.pory"
	checkmoney 1000
# 108 "data/maps/ResortArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_Mart_EventScript_Move1_2
ResortArena_Mart_EventScript_Move1_1:
# 112 "data/maps/ResortArena_Mart/scripts.pory"
	move_tutor MOVE_ICY_WIND, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, ResortArena_Mart_EventScript_TaughtMove
	return

ResortArena_Mart_EventScript_Move1_2:
# 110 "data/maps/ResortArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto ResortArena_Mart_EventScript_Move1_1


ResortArena_Mart_EventScript_Move2::
# 117 "data/maps/ResortArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_AERIAL_ACE
# 118 "data/maps/ResortArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 119 "data/maps/ResortArena_Mart/scripts.pory"
	checkmoney 1000
# 120 "data/maps/ResortArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_Mart_EventScript_Move2_2
ResortArena_Mart_EventScript_Move2_1:
# 124 "data/maps/ResortArena_Mart/scripts.pory"
	move_tutor MOVE_AERIAL_ACE, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, ResortArena_Mart_EventScript_TaughtMove
	return

ResortArena_Mart_EventScript_Move2_2:
# 122 "data/maps/ResortArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto ResortArena_Mart_EventScript_Move2_1


ResortArena_Mart_EventScript_Move3::
# 129 "data/maps/ResortArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_GYRO_BALL
# 130 "data/maps/ResortArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 131 "data/maps/ResortArena_Mart/scripts.pory"
	checkmoney 1000
# 132 "data/maps/ResortArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_Mart_EventScript_Move3_2
ResortArena_Mart_EventScript_Move3_1:
# 136 "data/maps/ResortArena_Mart/scripts.pory"
	move_tutor MOVE_GYRO_BALL, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, ResortArena_Mart_EventScript_TaughtMove
	return

ResortArena_Mart_EventScript_Move3_2:
# 134 "data/maps/ResortArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto ResortArena_Mart_EventScript_Move3_1


ResortArena_Mart_EventScript_Move4::
# 141 "data/maps/ResortArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK_ROOM
# 142 "data/maps/ResortArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 143 "data/maps/ResortArena_Mart/scripts.pory"
	checkmoney 1000
# 144 "data/maps/ResortArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_Mart_EventScript_Move4_2
ResortArena_Mart_EventScript_Move4_1:
# 148 "data/maps/ResortArena_Mart/scripts.pory"
	move_tutor MOVE_TRICK_ROOM, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, ResortArena_Mart_EventScript_TaughtMove
	return

ResortArena_Mart_EventScript_Move4_2:
# 146 "data/maps/ResortArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto ResortArena_Mart_EventScript_Move4_1


ResortArena_Mart_EventScript_Move5::
# 153 "data/maps/ResortArena_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 154 "data/maps/ResortArena_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 155 "data/maps/ResortArena_Mart/scripts.pory"
	checkmoney 1000
# 156 "data/maps/ResortArena_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ResortArena_Mart_EventScript_Move5_2
ResortArena_Mart_EventScript_Move5_1:
# 160 "data/maps/ResortArena_Mart/scripts.pory"
	move_tutor MOVE_SLEEP_TALK, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, ResortArena_Mart_EventScript_TaughtMove
	return

ResortArena_Mart_EventScript_Move5_2:
# 158 "data/maps/ResortArena_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto ResortArena_Mart_EventScript_Move5_1


ResortArena_Mart_EventScript_TaughtMove::
# 165 "data/maps/ResortArena_Mart/scripts.pory"
	showmoneybox 0, 0
# 166 "data/maps/ResortArena_Mart/scripts.pory"
	delay 16
# 167 "data/maps/ResortArena_Mart/scripts.pory"
	removemoney 1000
# 168 "data/maps/ResortArena_Mart/scripts.pory"
	updatemoneybox
# 169 "data/maps/ResortArena_Mart/scripts.pory"
	playse SE_SHOP
# 170 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox ResortArena_Mart_EventScript_TaughtMove_Text_0
# 172 "data/maps/ResortArena_Mart/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 173 "data/maps/ResortArena_Mart/scripts.pory"
	hidemoneybox
# 174 "data/maps/ResortArena_Mart/scripts.pory"
	release
	return


ResortArena_Mart_EventScript_Youngster_Text_0:
# 36 "data/maps/ResortArena_Mart/scripts.pory"
	.string "It's been a while since I've thought to\n"
	.string "restock on items. What do I need?\p"
	.string "Let's see… Friend Hearts, drinks…\n"
	.string "Maybe an Awakening for good measure…$"

ResortArena_Mart_EventScript_Manager_Text_0:
# 48 "data/maps/ResortArena_Mart/scripts.pory"
	.string "It's hard work, making sure our guests\n"
	.string "have a carefree and relaxing stay.\p"
	.string "I wonder if I'm starting to build the\n"
	.string "opposite association with resorts…$"

ResortArena_Mart_EventScript_MoveTutorEnabled_Text_0:
# 73 "data/maps/ResortArena_Mart/scripts.pory"
	.string "Having heard of your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥1000, I'll train\n"
	.string "them these new techniques.$"

ResortArena_Mart_EventScript_MoveTutorEnabled_Text_1:
# 81 "data/maps/ResortArena_Mart/scripts.pory"
	.string "What do you say?\n"
	.string "Which move are you interested in?$"

ResortArena_Mart_EventScript_TaughtMove_Text_0:
# 170 "data/maps/ResortArena_Mart/scripts.pory"
	.string "All done! I hope you and your Helper will\n"
	.string "make the most of this new technique!$"
