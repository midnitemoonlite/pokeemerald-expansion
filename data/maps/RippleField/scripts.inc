# 1 "data/maps/RippleField/scripts.pory"

# 2 "data/maps/RippleField/scripts.pory"
RippleField_MapScripts::
# 3 "data/maps/RippleField/scripts.pory"
	.byte 0

RippleField_EventScript_Sign::
# 10 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_EventScript_Sign_Text_0, MSGBOX_SIGN
# 12 "data/maps/RippleField/scripts.pory"
	closemessage
	return


RippleField_EventScript_Fairy1::
# 17 "data/maps/RippleField/scripts.pory"
	lock
# 18 "data/maps/RippleField/scripts.pory"
	faceplayer
# 19 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_EventScript_Fairy1_Text_0
# 24 "data/maps/RippleField/scripts.pory"
	release
	return


RippleField_EventScript_Fairy2::
# 29 "data/maps/RippleField/scripts.pory"
	lock
# 30 "data/maps/RippleField/scripts.pory"
	faceplayer
# 31 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_EventScript_Fairy2_Text_0
# 37 "data/maps/RippleField/scripts.pory"
	release
	return


RippleField_EventScript_Fairy3::
# 42 "data/maps/RippleField/scripts.pory"
	lock
# 43 "data/maps/RippleField/scripts.pory"
	faceplayer
# 44 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_EventScript_Fairy3_Text_0
# 46 "data/maps/RippleField/scripts.pory"
	release
	return


RippleField_EventScript_Fairy4::
# 51 "data/maps/RippleField/scripts.pory"
	lock
# 52 "data/maps/RippleField/scripts.pory"
	faceplayer
# 53 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_EventScript_Fairy4_Text_0
# 55 "data/maps/RippleField/scripts.pory"
	closemessage
# 56 "data/maps/RippleField/scripts.pory"
	playse SE_M_DIVE
# 57 "data/maps/RippleField/scripts.pory"
	applymovement LOCALID_PLAYER, RippleField_EventScript_Fairy4_Movement_0
# 58 "data/maps/RippleField/scripts.pory"
	waitmovement
# 59 "data/maps/RippleField/scripts.pory"
	release
	return


RippleField_EventScript_WhirlpoolWarp1::
# 66 "data/maps/RippleField/scripts.pory"
	lock
# 67 "data/maps/RippleField/scripts.pory"
	playse SE_M_WHIRLPOOL
# 68 "data/maps/RippleField/scripts.pory"
	applymovement LOCALID_PLAYER, RippleField_EventScript_WhirlpoolWarp1_Movement_0
# 69 "data/maps/RippleField/scripts.pory"
	waitmovement
# 70 "data/maps/RippleField/scripts.pory"
	warp MAP_RIPPLE_FIELD, 84, 5
# 71 "data/maps/RippleField/scripts.pory"
	release
	return


RippleField_EventScript_WhirlpoolWarp2::
# 76 "data/maps/RippleField/scripts.pory"
	lock
# 77 "data/maps/RippleField/scripts.pory"
	playse SE_M_WHIRLPOOL
# 78 "data/maps/RippleField/scripts.pory"
	applymovement LOCALID_PLAYER, RippleField_EventScript_WhirlpoolWarp1_Movement_0
# 79 "data/maps/RippleField/scripts.pory"
	waitmovement
# 80 "data/maps/RippleField/scripts.pory"
	warp MAP_RIPPLE_FIELD, 23, 5
# 81 "data/maps/RippleField/scripts.pory"
	release
	return


RippleField_EventScript_Trainer1::
# 88 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_OWEN, RippleField_Text_Trainer1Intro, RippleField_Text_Trainer1Defeated
# 89 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Trainer2::
# 111 "data/maps/RippleField/scripts.pory"
	trainerbattle_double TRAINER_WILTON_2, RippleField_Text_Trainer2Intro, RippleField_Text_Trainer2Defeated, Generic_NotEnoughHelpers_Text
# 112 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Partner2::
# 135 "data/maps/RippleField/scripts.pory"
	trainerbattle_double TRAINER_WILTON_2, RippleField_Text_Partner2Intro, RippleField_Text_Partner2Defeated, Generic_NotEnoughHelpers_Text
