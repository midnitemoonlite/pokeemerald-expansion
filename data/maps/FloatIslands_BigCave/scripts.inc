# 1 "data/maps/FloatIslands_BigCave/scripts.pory"

# 2 "data/maps/FloatIslands_BigCave/scripts.pory"
FloatIslands_BigCave_MapScripts::
# 3 "data/maps/FloatIslands_BigCave/scripts.pory"
	.byte 0

FloatIslands_BigCave_EventScript_WaddleDee::
# 8 "data/maps/FloatIslands_BigCave/scripts.pory"
	lock
# 9 "data/maps/FloatIslands_BigCave/scripts.pory"
	faceplayer
# 10 "data/maps/FloatIslands_BigCave/scripts.pory"
	msgbox FloatIslands_BigCave_EventScript_WaddleDee_Text_0
# 15 "data/maps/FloatIslands_BigCave/scripts.pory"
	release
	return


FloatIslands_BigCave_EventScript_WaddleDee_Text_0:
# 10 "data/maps/FloatIslands_BigCave/scripts.pory"
	.string "I keep trying to climb up that muddy\n"
	.string "slope, but I always come tumbling down…\p"
	.string "You'd need to be really fast to get up\n"
	.string "there. Like, ZOOM!$"
