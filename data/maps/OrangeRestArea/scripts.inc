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


OrangeRestArea_EventScript_Fluff::
# 28 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 29 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 30 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Fluff_Text_0
# 34 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_Fisherman::
# 38 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 39 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 40 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Fisherman_Text_0
# 43 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 44 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_Wanderer::
# 48 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 49 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 50 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Wanderer_Text_0
# 55 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_WaddleDee::
# 59 "data/maps/OrangeRestArea/scripts.pory"
	lock
# 60 "data/maps/OrangeRestArea/scripts.pory"
	faceplayer
# 61 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_WaddleDee_Text_0
# 72 "data/maps/OrangeRestArea/scripts.pory"
	release
	return


OrangeRestArea_EventScript_Approach1::
# 77 "data/maps/OrangeRestArea/scripts.pory"
	lockall
# 78 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_NORTH
# 79 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 80 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 81 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 82 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_Text_KineIntroduction
# 83 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 84 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_0
# 85 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 86 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_WEST
# 87 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_1
# 88 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 89 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_Kine
	return


OrangeRestArea_EventScript_Approach2::
# 94 "data/maps/OrangeRestArea/scripts.pory"
	lockall
# 95 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_NORTH
# 96 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 97 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 98 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 99 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_Text_KineIntroduction
# 100 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 101 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_0
# 102 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 103 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_WEST
# 104 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach2_Movement_0
# 105 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 106 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_Kine
	return


OrangeRestArea_EventScript_Approach3::
# 111 "data/maps/OrangeRestArea/scripts.pory"
	lockall
# 112 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_NORTH
# 113 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 114 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 115 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 116 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_Text_KineIntroduction
# 117 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 118 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_PLAYER, OrangeRestArea_EventScript_Approach1_Movement_0
# 119 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 120 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_KINE, DIR_WEST
# 121 "data/maps/OrangeRestArea/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 122 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 123 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_Kine
	return


OrangeRestArea_EventScript_Kine::
# 127 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_Kine_Text_0, MSGBOX_YESNO
# 142 "data/maps/OrangeRestArea/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne OrangeRestArea_EventScript_Kine_1
# 148 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 149 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineDeny
	return

OrangeRestArea_EventScript_Kine_1:
# 144 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineConfirm
	return


OrangeRestArea_EventScript_KineDeny::
# 155 "data/maps/OrangeRestArea/scripts.pory"
	delay 12
# 156 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_PIN
# 157 "data/maps/OrangeRestArea/scripts.pory"
	applymovement LOCALID_KINE, Common_Movement_ExclamationMark
# 158 "data/maps/OrangeRestArea/scripts.pory"
	waitmovement
# 159 "data/maps/OrangeRestArea/scripts.pory"
	delay 60
# 160 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineDeny_Text_0, MSGBOX_YESNO
# 165 "data/maps/OrangeRestArea/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne OrangeRestArea_EventScript_KineDeny_1
# 171 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 172 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineDeny
	return

OrangeRestArea_EventScript_KineDeny_1:
# 167 "data/maps/OrangeRestArea/scripts.pory"
	goto OrangeRestArea_EventScript_KineConfirm
	return


OrangeRestArea_EventScript_KineConfirm::
# 178 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineConfirm_Text_0
# 183 "data/maps/OrangeRestArea/scripts.pory"
	setspeaker NULL
# 184 "data/maps/OrangeRestArea/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 185 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineConfirm_Text_1
# 187 "data/maps/OrangeRestArea/scripts.pory"
	waitfanfare
# 188 "data/maps/OrangeRestArea/scripts.pory"
	waitmessage
# 189 "data/maps/OrangeRestArea/scripts.pory"
	msgbox OrangeRestArea_EventScript_KineConfirm_Text_2
# 195 "data/maps/OrangeRestArea/scripts.pory"
	closemessage
# 196 "data/maps/OrangeRestArea/scripts.pory"
	playse SE_EXIT
# 197 "data/maps/OrangeRestArea/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 198 "data/maps/OrangeRestArea/scripts.pory"
	removeobject LOCALID_KINE
