# 1 "data/maps/OrangeRestArea_Mart/scripts.pory"

# 2 "data/maps/OrangeRestArea_Mart/scripts.pory"
OrangeRestArea_Mart_MapScripts::
# 3 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.byte 0

OrangeRestArea_Mart_EventScript_Clerk::
# 8 "data/maps/OrangeRestArea_Mart/scripts.pory"
	lock
# 9 "data/maps/OrangeRestArea_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/OrangeRestArea_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/OrangeRestArea_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/OrangeRestArea_Mart/scripts.pory"
	pokemart OrangeRestArea_Mart
# 13 "data/maps/OrangeRestArea_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/OrangeRestArea_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/OrangeRestArea_Mart/scripts.pory"
OrangeRestArea_Mart:
# 20 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 22 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 23 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 28 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 29 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 31 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

OrangeRestArea_Mart_EventScript_ParasolWaddleDee::
# 36 "data/maps/OrangeRestArea_Mart/scripts.pory"
	lock
# 37 "data/maps/OrangeRestArea_Mart/scripts.pory"
	faceplayer
# 38 "data/maps/OrangeRestArea_Mart/scripts.pory"
	msgbox OrangeRestArea_Mart_EventScript_ParasolWaddleDee_Text_0
# 43 "data/maps/OrangeRestArea_Mart/scripts.pory"
	release
	return


OrangeRestArea_Mart_EventScript_DeliveryWaddleDee::
# 48 "data/maps/OrangeRestArea_Mart/scripts.pory"
	lock
# 49 "data/maps/OrangeRestArea_Mart/scripts.pory"
	faceplayer
# 50 "data/maps/OrangeRestArea_Mart/scripts.pory"
	msgbox OrangeRestArea_Mart_EventScript_DeliveryWaddleDee_Text_0
# 56 "data/maps/OrangeRestArea_Mart/scripts.pory"
	release
	return


OrangeRestArea_Mart_EventScript_ParasolWaddleDee_Text_0:
# 38 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.string "Large bodies of water divide the arenas\n"
	.string "on Dream Land's eastern half.\p"
	.string "Luckily, my parasol floats on water, so\n"
	.string "I can sail on it to my heart's content!$"

OrangeRestArea_Mart_EventScript_DeliveryWaddleDee_Text_0:
# 50 "data/maps/OrangeRestArea_Mart/scripts.pory"
	.string "Have you been to the Waddle Dee Café\n"
	.string "over in Waddle Dee Town?\p"
	.string "Some of our snacks and drinks come from\n"
	.string "there. It's a great place to visit if\l"
	.string "you're looking for culinary items.$"
