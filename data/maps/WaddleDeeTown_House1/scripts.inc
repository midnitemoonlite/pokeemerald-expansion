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
	goto_if_set FLAG_WADDLE_DEE_TOWN_SOUTH_TRADE_COMPLETED, WaddleDeeTown_House1_EventScript_Worker_2
# 30 "data/maps/WaddleDeeTown_House1/scripts.pory"
	goto_if_unset FLAG_WADDLE_DEE_TOWN_SOUTH_TRADE_COMPLETED, WaddleDeeTown_House1_EventScript_Worker_3
WaddleDeeTown_House1_EventScript_Worker_1:
# 35 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return

WaddleDeeTown_House1_EventScript_Worker_2:
# 24 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_Worker_Text_0
	goto WaddleDeeTown_House1_EventScript_Worker_1

WaddleDeeTown_House1_EventScript_Worker_3:
# 32 "data/maps/WaddleDeeTown_House1/scripts.pory"
	ingame_trade INGAME_TRADE_SOLITE, WaddleDeeTown_House1_TradeMessage, WaddleDeeTown_House1_DeclineScript, WaddleDeeTown_House1_WrongScript, WaddleDeeTown_House1_CompleteMessage
# 33 "data/maps/WaddleDeeTown_House1/scripts.pory"
	setflag FLAG_WADDLE_DEE_TOWN_SOUTH_TRADE_COMPLETED
	goto WaddleDeeTown_House1_EventScript_Worker_1


WaddleDeeTown_House1_DeclineScript::
# 52 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_DeclineScript_Text_0
# 54 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return


WaddleDeeTown_House1_WrongScript::
# 59 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_WrongScript_Text_0
# 61 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return


WaddleDeeTown_House1_EventScript_GiveQuickClaw::
# 74 "data/maps/WaddleDeeTown_House1/scripts.pory"
	lock
# 75 "data/maps/WaddleDeeTown_House1/scripts.pory"
	faceplayer
# 76 "data/maps/WaddleDeeTown_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_QUICK_CLAW, WaddleDeeTown_House1_EventScript_GiveQuickClaw_1
# 92 "data/maps/WaddleDeeTown_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, WaddleDeeTown_House1_EventScript_GiveQuickClaw_2
	return

WaddleDeeTown_House1_EventScript_GiveQuickClaw_1:
# 78 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_0
# 83 "data/maps/WaddleDeeTown_House1/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 84 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_1
# 89 "data/maps/WaddleDeeTown_House1/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 90 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return

WaddleDeeTown_House1_EventScript_GiveQuickClaw_2:
# 94 "data/maps/WaddleDeeTown_House1/scripts.pory"
	msgbox WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_2
# 96 "data/maps/WaddleDeeTown_House1/scripts.pory"
	release
	return


WaddleDeeTown_House1_EventScript_InBed_Text_0:
# 10 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "I heard about Dedede's Royal Royale\n"
	.string "going on, but… I'm too tired for it.\p"
	.string "There wasn't a single star in the\n"
	.string "sky last night. I couldn't sleep.$"

WaddleDeeTown_House1_EventScript_Worker_Text_0:
# 24 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "Solite has its own advantages that\n"
	.string "could help you out at the Arena.\p"
	.string "You should check what moves it can\n"
	.string "relearn through your Helpers menu.$"

WaddleDeeTown_House1_DeclineScript_Text_0:
# 52 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "No dice, huh? I wonder where I can\n"
	.string "recruit a Twizzy at…$"

WaddleDeeTown_House1_WrongScript_Text_0:
# 59 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "Hm? That's not what I'm looking for.\n"
	.string "Twizzies are the yellow birdy Helpers.$"

WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_0:
# 78 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "Did you know that sometimes Helpers\n"
	.string "can be encountered holding items?\p"
	.string "I caught a Gaw Gaw with this\n"
	.string "item in its paws.$"

WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_1:
# 84 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "It seems this claw can sometimes\n"
	.string "give your Helper the first move.\p"
	.string "But my Gaw Gaw's already pretty\n"
	.string "speedy, so you can have it.$"

WaddleDeeTown_House1_EventScript_GiveQuickClaw_Text_2:
# 94 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "Who knows what other types of items\n"
	.string "might have use in Helper battles?$"

WaddleDeeTown_House1_TradeMessage::
# 38 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "I had a practice battle to prepare for\n"
	.string "the Arena, but lost against a Gaw Gaw.\p"
	.string "I bet some kind of flying Helper like a\n"
	.string "Twizzy could round out my team…\p"
	.string "If you have one, could we trade for it?\n"
	.string "I'll lend you my Solite in exchange.$"

WaddleDeeTown_House1_CompleteMessage::
# 64 "data/maps/WaddleDeeTown_House1/scripts.pory"
	.string "Thank you so much, Kirby! I'm sure this\n"
	.string "will help me out at the Arena.\p"
	.string "Please take good care of my Solite!$"
