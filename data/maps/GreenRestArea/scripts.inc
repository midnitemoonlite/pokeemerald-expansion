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
# 30 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeShopEmployee_Text_1
# 32 "data/maps/GreenRestArea/scripts.pory"
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
	setflag FLAG_RECEIVED_POTION_OLDALE
	goto GreenRestArea_EventScript_WaddleDeeShopEmployee_1

GreenRestArea_EventScript_WaddleDeeShopEmployee_5:
# 26 "data/maps/GreenRestArea/scripts.pory"
	msgbox gText_TooBadBagIsFull
	goto GreenRestArea_EventScript_WaddleDeeShopEmployee_4


GreenRestArea_EventScript_WaddleDeeTalk::
# 37 "data/maps/GreenRestArea/scripts.pory"
	lock
# 38 "data/maps/GreenRestArea/scripts.pory"
	faceplayer
# 39 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeTalk_Text_0
# 44 "data/maps/GreenRestArea/scripts.pory"
	release
	return


GreenRestArea_RivalTrigger1::
# 49 "data/maps/GreenRestArea/scripts.pory"
	lock
# 50 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_WEST
# 51 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 52 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 53 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_BandanaDeeIntro
# 54 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 55 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger1_Movement_0
# 56 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_RivalTrigger1_Movement_1
# 57 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 58 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger2::
# 63 "data/maps/GreenRestArea/scripts.pory"
	lock
# 64 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_WEST
# 65 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 66 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 67 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_BandanaDeeIntro
# 68 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 69 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger1_Movement_0
# 70 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_RivalTrigger2_Movement_0
# 71 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 72 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger3::
# 77 "data/maps/GreenRestArea/scripts.pory"
	lock
# 78 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_WEST
# 79 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 80 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 81 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_BandanaDeeIntro
# 82 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 83 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger1_Movement_0
# 84 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 85 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger4::
# 90 "data/maps/GreenRestArea/scripts.pory"
	lock
# 91 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_EAST
# 92 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 93 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 94 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_BandanaDeeIntro
# 95 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 96 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger4_Movement_0
# 97 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 98 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_RivalTrigger5::
# 103 "data/maps/GreenRestArea/scripts.pory"
	lock
# 104 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_EAST
# 105 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 106 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 107 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_BandanaDeeIntro
# 108 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 109 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, GreenRestArea_RivalTrigger4_Movement_0
# 110 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_RivalTrigger5_Movement_0
# 111 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 112 "data/maps/GreenRestArea/scripts.pory"
	goto GreenRestArea_EventScript_RivalBattle
	return


GreenRestArea_EventScript_RivalTalk::
# 117 "data/maps/GreenRestArea/scripts.pory"
	lock
# 118 "data/maps/GreenRestArea/scripts.pory"
	turnobject LOCALID_GREEN_REST_AREA_BWD, DIR_SOUTH
# 119 "data/maps/GreenRestArea/scripts.pory"
	playse SE_PIN
# 120 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, Common_Movement_ExclamationMark
# 121 "data/maps/GreenRestArea/scripts.pory"
	msgbox GreenRestArea_BandanaDeeIntro
# 122 "data/maps/GreenRestArea/scripts.pory"
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
# 159 "data/maps/GreenRestArea/scripts.pory"
	closemessage
# 160 "data/maps/GreenRestArea/scripts.pory"
	applymovement LOCALID_GREEN_REST_AREA_BWD, GreenRestArea_EventScript_RivalBattle_Movement_0
# 161 "data/maps/GreenRestArea/scripts.pory"
	waitmovement
# 162 "data/maps/GreenRestArea/scripts.pory"
	removeobject LOCALID_GREEN_REST_AREA_BWD
# 163 "data/maps/GreenRestArea/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_GREEN_REST_AREA
# 164 "data/maps/GreenRestArea/scripts.pory"
	setvar VAR_GREEN_REST_AREA_STATE, 1
# 165 "data/maps/GreenRestArea/scripts.pory"
	savebgm MUS_DUMMY
# 166 "data/maps/GreenRestArea/scripts.pory"
	fadedefaultbgm
# 167 "data/maps/GreenRestArea/scripts.pory"
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


# 55 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger1_Movement_0:
# 55 "data/maps/GreenRestArea/scripts.pory"
	walk_in_place_right
	step_end

# 56 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger1_Movement_1:
# 56 "data/maps/GreenRestArea/scripts.pory"
	walk_left
# 56 "data/maps/GreenRestArea/scripts.pory"
	walk_left
	step_end

# 70 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger2_Movement_0:
# 70 "data/maps/GreenRestArea/scripts.pory"
	walk_left
	step_end

# 96 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger4_Movement_0:
# 96 "data/maps/GreenRestArea/scripts.pory"
	walk_in_place_left
	step_end

# 110 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_RivalTrigger5_Movement_0:
# 110 "data/maps/GreenRestArea/scripts.pory"
	walk_right
	step_end

# 160 "data/maps/GreenRestArea/scripts.pory"
GreenRestArea_EventScript_RivalBattle_Movement_0:
# 160 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 160 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 160 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 160 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 160 "data/maps/GreenRestArea/scripts.pory"
	walk_up
# 160 "data/maps/GreenRestArea/scripts.pory"
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
# 30 "data/maps/GreenRestArea/scripts.pory"
	.string "May you find everything you need to\n"
	.string "succeed at our shop!$"

GreenRestArea_EventScript_WaddleDeeTalk_Text_0:
# 39 "data/maps/GreenRestArea/scripts.pory"
	.string "Finding a Rest Area on your adventure\n"
	.string "always feels so nice, doesn't it?\p"
	.string "I always make sure to heal up and\n"
	.string "save before I head out again.$"

GreenRestArea_EventScript_RivalBattle_Text_0:
# 133 "data/maps/GreenRestArea/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}I think I'm starting to get the hang of\n"
	.string "battling with my Helpers.\p"
	.string "So… uh… if it's okay with you…\n"
	.string "can I ask for a battle?\p"
	.string "My team and I are feeling pretty\n"
	.string "confident about our synergy!$"

GreenRestArea_EventScript_RivalBattle_Text_1:
# 150 "data/maps/GreenRestArea/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}That was a good battle, Kirby. I guess\n"
	.string "I've still got a lot to learn, huh?\p"
	.string "I'll have to round out my team more to\n"
	.string "get the upper hand. And of course,\l"
	.string "that'll fill out my Info Cards too!\p"
	.string "Waddle Dee Town isn't too far from here.\n"
	.string "I'll see you there, Kirby!$"

GreenRestArea_BandanaDeeIntro::
# 125 "data/maps/GreenRestArea/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Kirby!$"

GreenRestArea_Text_BandanaWaddleDeeDefeat::
# 170 "data/maps/GreenRestArea/scripts.pory"
	.string "Even though we trained, I guess it's\n"
	.string "not that simple…$"
