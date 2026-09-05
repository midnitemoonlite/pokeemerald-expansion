# 1 "data/maps/OrangeOcean/scripts.pory"

# 2 "data/maps/OrangeOcean/scripts.pory"
OrangeOcean_MapScripts::
# 3 "data/maps/OrangeOcean/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, OrangeOcean_OnFrame
# 4 "data/maps/OrangeOcean/scripts.pory"
	.byte 0
# 5 "data/maps/OrangeOcean/scripts.pory"

# 6 "data/maps/OrangeOcean/scripts.pory"
OrangeOcean_OnFrame::
# 7 "data/maps/OrangeOcean/scripts.pory"
	map_script_2 VAR_ORANGE_OCEAN_STATE, 1, OrangeOcean_EventScript_HalberdTakeOff
# 8 "data/maps/OrangeOcean/scripts.pory"
	.2byte 0

OrangeOcean_EventScript_HalberdTakeOff::
# 13 "data/maps/OrangeOcean/scripts.pory"
	playse SE_M_EARTHQUAKE
# 14 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8004, 3
# 15 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8005, 0
# 16 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8006, 20
# 17 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8007, 4
# 18 "data/maps/OrangeOcean/scripts.pory"
	special ShakeCamera
# 19 "data/maps/OrangeOcean/scripts.pory"
	waitstate
# 20 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8004, 2
# 21 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8005, 0
# 22 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8006, 14
# 23 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8007, 4
# 24 "data/maps/OrangeOcean/scripts.pory"
	special ShakeCamera
# 25 "data/maps/OrangeOcean/scripts.pory"
	waitstate
# 26 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8004, 1
# 27 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8005, 0
# 28 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8006, 10
# 29 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_0x8007, 4
# 30 "data/maps/OrangeOcean/scripts.pory"
	special ShakeCamera
# 31 "data/maps/OrangeOcean/scripts.pory"
	waitstate
# 32 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_HalberdTakeOff_Text_0
# 33 "data/maps/OrangeOcean/scripts.pory"
	closemessage
# 34 "data/maps/OrangeOcean/scripts.pory"
	setvar VAR_ORANGE_OCEAN_STATE, 2
	end


OrangeOcean_EventScript_Sign::
# 40 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_Sign_Text_0, MSGBOX_SIGN
# 42 "data/maps/OrangeOcean/scripts.pory"
	closemessage
	return


OrangeOcean_EventScript_DivingSpot::
# 47 "data/maps/OrangeOcean/scripts.pory"
	lockall
# 48 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_DivingSpot_Text_0, MSGBOX_YESNO
# 54 "data/maps/OrangeOcean/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne OrangeOcean_EventScript_DivingSpot_1
# 61 "data/maps/OrangeOcean/scripts.pory"
	releaseall
	return

OrangeOcean_EventScript_DivingSpot_1:
# 56 "data/maps/OrangeOcean/scripts.pory"
	warp MAP_BATTLESHIP_HALBERD_DIVE_ROOM, 3, 13
# 57 "data/maps/OrangeOcean/scripts.pory"
	releaseall
	return


OrangeOcean_EventScript_WaddleDee::
# 67 "data/maps/OrangeOcean/scripts.pory"
	lock
# 68 "data/maps/OrangeOcean/scripts.pory"
	faceplayer
# 69 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_WaddleDee_Text_0
# 78 "data/maps/OrangeOcean/scripts.pory"
	release
	return


OrangeOcean_EventScript_Nurse::
# 83 "data/maps/OrangeOcean/scripts.pory"
	lock
# 84 "data/maps/OrangeOcean/scripts.pory"
	faceplayer
# 85 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_Nurse_Text_0
# 90 "data/maps/OrangeOcean/scripts.pory"
	closemessage
# 91 "data/maps/OrangeOcean/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 92 "data/maps/OrangeOcean/scripts.pory"
	playfanfare MUS_HEAL
# 93 "data/maps/OrangeOcean/scripts.pory"
	waitfanfare
# 94 "data/maps/OrangeOcean/scripts.pory"
	special HealPlayerParty
# 95 "data/maps/OrangeOcean/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 96 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_Nurse_Text_1
# 97 "data/maps/OrangeOcean/scripts.pory"
	release
	return


OrangeOcean_EventScript_Trainer1::
# 102 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_4, OrangeOcean_Text_Trainer1Intro, OrangeOcean_Text_Trainer1Defeated
# 103 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer2::
# 126 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_5, OrangeOcean_Text_Trainer2Intro, OrangeOcean_Text_Trainer2Defeated
# 127 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer3::
# 153 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_1, OrangeOcean_Text_Trainer3Intro, OrangeOcean_Text_Trainer3Defeated
# 154 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer4::
# 176 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_2, OrangeOcean_Text_Trainer4Intro, OrangeOcean_Text_Trainer4Defeated
# 177 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer5::
# 204 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_3, OrangeOcean_Text_Trainer5Intro, OrangeOcean_Text_Trainer5Defeated
# 205 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer6::
# 229 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_4, OrangeOcean_Text_Trainer6Intro, OrangeOcean_Text_Trainer6Defeated
# 230 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer6Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_HalberdTakeOff_Text_0:
# 32 "data/maps/OrangeOcean/scripts.pory"
	.string "The Halberd has taken off…$"

OrangeOcean_EventScript_Sign_Text_0:
# 40 "data/maps/OrangeOcean/scripts.pory"
	.string "ORANGE OCEAN\n"
	.string "This shipyard has a storied history.$"

