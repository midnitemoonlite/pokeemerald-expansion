# 1 "data/maps/ResortArena_Villa2/scripts.pory"

# 2 "data/maps/ResortArena_Villa2/scripts.pory"
ResortArena_Villa2_MapScripts::
# 3 "data/maps/ResortArena_Villa2/scripts.pory"
	.byte 0

ResortArena_Villa2_EventScript_WaddleDee::
# 8 "data/maps/ResortArena_Villa2/scripts.pory"
	lock
# 9 "data/maps/ResortArena_Villa2/scripts.pory"
	faceplayer
# 10 "data/maps/ResortArena_Villa2/scripts.pory"
	msgbox ResortArena_Villa2_EventScript_WaddleDee_Text_0
# 18 "data/maps/ResortArena_Villa2/scripts.pory"
	release
	return


ResortArena_Villa2_EventScript_Hiker::
# 23 "data/maps/ResortArena_Villa2/scripts.pory"
	lock
# 24 "data/maps/ResortArena_Villa2/scripts.pory"
	faceplayer
# 25 "data/maps/ResortArena_Villa2/scripts.pory"
	checkitem ITEM_LETTER, 1
# 26 "data/maps/ResortArena_Villa2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ResortArena_Villa2_EventScript_Hiker_2
# 57 "data/maps/ResortArena_Villa2/scripts.pory"
	compare VAR_SAILOR_QUEST, 2
	goto_if_lt ResortArena_Villa2_EventScript_Hiker_5
ResortArena_Villa2_EventScript_Hiker_4:
# 72 "data/maps/ResortArena_Villa2/scripts.pory"
	compare VAR_SAILOR_QUEST, 2
	goto_if_ge ResortArena_Villa2_EventScript_Hiker_7
	return

ResortArena_Villa2_EventScript_Hiker_2:
# 28 "data/maps/ResortArena_Villa2/scripts.pory"
	msgbox ResortArena_Villa2_EventScript_Hiker_Text_0
# 29 "data/maps/ResortArena_Villa2/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 30 "data/maps/ResortArena_Villa2/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 31 "data/maps/ResortArena_Villa2/scripts.pory"
	closemessage
# 32 "data/maps/ResortArena_Villa2/scripts.pory"
	playse SE_PIN
# 33 "data/maps/ResortArena_Villa2/scripts.pory"
	applymovement LOCALID_SAILORS_FRIEND, Common_Movement_ExclamationMark
# 34 "data/maps/ResortArena_Villa2/scripts.pory"
	waitmovement
# 35 "data/maps/ResortArena_Villa2/scripts.pory"
	waitse
# 36 "data/maps/ResortArena_Villa2/scripts.pory"
	msgbox ResortArena_Villa2_EventScript_Hiker_Text_1
# 48 "data/maps/ResortArena_Villa2/scripts.pory"
	giveitem ITEM_TM24, 1
# 49 "data/maps/ResortArena_Villa2/scripts.pory"
	msgbox ResortArena_Villa2_EventScript_Hiker_Text_2
# 54 "data/maps/ResortArena_Villa2/scripts.pory"
	release
	end

ResortArena_Villa2_EventScript_Hiker_5:
# 59 "data/maps/ResortArena_Villa2/scripts.pory"
	msgbox ResortArena_Villa2_EventScript_Hiker_Text_3
# 69 "data/maps/ResortArena_Villa2/scripts.pory"
	setvar VAR_SAILOR_QUEST, 1
# 70 "data/maps/ResortArena_Villa2/scripts.pory"
	release
	goto ResortArena_Villa2_EventScript_Hiker_4

ResortArena_Villa2_EventScript_Hiker_7:
# 74 "data/maps/ResortArena_Villa2/scripts.pory"
	msgbox ResortArena_Villa2_EventScript_Hiker_Text_4
# 77 "data/maps/ResortArena_Villa2/scripts.pory"
	release
	return


ResortArena_Villa2_EventScript_WaddleDee_Text_0:
# 10 "data/maps/ResortArena_Villa2/scripts.pory"
	.string "I'm enjoying Helper battles, but is this\n"
	.string "really what being a king is about?\p"
	.string "Dream Land is so peaceful, the king has\n"
	.string "hardly ever needed to mobilize troops…\p"
	.string "If anything, it might be better training\n"
	.string "if you wanted to join the Meta-Knights!$"

ResortArena_Villa2_EventScript_Hiker_Text_0:
# 28 "data/maps/ResortArena_Villa2/scripts.pory"
	.string "What's that? You have a letter for me?$"

ResortArena_Villa2_EventScript_Hiker_Text_1:
# 36 "data/maps/ResortArena_Villa2/scripts.pory"
	.string "Oh my! It's from my old pal! So they're\n"
	.string "part of the Halberd crew after all…\p"
	.string "Wait, that means you found your way to\n"
	.string "the Halberd just to check on them!?\p"
	.string "I'll have to write something back. I\n"
	.string "wonder how to send mail to a ship…\p"
	.string "Now, now, don't offer to take it back!\n"
	.string "You've done so much for me already.\l"
	.string "Hm… here, why don't you have this?$"

ResortArena_Villa2_EventScript_Hiker_Text_2:
# 49 "data/maps/ResortArena_Villa2/scripts.pory"
	.string "A Waddle Dee working for the Halberd…\n"
	.string "it must be tough, but my friend made it.\p"
	.string "I hope this item inspires you to chart\n"
	.string "new ground and chase your dreams too!$"

ResortArena_Villa2_EventScript_Hiker_Text_3:
# 59 "data/maps/ResortArena_Villa2/scripts.pory"
	.string "I used to frequent this resort with\n"
	.string "a friend of mine. More than anything,\l"
	.string "their dream was going on adventures.\p"
	.string "Boy, it must have been tough spending\n"
	.string "so much time relaxing with me instead!\p"
	.string "Last I heard, they sought to reach\n"
	.string "their goal by working on the Halberd…\l"
	.string "I wonder if they're doing alright?$"

ResortArena_Villa2_EventScript_Hiker_Text_4:
# 74 "data/maps/ResortArena_Villa2/scripts.pory"
	.string "Sailor Waddle Dee… I have so much I\n"
	.string "want to talk about with them, it's\l"
	.string "hard to put it all onto paper!$"
