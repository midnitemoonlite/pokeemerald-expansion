# 1 "data/maps/PrismPlains/scripts.pory"

# 2 "data/maps/PrismPlains/scripts.pory"
PrismPlains_MapScripts::
# 3 "data/maps/PrismPlains/scripts.pory"
	.byte 0

PrismPlains_EventScript_Sign::
# 8 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/PrismPlains/scripts.pory"
	closemessage
	return


PrismPlains_EventScript_WaddleDeeRunning::
# 15 "data/maps/PrismPlains/scripts.pory"
	lock
# 16 "data/maps/PrismPlains/scripts.pory"
	faceplayer
# 17 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_EventScript_WaddleDeeRunning_Text_0
# 28 "data/maps/PrismPlains/scripts.pory"
	release
	return


PrismPlains_EventScript_WaddleDeeLedgeJump::
# 33 "data/maps/PrismPlains/scripts.pory"
	goto_if_unset FLAG_TEMP_16, PrismPlains_EventScript_WaddleDeeLedgeJump_1
# 47 "data/maps/PrismPlains/scripts.pory"
	goto_if_set FLAG_TEMP_16, PrismPlains_EventScript_WaddleDeeLedgeJump_2
	return

PrismPlains_EventScript_WaddleDeeLedgeJump_1:
# 35 "data/maps/PrismPlains/scripts.pory"
	lock
# 36 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_EventScript_WaddleDeeLedgeJump_Text_0
# 41 "data/maps/PrismPlains/scripts.pory"
	closemessage
# 42 "data/maps/PrismPlains/scripts.pory"
	applymovement LOCALID_LEDGE_WADDLE_DEE, PrismPlains_EventScript_WaddleDeeLedgeJump_Movement_0
# 43 "data/maps/PrismPlains/scripts.pory"
	waitmovement
# 44 "data/maps/PrismPlains/scripts.pory"
	setobjectxyperm LOCALID_LEDGE_WADDLE_DEE, 5, 29
# 45 "data/maps/PrismPlains/scripts.pory"
	setflag FLAG_TEMP_16
# 46 "data/maps/PrismPlains/scripts.pory"
	release
	return

PrismPlains_EventScript_WaddleDeeLedgeJump_2:
# 49 "data/maps/PrismPlains/scripts.pory"
	lock
# 50 "data/maps/PrismPlains/scripts.pory"
	faceplayer
# 51 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_EventScript_WaddleDeeLedgeJump_Text_1
# 52 "data/maps/PrismPlains/scripts.pory"
	release
	return


PrismPlains_EventScript_WaddleDeeRocky::
# 58 "data/maps/PrismPlains/scripts.pory"
	lock
# 59 "data/maps/PrismPlains/scripts.pory"
	faceplayer
# 60 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_EventScript_WaddleDeeRocky_Text_0
# 65 "data/maps/PrismPlains/scripts.pory"
	release
	return


PrismPlains_EventScript_EnteringTown1::
# 70 "data/maps/PrismPlains/scripts.pory"
	lock
# 71 "data/maps/PrismPlains/scripts.pory"
	faceplayer
# 72 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_EventScript_EnteringTown1_Text_0
# 77 "data/maps/PrismPlains/scripts.pory"
	release
	return


PrismPlains_EventScript_EnteringTown2::
# 82 "data/maps/PrismPlains/scripts.pory"
	lock
# 83 "data/maps/PrismPlains/scripts.pory"
	faceplayer
# 84 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_EventScript_EnteringTown2_Text_0
# 87 "data/maps/PrismPlains/scripts.pory"
	release
	return


PrismPlains_EventScript_Trainer1::
# 92 "data/maps/PrismPlains/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, PrismPlains_Text_Trainer1Intro, PrismPlains_Text_Trainer1Defeated
# 93 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


PrismPlains_EventScript_Trainer2::
# 99 "data/maps/PrismPlains/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, PrismPlains_Text_Trainer2Intro, PrismPlains_Text_Trainer2Defeated
# 100 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


PrismPlains_EventScript_Trainer3::
# 106 "data/maps/PrismPlains/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, PrismPlains_Text_Trainer3Intro, PrismPlains_Text_Trainer3Defeated
# 107 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


PrismPlains_EventScript_Trainer4::
# 113 "data/maps/PrismPlains/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, PrismPlains_Text_Trainer4Intro, PrismPlains_Text_Trainer4Defeated
# 114 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


PrismPlains_EventScript_Trainer5::
# 120 "data/maps/PrismPlains/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, PrismPlains_Text_Trainer5Intro, PrismPlains_Text_Trainer5Defeated
# 121 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


PrismPlains_EventScript_Trainer6::
# 127 "data/maps/PrismPlains/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, PrismPlains_Text_Trainer6Intro, PrismPlains_Text_Trainer6Defeated
# 128 "data/maps/PrismPlains/scripts.pory"
	msgbox PrismPlains_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


# 42 "data/maps/PrismPlains/scripts.pory"
PrismPlains_EventScript_WaddleDeeLedgeJump_Movement_0:
# 42 "data/maps/PrismPlains/scripts.pory"
	jump_2_down
# 42 "data/maps/PrismPlains/scripts.pory"
	walk_down
	step_end

PrismPlains_EventScript_Sign_Text_0:
# 8 "data/maps/PrismPlains/scripts.pory"
	.string "PRISM PLAINS\n"
	.string "Mind your step on this hilltop road.$"

