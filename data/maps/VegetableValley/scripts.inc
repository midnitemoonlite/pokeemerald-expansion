# 1 "data/maps/VegetableValley/scripts.pory"

# 2 "data/maps/VegetableValley/scripts.pory"
VegetableValley_MapScripts::
# 3 "data/maps/VegetableValley/scripts.pory"
	.byte 0

VegetableValley_EventScript_Sign::
# 8 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/VegetableValley/scripts.pory"
	closemessage
	return


VegetableValley_EventScript_ForestSign::
# 15 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_EventScript_ForestSign_Text_0, MSGBOX_SIGN
# 17 "data/maps/VegetableValley/scripts.pory"
	closemessage
	return


VegetableValley_EventScript_WaddleDee::
# 22 "data/maps/VegetableValley/scripts.pory"
	lock
# 23 "data/maps/VegetableValley/scripts.pory"
	faceplayer
# 24 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_EventScript_WaddleDee_Text_0
# 30 "data/maps/VegetableValley/scripts.pory"
	release
	return


VegetableValley_EventScript_Trainer1::
# 35 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, VegetableValley_Text_Trainer1Intro, VegetableValley_Text_Trainer1Defeated
# 36 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


VegetableValley_EventScript_Trainer2::
# 61 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_1, VegetableValley_Text_Trainer2Intro, VegetableValley_Text_Trainer2Defeated
# 62 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


VegetableValley_EventScript_Trainer3::
# 85 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_2, VegetableValley_Text_Trainer3Intro, VegetableValley_Text_Trainer3Defeated
# 86 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


VegetableValley_EventScript_Trainer4::
# 107 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, VegetableValley_Text_Trainer4Intro, VegetableValley_Text_Trainer4Defeated
# 108 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


VegetableValley_EventScript_Trainer5::
# 134 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, VegetableValley_Text_Trainer5Intro, VegetableValley_Text_Trainer5Defeated
# 135 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


VegetableValley_EventScript_Trainer6::
# 158 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, VegetableValley_Text_Trainer6Intro, VegetableValley_Text_Trainer6Defeated
# 159 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_Text_Trainer6Post, MSGBOX_AUTOCLOSE
	return


VegetableValley_EventScript_TriggerLeft::
# 184 "data/maps/VegetableValley/scripts.pory"
	lock
# 185 "data/maps/VegetableValley/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 186 "data/maps/VegetableValley/scripts.pory"
	addobject LOCALID_BWD_VEGETABLE
# 187 "data/maps/VegetableValley/scripts.pory"
	applymovement LOCALID_BWD_VEGETABLE, VegetableValley_EventScript_TriggerLeft_Movement_0
# 188 "data/maps/VegetableValley/scripts.pory"
	waitmovement
# 189 "data/maps/VegetableValley/scripts.pory"
	goto VegetableValley_EventScript_BandanaWaddleDee
	return


VegetableValley_EventScript_TriggerRight::
# 194 "data/maps/VegetableValley/scripts.pory"
	lock
# 195 "data/maps/VegetableValley/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 196 "data/maps/VegetableValley/scripts.pory"
	addobject LOCALID_BWD_VEGETABLE
# 197 "data/maps/VegetableValley/scripts.pory"
	applymovement LOCALID_BWD_VEGETABLE, VegetableValley_EventScript_TriggerRight_Movement_0
# 198 "data/maps/VegetableValley/scripts.pory"
	waitmovement
# 199 "data/maps/VegetableValley/scripts.pory"
	goto VegetableValley_EventScript_BandanaWaddleDee
	return


VegetableValley_EventScript_BandanaWaddleDee::
# 204 "data/maps/VegetableValley/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
# 205 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_EventScript_BandanaWaddleDee_Text_0
# 218 "data/maps/VegetableValley/scripts.pory"
	closemessage
# 219 "data/maps/VegetableValley/scripts.pory"
	switch VAR_STARTER_MON
# 220 "data/maps/VegetableValley/scripts.pory"
	case 0, VegetableValley_EventScript_BandanaWaddleDee_3
# 222 "data/maps/VegetableValley/scripts.pory"
	case 1, VegetableValley_EventScript_BandanaWaddleDee_4
# 224 "data/maps/VegetableValley/scripts.pory"
	case 2, VegetableValley_EventScript_BandanaWaddleDee_5
VegetableValley_EventScript_BandanaWaddleDee_1:
# 227 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_EventScript_BandanaWaddleDee_Text_1
# 229 "data/maps/VegetableValley/scripts.pory"
	giveitem_msg VegetableValley_Text_ReceivedEscapeRope, ITEM_ESCAPE_ROPE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 230 "data/maps/VegetableValley/scripts.pory"
	msgbox VegetableValley_EventScript_BandanaWaddleDee_Text_2
# 234 "data/maps/VegetableValley/scripts.pory"
	closemessage
