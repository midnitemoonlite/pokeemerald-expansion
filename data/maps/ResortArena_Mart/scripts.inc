# 1 "data/maps/ResortArena_Mart/scripts.pory"

# 2 "data/maps/ResortArena_Mart/scripts.pory"
ResortArena_Mart_MapScripts::
# 3 "data/maps/ResortArena_Mart/scripts.pory"
	.byte 0

ResortArena_Mart_EventScript_Clerk::
# 8 "data/maps/ResortArena_Mart/scripts.pory"
	lock
# 9 "data/maps/ResortArena_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/ResortArena_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/ResortArena_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/ResortArena_Mart/scripts.pory"
	pokemart ResortArena_Mart
# 13 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/ResortArena_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/ResortArena_Mart/scripts.pory"
ResortArena_Mart:
# 20 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 22 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 23 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 25 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 27 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 28 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 29 "data/maps/ResortArena_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

ResortArena_Mart_EventScript_Youngster::
# 34 "data/maps/ResortArena_Mart/scripts.pory"
	lock
# 35 "data/maps/ResortArena_Mart/scripts.pory"
	faceplayer
# 36 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox ResortArena_Mart_EventScript_Youngster_Text_0
# 41 "data/maps/ResortArena_Mart/scripts.pory"
	release
	return


ResortArena_Mart_EventScript_Manager::
# 46 "data/maps/ResortArena_Mart/scripts.pory"
	lock
# 47 "data/maps/ResortArena_Mart/scripts.pory"
	faceplayer
# 48 "data/maps/ResortArena_Mart/scripts.pory"
	msgbox ResortArena_Mart_EventScript_Manager_Text_0
# 53 "data/maps/ResortArena_Mart/scripts.pory"
	release
	return


ResortArena_Mart_EventScript_Youngster_Text_0:
# 36 "data/maps/ResortArena_Mart/scripts.pory"
	.string "It's been a while since I've thought to\n"
	.string "restock on items. What do I need?\p"
	.string "Let's see… Friend Hearts, drinks…\n"
	.string "Maybe an Awakening for good measure…$"

ResortArena_Mart_EventScript_Manager_Text_0:
# 48 "data/maps/ResortArena_Mart/scripts.pory"
	.string "It's hard work, making sure our guests\n"
	.string "have a carefree and relaxing stay.\p"
	.string "I wonder if I'm starting to build the\n"
	.string "opposite association with resorts…$"
