# 1 "data/maps/FloatIslands/scripts.pory"

# 2 "data/maps/FloatIslands/scripts.pory"
FloatIslands_MapScripts::
# 3 "data/maps/FloatIslands/scripts.pory"
	.byte 0

FloatIslands_EventScript_Sign::
# 8 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/FloatIslands/scripts.pory"
	closemessage
	return


FloatIslands_EventScript_Trainer1::
# 15 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_LOLA_2, FloatIslands_Text_Trainer1Intro, FloatIslands_Text_Trainer1Defeated
# 16 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_Trainer2::
# 41 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_LOLA_3, FloatIslands_Text_Trainer2Intro, FloatIslands_Text_Trainer2Defeated
# 42 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_Trainer3::
# 64 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_LOLA_4, FloatIslands_Text_Trainer3Intro, FloatIslands_Text_Trainer3Defeated
# 65 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_Trainer4::
# 87 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_LOLA_5, FloatIslands_Text_Trainer4Intro, FloatIslands_Text_Trainer4Defeated
# 88 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer4Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_Trainer5::
# 114 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, FloatIslands_Text_Trainer5Intro, FloatIslands_Text_Trainer5Defeated
# 115 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer5Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_Trainer6::
# 138 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_SIMON, FloatIslands_Text_Trainer6Intro, FloatIslands_Text_Trainer6Defeated
# 139 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer6Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_Trainer7::
# 163 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, FloatIslands_Text_Trainer7Intro, FloatIslands_Text_Trainer7Defeated
# 164 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer7Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_Trainer8::
# 190 "data/maps/FloatIslands/scripts.pory"
	trainerbattle_single TRAINER_RICKY_2, FloatIslands_Text_Trainer8Intro, FloatIslands_Text_Trainer8Defeated
# 191 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_Text_Trainer8Post, MSGBOX_AUTOCLOSE
	return


FloatIslands_EventScript_IslandWaddleDee::
# 216 "data/maps/FloatIslands/scripts.pory"
	lock
# 217 "data/maps/FloatIslands/scripts.pory"
	faceplayer
# 218 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_EventScript_IslandWaddleDee_Text_0
# 232 "data/maps/FloatIslands/scripts.pory"
	release
	return


FloatIslands_EventScript_RoamingWaddleDee::
# 237 "data/maps/FloatIslands/scripts.pory"
	lock
# 238 "data/maps/FloatIslands/scripts.pory"
	faceplayer
# 239 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_EventScript_RoamingWaddleDee_Text_0
# 247 "data/maps/FloatIslands/scripts.pory"
	release
	return


FloatIslands_EventScript_CoconutTree::
# 252 "data/maps/FloatIslands/scripts.pory"
	lockall
# 253 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_EventScript_CoconutTree_Text_0
# 257 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8004, 3
# 258 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8005, 0
# 259 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8006, 2
# 260 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8007, 4
# 261 "data/maps/FloatIslands/scripts.pory"
	special ShakeCamera
# 262 "data/maps/FloatIslands/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 263 "data/maps/FloatIslands/scripts.pory"
	waitse
# 264 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_EventScript_CoconutTree_Text_1
# 265 "data/maps/FloatIslands/scripts.pory"
	release
	return


FloatIslands_EventScript_SpecialTree::
# 270 "data/maps/FloatIslands/scripts.pory"
	goto_if_unset FLAG_SHOOK_SPECIAL_COCONUT_TREE, FloatIslands_EventScript_SpecialTree_1
# 291 "data/maps/FloatIslands/scripts.pory"
	goto FloatIslands_EventScript_CoconutTree
	return

FloatIslands_EventScript_SpecialTree_1:
# 272 "data/maps/FloatIslands/scripts.pory"
	lockall
# 273 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_EventScript_SpecialTree_Text_0
# 277 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8004, 3
# 278 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8005, 0
# 279 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8006, 2
# 280 "data/maps/FloatIslands/scripts.pory"
	setvar VAR_0x8007, 4
