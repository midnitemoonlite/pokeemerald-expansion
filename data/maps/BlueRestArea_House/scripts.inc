# 1 "data/maps/BlueRestArea_House/scripts.pory"

# 2 "data/maps/BlueRestArea_House/scripts.pory"
BlueRestArea_House_MapScripts::
# 3 "data/maps/BlueRestArea_House/scripts.pory"
	.byte 0

BlueRestArea_House_EventScript_Camper::
# 8 "data/maps/BlueRestArea_House/scripts.pory"
	lock
# 9 "data/maps/BlueRestArea_House/scripts.pory"
	faceplayer
# 10 "data/maps/BlueRestArea_House/scripts.pory"
	msgbox BlueRestArea_House_EventScript_Camper_Text_0
# 18 "data/maps/BlueRestArea_House/scripts.pory"
	release
	return


BlueRestArea_House_EventScript_Conductor::
# 23 "data/maps/BlueRestArea_House/scripts.pory"
	lock
# 24 "data/maps/BlueRestArea_House/scripts.pory"
	msgbox BlueRestArea_House_EventScript_Conductor_Text_0
# 28 "data/maps/BlueRestArea_House/scripts.pory"
	release
	return


BlueRestArea_House_EventScript_Animal::
# 33 "data/maps/BlueRestArea_House/scripts.pory"
	lock
# 34 "data/maps/BlueRestArea_House/scripts.pory"
	faceplayer
# 35 "data/maps/BlueRestArea_House/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HEAVY_DUTY_BOOTS, BlueRestArea_House_EventScript_Animal_2
# 49 "data/maps/BlueRestArea_House/scripts.pory"
	msgbox BlueRestArea_House_EventScript_Animal_Text_2
BlueRestArea_House_EventScript_Animal_1:
# 53 "data/maps/BlueRestArea_House/scripts.pory"
	release
	return

BlueRestArea_House_EventScript_Animal_2:
# 37 "data/maps/BlueRestArea_House/scripts.pory"
	msgbox BlueRestArea_House_EventScript_Animal_Text_0
# 42 "data/maps/BlueRestArea_House/scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS
# 43 "data/maps/BlueRestArea_House/scripts.pory"
	msgbox BlueRestArea_House_EventScript_Animal_Text_1
# 45 "data/maps/BlueRestArea_House/scripts.pory"
	setflag FLAG_RECEIVED_HEAVY_DUTY_BOOTS
	goto BlueRestArea_House_EventScript_Animal_1


BlueRestArea_House_EventScript_Camper_Text_0:
# 10 "data/maps/BlueRestArea_House/scripts.pory"
	.string "High up in the sky, rainbows bridge\n"
	.string "many of Dream Land's islands together.\p"
	.string "These islands came to be known as the\n"
	.string "Rainbow Islands as a result.\p"
	.string "The Iceberg and Ripple Field are\n"
	.string "actually two of those islands!$"

BlueRestArea_House_EventScript_Conductor_Text_0:
# 24 "data/maps/BlueRestArea_House/scripts.pory"
	.string "Siiiiiip…\p"
	.string "Hoh! This cocoa is really hot! I\n"
	.string "almost burned myself!$"

BlueRestArea_House_EventScript_Animal_Text_0:
# 37 "data/maps/BlueRestArea_House/scripts.pory"
	.string "These fluffy paws help keep my feet\n"
	.string "warm when I walk on snow on ice.\p"
	.string "Do your Helpers want some boots too?\n"
	.string "Here, I'll lend you another pair I have.$"

BlueRestArea_House_EventScript_Animal_Text_1:
# 43 "data/maps/BlueRestArea_House/scripts.pory"
	.string "A nice pair of shoes can protect\n"
	.string "against all sorts of elements.$"

BlueRestArea_House_EventScript_Animal_Text_2:
# 49 "data/maps/BlueRestArea_House/scripts.pory"
	.string "Having fluffy paws keeps you warm in\n"
	.string "the cold, but they're not as comfy\l"
	.string "to wear when you go to the beach…$"
