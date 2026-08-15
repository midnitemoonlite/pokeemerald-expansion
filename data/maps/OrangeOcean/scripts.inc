# 1 "data/maps/OrangeOcean/scripts.pory"

# 2 "data/maps/OrangeOcean/scripts.pory"
OrangeOcean_MapScripts::
# 3 "data/maps/OrangeOcean/scripts.pory"
	.byte 0

OrangeOcean_EventScript_Sign::
# 8 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/OrangeOcean/scripts.pory"
	closemessage
	return


OrangeOcean_EventScript_DivingSpot::
# 15 "data/maps/OrangeOcean/scripts.pory"
	lockall
# 16 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_DivingSpot_Text_0, MSGBOX_YESNO
# 22 "data/maps/OrangeOcean/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne OrangeOcean_EventScript_DivingSpot_1
# 29 "data/maps/OrangeOcean/scripts.pory"
	releaseall
	return

OrangeOcean_EventScript_DivingSpot_1:
# 24 "data/maps/OrangeOcean/scripts.pory"
	warp MAP_BATTLESHIP_HALBERD_DIVE_ROOM, 3, 13
# 25 "data/maps/OrangeOcean/scripts.pory"
	releaseall
	return


OrangeOcean_EventScript_WaddleDee::
# 35 "data/maps/OrangeOcean/scripts.pory"
	lock
# 36 "data/maps/OrangeOcean/scripts.pory"
	faceplayer
# 37 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_WaddleDee_Text_0
# 46 "data/maps/OrangeOcean/scripts.pory"
	release
	return


OrangeOcean_EventScript_Nurse::
# 51 "data/maps/OrangeOcean/scripts.pory"
	lock
# 52 "data/maps/OrangeOcean/scripts.pory"
	faceplayer
# 53 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_Nurse_Text_0
# 58 "data/maps/OrangeOcean/scripts.pory"
	closemessage
# 59 "data/maps/OrangeOcean/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 60 "data/maps/OrangeOcean/scripts.pory"
	playfanfare MUS_HEAL
# 61 "data/maps/OrangeOcean/scripts.pory"
	waitfanfare
# 62 "data/maps/OrangeOcean/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/OrangeOcean/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 64 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_EventScript_Nurse_Text_1
# 65 "data/maps/OrangeOcean/scripts.pory"
	release
	return


OrangeOcean_EventScript_Trainer1::
# 70 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_4, OrangeOcean_Text_Trainer1Intro, OrangeOcean_Text_Trainer1Defeated
# 71 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer2::
# 94 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_5, OrangeOcean_Text_Trainer2Intro, OrangeOcean_Text_Trainer2Defeated
# 95 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer3::
# 121 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_1, OrangeOcean_Text_Trainer3Intro, OrangeOcean_Text_Trainer3Defeated
# 122 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer4::
# 144 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_2, OrangeOcean_Text_Trainer4Intro, OrangeOcean_Text_Trainer4Defeated
# 145 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer5::
# 174 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_3, OrangeOcean_Text_Trainer5Intro, OrangeOcean_Text_Trainer5Defeated
# 175 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Trainer6::
# 198 "data/maps/OrangeOcean/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_4, OrangeOcean_Text_Trainer6Intro, OrangeOcean_Text_Trainer6Defeated
# 199 "data/maps/OrangeOcean/scripts.pory"
	msgbox OrangeOcean_Text_Trainer6Post, MSGBOX_AUTOCLOSE
	return


OrangeOcean_EventScript_Sign_Text_0:
# 8 "data/maps/OrangeOcean/scripts.pory"
	.string "ORANGE OCEAN\n"
	.string "This shipyard has a storied history.$"

OrangeOcean_EventScript_DivingSpot_Text_0:
# 16 "data/maps/OrangeOcean/scripts.pory"
	.string "You peer beneath the waves…\p"
	.string "You can faintly make out a massive ship.\n"
	.string "This must be where Kine lost Mine's gift.\p"
	.string "Will you dive down and check it out?$"

OrangeOcean_EventScript_WaddleDee_Text_0:
# 37 "data/maps/OrangeOcean/scripts.pory"
	.string "The water here is unusually shallow,\n"
	.string "and a lot of underlying rock is exposed.\p"
	.string "It's made it difficult for ships to\n"
	.string "reach the Rest Area…\p"
	.string "I'm sure it'll go back to normal on its\n"
	.string "own, so I'm fine waiting here, but\l"
	.string "how could this have happened?$"

