# 1 "data/maps/GreenRestArea_Mart/scripts.pory"

# 2 "data/maps/GreenRestArea_Mart/scripts.pory"
GreenRestArea_Mart_MapScripts::
# 3 "data/maps/GreenRestArea_Mart/scripts.pory"
	.byte 0

GreenRestArea_Mart_EventScript_Clerk::
# 7 "data/maps/GreenRestArea_Mart/scripts.pory"
	lock
# 8 "data/maps/GreenRestArea_Mart/scripts.pory"
	faceplayer
# 9 "data/maps/GreenRestArea_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 10 "data/maps/GreenRestArea_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/GreenRestArea_Mart/scripts.pory"
	pokemart GreenRestArea_Mart
# 12 "data/maps/GreenRestArea_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 13 "data/maps/GreenRestArea_Mart/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/GreenRestArea_Mart/scripts.pory"
GreenRestArea_Mart:
# 19 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 20 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 21 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_POTION
# 22 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 24 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 25 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 26 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

GreenRestArea_EventScript_WaddleDeeJuice::
# 31 "data/maps/GreenRestArea_Mart/scripts.pory"
	lock
# 32 "data/maps/GreenRestArea_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/GreenRestArea_Mart/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeJuice_Text_0
# 38 "data/maps/GreenRestArea_Mart/scripts.pory"
	release
	return


GreenRestArea_EventScript_WaddleDeeSell::
# 43 "data/maps/GreenRestArea_Mart/scripts.pory"
	lock
# 44 "data/maps/GreenRestArea_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/GreenRestArea_Mart/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeSell_Text_0
# 54 "data/maps/GreenRestArea_Mart/scripts.pory"
	release
	return


GreenRestArea_EventScript_WaddleDeeJuice_Text_0:
# 33 "data/maps/GreenRestArea_Mart/scripts.pory"
	.string "I know that Cherry Juice is supposed to\n"
	.string "be for your Helpers, but…\p"
	.string "I can't help it! It tastes so good!\n"
	.string "I love juice!!$"

GreenRestArea_EventScript_WaddleDeeSell_Text_0:
# 45 "data/maps/GreenRestArea_Mart/scripts.pory"
	.string "I grow crops in Vegetable Valley, then\n"
	.string "bring them down here to sell.\p"
	.string "Those crops get used to make hearty\n"
	.string "meals and drinks.\p"
	.string "After a long day of work, there's\n"
	.string "nothing better to refresh yourself\l"
	.string "with. It's nature's blessing!$"
