# 1 "data/maps/OrangeRestArea/scripts.pory"

# 2 "data/maps/OrangeRestArea/scripts.pory"
OrangeRestArea_MapScripts::
# 3 "data/maps/OrangeRestArea/scripts.pory"
	.byte 0

OrangeRestArea_EventScript_Sign::
# 8 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
	return


OrangeRestArea_EventScript_Soldier::
# 14 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 15 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 16 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Soldier_Text_0
# 24 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_Fisherman::
# 28 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 29 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 30 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Fisherman_Text_0
# 33 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 34 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_Wanderer::
# 38 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 39 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 40 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Wanderer_Text_0
# 45 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_WaddleDee::
# 49 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 50 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 51 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_WaddleDee_Text_0
# 62 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_Approach1::
# 67 "data/maps/OrangeRestArea/scripts.pory"
	lockall
# 68 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_NORTH
# 69 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 70 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 71 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 72 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_Text_KineIntroduction
# 73 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 74 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_0
# 75 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 76 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_WEST
# 77 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_1
# 78 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 79 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_Kine
	return


OrangeRestArea_EventScript_Approach2::
# 84 "data/maps/OrangeRestArea/scripts.pory"
	lockall
# 85 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_NORTH
# 86 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 87 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 88 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 89 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_Text_KineIntroduction
# 90 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 91 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_0
# 92 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 93 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_WEST
# 94 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach2_Movement_0
# 95 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 96 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_Kine
	return


OrangeRestArea_EventScript_Approach3::
# 101 "data/maps/OrangeRestArea/scripts.pory"
	lockall
# 102 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_NORTH
# 103 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 104 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 105 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 106 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_Text_KineIntroduction
# 107 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 108 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_0
# 109 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 110 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_WEST
# 111 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 112 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 113 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_Kine
	return


OrangeRestArea_EventScript_Kine::
# 117 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Kine_Text_0, MSGBOX_YESNO
# 132 "data/maps/OrangeRestArea/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne OrangeRestArea_EventScript_Kine_1
# 138 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 139 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineDeny
	return

OrangeRestArea_EventScript_Kine_1:
# 134 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineConfirm
	return


OrangeRestArea_EventScript_KineDeny::
# 145 "data/maps/OrangeRestArea/scripts.pory"
	delay 12
# 146 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 147 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 148 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 149 "data/maps/OrangeRestArea/scripts.pory"
	delay 60
# 150 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineDeny_Text_0, MSGBOX_YESNO
# 155 "data/maps/OrangeRestArea/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne OrangeRestArea_EventScript_KineDeny_1
# 161 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 162 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineDeny
	return

OrangeRestArea_EventScript_KineDeny_1:
# 157 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineConfirm
	return


OrangeRestArea_EventScript_KineConfirm::
# 168 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineConfirm_Text_0
# 173 "data/maps/OrangeRestArea/scripts.pory"
	setspeaker NULL
# 174 "data/maps/OrangeRestArea/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 175 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineConfirm_Text_1
# 177 "data/maps/OrangeRestArea/scripts.pory"
	waitfanfare
# 178 "data/maps/OrangeRestArea/scripts.pory"
	waitmessage
# 179 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineConfirm_Text_2
# 185 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 186 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_EXIT
# 187 "data/maps/OrangeRestArea/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 188 "data/maps/OrangeRestArea/scripts.pory"
	removeobject LOCALID_KINE
# 189 "data/maps/OrangeRestArea/scripts.pory"
	setflag FLAG_FOUND_KINE
# 190 "data/maps/OrangeRestArea/scripts.pory"
	setvar VAR_ORANGE_REST_AREA_STATE, 1
# 191 "data/maps/OrangeRestArea/scripts.pory"
	delay 30
# 192 "data/maps/OrangeRestArea/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 194 "data/maps/OrangeRestArea/scripts.pory"
	releaseall
	return


# 74 "data/maps/OrangeRestArea/scripts.pory"
OrangeRestArea_EventScript_Approach1_Movement_0:
# 74 "data/maps/OrangeRestArea/scripts.pory"
	walk_down
# 74 "data/maps/OrangeRestArea/scripts.pory"
	walk_down