PrismPlains_EventScript_WaddleDeeRunning_Text_0:
# 17 "data/maps/PrismPlains/scripts.pory"
	.string "Hup, hup…\p"
	.string "I like to jog up and down the hills, but\n"
	.string "today it's been nothing but others\l"
	.string "asking for Helper battles.\p"
	.string "Hup, hup… can't they see I'm just an\n"
	.string "ordinary Waddle Dee?\p"
	.string "If you're moving forward, be ready\n"
	.string "for challenges. Hup, hup…$"

PrismPlains_EventScript_WaddleDeeLedgeJump_Text_0:
# 36 "data/maps/PrismPlains/scripts.pory"
	.string "One…\p"
	.string "Two…\p"
	.string "Three!$"

PrismPlains_EventScript_WaddleDeeLedgeJump_Text_1:
# 51 "data/maps/PrismPlains/scripts.pory"
	.string "Jumping down ledges is so much fun!$"

PrismPlains_EventScript_WaddleDeeRocky_Text_0:
# 60 "data/maps/PrismPlains/scripts.pory"
	.string "I'm surprised you found your way\n"
	.string "through here.\p"
	.string "This place is my secret spot… I like\n"
	.string "navigating around all the rocks here.$"

PrismPlains_EventScript_EnteringTown1_Text_0:
# 72 "data/maps/PrismPlains/scripts.pory"
	.string "You are now approaching one of the\n"
	.string "Great King's many castles.\p"
	.string "His Majesty has recently arrived in\n"
	.string "town. Don't try anything funny!$"

PrismPlains_EventScript_EnteringTown2_Text_0:
# 84 "data/maps/PrismPlains/scripts.pory"
	.string "Waddle Dee Town is just up ahead.\n"
	.string "I doubt I need to tell you, Kirby, but…\l"
	.string "Be on your best behavior, okay?$"

PrismPlains_Text_Trainer1Intro::
# 132 "data/maps/PrismPlains/scripts.pory"
	.string "Alright! It's time for my very first\n"
	.string "battle of Dedede's Royal Royale!$"

PrismPlains_Text_Trainer1Defeated::
# 138 "data/maps/PrismPlains/scripts.pory"
	.string "Maybe having my first battle against\n"
	.string "Kirby was a lopsided matchup…$"

PrismPlains_Text_Trainer1Post::
# 144 "data/maps/PrismPlains/scripts.pory"
	.string "Oh well, there's no shame in losing.\n"
	.string "You did great, Kirby!$"

PrismPlains_Text_Trainer2Intro::
# 150 "data/maps/PrismPlains/scripts.pory"
	.string "Doesn't a battle on a bridge\n"
	.string "sound exciting?$"

PrismPlains_Text_Trainer2Defeated::
# 156 "data/maps/PrismPlains/scripts.pory"
	.string "Whoa! I almost fell off!$"

PrismPlains_Text_Trainer2Post::
# 161 "data/maps/PrismPlains/scripts.pory"
	.string "Always watch where you walk!$"

PrismPlains_Text_Trainer3Intro::
# 166 "data/maps/PrismPlains/scripts.pory"
	.string "I tried challenging the Castle Arena,\n"
	.string "but it was really tough…$"

PrismPlains_Text_Trainer3Defeated::
# 172 "data/maps/PrismPlains/scripts.pory"
	.string "Looks like I'll need to train more.$"

PrismPlains_Text_Trainer3Post::
# 177 "data/maps/PrismPlains/scripts.pory"
	.string "How should I make my Helpers stronger?\n"
	.string "Maybe I can teach them new moves…$"

PrismPlains_Text_Trainer4Intro::
# 183 "data/maps/PrismPlains/scripts.pory"
	.string "I've got a bunch of Helpers already!\n"
	.string "I can win this battle easily!$"

PrismPlains_Text_Trainer4Defeated::
# 189 "data/maps/PrismPlains/scripts.pory"
	.string "Whaaaat? That didn't work?$"

PrismPlains_Text_Trainer4Post::
# 194 "data/maps/PrismPlains/scripts.pory"
	.string "I understand my weakness now…\n"
	.string "I need to catch MORE Beanbons!$"

PrismPlains_Text_Trainer5Intro::
# 200 "data/maps/PrismPlains/scripts.pory"
	.string "Surprise!$"

PrismPlains_Text_Trainer5Defeated::
# 205 "data/maps/PrismPlains/scripts.pory"
	.string "Did I shock you?$"

PrismPlains_Text_Trainer5Post::
# 210 "data/maps/PrismPlains/scripts.pory"
	.string "It's hard to see down those ledges\n"
	.string "thanks to the rocks. This is the\l"
	.string "perfect spot to surprise them!$"

PrismPlains_Text_Trainer6Intro::
# 217 "data/maps/PrismPlains/scripts.pory"
	.string "Hup, hup! Hi, Kirby! Are you up for a\n"
	.string "Helper battle?$"

PrismPlains_Text_Trainer6Defeated::
# 223 "data/maps/PrismPlains/scripts.pory"
	.string "Hup, hup… stumble… you got me!$"

PrismPlains_Text_Trainer6Post::
# 228 "data/maps/PrismPlains/scripts.pory"
	.string "Jogging up and down these hills is more\n"
	.string "exciting than ever now. Hup, hup...!$"
