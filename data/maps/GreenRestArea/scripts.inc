# 1 "data/maps/GreenRestArea/scripts.pory"

# 2 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_MapScripts::
# 3 "data/maps/GreenRestArea/scripts.pory"
	.byte 0

GreenRestArea_EventScript_Sign::
# 8 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/GreenRestArea/scripts.pory"
	closemessage
	return


GreenRestArea_EventScript_WaddleDeeShopEmployee::
# 15 "data/maps/GreenRestArea/scripts.pory"
	lock
# 16 "data/maps/GreenRestArea/scripts.pory"
	faceplayer
# 17 "data/maps/GreenRestArea/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, GreenRestArea_EventScript_WaddleDeeShopEmployee_2
GreenRestArea_EventScript_WaddleDeeShopEmployee_1:
# 35 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeShopEmployee_Text_1
# 37 "data/maps/GreenRestArea/scripts.pory"
	release
	return

GreenRestArea_EventScript_WaddleDeeShopEmployee_2:
# 19 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeShopEmployee_Text_0
# 23 "data/maps/GreenRestArea/scripts.pory"
	giveitem ITEM_POTION
# 24 "data/maps/GreenRestArea/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GreenRestArea_EventScript_WaddleDeeShopEmployee_5
GreenRestArea_EventScript_WaddleDeeShopEmployee_4:
# 28 "data/maps/GreenRestArea/scripts.pory"
	giveitem ITEM_INFINITE_CANDY
# 29 "data/maps/GreenRestArea/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GreenRestArea_EventScript_WaddleDeeShopEmployee_8
GreenRestArea_EventScript_WaddleDeeShopEmployee_7:
# 33 "data/maps/GreenRestArea/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
	goto GreenRestArea_EventScript_WaddleDeeShopEmployee_1

GreenRestArea_EventScript_WaddleDeeShopEmployee_5:
# 26 "data/maps/GreenRestArea/scripts.pory"
	msgbox gText_TooBadBagIsFull
	goto GreenRestArea_EventScript_WaddleDeeShopEmployee_4

GreenRestArea_EventScript_WaddleDeeShopEmployee_8:
# 31 "data/maps/GreenRestArea/scripts.pory"
	msgbox gText_TooBadBagIsFull
	goto GreenRestArea_EventScript_WaddleDeeShopEmployee_7


GreenRestArea_EventScript_WaddleDeeTalk::
# 42 "data/maps/GreenRestArea/scripts.pory"
	lock
# 43 "data/maps/GreenRestArea/scripts.pory"
	faceplayer
# 44 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeTalk_Text_0
# 49 "data/maps/GreenRestArea/scripts.pory"
	release
	return


GreenRestArea_RivalTrigger1::
# 54 "data/maps/GreenRestArea/scripts.pory"
	lock
# 55 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_WEST
# 56 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 57 "data/maps/GreenRestArea/scripts.pory"
	playSE SE_PIN
# 58 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_RivalTrigger1_Text_0
# 59 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 60 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger1_Movement_0
# 61 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_RivalTrigger1_Movement_1
# 62 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 63 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger2::
# 68 "data/maps/GreenRestArea/scripts.pory"
	lock
# 69 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_WEST
# 70 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 71 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 72 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_RivalTrigger1_Text_0
# 73 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 74 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger1_Movement_0
# 75 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_RivalTrigger2_Movement_0
# 76 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 77 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger3::
# 82 "data/maps/GreenRestArea/scripts.pory"
	lock
# 83 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_WEST
# 84 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 85 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 86 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_RivalTrigger1_Text_0
# 87 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 88 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger1_Movement_0
# 89 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 90 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger4::
# 95 "data/maps/GreenRestArea/scripts.pory"
	lock
# 96 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_EAST
# 97 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 98 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 99 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_RivalTrigger1_Text_0
# 100 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 101 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger4_Movement_0
# 102 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 103 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger5::
# 108 "data/maps/GreenRestArea/scripts.pory"
	lock
# 109 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_EAST
# 110 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 111 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 112 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_RivalTrigger1_Text_0
# 113 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 114 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger4_Movement_0
# 115 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_RivalTrigger5_Movement_0
# 116 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 117 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_EventScript_RivalTalk::
# 122 "data/maps/GreenRestArea/scripts.pory"
	lock
# 123 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_SOUTH
# 124 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 125 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 126 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_RivalTrigger1_Text_0
# 127 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_EventScript_RivalBattle::
# 132 "data/maps/GreenRestArea/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 133 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_RivalBattle_Text_0
# 141 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 142 "data/maps/GreenRestArea/scripts.pory"
	switch VAR_STARTER_MON
# 143 "data/maps/GreenRestArea/scripts.pory"
	case 0, GreenRestArea_EventScript_RivalBattle_3
# 145 "data/maps/GreenRestArea/scripts.pory"
	case 1, GreenRestArea_EventScript_RivalBattle_4
