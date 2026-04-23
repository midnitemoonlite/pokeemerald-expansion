# 1 "data/maps/WaddleDeeTown_Mart/scripts.pory"

# 2 "data/maps/WaddleDeeTown_Mart/scripts.pory"
WaddleDeeTown_Mart_MapScripts::
# 3 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.byte 0

WaddleDeeTown_Mart_EventScript_Clerk::
# 8 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 9 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	pokemart WaddleDeeTown_Mart
# 13 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/WaddleDeeTown_Mart/scripts.pory"
WaddleDeeTown_Mart:
# 20 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 22 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 23 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 25 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 27 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 28 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 29 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

WaddleDeeTown_Mart_EventScript_Delivery::
# 34 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 35 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 36 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_Delivery_Text_0
# 41 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return


WaddleDeeTown_Mart_EventScript_Socialite::
# 46 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 47 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 48 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_Socialite_Text_0
# 54 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return


WaddleDeeTown_Mart_EventScript_Delivery_Text_0:
# 36 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "There's a department store being built\n"
	.string "in the northeast corner of town.\p"
	.string "It'll be hard for this shop to compete\n"
	.string "with the variety of items sold there…$"

WaddleDeeTown_Mart_EventScript_Socialite_Text_0:
# 48 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "Even when the department store opens,\n"
	.string "I'll keep coming back to this shop.\p"
	.string "I come by often enough for the clerks\n"
	.string "to recognize me. It's hard to beat\l"
	.string "that level of familiarity!$"
