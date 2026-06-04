# 1 "data/maps/IndigoRestArea_Mart/scripts.pory"

# 2 "data/maps/IndigoRestArea_Mart/scripts.pory"
IndigoRestArea_Mart_MapScripts::
# 3 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.byte 0

IndigoRestArea_Mart_EventScript_Clerk::
# 8 "data/maps/IndigoRestArea_Mart/scripts.pory"
	lock
# 9 "data/maps/IndigoRestArea_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/IndigoRestArea_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/IndigoRestArea_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/IndigoRestArea_Mart/scripts.pory"
	pokemart IndigoRestArea_Mart
# 13 "data/maps/IndigoRestArea_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 14 "data/maps/IndigoRestArea_Mart/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/IndigoRestArea_Mart/scripts.pory"
IndigoRestArea_Mart:
# 20 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 22 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_POTION
# 23 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 25 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 26 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 27 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 28 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

IndigoRestArea_Mart_EventScript_EmployeeWaddleDee::
# 33 "data/maps/IndigoRestArea_Mart/scripts.pory"
	lock
# 34 "data/maps/IndigoRestArea_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/IndigoRestArea_Mart/scripts.pory"
	msgbox IndigoRestArea_Mart_EventScript_EmployeeWaddleDee_Text_0
# 38 "data/maps/IndigoRestArea_Mart/scripts.pory"
	turnobject LOCALID_INDIGO_EMPLOYEE, DIR_NORTH
# 39 "data/maps/IndigoRestArea_Mart/scripts.pory"
	release
	return


IndigoRestArea_Mart_EventScript_GentlemanWaddleDee::
# 44 "data/maps/IndigoRestArea_Mart/scripts.pory"
	lock
# 45 "data/maps/IndigoRestArea_Mart/scripts.pory"
	faceplayer
# 46 "data/maps/IndigoRestArea_Mart/scripts.pory"
	msgbox IndigoRestArea_Mart_EventScript_GentlemanWaddleDee_Text_0
# 51 "data/maps/IndigoRestArea_Mart/scripts.pory"
	release
	return


IndigoRestArea_Mart_EventScript_EmployeeWaddleDee_Text_0:
# 35 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.string "If you need something, you should talk\n"
	.string "to the employee behind the counter.\l"
	.string "I've got my hands full with restocking…$"

IndigoRestArea_Mart_EventScript_GentlemanWaddleDee_Text_0:
# 46 "data/maps/IndigoRestArea_Mart/scripts.pory"
	.string "Dream Land is full of scenic vistas.\n"
	.string "It's hard to pick a favorite.\p"
	.string "Dedede's Royal Royale seems like a\n"
	.string "great way to see the sights, hm?$"