# 235 "data/maps/VegetableValley/scripts.pory"
	checkobjectat 59, 9
# 236 "data/maps/VegetableValley/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VegetableValley_EventScript_BandanaWaddleDee_7
# 243 "data/maps/VegetableValley/scripts.pory"
	applymovement LOCALID_BWD_VEGETABLE, VegetableValley_EventScript_BandanaWaddleDee_Movement_1
# 244 "data/maps/VegetableValley/scripts.pory"
	waitmovement
VegetableValley_EventScript_BandanaWaddleDee_6:
# 246 "data/maps/VegetableValley/scripts.pory"
	removeobject LOCALID_BWD_VEGETABLE
# 247 "data/maps/VegetableValley/scripts.pory"
	playse SE_EXIT
# 248 "data/maps/VegetableValley/scripts.pory"
	waitse
# 249 "data/maps/VegetableValley/scripts.pory"
	setvar VAR_VEGETABLE_VALLEY_STATE, 1
# 250 "data/maps/VegetableValley/scripts.pory"
	savebgm MUS_DUMMY
# 251 "data/maps/VegetableValley/scripts.pory"
	fadedefaultbgm
# 252 "data/maps/VegetableValley/scripts.pory"
	release
	return

VegetableValley_EventScript_BandanaWaddleDee_3:
# 221 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MT_PYRE_3, VegetableValley_Text_BandanaWaddleDeeDefeat
	goto VegetableValley_EventScript_BandanaWaddleDee_1

VegetableValley_EventScript_BandanaWaddleDee_4:
# 223 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_4, VegetableValley_Text_BandanaWaddleDeeDefeat
	goto VegetableValley_EventScript_BandanaWaddleDee_1

VegetableValley_EventScript_BandanaWaddleDee_5:
# 225 "data/maps/VegetableValley/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_5, VegetableValley_Text_BandanaWaddleDeeDefeat
	goto VegetableValley_EventScript_BandanaWaddleDee_1

VegetableValley_EventScript_BandanaWaddleDee_7:
# 238 "data/maps/VegetableValley/scripts.pory"
	applymovement LOCALID_BWD_VEGETABLE, VegetableValley_EventScript_BandanaWaddleDee_Movement_0
# 239 "data/maps/VegetableValley/scripts.pory"
	waitmovement
	goto VegetableValley_EventScript_BandanaWaddleDee_6


# 187 "data/maps/VegetableValley/scripts.pory"
VegetableValley_EventScript_TriggerLeft_Movement_0:
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 187 "data/maps/VegetableValley/scripts.pory"
	walk_up
	step_end

# 197 "data/maps/VegetableValley/scripts.pory"
VegetableValley_EventScript_TriggerRight_Movement_0:
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_faster_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 197 "data/maps/VegetableValley/scripts.pory"
	walk_up
	step_end

# 238 "data/maps/VegetableValley/scripts.pory"
VegetableValley_EventScript_BandanaWaddleDee_Movement_0:
# 238 "data/maps/VegetableValley/scripts.pory"
	walk_right
# 238 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 238 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 238 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 238 "data/maps/VegetableValley/scripts.pory"
	walk_up
	step_end

# 243 "data/maps/VegetableValley/scripts.pory"
VegetableValley_EventScript_BandanaWaddleDee_Movement_1:
# 243 "data/maps/VegetableValley/scripts.pory"
	walk_left
# 243 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 243 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 243 "data/maps/VegetableValley/scripts.pory"
	walk_up
# 243 "data/maps/VegetableValley/scripts.pory"
	walk_up
	step_end

VegetableValley_EventScript_Sign_Text_0:
# 8 "data/maps/VegetableValley/scripts.pory"
	.string "VEGETABLE VALLEY\n"
	.string "A verdant farmland with fresh crops.$"

VegetableValley_EventScript_ForestSign_Text_0:
# 15 "data/maps/VegetableValley/scripts.pory"
	.string "Now approaching: FRUITY FOREST\n"
	.string "Be mindful of the forest's guardian.$"

VegetableValley_EventScript_WaddleDee_Text_0:
# 24 "data/maps/VegetableValley/scripts.pory"
	.string "Between Vegetable Valley and Fruity\n"
	.string "Forest, harvests are plentiful here!\p"
	.string "If you're looking to grow locally, you\n"
	.string "might be able to find some seeds\l"
	.string "left over in the dirt patches.$"

VegetableValley_EventScript_BandanaWaddleDee_Text_0:
# 205 "data/maps/VegetableValley/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Looks like I caught up to you just in\n"
	.string "time, Kirby!\p"
	.string "Check it out! I got a Brooch from the\n"
	.string "Waddle Dee Arena!\p"
	.string "I'm really proud of my Helpers. They're\n"
	.string "a cut above the rest!\p"
	.string "Say, now that we both have a Brooch,\n"
	.string "why don't we have another battle?\p"
	.string "This time, I'm confident I can win!$"