# 199 "data/maps/OrangeRestArea/scripts.pory"
	setflag FLAG_FOUND_KINE
# 200 "data/maps/OrangeRestArea/scripts.pory"
	setvar VAR_ORANGE_REST_AREA_STATE, 1
# 201 "data/maps/OrangeRestArea/scripts.pory"
	delay 30
# 202 "data/maps/OrangeRestArea/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 204 "data/maps/OrangeRestArea/scripts.pory"
	releaseall
	return


# 84 "data/maps/OrangeRestArea/scripts.pory"
OrangeRestArea_EventScript_Approach1_Movement_0:
# 84 "data/maps/OrangeRestArea/scripts.pory"
	walk_down
# 84 "data/maps/OrangeRestArea/scripts.pory"
	walk_down
# 84 "data/maps/OrangeRestArea/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/OrangeRestArea/scripts.pory"
OrangeRestArea_EventScript_Approach1_Movement_1:
# 87 "data/maps/OrangeRestArea/scripts.pory"
	walk_right
# 87 "data/maps/OrangeRestArea/scripts.pory"
	walk_right
	step_end

# 104 "data/maps/OrangeRestArea/scripts.pory"
OrangeRestArea_EventScript_Approach2_Movement_0:
# 104 "data/maps/OrangeRestArea/scripts.pory"
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

OrangeRestArea_EventScript_Fluff_Text_0:
# 30 "data/maps/OrangeRestArea/scripts.pory"
	.string "Do you think if the water was purple,\n"
	.string "they'd call this sea Grape Ocean?\p"
	.string "Mmm… I could go for some grapes.$"

OrangeRestArea_EventScript_Fisherman_Text_0:
# 40 "data/maps/OrangeRestArea/scripts.pory"
	.string "I hope these rest areas stick around\n"
	.string "even after the Royal Royale's over.\l"
	.string "They're nice places to unwind.$"

OrangeRestArea_EventScript_Wanderer_Text_0:
# 50 "data/maps/OrangeRestArea/scripts.pory"
	.string "I swear I saw it! Something huge flew\n"
	.string "above here and landed in Orange Ocean!\p"
	.string "I don't know what it was, but I promise\n"
	.string "I'm not making it up!$"

OrangeRestArea_EventScript_WaddleDee_Text_0:
# 61 "data/maps/OrangeRestArea/scripts.pory"
	.string "The deeper into Cocoa Cave you go, the\n"
	.string "darker it gets, and the hotter it feels.\p"
	.string "Supposedly, the lowest floor is pitch\n"
	.string "black, and impossible to light up.\p"
	.string "There's a lot of crazy rumors about\n"
	.string "what you might find down there…\p"
	.string "Nobody is brave enough to try and\n"
	.string "find out for themselves, though.$"

OrangeRestArea_EventScript_Kine_Text_0:
# 127 "data/maps/OrangeRestArea/scripts.pory"
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
# 160 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}K…Kirby? But… my present for Mine…\n"
	.string "Oooooooooohhh…\p"
	.string "Please, Kirby! Please reconsider! I\n"
	.string "really need your help!$"

OrangeRestArea_EventScript_KineConfirm_Text_0:
# 178 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}Thank you, Kirby! Thank you thank you\n"
	.string "thank you!\p"
	.string "Don't worry, I'll help ferry you around.\n"
	.string "In fact, I'll do you one even better!$"

OrangeRestArea_EventScript_KineConfirm_Text_1:
# 185 "data/maps/OrangeRestArea/scripts.pory"
	.string "Obtained {COLOR RED}Kine's phone number{COLOR DARK_GRAY}!\n"
	.string "Now you can call for Kine's help!$"

OrangeRestArea_EventScript_KineConfirm_Text_2:
# 189 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}If you ever need help crossing a body\n"
	.string "of water, I'll be right there for you!\p"
	.string "I dropped Mine's gift near the end of\n"
	.string "Orange Ocean. Whenever you're ready,\l"
	.string "walk up to the shore and call me!$"

OrangeRestArea_Text_KineIntroduction::
# 207 "data/maps/OrangeRestArea/scripts.pory"
	.string "{SPEAKER NAME_KINE}Huuuuh? Kirby? Is that you?$"
