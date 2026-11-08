# 1 "data/maps/BlueRestArea_Mart/scripts.pory"

# 2 "data/maps/BlueRestArea_Mart/scripts.pory"
BlueRestArea_Mart_MapScripts::
# 3 "data/maps/BlueRestArea_Mart/scripts.pory"
	.byte 0

BlueRestArea_Mart_EventScript_Clerk::
# 8 "data/maps/BlueRestArea_Mart/scripts.pory"
	lock
# 9 "data/maps/BlueRestArea_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/BlueRestArea_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/BlueRestArea_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/BlueRestArea_Mart/scripts.pory"
	pokemart CastleArena_Mart
# 13 "data/maps/BlueRestArea_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/BlueRestArea_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/BlueRestArea_Mart/scripts.pory"
BlueRestArea_Mart:
# 20 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 22 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 23 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 29 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 31 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 32 "data/maps/BlueRestArea_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

BlueRestArea_Mart_EventScript_Camper::
# 37 "data/maps/BlueRestArea_Mart/scripts.pory"
	lock
# 38 "data/maps/BlueRestArea_Mart/scripts.pory"
	faceplayer
# 39 "data/maps/BlueRestArea_Mart/scripts.pory"
	msgbox BlueRestArea_Mart_EventScript_Camper_Text_0
# 44 "data/maps/BlueRestArea_Mart/scripts.pory"
	release
	return


BlueRestArea_Mart_EventScript_Fairy::
# 49 "data/maps/BlueRestArea_Mart/scripts.pory"
	lock
# 50 "data/maps/BlueRestArea_Mart/scripts.pory"
	faceplayer
# 51 "data/maps/BlueRestArea_Mart/scripts.pory"
	msgbox BlueRestArea_Mart_EventScript_Fairy_Text_0
# 53 "data/maps/BlueRestArea_Mart/scripts.pory"
	release
	return


BlueRestArea_Mart_EventScript_Camper_Text_0:
# 39 "data/maps/BlueRestArea_Mart/scripts.pory"
	.string "The weather is so unforgiving here that\n"
	.string "even the rest area is pretty empty.\p"
	.string "If you're going inside the Iceberg, I'd\n"
	.string "make sure to pack lots of items.$"

BlueRestArea_Mart_EventScript_Fairy_Text_0:
# 51 "data/maps/BlueRestArea_Mart/scripts.pory"
	.string "Brr! My wings almost froze over when\n"
	.string "I flew inside the Iceberg!$"