# 136 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Partner2Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Trainer3::
# 159 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_WILTON_3, RippleField_Text_Trainer3Intro, RippleField_Text_Trainer3Defeated
# 160 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Trainer4::
# 182 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_WILTON_4, RippleField_Text_Trainer4Intro, RippleField_Text_Trainer4Defeated
# 183 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Trainer5::
# 204 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_WILTON_5, RippleField_Text_Trainer5Intro, RippleField_Text_Trainer5Defeated
# 205 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Trainer6::
# 228 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_WARREN, RippleField_Text_Trainer6Intro, RippleField_Text_Trainer6Defeated
# 229 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer6Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Trainer7::
# 252 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_MARY, RippleField_Text_Trainer7Intro, RippleField_Text_Trainer7Defeated
# 253 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer7Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Partner7::
# 276 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_MARY, RippleField_Text_Partner7Intro, RippleField_Text_Partner7Defeated
# 277 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Partner7Post, MSGBOX_AUTOCLOSE
	return


RippleField_EventScript_Trainer8::
# 299 "data/maps/RippleField/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, RippleField_Text_Trainer8Intro, RippleField_Text_Trainer8Defeated
# 300 "data/maps/RippleField/scripts.pory"
	msgbox RippleField_Text_Trainer8Post, MSGBOX_AUTOCLOSE
	return


# 57 "data/maps/RippleField/scripts.pory"
RippleField_EventScript_Fairy4_Movement_0:
# 57 "data/maps/RippleField/scripts.pory"
	lock_facing_direction
# 57 "data/maps/RippleField/scripts.pory"
	walk_fast_down
# 57 "data/maps/RippleField/scripts.pory"
	unlock_facing_direction
	step_end

# 68 "data/maps/RippleField/scripts.pory"
RippleField_EventScript_WhirlpoolWarp1_Movement_0:
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_left
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_up
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_right
# 68 "data/maps/RippleField/scripts.pory"
	delay_2
# 68 "data/maps/RippleField/scripts.pory"
	face_down
	step_end

RippleField_EventScript_Sign_Text_0:
# 10 "data/maps/RippleField/scripts.pory"
	.string "RIPPLE FIELD\n"
	.string "Strong currents protect this island.$"

RippleField_EventScript_Fairy1_Text_0:
# 19 "data/maps/RippleField/scripts.pory"
	.string "Oh, you don't have wings? That sucks.\n"
	.string "You can't just fly above the currents.\p"
	.string "You better take a close look at where\n"
	.string "you're swimming, okay?$"

RippleField_EventScript_Fairy2_Text_0:
# 31 "data/maps/RippleField/scripts.pory"
	.string "What's with that face you're making?\n"
	.string "Haven't you ever seen a fairy before?\p"
	.string "Sorry you don't understand what true\n"
	.string "beauty looks like. We can't all be\l"
	.string "round, pudgy little creatures here.$"

RippleField_EventScript_Fairy3_Text_0:
# 44 "data/maps/RippleField/scripts.pory"
	.string "If you need to go back to Mallow Castle,\n"
	.string "you should ride the current below me.$"

RippleField_EventScript_Fairy4_Text_0:
# 53 "data/maps/RippleField/scripts.pory"
	.string "Eek! Did you splash water on me?\n"
	.string "Take this!$"

RippleField_Text_Trainer1Intro::
# 92 "data/maps/RippleField/scripts.pory"
	.string "Hey, I hauled that chest out of the\n"
	.string "ocean! We'll have to battle for it!$"

RippleField_Text_Trainer1Defeated::
# 98 "data/maps/RippleField/scripts.pory"
	.string "Sigh… to the victor goes the spoils…$"

RippleField_Text_Trainer1Post::
# 103 "data/maps/RippleField/scripts.pory"
	.string "I bet you could find all sorts of\n"
	.string "treasures down on the sea floor.$"

RippleField_Text_Trainer2Intro::
# 115 "data/maps/RippleField/scripts.pory"
	.string "One Helper isn't enough! It's time to\n"
	.string "show you what 2-on-2 battles are like!$"

RippleField_Text_Trainer2Defeated::
# 121 "data/maps/RippleField/scripts.pory"
	.string "Did you count how many Helpers there\n"
	.string "was? It was a lot, wasn't it?$"

RippleField_Text_Trainer2Post::
# 127 "data/maps/RippleField/scripts.pory"
	.string "Fairies are stronger when we work\n"
	.string "together!$"

RippleField_Text_Partner2Intro::
# 139 "data/maps/RippleField/scripts.pory"
	.string "One Helper isn't enough! It's time for…\n"
	.string "battles with even more Helpers!$"

