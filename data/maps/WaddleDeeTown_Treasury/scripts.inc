# 1 "data/maps/WaddleDeeTown_Treasury/scripts.pory"

# 2 "data/maps/WaddleDeeTown_Treasury/scripts.pory"
WaddleDeeTown_Treasury_MapScripts::
# 3 "data/maps/WaddleDeeTown_Treasury/scripts.pory"
	.byte 0

WaddleDeeTown_Treasury_EventScript_Soldier::
# 8 "data/maps/WaddleDeeTown_Treasury/scripts.pory"
	lock
# 9 "data/maps/WaddleDeeTown_Treasury/scripts.pory"
	faceplayer
# 10 "data/maps/WaddleDeeTown_Treasury/scripts.pory"
	msgbox WaddleDeeTown_Treasury_EventScript_Soldier_Text_0
# 23 "data/maps/WaddleDeeTown_Treasury/scripts.pory"
	release
	return


WaddleDeeTown_Treasury_EventScript_Soldier_Text_0:
# 10 "data/maps/WaddleDeeTown_Treasury/scripts.pory"
	.string "The Great King has ordered that part of\n"
	.string "his treasury be opened to participants\l"
	.string "of the Royal Royale.\p"
	.string "He feels these items might help push\n"
	.string "players to become better leaders.\p"
	.string "…to be honest, he's doing this because\n"
	.string "he wants them to pick up the pace\l"
	.string "and get ahead of you, Kirby.\p"
	.string "But since you're a participant of the\n"
	.string "Royal Royale too, you can come in.$"
