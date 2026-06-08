# 1 "data/maps/ResortArena/scripts.pory"

# 2 "data/maps/ResortArena/scripts.pory"
ResortArena_MapScripts::
# 3 "data/maps/ResortArena/scripts.pory"
	.byte 0

ResortArena_EventScript_Sign::
# 8 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/ResortArena/scripts.pory"
	closemessage
	return


ResortArena_EventScript_CocoaCaveSign::
# 15 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CocoaCaveSign_Text_0, MSGBOX_SIGN
# 17 "data/maps/ResortArena/scripts.pory"
	closemessage
	return


ResortArena_EventScript_RedSqueaker::
# 22 "data/maps/ResortArena/scripts.pory"
	lock
# 23 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 24 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_RedSqueaker_Text_0
# 32 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Lounger::
# 37 "data/maps/ResortArena/scripts.pory"
	lock
# 38 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 39 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Lounger_Text_0
# 44 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_TopAudience::
# 49 "data/maps/ResortArena/scripts.pory"
	lock
# 50 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 51 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_TopAudience_2
# 61 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_TopAudience_Text_1
ResortArena_EventScript_TopAudience_1:
# 67 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_TopAudience_2:
# 53 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_TopAudience_Text_0
	goto ResortArena_EventScript_TopAudience_1


ResortArena_EventScript_TalkToGentleman::
# 72 "data/maps/ResortArena/scripts.pory"
	turnobject LOCALID_RESORT_CROWD_1, DIR_EAST
# 73 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_TopAudience
	return


ResortArena_EventScript_BottomAudience::
# 78 "data/maps/ResortArena/scripts.pory"
	lock
# 79 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 80 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_BottomAudience_2
# 90 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BottomAudience_Text_1
ResortArena_EventScript_BottomAudience_1:
# 95 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_BottomAudience_2:
# 82 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BottomAudience_Text_0
	goto ResortArena_EventScript_BottomAudience_1


ResortArena_EventScript_TalkToParasol::
# 100 "data/maps/ResortArena/scripts.pory"
	turnobject LOCALID_RESORT_CROWD_2, DIR_EAST
# 101 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_BottomAudience
	return


ResortArena_EventScript_BlueSqueaker::
# 106 "data/maps/ResortArena/scripts.pory"
	lock
# 107 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 108 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_BlueSqueaker_2
# 121 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BlueSqueaker_Text_1
ResortArena_EventScript_BlueSqueaker_1:
# 130 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_BlueSqueaker_2:
# 110 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_BlueSqueaker_Text_0
	goto ResortArena_EventScript_BlueSqueaker_1


ResortArena_EventScript_TalkToSqueaker::
# 135 "data/maps/ResortArena/scripts.pory"
	turnobject LOCALID_RESORT_CROWD_3, DIR_WEST
# 136 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_BlueSqueaker
	return


ResortArena_EventScript_Delivery::
# 141 "data/maps/ResortArena/scripts.pory"
	lock
# 142 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 143 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Delivery_Text_0
# 151 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_GreenSqueaker::
# 156 "data/maps/ResortArena/scripts.pory"
	lock
# 157 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 158 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_ITEM_ROUTE_116_ETHER, ResortArena_EventScript_GreenSqueaker_2
# 167 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GreenSqueaker_Text_1
ResortArena_EventScript_GreenSqueaker_1:
# 175 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_GreenSqueaker_2:
# 160 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_GreenSqueaker_Text_0
	goto ResortArena_EventScript_GreenSqueaker_1


ResortArena_EventScript_YellowSqueaker::
# 180 "data/maps/ResortArena/scripts.pory"
	lock
# 181 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 182 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_YellowSqueaker_Text_0
# 193 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_WaddleDee::
# 198 "data/maps/ResortArena/scripts.pory"
	lock
# 199 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 200 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_WaddleDee_Text_0
# 205 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Conductor::
# 210 "data/maps/ResortArena/scripts.pory"
	lock
# 211 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 212 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Conductor_Text_0
# 215 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_CaveGuardian::
# 220 "data/maps/ResortArena/scripts.pory"
	lock
# 221 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 222 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_CaveGuardian_Text_0
# 228 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Aide::
# 233 "data/maps/ResortArena/scripts.pory"
	lock
# 234 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 235 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Aide_Text_0
# 245 "data/maps/ResortArena/scripts.pory"
	closemessage
# 246 "data/maps/ResortArena/scripts.pory"
	playse SE_SELECT
# 247 "data/maps/ResortArena/scripts.pory"
	delay 60
