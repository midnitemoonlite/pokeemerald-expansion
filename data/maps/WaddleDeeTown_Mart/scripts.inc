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
	.2byte ITEM_POTION
# 23 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 25 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 26 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 27 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 28 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

WaddleDeeTown_Mart_EventScript_Delivery::
# 33 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 34 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_Delivery_Text_0
# 40 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return


WaddleDeeTown_Mart_EventScript_Socialite::
# 45 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	lock
# 46 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	faceplayer
# 47 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	msgbox WaddleDeeTown_Mart_EventScript_Socialite_Text_0
# 53 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	release
	return


WaddleDeeTown_Mart_EventScript_Delivery_Text_0:
# 35 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "There's a department store being built\n"
	.string "in the northeast corner of town.\p"
	.string "It'll be hard for this shop to compete\n"
	.string "with the variety of items sold there…$"

WaddleDeeTown_Mart_EventScript_Socialite_Text_0:
# 47 "data/maps/WaddleDeeTown_Mart/scripts.pory"
	.string "Even when the department store opens,\n"
	.string "I'll keep coming back to this shop.\p"
	.string "I come by often enough for the clerks\n"
	.string "to recognize me. It's hard to beat\l"
	.string "that level of familiarity!$"
