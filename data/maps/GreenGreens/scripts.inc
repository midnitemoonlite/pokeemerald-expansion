# 1 "data/maps/GreenGreens/scripts.pory"

# 2 "data/maps/GreenGreens/scripts.pory"
GreenGreens_MapScripts::
# 3 "data/maps/GreenGreens/scripts.pory"
	.byte 0

GreenGreens_EventScript_Sign::
# 8 "data/maps/GreenGreens/scripts.pory"
	msgbox GreenGreens_EventScript_Sign_Text_0, MSGBOX_SIGN
# 10 "data/maps/GreenGreens/scripts.pory"
	closemessage
	return


GreenGreens_EventScript_WaddleDeeTalk1::
# 15 "data/maps/GreenGreens/scripts.pory"
	lock
# 16 "data/maps/GreenGreens/scripts.pory"
	faceplayer
# 17 "data/maps/GreenGreens/scripts.pory"
	msgbox GreenGreens_EventScript_WaddleDeeTalk1_Text_0
# 24 "data/maps/GreenGreens/scripts.pory"
	release
	return


GreenGreens_EventScript_WaddleDeeTalk2::
# 29 "data/maps/GreenGreens/scripts.pory"
	lock
# 30 "data/maps/GreenGreens/scripts.pory"
	faceplayer
# 31 "data/maps/GreenGreens/scripts.pory"
	msgbox GreenGreens_EventScript_WaddleDeeTalk2_Text_0
# 36 "data/maps/GreenGreens/scripts.pory"
	release
	return


GreenGreens_EventScript_WaddleDeeTalk3::
# 41 "data/maps/GreenGreens/scripts.pory"
	lock
# 42 "data/maps/GreenGreens/scripts.pory"
	faceplayer
# 43 "data/maps/GreenGreens/scripts.pory"
	msgbox GreenGreens_EventScript_WaddleDeeTalk3_Text_0
# 51 "data/maps/GreenGreens/scripts.pory"
	release
	return


GreenGreens_EventScript_Sign_Text_0:
# 8 "data/maps/GreenGreens/scripts.pory"
	.string "GREEN GREENS\n"
	.string "Where the spring breeze always blows.$"

GreenGreens_EventScript_WaddleDeeTalk1_Text_0:
# 17 "data/maps/GreenGreens/scripts.pory"
	.string "Hi, Kirby! Did you know?\p"
	.string "Wild Helpers hide in this grass! They'll\n"
	.string "jump out when you walk through it!\p"
	.string "I had no idea. I hope I taught you\n"
	.string "something valuable!$"

GreenGreens_EventScript_WaddleDeeTalk2_Text_0:
# 31 "data/maps/GreenGreens/scripts.pory"
	.string "This place is so peaceful. It's my\n"
	.string "favorite spot to nap.\p"
	.string "The energy here feels a lot more\n"
	.string "active than usual now, though…$"

GreenGreens_EventScript_WaddleDeeTalk3_Text_0:
# 43 "data/maps/GreenGreens/scripts.pory"
	.string "I'm trying out this game the\n"
	.string "Great King told me about…\p"
	.string "He said I have to throw these hearts at\n"
	.string "any Helpers I want to befriend.\p"
	.string "The king has real strong arms. I hope\n"
	.string "I can throw like him someday!$"