# 248 "data/maps/ResortArena/scripts.pory"
	call WaddleDeeTown_Lab_EvaluateCards
# 249 "data/maps/ResortArena/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_ge ResortArena_EventScript_Aide_1
# 253 "data/maps/ResortArena/scripts.pory"
	compare VAR_0x8009, 15
	goto_if_lt ResortArena_EventScript_Aide_2
	return

ResortArena_EventScript_Aide_1:
# 251 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_AideSuccess
	return

ResortArena_EventScript_Aide_2:
# 255 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_AideFailure
	return


ResortArena_EventScript_AideSuccess::
# 261 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideSuccess_Text_0
# 268 "data/maps/ResortArena/scripts.pory"
	giveitem_msg WaddleDeeTown_Lab_ReceivedExpShare, ITEM_EXP_SHARE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 269 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_TM09
# 270 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 271 "data/maps/ResortArena/scripts.pory"
	giveitem ITEM_DIVE_BALL, 10
# 272 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideSuccess_Text_1
# 285 "data/maps/ResortArena/scripts.pory"
	closemessage
# 286 "data/maps/ResortArena/scripts.pory"
	playse SE_EXIT
# 287 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 288 "data/maps/ResortArena/scripts.pory"
	setflag FLAG_BINDER_GATE_02
# 289 "data/maps/ResortArena/scripts.pory"
	removeobject LOCALID_RESORT_AIDE
# 290 "data/maps/ResortArena/scripts.pory"
	delay 30
# 291 "data/maps/ResortArena/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 292 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_AideFailure::
# 297 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_AideFailure_Text_0
	return


ResortArena_EventScript_MoveTutor::
# 309 "data/maps/ResortArena/scripts.pory"
	lock
# 310 "data/maps/ResortArena/scripts.pory"
	faceplayer
# 311 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_MoveTutor_2
# 324 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_MoveTutor_Text_1
ResortArena_EventScript_MoveTutor_1:
# 339 "data/maps/ResortArena/scripts.pory"
	release
	return

ResortArena_EventScript_MoveTutor_2:
# 313 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_MoveTutor_Text_0
	goto ResortArena_EventScript_MoveTutor_1


ResortArena_EventScript_Courtship::
# 344 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_DAROACH, ResortArena_EventScript_Courtship_Movement_0
# 345 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 346 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Courtship_Text_0
# 350 "data/maps/ResortArena/scripts.pory"
	closemessage
# 351 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_1, ResortArena_EventScript_Courtship_Movement_1
# 352 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_2, ResortArena_EventScript_Courtship_Movement_1
# 353 "data/maps/ResortArena/scripts.pory"
	applymovement LOCALID_RESORT_LADY_3, ResortArena_EventScript_Courtship_Movement_1
# 354 "data/maps/ResortArena/scripts.pory"
	waitmovement
# 355 "data/maps/ResortArena/scripts.pory"
	delay 8
# 356 "data/maps/ResortArena/scripts.pory"
	msgbox ResortArena_EventScript_Courtship_Text_1
# 357 "data/maps/ResortArena/scripts.pory"
	release
	return


ResortArena_EventScript_Socialite::
# 362 "data/maps/ResortArena/scripts.pory"
	lock
# 363 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Socialite_1
	return

ResortArena_EventScript_Socialite_1:
# 365 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_ParasolLady::
# 371 "data/maps/ResortArena/scripts.pory"
	lock
# 372 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_ParasolLady_1
	return

ResortArena_EventScript_ParasolLady_1:
# 374 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_Lass::
# 380 "data/maps/ResortArena/scripts.pory"
	lock
# 381 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Lass_1
	return

ResortArena_EventScript_Lass_1:
# 383 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_Daroach::
# 389 "data/maps/ResortArena/scripts.pory"
	lock
# 390 "data/maps/ResortArena/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResortArena_EventScript_Daroach_1
	return

ResortArena_EventScript_Daroach_1:
# 392 "data/maps/ResortArena/scripts.pory"
	goto ResortArena_EventScript_Courtship
	return


ResortArena_EventScript_Commentator::
	return


# 344 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Courtship_Movement_0:
# 344 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 344 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
# 344 "data/maps/ResortArena/scripts.pory"
	walk_in_place_right
	step_end

# 351 "data/maps/ResortArena/scripts.pory"
ResortArena_EventScript_Courtship_Movement_1:
# 351 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 351 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 351 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 351 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
# 351 "data/maps/ResortArena/scripts.pory"
	walk_in_place_faster_left
	step_end