OrangeOcean_EventScript_Nurse_Text_0:
# 53 "data/maps/OrangeOcean/scripts.pory"
	.string "I haven't been able to shake this\n"
	.string "sinister feeling since my ship docked…\p"
	.string "Are your Helpers doing alright? Here,\n"
	.string "let me heal them for you.$"

OrangeOcean_EventScript_Nurse_Text_1:
# 64 "data/maps/OrangeOcean/scripts.pory"
	.string "Wherever you go, please be careful!$"

OrangeOcean_Text_Trainer1Intro::
# 74 "data/maps/OrangeOcean/scripts.pory"
	.string "My Helpers have the home-field\n"
	.string "advantage at sea!$"

OrangeOcean_Text_Trainer1Defeated::
# 80 "data/maps/OrangeOcean/scripts.pory"
	.string "If I can't win at sea, how will\n"
	.string "I win at the Arenas on land?$"

OrangeOcean_Text_Trainer1Post::
# 86 "data/maps/OrangeOcean/scripts.pory"
	.string "It would be nice if one of the Arenas\n"
	.string "took place in the water…$"

OrangeOcean_Text_Trainer2Intro::
# 98 "data/maps/OrangeOcean/scripts.pory"
	.string "Oh no! That Helper's trying to eat\n"
	.string "someone! Don't worry! I'll save you!$"

OrangeOcean_Text_Trainer2Defeated::
# 104 "data/maps/OrangeOcean/scripts.pory"
	.string "That fishy fellow… isn't a Helper?$"

OrangeOcean_Text_Trainer2Post::
# 109 "data/maps/OrangeOcean/scripts.pory"
	.string "Oh, so you're being ferried by your\n"
	.string "friend Kine? That's nice!\p"
	.string "I'm sorry for thinking you were a\n"
	.string "dangerous Helper, Kine! Silly me,\l"
	.string "thinking Helpers would attack others…$"

OrangeOcean_Text_Trainer3Intro::
# 125 "data/maps/OrangeOcean/scripts.pory"
	.string "I love swimming with my Helper!$"

OrangeOcean_Text_Trainer3Defeated::
# 130 "data/maps/OrangeOcean/scripts.pory"
	.string "We may not be training as much as we\n"
	.string "swim, but that's okay!$"

OrangeOcean_Text_Trainer3Post::
# 136 "data/maps/OrangeOcean/scripts.pory"
	.string "I gave my Blipper a special Heart, and\n"
	.string "then it became a Mamatee. Neat, huh?$"

OrangeOcean_Text_Trainer4Intro::
# 148 "data/maps/OrangeOcean/scripts.pory"
	.string "Gwoooh! I'm tired of waiting for the\n"
	.string "tide to rise back up!\p"
	.string "My Helpers are gonna carve a path right\n"
	.string "through this rock!$"

OrangeOcean_Text_Trainer4Defeated::
# 157 "data/maps/OrangeOcean/scripts.pory"
	.string "No! I can't break through this rock\n"
	.string "without my Helpers' strength!$"

OrangeOcean_Text_Trainer4Post::
# 163 "data/maps/OrangeOcean/scripts.pory"
	.string "I know, I know… it's no good to\n"
	.string "damage the environment like that.\p"
	.string "Maybe I should look for Helpers that\n"
	.string "can bring more water to this place…$"

OrangeOcean_Text_Trainer5Intro::
# 178 "data/maps/OrangeOcean/scripts.pory"
	.string "My ship can't reach the mainland!\n"
	.string "How am I supposed to do my job?$"

OrangeOcean_Text_Trainer5Defeated::
# 184 "data/maps/OrangeOcean/scripts.pory"
	.string "Urgh…$"

OrangeOcean_Text_Trainer5Post::
# 189 "data/maps/OrangeOcean/scripts.pory"
	.string "Sorry for taking my frustrations out \n"
	.string "on you through a Helper battle.\l"
	.string "It's been a long day…$"

OrangeOcean_Text_Trainer6Intro::
# 202 "data/maps/OrangeOcean/scripts.pory"
	.string "I'm not stranded here… I just don't\n"
	.string "want to travel through Cocoa Cave!$"

OrangeOcean_Text_Trainer6Defeated::
# 208 "data/maps/OrangeOcean/scripts.pory"
	.string "Traveling through the dark is so scary…$"

OrangeOcean_Text_Trainer6Post::
# 213 "data/maps/OrangeOcean/scripts.pory"
	.string "Huh? There's a shortcut through the\n"
	.string "water that lets you avoid the dark?\l"
	.string "Wow, amazing! Thank you for telling me!$"
