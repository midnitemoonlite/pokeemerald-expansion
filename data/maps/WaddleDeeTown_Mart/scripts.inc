# 1 "data/maps/WaddleDeeTown_Mart/scripts.pory"

# 2 "data/maps/WaddleDeeTown_Mart/scripts.pory"
WaddleDeeTown_Mart_MapScripts::
# 3 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.byte 0

WaddleDeeTown_Mart_EventScript_Clerk::
# 8 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 9 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	pokemart WaddleDeeTown_Mart
# 13 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/WaddleDeeTown_Mart/scripts.pory"
WaddleDeeTown_Mart:
# 20 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 22 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 23 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 25 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 26 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

WaddleDeeTown_Mart_EventScript_Delivery::
# 31 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 32 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_Delivery_Text_0
# 38 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return


WaddleDeeTown_Mart_EventScript_Socialite::
# 43 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 44 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_Socialite_Text_0
# 51 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return


WaddleDeeTown_Mart_EventScript_MoveTutor::
# 58 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 59 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 60 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, WaddleDeeTown_Mart_EventScript_MoveTutor_2
# 66 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto WaddleDeeTown_Mart_EventScript_MoveTutorEnabled
WaddleDeeTown_Mart_EventScript_MoveTutor_1:
# 68 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return

WaddleDeeTown_Mart_EventScript_MoveTutor_2:
# 62 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox MoveTutor_Text_MoveTutorNotEnabled, MSGBOX_DEFAULT
	goto WaddleDeeTown_Mart_EventScript_MoveTutor_1


WaddleDeeTown_Mart_EventScript_MoveTutorEnabled::
# 73 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_Text_0
# 81 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	message WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_Text_1
# 83 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	waitmessage
# 84 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	showmoneybox 0, 0
# 85 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	multichoice 20, 0, MULTI_WADDLE_DEE_MOVELIST, FALSE
# 86 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 87 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	case 0, WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_2
# 90 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	case 1, WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_3
# 92 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	case 2, WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_4
# 94 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	case 3, WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_5
# 96 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	case 4, WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_6
# 98 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	case MULTI_B_PRESSED, WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_7
	return

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_2:
# 89 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto WaddleDeeTown_Mart_EventScript_Move1
	return

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_3:
# 91 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto WaddleDeeTown_Mart_EventScript_Move2
	return

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_4:
# 93 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto WaddleDeeTown_Mart_EventScript_Move3
	return

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_5:
# 95 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto WaddleDeeTown_Mart_EventScript_Move4
	return

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_6:
# 97 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto WaddleDeeTown_Mart_EventScript_Move5
	return

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_7:
# 99 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto MoveTutor_EventScript_MoveTutorLeave
	return


WaddleDeeTown_Mart_EventScript_Move1::
# 105 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
# 106 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 107 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	checkmoney 500
# 108 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_Mart_EventScript_Move1_2
WaddleDeeTown_Mart_EventScript_Move1_1:
# 112 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	move_tutor MOVE_GRASS_KNOT, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, WaddleDeeTown_Mart_EventScript_TaughtMove
	return

WaddleDeeTown_Mart_EventScript_Move1_2:
# 110 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto WaddleDeeTown_Mart_EventScript_Move1_1


WaddleDeeTown_Mart_EventScript_Move2::
# 117 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SHADE
# 118 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 119 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	checkmoney 500
# 120 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_Mart_EventScript_Move2_2
WaddleDeeTown_Mart_EventScript_Move2_1:
# 124 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	move_tutor MOVE_NIGHT_SHADE, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, WaddleDeeTown_Mart_EventScript_TaughtMove
	return

WaddleDeeTown_Mart_EventScript_Move2_2:
# 122 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto WaddleDeeTown_Mart_EventScript_Move2_1


WaddleDeeTown_Mart_EventScript_Move3::
# 129 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_VACUUM_WAVE
# 130 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 131 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	checkmoney 500
# 132 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_Mart_EventScript_Move3_2
WaddleDeeTown_Mart_EventScript_Move3_1:
# 136 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	move_tutor MOVE_VACUUM_WAVE, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, WaddleDeeTown_Mart_EventScript_TaughtMove
	return

WaddleDeeTown_Mart_EventScript_Move3_2:
# 134 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto WaddleDeeTown_Mart_EventScript_Move3_1


WaddleDeeTown_Mart_EventScript_Move4::
# 141 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 142 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 143 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	checkmoney 500
# 144 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_Mart_EventScript_Move4_2
WaddleDeeTown_Mart_EventScript_Move4_1:
# 148 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	move_tutor MOVE_SWAGGER, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, WaddleDeeTown_Mart_EventScript_TaughtMove
	return

WaddleDeeTown_Mart_EventScript_Move4_2:
# 146 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto WaddleDeeTown_Mart_EventScript_Move4_1


WaddleDeeTown_Mart_EventScript_Move5::
# 153 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
# 154 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 155 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	checkmoney 500
# 156 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_Mart_EventScript_Move5_2
WaddleDeeTown_Mart_EventScript_Move5_1:
# 160 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	move_tutor MOVE_TOXIC_SPIKES, MoveTutor_Text_TeachMove, MoveTutor_Text_SelectMon, MoveTutor_EventScript_MoveTutorLeave, WaddleDeeTown_Mart_EventScript_TaughtMove
	return

WaddleDeeTown_Mart_EventScript_Move5_2:
# 158 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	goto MoveTutor_EventScript_CantAfford
	goto WaddleDeeTown_Mart_EventScript_Move5_1


WaddleDeeTown_Mart_EventScript_TaughtMove::
# 165 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	showmoneybox 0, 0
# 166 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	delay 16
# 167 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	removemoney 500
# 168 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	updatemoneybox
# 169 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	playse SE_SHOP
# 170 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_TaughtMove_Text_0
# 172 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 173 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	hidemoneybox
# 174 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return


WaddleDeeTown_Mart_EventScript_Delivery_Text_0:
# 33 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "There's a department store being built\n"
	.string "in the northeast corner of town.\p"
	.string "It'll be hard for this shop to compete\n"
	.string "with the variety of items sold there…$"

WaddleDeeTown_Mart_EventScript_Socialite_Text_0:
# 45 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "Even when the department store opens,\n"
	.string "I'll keep coming back to this shop.\p"
	.string "I come by often enough for the clerks\n"
	.string "to recognize me. It's hard to beat\l"
	.string "that level of familiarity!$"

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_Text_0:
# 73 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "Having heard of your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥500, I'll train\n"
	.string "them these new techniques.$"

WaddleDeeTown_Mart_EventScript_MoveTutorEnabled_Text_1:
# 81 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "What do you say?\n"
	.string "Which move are you interested in?$"

WaddleDeeTown_Mart_EventScript_TaughtMove_Text_0:
# 170 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "All done! I hope you and your Helper will\n"
	.string "make the most of this new technique!$"