# 281 "data/maps/FloatIslands/scripts.pory"
	special ShakeCamera
# 282 "data/maps/FloatIslands/scripts.pory"
	playse SE_M_STRENGTH
# 283 "data/maps/FloatIslands/scripts.pory"
	waitse
# 284 "data/maps/FloatIslands/scripts.pory"
	msgbox FloatIslands_EventScript_CoconutTree_Text_1
# 285 "data/maps/FloatIslands/scripts.pory"
	giveitem ITEM_BIG_NUGGET
# 286 "data/maps/FloatIslands/scripts.pory"
	setflag FLAG_SHOOK_SPECIAL_COCONUT_TREE
# 287 "data/maps/FloatIslands/scripts.pory"
	release
	return


FloatIslands_EventScript_Sign_Text_0:
# 8 "data/maps/FloatIslands/scripts.pory"
	.string "FLOAT ISLANDS\n"
	.string "Don't sleep under the coconut trees.$"

FloatIslands_EventScript_IslandWaddleDee_Text_0:
# 218 "data/maps/FloatIslands/scripts.pory"
	.string "You came all the way out here to talk\n"
	.string "to me? You're a very nice pal!\p"
	.string "As a token of my gratitude, let me\n"
	.string "offer you… some secret advice!\p"
	.string "The coconut trees here aren't all\n"
	.string "bad. They're just… mostly bad.\p"
	.string "But sometimes they'll drop a helpful\n"
	.string "item or two if you rustle them enough!\p"
	.string "Just make sure to keep your head safe\n"
	.string "in the process, alright, new pal?$"

FloatIslands_EventScript_RoamingWaddleDee_Text_0:
# 239 "data/maps/FloatIslands/scripts.pory"
	.string "The Great King told me that Helpers are\n"
	.string "friendly creatures…\p"
	.string "But every time I try to swim, I get\n"
	.string "chased by a school of Blipper!\p"
	.string "Is there really such a thing as being\n"
	.string "too friendly?$"

FloatIslands_EventScript_CoconutTree_Text_0:
# 253 "data/maps/FloatIslands/scripts.pory"
	.string "You look up at the coconut tree…\p"
	.string "Without warning, a coconut dropped and\n"
	.string "exploded on your head!$"

FloatIslands_EventScript_CoconutTree_Text_1:
# 264 "data/maps/FloatIslands/scripts.pory"
	.string "OUCH!$"

FloatIslands_EventScript_SpecialTree_Text_0:
# 273 "data/maps/FloatIslands/scripts.pory"
	.string "You look up at the coconut tree…\p"
	.string "Without warning, a golden globe dropped\n"
	.string "on your head!$"

FloatIslands_Text_Trainer1Intro::
# 19 "data/maps/FloatIslands/scripts.pory"
	.string "I was fishing the next island over, but\n"
	.string "then something hit me…$"

FloatIslands_Text_Trainer1Defeated::
# 25 "data/maps/FloatIslands/scripts.pory"
	.string "Oww… my head…$"

FloatIslands_Text_Trainer1Post::
# 30 "data/maps/FloatIslands/scripts.pory"
	.string "You wanna know what hit me? It was a\n"
	.string "coconut that fell from the trees!\p"
	.string "I wish I had read the sign first before\n"
	.string "setting up my rod there.$"

FloatIslands_Text_Trainer2Intro::
# 45 "data/maps/FloatIslands/scripts.pory"
	.string "Splish, splish, splash!$"

FloatIslands_Text_Trainer2Defeated::
# 50 "data/maps/FloatIslands/scripts.pory"
	.string "Do you like playing with Helpers more\n"
	.string "than playing with water?$"

FloatIslands_Text_Trainer2Post::
# 56 "data/maps/FloatIslands/scripts.pory"
	.string "Splish, splash, splosh…\n"
	.string "You're good at playing with Helpers!$"