# 74 "data/maps/OrangeRestArea/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/OrangeRestArea/scripts.pory"
OrangeRestArea_EventScript_Approach1_Movement_1:
# 77 "data/maps/OrangeRestArea/scripts.pory"
	walk_right
# 77 "data/maps/OrangeRestArea/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/OrangeRestArea/scripts.pory"
OrangeRestArea_EventScript_Approach2_Movement_0:
# 94 "data/maps/OrangeRestArea/scripts.pory"
	walk_right
	step_end

OrangeRestArea_EventScript_Sign_Text_0:
# 8 "data/maps/OrangeRestArea/scripts.pory"
	.string "ORANGE REST AREA\n"
	.string "Refuge for spelunkers and seafarers.$"

OrangeRestArea_EventScript_Soldier_Text_0:
# 16 "data/maps/OrangeRestArea/scripts.pory"
	.string "You came from the resort? Meaning you\n"
	.string "actually delved through Cocoa Cave?\p"
	.string "You must be tired! Most folks use the\n"
	.string "entrance east of here to avoid\l"
	.string "descending to the lower floors.\p"
	.string "Please, rest up while you're here!$"

OrangeRestArea_EventScript_Fisherman_Text_0:
# 30 "data/maps/OrangeRestArea/scripts.pory"
	.string "I hope these rest areas stick around\n"
	.string "even after the Royal Royale's over.\l"
	.string "They're nice places to unwind.$"

OrangeRestArea_EventScript_Wanderer_Text_0:
# 40 "data/maps/OrangeRestArea/scripts.pory"
	.string "I swear I saw it! Something huge flew\n"
	.string "above here and landed in Orange Ocean!\p"
	.string "I don't know what it was, but I promise\n"
	.string "I'm not making it up!$"

OrangeRestArea_EventScript_WaddleDee_Text_0:
# 51 "data/maps/OrangeRestArea/scripts.pory"
	.string "The deeper into Cocoa Cave you go, the\n"
	.string "darker it gets, and the hotter it feels.\p"
	.string "Supposedly, the lowest floor is pitch\n"
	.string "black, and impossible to light up.\p"
	.string "There's a lot of crazy rumors about\n"
	.string "what you might find down there…\p"
	.string "Nobody is brave enough to try and\n"
	.string "find out for themselves, though.$"

OrangeRestArea_EventScript_Kine_Text_0:
# 117 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}It is! Wow, I'm so lucky! I could use\n"
	.string "a friend like you right now!\p"
	.string "I swam out here to fetch a present\n"
	.string "for my dear Mine at the resort…\l"
	.string "only to drop it in the ocean!\p"
	.string "There's a massive ship under the water\n"
	.string "where it sunk. I think it fell inside.\p"
	.string "But I couldn't find a way in… and even\n"
	.string "if I did, you know how I am on land!\p"
	.string "Do you think you could help me\n"
	.string "look for Mine's present? Pleeeeease?$"

OrangeRestArea_EventScript_KineDeny_Text_0:
# 150 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}K…Kirby? But… my present for Mine…\n"
	.string "Oooooooooohhh…\p"
	.string "Please, Kirby! Please reconsider! I\n"
	.string "really need your help!$"

OrangeRestArea_EventScript_KineConfirm_Text_0:
# 168 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}Thank you, Kirby! Thank you thank you\n"
	.string "thank you!\p"
	.string "Don't worry, I'll help ferry you around.\n"
	.string "In fact, I'll do you one even better!$"

OrangeRestArea_EventScript_KineConfirm_Text_1:
# 175 "data/maps/OrangeRestArea/scripts.pory"
	.string "Obtained {COLOR RED}Kine's phone number{COLOR DARK_GRAY}!\n"
	.string "Now you can call for Kine's help!$"

OrangeRestArea_EventScript_KineConfirm_Text_2:
# 179 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}If you ever need help crossing a body\n"
	.string "of water, I'll be right there for you!\p"
	.string "I dropped Mine's gift near the end of\n"
	.string "Orange Ocean. Whenever you're ready,\l"
	.string "walk up to the shore and call me!$"

OrangeRestArea_Text_KineIntroduction::
# 197 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}Huuuuh? Kirby? Is that you?$"