ResortArena_EventScript_Sign_Text_0:
# 8 "data/maps/ResortArena/scripts.pory"
	.string "Newly-opened: RESORT ARENA\n"
	.string "Conquer it and win the Resort Brooch!$"

ResortArena_EventScript_CocoaCaveSign_Text_0:
# 15 "data/maps/ResortArena/scripts.pory"
	.string "Now approaching: COCOA CAVE\n"
	.string "Bubbling-hot magma boils in the depths.$"

ResortArena_EventScript_RedSqueaker_Text_0:
# 24 "data/maps/ResortArena/scripts.pory"
	.string "Our boss is interested in winning\n"
	.string "Dedede's Royal Royale…\p"
	.string "Some of us are trying to train our own\n"
	.string "Helpers, but they're tough to raise.\p"
	.string "We might be better off looking for\n"
	.string "treasure the normal way.$"

ResortArena_EventScript_Lounger_Text_0:
# 39 "data/maps/ResortArena/scripts.pory"
	.string "This resort is the epitome of the peace\n"
	.string "and quiet Dream Land is famous for.\p"
	.string "So why did the Great King deign to build\n"
	.string "an Arena right on top of it…?$"

ResortArena_EventScript_TopAudience_Text_0:
# 53 "data/maps/ResortArena/scripts.pory"
	.string "Yawn… it's a nice day to sit back and\n"
	.string "watch the sky…\p"
	.string "Hm? The Arena? Oh no, I don't care about\n"
	.string "that. I just wanted the high seats.$"

ResortArena_EventScript_TopAudience_Text_1:
# 61 "data/maps/ResortArena/scripts.pory"
	.string "Hey, congratulations on your victory!\n"
	.string "All the competitors were so cool.\p"
	.string "I think I get why the Great King is\n"
	.string "making such a big deal of this game now!$"

ResortArena_EventScript_BottomAudience_Text_0:
# 82 "data/maps/ResortArena/scripts.pory"
	.string "Hmf… I don't get what's so special\n"
	.string "about these Arenas.\p"
	.string "Do your best not to bore me with some\n"
	.string "yawn-inducing battles. Is that clear?$"

ResortArena_EventScript_BottomAudience_Text_1:
# 90 "data/maps/ResortArena/scripts.pory"
	.string "Hm hm hm… a ha ha ha!\p"
	.string "You're more capable than I thought…\n"
	.string "Maybe there's hope for the Arenas yet.$"

ResortArena_EventScript_BlueSqueaker_Text_0:
# 110 "data/maps/ResortArena/scripts.pory"
	.string "Ooh, that's a very shiny Brooch!\n"
	.string "You're aiming for a second, aren't you?\p"
	.string "Well, you better be careful! Our group's\n"
	.string "leader is one tough foe!\p"
	.string "He loves shiny, sparkly, gem-like\n"
	.string "Helpers! Squeak!$"

ResortArena_EventScript_BlueSqueaker_Text_1:
# 121 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! You really beat our boss!\n"
	.string "Now you've got two Brooches.\p"
	.string "It's tempting to take them, but…\n"
	.string "we're honorable thieves.\p"
	.string "You deserve that Brooch you worked\n"
	.string "so hard to earn!$"

ResortArena_EventScript_Delivery_Text_0:
# 143 "data/maps/ResortArena/scripts.pory"
	.string "My apologies. I can only offer my\n"
	.string "services to registered resort guests.\p"
	.string "You wish to know when you may book\n"
	.string "a room? Yes, I can check for you.\p"
	.string "Just give me a few years to scroll\n"
	.string "through the waitlist…$"

ResortArena_EventScript_GreenSqueaker_Text_0:
# 160 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! Hello! Looking for treasure?\p"
	.string "Sadly, I've got nothing of the sort!\n"
	.string "Nope! I'm not hiding anything!$"

ResortArena_EventScript_GreenSqueaker_Text_1:
# 167 "data/maps/ResortArena/scripts.pory"
	.string "Squeak! Hello! Looking for treasure?\p"
	.string "Sadly, I've got nothing of the sort!\n"
	.string "Nope! I'm not hiding… huh?\p"
	.string "Hey! Where'd my treasure go?\n"
	.string "Did somebody take it from me!?$"

ResortArena_EventScript_YellowSqueaker_Text_0:
# 182 "data/maps/ResortArena/scripts.pory"
	.string "I bet if I could get this boat to water,\n"
	.string "I would be able to sail off on it.\p"
	.string "Then, I bet I might be able to find\n"
	.string "islands full of hidden treasure!\p"
	.string "There's just one problem…\n"
	.string "How am I going to haul this boat?\p"
	.string "Squeak… it's way too heavy!\n"
	.string "I should just learn to swim…$"