# 147 "data/maps/GreenRestArea/scripts.pory"
	case 2, GreenRestArea_EventScript_RivalBattle_5
GreenRestArea_EventScript_RivalBattle_1:
# 150 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_RivalBattle_Text_1
# 162 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 163 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_EventScript_RivalBattle_Movement_0
# 164 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 165 "data/maps/GreenRestArea/scripts.pory"
	removeobject LOCALID_GREEN_REST_AREA_BWD
# 166 "data/maps/GreenRestArea/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_GREEN_REST_AREA
# 167 "data/maps/GreenRestArea/scripts.pory"
	setvar VAR_GREEN_REST_AREA_STATE, 1
# 168 "data/maps/GreenRestArea/scripts.pory"
	fadedefaultbgm
# 169 "data/maps/GreenRestArea/scripts.pory"
	release
	return

GreenRestArea_EventScript_RivalBattle_3:
# 144 "data/maps/GreenRestArea/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_3, GreenRestArea_Text_BandanaWaddleDeeDefeat
	goto GreenRestArea_EventScript_RivalBattle_1

GreenRestArea_EventScript_RivalBattle_4:
# 146 "data/maps/GreenRestArea/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, GreenRestArea_Text_BandanaWaddleDeeDefeat
	goto GreenRestArea_EventScript_RivalBattle_1

GreenRestArea_EventScript_RivalBattle_5:
# 148 "data/maps/GreenRestArea/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_1, GreenRestArea_Text_BandanaWaddleDeeDefeat
	goto GreenRestArea_EventScript_RivalBattle_1


# 60 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger1_Movement_0:
# 60 "data/maps/GreenRestArea/scripts.pory"
	walk_in_place_right
	step_end

# 61 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger1_Movement_1:
# 61 "data/maps/GreenRestArea/scripts.pory"
	walk_left
# 61 "data/maps/GreenRestArea/scripts.pory"
	walk_left
	step_end

# 75 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger2_Movement_0:
# 75 "data/maps/GreenRestArea/scripts.pory"
	walk_left
	step_end

# 101 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger4_Movement_0:
# 101 "data/maps/GreenRestArea/scripts.pory"
	walk_in_place_left
	step_end

# 115 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger5_Movement_0:
# 115 "data/maps/GreenRestArea/scripts.pory"
	walk_right
	step_end

# 163 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_EventScript_RivalBattle_Movement_0:
# 163 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 163 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 163 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 163 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 163 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 163 "data/maps/GreenRestArea/scripts.pory"
	walk_up
	step_end

GreenRestArea_EventScript_Sign_Text_0:
# 8 "data/maps/GreenRestArea/scripts.pory"
	.string "GREEN REST AREA\n"
	.string "A pit stop in the rolling plains.$"

GreenRestArea_EventScript_WaddleDeeShopEmployee_Text_0:
# 19 "data/maps/GreenRestArea/scripts.pory"
	.string "We're selling helpful items to Royal\n"
	.string "Royale participants here.\p"
	.string "Here's a freebie to get you started!$"

GreenRestArea_EventScript_WaddleDeeShopEmployee_Text_1:
# 35 "data/maps/GreenRestArea/scripts.pory"
	.string "May you find everything you need to\n"
	.string "succeed at our shop!$"

GreenRestArea_EventScript_WaddleDeeTalk_Text_0:
# 44 "data/maps/GreenRestArea/scripts.pory"
	.string "Finding a Rest Area on your adventure\n"
	.string "always feels so nice, doesn't it?\p"
	.string "I always make sure to heal up and\n"
	.string "save before I head out again.$"

GreenRestArea_RivalTrigger1_Text_0:
# 58 "data/maps/GreenRestArea/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} Kirby!$"

GreenRestArea_EventScript_RivalBattle_Text_0:
# 133 "data/maps/GreenRestArea/scripts.pory"
	.string "I think I'm starting to get the hang\n"
	.string "of battling with my Helpers.\p"
	.string "So… uh… if it's okay with you…\n"
	.string "can I please ask for a battle?\p"
	.string "My team and I are feeling pretty\n"
	.string "confident about this!$"

GreenRestArea_EventScript_RivalBattle_Text_1:
# 150 "data/maps/GreenRestArea/scripts.pory"
	.string "{COLOR BLUE}BANDANA WADDLE DEE:{COLOR DARK_GRAY} That was a good\n"
	.string "battle, Kirby. I could learn from you.\p"
	.string "There's a lot more nuance to the Royal\n"
	.string "Royale's rules than I expected…\p"
	.string "I'll have to round out my team more to\n"
	.string "get the upper hand. And of course,\l"
	.string "that'll fill out my Info Cards too!\p"
	.string "Waddle Dee Town isn't too far from here.\n"
	.string "I'll see you back at the town, Kirby!$"

GreenRestArea_Text_BandanaWaddleDeeDefeat::
# 172 "data/maps/GreenRestArea/scripts.pory"
	.string "Even though I trained, I'm still at\n"
	.string "a disadvantage against your team…$"
