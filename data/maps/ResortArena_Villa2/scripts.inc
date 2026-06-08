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
	msgbox ResortArena_Villa2_EventScript_Hiker_Text_0
# 35 "data/maps/ResortArena_Villa2/scripts.pory"
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
# 25 "data/maps/ResortArena_Villa2/scripts.pory"
	.string "I used to frequent this resort with\n"
	.string "a friend of mine. More than anything,\l"
	.string "their dream was going on adventures.\p"
	.string "Boy, it must have been tough spending\n"
	.string "so much time relaxing with me instead!\p"
	.string "Last I heard, they sought to reach\n"
	.string "their goal by working on the Halberd…\l"
	.string "I wonder if they're doing alright?$"