FloatIslands_Text_Trainer3Intro::
# 68 "data/maps/FloatIslands/scripts.pory"
	.string "Check it out! My inner tube is big\n"
	.string "enough to hold all my Helpers!$"

FloatIslands_Text_Trainer3Defeated::
# 74 "data/maps/FloatIslands/scripts.pory"
	.string "Hang on, my Helpers!$"

FloatIslands_Text_Trainer3Post::
# 79 "data/maps/FloatIslands/scripts.pory"
	.string "I want to befriend more Helpers, but I'll\n"
	.string "need to get a bigger inner tube first.$"

FloatIslands_Text_Trainer4Intro::
# 91 "data/maps/FloatIslands/scripts.pory"
	.string "This raft is NOT big enough for me and\n"
	.string "my Helper. What do I do?$"

FloatIslands_Text_Trainer4Defeated::
# 97 "data/maps/FloatIslands/scripts.pory"
	.string "Looks like I need to head back to shore\n"
	.string "to heal my Helpers up first…$"

FloatIslands_Text_Trainer4Post::
# 103 "data/maps/FloatIslands/scripts.pory"
	.string "My Helper hates being out of the water…\n"
	.string "so I'm trying to limit my time on land.\p"
	.string "Maybe I need to stock up on more juice\n"
	.string "at the item shop when I go back…$"

FloatIslands_Text_Trainer5Intro::
# 118 "data/maps/FloatIslands/scripts.pory"
	.string "I try to be a friend to all nature, but\n"
	.string "these trees are testing my patience…$"

FloatIslands_Text_Trainer5Defeated::
# 124 "data/maps/FloatIslands/scripts.pory"
	.string "You're almost as strong as the coconut\n"
	.string "trees!$"

FloatIslands_Text_Trainer5Post::
# 130 "data/maps/FloatIslands/scripts.pory"
	.string "If those exploding coconuts could be\n"
	.string "Helpers, I bet they'd be super strong.$"

FloatIslands_Text_Trainer6Intro::
# 142 "data/maps/FloatIslands/scripts.pory"
	.string "My last catch was reaaaaally big!\n"
	.string "Think you can take it on?$"

FloatIslands_Text_Trainer6Defeated::
# 148 "data/maps/FloatIslands/scripts.pory"
	.string "Does size mean nothing when it comes\n"
	.string "to a Helper's strength?$"

FloatIslands_Text_Trainer6Post::
# 154 "data/maps/FloatIslands/scripts.pory"
	.string "What if the strongest Helper was \n"
	.string "actually really small?\l"
	.string "That'd be confusing, wouldn't it?$"

FloatIslands_Text_Trainer7Intro::
# 167 "data/maps/FloatIslands/scripts.pory"
	.string "Let me guess, you're expecting a bunch\n"
	.string "of Water-type Helpers since I'm at sea?\l"
	.string "Well, guess again!$"

FloatIslands_Text_Trainer7Defeated::
# 174 "data/maps/FloatIslands/scripts.pory"
	.string "Darn… I thought I could shock you…$"

FloatIslands_Text_Trainer7Post::
# 179 "data/maps/FloatIslands/scripts.pory"
	.string "There's too many types for me to\n"
	.string "remember, so I'm just focusing on one.\p"
	.string "I'm going to get so good at using\n"
	.string "Electric-types!$"

FloatIslands_Text_Trainer8Intro::
# 194 "data/maps/FloatIslands/scripts.pory"
	.string "Eek! Can't you see I'm busy admiring my\n"
	.string "reflection in the water?$"

FloatIslands_Text_Trainer8Defeated::
# 200 "data/maps/FloatIslands/scripts.pory"
	.string "Anger doesn't look good on me…$"

FloatIslands_Text_Trainer8Post::
# 205 "data/maps/FloatIslands/scripts.pory"
	.string "Huh? Wouldn't it be easier to see my\n"
	.string "reflection in a pond or lake?\p"
	.string "Well, yeah, I guess so. But then I don't\n"
	.string "get to be on the beach!$"