VegetableValley_EventScript_BandanaWaddleDee_Text_1:
# 227 "data/maps/VegetableValley/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Oh yeah, I almost forgot. Here, Kirby,\n"
	.string "this is for you!$"

VegetableValley_EventScript_BandanaWaddleDee_Text_2:
# 230 "data/maps/VegetableValley/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}If you get lost in the forest, you can\n"
	.string "use this as an emergency exit.\p"
	.string "Catch you later, Kirby!$"

VegetableValley_Text_Trainer1Intro::
# 39 "data/maps/VegetableValley/scripts.pory"
	.string "Phew, I'm bushed! Hey, how about a\n"
	.string "battle on my break?$"

VegetableValley_Text_Trainer1Defeated::
# 45 "data/maps/VegetableValley/scripts.pory"
	.string "So much for unwinding… that was tense!$"

VegetableValley_Text_Trainer1Post::
# 50 "data/maps/VegetableValley/scripts.pory"
	.string "After the avalanche in Waddle Dee Town,\n"
	.string "we held inspections in nearby areas.\p"
	.string "I can confirm this place is unscatched.\n"
	.string "Safe travels!$"

VegetableValley_Text_Trainer2Intro::
# 65 "data/maps/VegetableValley/scripts.pory"
	.string "I'm all about Bug-type Helpers!\n"
	.string "Let's go!$"

VegetableValley_Text_Trainer2Defeated::
# 71 "data/maps/VegetableValley/scripts.pory"
	.string "My brilliant bugs…!$"

VegetableValley_Text_Trainer2Post::
# 76 "data/maps/VegetableValley/scripts.pory"
	.string "It seems Bug-types aren't very\n"
	.string "popular… I wish I knew someone\l"
	.string "else who liked them like I do!$"

VegetableValley_Text_Trainer3Intro::
# 89 "data/maps/VegetableValley/scripts.pory"
	.string "La la la! Let's play in the fields!$"

VegetableValley_Text_Trainer3Defeated::
# 94 "data/maps/VegetableValley/scripts.pory"
	.string "Ha ha ha! That was so much fun!$"

VegetableValley_Text_Trainer3Post::
# 99 "data/maps/VegetableValley/scripts.pory"
	.string "Isn't running around all this greenery\n"
	.string "soooo relaxing?$"

VegetableValley_Text_Trainer4Intro::
# 111 "data/maps/VegetableValley/scripts.pory"
	.string "I heard it from the forest! A new Arena\n"
	.string "has opened up in Waddle Dee Town!\p"
	.string "Before I challenge it, I'll be taking\n"
	.string "you on!$"

VegetableValley_Text_Trainer4Defeated::
# 120 "data/maps/VegetableValley/scripts.pory"
	.string "Wait… you already got a Brooch from\n"
	.string "that Arena?$"

VegetableValley_Text_Trainer4Post::
# 126 "data/maps/VegetableValley/scripts.pory"
	.string "Well, no wonder I lost! You're plenty\n"
	.string "strong, it seems!$"

VegetableValley_Text_Trainer5Intro::
# 138 "data/maps/VegetableValley/scripts.pory"
	.string "Yowza! I just hooked a snazzy-looking\n"
	.string "Helper! Wanna see what it can do?$"

VegetableValley_Text_Trainer5Defeated::
# 144 "data/maps/VegetableValley/scripts.pory"
	.string "Maybe freshly-caught isn't the best\n"
	.string "when it comes to Helper battles…$"

VegetableValley_Text_Trainer5Post::
# 150 "data/maps/VegetableValley/scripts.pory"
	.string "I'm sure with enough love and care,\n"
	.string "my Blipper will grow big and strong!$"

VegetableValley_Text_Trainer6Intro::
# 162 "data/maps/VegetableValley/scripts.pory"
	.string "You're planning to go into the forest?\n"
	.string "I'd be careful if I were you…$"

VegetableValley_Text_Trainer6Defeated::
# 168 "data/maps/VegetableValley/scripts.pory"
	.string "Don't say I didn't warn you!$"

VegetableValley_Text_Trainer6Post::
# 173 "data/maps/VegetableValley/scripts.pory"
	.string "It may sound nice, but that forest is\n"
	.string "dark and murky and easy to get lost in.\p"
	.string "Plus, I heard there's a scary guardian\n"
	.string "in there who punishes trespassers!$"

VegetableValley_Text_ReceivedEscapeRope::
# 255 "data/maps/VegetableValley/scripts.pory"
	.string "{SPEAKER NAME_NONE}Obtained the {COLOR BLUE}Escape Rope{COLOR DARK_GRAY}!$"

VegetableValley_Text_BandanaWaddleDeeDefeat::
# 260 "data/maps/VegetableValley/scripts.pory"
	.string "Aww… I thought things would be\n"
	.string "different this time. Good battle, Kirby!$"
