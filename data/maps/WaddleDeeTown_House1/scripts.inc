# 1 "data/maps/WaddleDeeTown_House1/scripts.pory"

# 2 "data/maps/WaddleDeeTown_House1/scripts.pory"
WaddleDeeTown_House1_MapScripts::
# 3 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.byte 0

WaddleDeeTown_House1_EventScript_InBed::
# 8 "data/maps/WaddleDeeTown_House1/scripts.pory"
	lock
# 9 "data/maps/WaddleDeeTown_House1/scripts.pory"
	faceplayer
# 10 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_InBed_Text_0
# 15 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return


WaddleDeeTown_House1_EventScript_Worker::
# 20 "data/maps/WaddleDeeTown_House1/scripts.pory"
	lock
# 21 "data/maps/WaddleDeeTown_House1/scripts.pory"
	faceplayer
# 22 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_Worker_Text_0
# 27 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return


WaddleDeeTown_House1_EventScript_GiveQuickClaw::
# 32 "data/maps/WaddleDeeTown_House1/scripts.pory"
	lock
# 33 "data/maps/WaddleDeeTown_House1/scripts.pory"
	faceplayer
# 34 "data/maps/WaddleDeeTown_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_QUICK_CLAW, WaddleDeeTown_House1_EventScript_GiveQuickClaw_1
# 50 "data/maps/WaddleDeeTown_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, WaddleDeeTown_House1_EventScript_GiveQuickClaw_2
	return

WaddleDeeTown_House1_EventScript_GiveQuickClaw_1:
# 36 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_0
# 41 "data/maps/WaddleDeeTown_House1/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 42 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_1
# 47 "data/maps/WaddleDeeTown_House1/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 48 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return

WaddleDeeTown_House1_EventScript_GiveQuickClaw_2:
# 52 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_2
# 54 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return


WaddleDeeTown_House1_EventScript_InBed_Text_0:
# 10 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "I heard about Dedede's Royal Royale\n"
	.string "going on, but… I'm too tired for it.\p"
	.string "There wasn't a single star in the\n"
	.string "sky last night. I couldn't sleep.$"

WaddleDeeTown_House1_EventScript_Worker_Text_0:
# 22 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "First, Helpers appear all over town…\n"
	.string "Then, Dedede's Royal Royale begins…\p"
	.string "Today's been an exciting day! I wonder\n"
	.string "what new things tomorrow will bring.$"

WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_0:
# 36 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "Did you know that sometimes Helpers\n"
	.string "can be encountered holding items?\p"
	.string "I caught a Gaw Gaw with this\n"
	.string "item in its paws.$"

WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_1:
# 42 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "It seems this claw can sometimes\n"
	.string "give your Helper the first move.\p"
	.string "But my Gaw Gaw's already pretty\n"
	.string "speedy, so you can have it.$"

WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_2:
# 52 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "Who knows what other types of items\n"
	.string "might have use in Helper battles?$"
