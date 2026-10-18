# 1 "data/maps/CastleArena_Mart/scripts.pory"

# 2 "data/maps/CastleArena_Mart/scripts.pory"
CastleArena_Mart_MapScripts::
# 3 "data/maps/CastleArena_Mart/scripts.pory"
	.byte 0

CastleArena_Mart_EventScript_Clerk::
# 8 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 9 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/CastleArena_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/CastleArena_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/CastleArena_Mart/scripts.pory"
	pokemart CastleArena_Mart
# 13 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/CastleArena_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/CastleArena_Mart/scripts.pory"
CastleArena_Mart:
# 20 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 22 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 23 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 29 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 31 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 32 "data/maps/CastleArena_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

CastleArena_Mart_EventScript_Nurse::
# 37 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 38 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 39 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_Nurse_Text_0
# 44 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return


CastleArena_Mart_EventScript_Chef::
# 49 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 50 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 51 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_Chef_Text_0
# 56 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return


CastleArena_Mart_EventScript_Worker::
# 61 "data/maps/CastleArena_Mart/scripts.pory"
	lock
# 62 "data/maps/CastleArena_Mart/scripts.pory"
	faceplayer
# 63 "data/maps/CastleArena_Mart/scripts.pory"
	msgbox CastleArena_Mart_EventScript_Worker_Text_0
# 68 "data/maps/CastleArena_Mart/scripts.pory"
	release
	return


CastleArena_Mart_EventScript_Nurse_Text_0:
# 39 "data/maps/CastleArena_Mart/scripts.pory"
	.string "Umm… isn't this supposed to be the\n"
	.string "break room? Where am I?\p"
	.string "Ohhhh… don't tell me I mixed up\n"
	.string "my colors again…$"

CastleArena_Mart_EventScript_Chef_Text_0:
# 51 "data/maps/CastleArena_Mart/scripts.pory"
	.string "I'm stocking up on as many 1-Ups as I\n"
	.string "can. They're a miracle item!\p"
	.string "I can't believe how generous the Great\n"
	.string "King is for offering them in shops now.$"

CastleArena_Mart_EventScript_Worker_Text_0:
# 63 "data/maps/CastleArena_Mart/scripts.pory"
	.string "With the avalanche in Waddle Dee Town,\n"
	.string "Dream Land is basically split in half…\p"
	.string "I wonder what kinds of competitors are\n"
	.string "battling in the Arenas over there.$"