OrangeOcean_EventScript_DivingSpot_Text_0:
# 48 "data/maps/OrangeOcean/scripts.pory"
	.string "You peer beneath the waves…\p"
	.string "You can faintly make out a massive ship.\n"
	.string "This must be where Kine lost Mine's gift.\p"
	.string "Will you dive down and check it out?$"

OrangeOcean_EventScript_WaddleDee_Text_0:
# 69 "data/maps/OrangeOcean/scripts.pory"
	.string "The water here is unusually shallow,\n"
	.string "and a lot of underlying rock is exposed.\p"
	.string "It's made it difficult for ships to\n"
	.string "reach the Rest Area…\p"
	.string "I'm sure it'll go back to normal on its\n"
	.string "own, so I'm fine waiting here, but\l"
	.string "how could this have happened?$"

OrangeOcean_EventScript_Nurse_Text_0:
# 85 "data/maps/OrangeOcean/scripts.pory"
	.string "I haven't been able to shake this\n"
	.string "sinister feeling since my ship docked…\p"
	.string "Are your Helpers doing alright? Here,\n"
	.string "let me heal them for you.$"

OrangeOcean_EventScript_Nurse_Text_1:
# 96 "data/maps/OrangeOcean/scripts.pory"
	.string "Wherever you go, please be careful!$"

OrangeOcean_Text_Trainer1Intro::
# 106 "data/maps/OrangeOcean/scripts.pory"
	.string "My Helpers have the home-field\n"
	.string "advantage at sea!$"

OrangeOcean_Text_Trainer1Defeated::
# 112 "data/maps/OrangeOcean/scripts.pory"
	.string "If I can't win at sea, how will\n"
	.string "I win at the Arenas on land?$"

OrangeOcean_Text_Trainer1Post::
# 118 "data/maps/OrangeOcean/scripts.pory"
	.string "It would be nice if one of the Arenas\n"
	.string "took place in the water…$"

OrangeOcean_Text_Trainer2Intro::
# 130 "data/maps/OrangeOcean/scripts.pory"
	.string "Oh no! That Helper's trying to eat\n"
	.string "someone! Don't worry! I'll save you!$"

OrangeOcean_Text_Trainer2Defeated::
# 136 "data/maps/OrangeOcean/scripts.pory"
	.string "That fishy fellow… isn't a Helper?$"

OrangeOcean_Text_Trainer2Post::
# 141 "data/maps/OrangeOcean/scripts.pory"
	.string "Oh, so you're being ferried by your\n"
	.string "friend Kine? That's nice!\p"
	.string "I'm sorry for thinking you were a\n"
	.string "dangerous Helper, Kine! Silly me,\l"
	.string "thinking Helpers would attack others…$"

OrangeOcean_Text_Trainer3Intro::
# 157 "data/maps/OrangeOcean/scripts.pory"
	.string "I love swimming with my Helper!$"

OrangeOcean_Text_Trainer3Defeated::
# 162 "data/maps/OrangeOcean/scripts.pory"
	.string "We may not be training as much as we\n"
	.string "swim, but that's okay!$"

OrangeOcean_Text_Trainer3Post::
# 168 "data/maps/OrangeOcean/scripts.pory"
	.string "I gave my Blipper a special Heart, and\n"
	.string "then it became a Mamatee. Neat, huh?$"

OrangeOcean_Text_Trainer4Intro::
# 180 "data/maps/OrangeOcean/scripts.pory"
	.string "I've got so much free time now that\n"
	.string "I'm stuck on this island…$"

OrangeOcean_Text_Trainer4Defeated::
# 186 "data/maps/OrangeOcean/scripts.pory"
	.string "No time to learn like the present,\n"
	.string "right?$"

OrangeOcean_Text_Trainer4Post::
# 192 "data/maps/OrangeOcean/scripts.pory"
	.string "Moves, stats, types… there's so much\n"
	.string "that goes into Helper battles.\p"
	.string "How does the Great King remember all\n"
	.string "of it? He must have a huge brain!\l"
	.string "Almost as big as his mouth and hammer!$"

OrangeOcean_Text_Trainer5Intro::
# 208 "data/maps/OrangeOcean/scripts.pory"
	.string "My ship can't reach the mainland!\n"
	.string "You know what we do in times like this?\l"
	.string "Throw our hands in the air and panic!$"

OrangeOcean_Text_Trainer5Defeated::
# 215 "data/maps/OrangeOcean/scripts.pory"
	.string "Ahhhhhhh!!!$"

OrangeOcean_Text_Trainer5Post::
# 220 "data/maps/OrangeOcean/scripts.pory"
	.string "I'll be honest: I'm not sure if losing a\n"
	.string "Helper battle made me feel any better.\l"
	.string "I was hoping it would distract me…$"

OrangeOcean_Text_Trainer6Intro::
# 233 "data/maps/OrangeOcean/scripts.pory"
	.string "I'm not stranded here… I just don't\n"
	.string "want to travel through Cocoa Cave!$"

OrangeOcean_Text_Trainer6Defeated::
# 239 "data/maps/OrangeOcean/scripts.pory"
	.string "Traveling through the dark is so scary…$"

OrangeOcean_Text_Trainer6Post::
# 244 "data/maps/OrangeOcean/scripts.pory"
	.string "Huh? There's a shortcut through the\n"
	.string "water that lets you avoid the dark?\l"
	.string "Wow, amazing! Thank you for telling me!$"