RippleField_Text_Partner2Defeated::
# 145 "data/maps/RippleField/scripts.pory"
	.string "I tried to count all the Helpers,\n"
	.string "but I got distracted…$"

RippleField_Text_Partner2Post::
# 151 "data/maps/RippleField/scripts.pory"
	.string "One plus one… plus one plus one…\n"
	.string "Ohh, I can't count that high!$"

RippleField_Text_Trainer3Intro::
# 163 "data/maps/RippleField/scripts.pory"
	.string "Finally, someone who's not a Waddle Dee!\n"
	.string "C'mon, let's play that fun Helper game!$"

RippleField_Text_Trainer3Defeated::
# 169 "data/maps/RippleField/scripts.pory"
	.string "Yow, you're good!$"

RippleField_Text_Trainer3Post::
# 174 "data/maps/RippleField/scripts.pory"
	.string "I'm so glad Ribbon told us about this\n"
	.string "places! The games here are so much fun!$"

RippleField_Text_Trainer4Intro::
# 186 "data/maps/RippleField/scripts.pory"
	.string "You found me!$"

RippleField_Text_Trainer4Defeated::
# 191 "data/maps/RippleField/scripts.pory"
	.string "I lost the battle… I lost my block…$"

RippleField_Text_Trainer4Post::
# 196 "data/maps/RippleField/scripts.pory"
	.string "All my friends say I'm good at hide\n"
	.string "and seek. Can you tell?$"

RippleField_Text_Trainer5Intro::
# 208 "data/maps/RippleField/scripts.pory"
	.string "I won't lose! I've got the power of\n"
	.string "friendship and teamwork on my side!$"

RippleField_Text_Trainer5Defeated::
# 214 "data/maps/RippleField/scripts.pory"
	.string "Is your teamwork really stronger…?$"

RippleField_Text_Trainer5Post::
# 219 "data/maps/RippleField/scripts.pory"
	.string "I've got to strengthen my friendship\n"
	.string "with my Helpers… aha! I've got it!\l"
	.string "We're gonna go to the café!$"

RippleField_Text_Trainer6Intro::
# 232 "data/maps/RippleField/scripts.pory"
	.string "I can't lose! I've got the power of\n"
	.string "standing next to this really cool rock!$"

RippleField_Text_Trainer6Defeated::
# 238 "data/maps/RippleField/scripts.pory"
	.string "I thought this rock would be my lucky\n"
	.string "charm…$"

RippleField_Text_Trainer6Post::
# 244 "data/maps/RippleField/scripts.pory"
	.string "Maybe next time I should stand next to\n"
	.string "a tree. Not a coconut tree, though.$"

RippleField_Text_Trainer7Intro::
# 256 "data/maps/RippleField/scripts.pory"
	.string "You can do all sorts of neat things with\n"
	.string "two Helpers battling together!$"

RippleField_Text_Trainer7Defeated::
# 262 "data/maps/RippleField/scripts.pory"
	.string "I still have so many ideas for new\n"
	.string "strategies to try…$"

RippleField_Text_Trainer7Post::
# 268 "data/maps/RippleField/scripts.pory"
	.string "Preparing your moves for the kind of\n"
	.string "battle you enter is important!$"

RippleField_Text_Partner7Intro::
# 280 "data/maps/RippleField/scripts.pory"
	.string "I don't know much about battling… I'm\n"
	.string "just here for support…$"

RippleField_Text_Partner7Defeated::
# 286 "data/maps/RippleField/scripts.pory"
	.string "Did I do a good job at helping?$"

RippleField_Text_Partner7Post::
# 291 "data/maps/RippleField/scripts.pory"
	.string "My hope is that my partner can win for\n"
	.string "me as long as I keep using Helping Hand.$"

RippleField_Text_Trainer8Intro::
# 303 "data/maps/RippleField/scripts.pory"
	.string "The currents keep pulling my fishing\n"
	.string "rod away…$"

RippleField_Text_Trainer8Defeated::
# 309 "data/maps/RippleField/scripts.pory"
	.string "It's a miracle the current hasn't pulled\n"
	.string "me in too, hasn't it?$"

RippleField_Text_Trainer8Post::
# 315 "data/maps/RippleField/scripts.pory"
	.string "There's lots of rare Helpers in these\n"
	.string "waters, but they're tough to catch.$"

Generic_NotEnoughHelpers_Text::
# 322 "data/maps/RippleField/scripts.pory"
	.string "You shouldn't be seeing this text.\n"
	.string "Say something if you do.$"