ResortArena_EventScript_WaddleDee_Text_0:
# 200 "data/maps/ResortArena/scripts.pory"
	.string "The way folks here operate, you'd think\n"
	.string "they were actually Noddies.\p"
	.string "I've never met such a slow-going group.\n"
	.string "Resort life does that to you, huh?$"

ResortArena_EventScript_Conductor_Text_0:
# 212 "data/maps/ResortArena/scripts.pory"
	.string "Not many ships come this way, but I\n"
	.string "still man the lighthouse every day.\l"
	.string "Preventative measures are important!$"

ResortArena_EventScript_CaveGuardian_Text_0:
# 222 "data/maps/ResortArena/scripts.pory"
	.string "This is the entrance to Cocoa Cave.\n"
	.string "It's hot, dark, hot, dangerous…\l"
	.string "oh, and did I mention it's hot?\p"
	.string "You don't want to go in there, trust\n"
	.string "me. Just enjoy the resort, alright?$"

ResortArena_EventScript_Aide_Text_0:
# 235 "data/maps/ResortArena/scripts.pory"
	.string "Hello, Kirby!\n"
	.string "I'm a researcher from Waddle Dee Town.\p"
	.string "The Great King has sent me here to\n"
	.string "take a look at your Info Card Binder.\p"
	.string "Specifically, we're hoping to see that\n"
	.string "you've recruited at least {COLOR RED}15{COLOR DARK_GRAY} Helpers.\p"
	.string "Now then, may I see your binder?$"

ResortArena_EventScript_AideSuccess_Text_0:
# 261 "data/maps/ResortArena/scripts.pory"
	.string "Wonderful! You've already registered\n"
	.string "{STR_VAR_2} Helpers so far!\p"
	.string "As a reward for your due diligence,\n"
	.string "I have here a care package for you.\p"
	.string "Please, go ahead and open it!$"

ResortArena_EventScript_AideSuccess_Text_1:
# 272 "data/maps/ResortArena/scripts.pory"
	.string "Of particular note is a new tool made\n"
	.string "at the lab: the Experience Share.\p"
	.string "This tool simplifies training Helpers by\n"
	.string "giving experience to your whole party.\l"
	.string "You can turn it on and off as needed.\p"
	.string "The Royal Royale wasn't built with it in\n"
	.string "mind, so your mileage may vary…\l"
	.string "but hopefully it serves you well!\p"
	.string "Now then, I must report the good news\n"
	.string "to the Great King. Carry on!$"

ResortArena_EventScript_AideFailure_Text_0:
# 297 "data/maps/ResortArena/scripts.pory"
	.string "Hm… it seems you've only registered\n"
	.string "{STR_VAR_2} Helpers so far.\l"
	.string "The Great King will be most displeased.\p"
	.string "I'm sorry, but I can't return like this.\p"
	.string "Could I ask you to return once you've\n"
	.string "recruited at least {COLOR RED}15{COLOR DARK_GRAY} Helpers?$"

ResortArena_EventScript_MoveTutor_Text_0:
# 313 "data/maps/ResortArena/scripts.pory"
	.string "I'm a movesmith. I know all sorts of\n"
	.string "long-forgotten techniques.\p"
	.string "What I'm looking for… is a commander\n"
	.string "of Helpers that can wield my power.\p"
	.string "Do you have what it takes to spark\n"
	.string "the fire kindling in my heart?$"

ResortArena_EventScript_MoveTutor_Text_1:
# 324 "data/maps/ResortArena/scripts.pory"
	.string "Having watched your recent victory…\n"
	.string "I feel so invigorated! Wroaaar!\p"
	.string "I know some special moves that can\n"
	.string "be taught to your Helpers.\p"
	.string "For the price of ¥500, I'll train\n"
	.string "them these new techniques.\p"
	.string "What do you say?\n"
	.string "Which move are you interested in?\p"
	.string "…is what I would ask, but I need\n"
	.string "more time. Come back much later.$"

ResortArena_EventScript_Courtship_Text_0:
# 346 "data/maps/ResortArena/scripts.pory"
	.string "{SPEAKER NAME_DAROACH}Ladies, ladies! Please, one at a time!\p"
	.string "My purloining claws can only steal so\n"
	.string "many hearts at once, you know…?$"

ResortArena_EventScript_Courtship_Text_1:
# 356 "data/maps/ResortArena/scripts.pory"
	.string "Eeeeee! Oh, Daroach……! {EMOJI_HEART}{EMOJI_HEART}{EMOJI_HEART}$"
