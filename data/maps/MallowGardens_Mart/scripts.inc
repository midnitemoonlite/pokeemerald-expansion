# 1 "data/maps/MallowGardens_Mart/scripts.pory"

# 2 "data/maps/MallowGardens_Mart/scripts.pory"
MallowGardens_Mart_MapScripts::
# 3 "data/maps/MallowGardens_Mart/scripts.pory"
	.byte 0

MallowGardens_Mart_EventScript_Clerk::
# 8 "data/maps/MallowGardens_Mart/scripts.pory"
	lock
# 9 "data/maps/MallowGardens_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/MallowGardens_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/MallowGardens_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/MallowGardens_Mart/scripts.pory"
	pokemart MallowGardens_Mart
# 13 "data/maps/MallowGardens_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/MallowGardens_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/MallowGardens_Mart/scripts.pory"
MallowGardens_Mart:
# 20 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 22 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_POTION
# 23 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 24 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 25 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 27 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 28 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 29 "data/maps/MallowGardens_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

MallowGardens_Mart_EventScript_Employee::
# 34 "data/maps/MallowGardens_Mart/scripts.pory"
	lock
# 35 "data/maps/MallowGardens_Mart/scripts.pory"
	faceplayer
# 36 "data/maps/MallowGardens_Mart/scripts.pory"
	msgbox MallowGardens_Mart_EventScript_Employee_Text_0
# 38 "data/maps/MallowGardens_Mart/scripts.pory"
	release
	return


MallowGardens_Mart_EventScript_Chef::
# 43 "data/maps/MallowGardens_Mart/scripts.pory"
	lock
# 44 "data/maps/MallowGardens_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/MallowGardens_Mart/scripts.pory"
	msgbox MallowGardens_Mart_EventScript_Chef_Text_0
# 56 "data/maps/MallowGardens_Mart/scripts.pory"
	release
	return


MallowGardens_Mart_EventScript_Employee_Text_0:
# 36 "data/maps/MallowGardens_Mart/scripts.pory"
	.string "I'm supposed to be stocking shelves,\n"
	.string "but I can't do my job with a Gordo here…$"

MallowGardens_Mart_EventScript_Chef_Text_0:
# 45 "data/maps/MallowGardens_Mart/scripts.pory"
	.string "Have you noticed how the shops across\n"
	.string "Dream Land have different stock?\p"
	.string "Each item shop sells its own unique\n"
	.string "Friend Heart apart from the standards.\p"
	.string "And shops near arenas tend to offer\n"
	.string "a more diverse selection of items…\p"
	.string "You should always check in and see\n"
	.string "what specials a shop has to offer!$"
