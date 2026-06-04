# 1 "data/maps/IndigoRestArea/scripts.pory"

# 2 "data/maps/IndigoRestArea/scripts.pory"
IndigoRestArea_MapScripts::
# 3 "data/maps/IndigoRestArea/scripts.pory"
	.byte 0

IndigoRestArea_EventScript_SocialiteWaddleDee::
# 8 "data/maps/IndigoRestArea/scripts.pory"
	lock
# 9 "data/maps/IndigoRestArea/scripts.pory"
	faceplayer
# 10 "data/maps/IndigoRestArea/scripts.pory"
	msgbox IndigoRestArea_EventScript_SocialiteWaddleDee_Text_0
# 15 "data/maps/IndigoRestArea/scripts.pory"
	release
	return


IndigoRestArea_EventScript_ParasolWaddleDee::
# 20 "data/maps/IndigoRestArea/scripts.pory"
	lock
# 21 "data/maps/IndigoRestArea/scripts.pory"
	faceplayer
# 22 "data/maps/IndigoRestArea/scripts.pory"
	msgbox IndigoRestArea_EventScript_ParasolWaddleDee_Text_0
# 24 "data/maps/IndigoRestArea/scripts.pory"
	release
	return


IndigoRestArea_EventScript_Sign::
# 29 "data/maps/IndigoRestArea/scripts.pory"
	msgbox IndigoRestArea_EventScript_Sign_Text_0, MSGBOX_SIGN
# 31 "data/maps/IndigoRestArea/scripts.pory"
	closemessage
	return


IndigoRestArea_EventScript_SocialiteWaddleDee_Text_0:
# 10 "data/maps/IndigoRestArea/scripts.pory"
	.string "Oh my! You actually found your way\n"
	.string "through Fruity Forest?\p"
	.string "You must be exhausted! Luckily, this\n"
	.string "rest area is the perfect spot to relax!$"

IndigoRestArea_EventScript_ParasolWaddleDee_Text_0:
# 22 "data/maps/IndigoRestArea/scripts.pory"
	.string "Sniff sniff… ahhhhh!\n"
	.string "I love the smell of the salty breeze.$"

IndigoRestArea_EventScript_Sign_Text_0:
# 29 "data/maps/IndigoRestArea/scripts.pory"
	.string "INDIGO REST AREA\n"
	.string "Catch your breath by the beautiful sea.$"
