# 1 "data/maps/ResortArena_Villa1/scripts.pory"

# 2 "data/maps/ResortArena_Villa1/scripts.pory"
ResortArena_Villa1_MapScripts::
# 3 "data/maps/ResortArena_Villa1/scripts.pory"
	.byte 0

ResortArena_Villa1_EventScript_Gentleman::
# 8 "data/maps/ResortArena_Villa1/scripts.pory"
	lock
# 9 "data/maps/ResortArena_Villa1/scripts.pory"
	faceplayer
# 10 "data/maps/ResortArena_Villa1/scripts.pory"
	msgbox ResortArena_Villa1_EventScript_Gentleman_Text_0
# 15 "data/maps/ResortArena_Villa1/scripts.pory"
	release
	return


ResortArena_Villa1_EventScript_Socialite::
# 20 "data/maps/ResortArena_Villa1/scripts.pory"
	lock
# 21 "data/maps/ResortArena_Villa1/scripts.pory"
	faceplayer
# 22 "data/maps/ResortArena_Villa1/scripts.pory"
	msgbox ResortArena_Villa1_EventScript_Socialite_Text_0
# 27 "data/maps/ResortArena_Villa1/scripts.pory"
	release
	return


ResortArena_Villa1_EventScript_Cafe::
# 32 "data/maps/ResortArena_Villa1/scripts.pory"
	lock
# 33 "data/maps/ResortArena_Villa1/scripts.pory"
	faceplayer
# 34 "data/maps/ResortArena_Villa1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ARM_THRUST_TM, ResortArena_Villa1_EventScript_Cafe_2
# 49 "data/maps/ResortArena_Villa1/scripts.pory"
	msgbox ResortArena_Villa1_EventScript_Cafe_Text_2
ResortArena_Villa1_EventScript_Cafe_1:
# 52 "data/maps/ResortArena_Villa1/scripts.pory"
	release
	return

ResortArena_Villa1_EventScript_Cafe_2:
# 36 "data/maps/ResortArena_Villa1/scripts.pory"
	msgbox ResortArena_Villa1_EventScript_Cafe_Text_0
# 40 "data/maps/ResortArena_Villa1/scripts.pory"
	giveitem ITEM_TM41
# 41 "data/maps/ResortArena_Villa1/scripts.pory"
	msgbox ResortArena_Villa1_EventScript_Cafe_Text_1
	goto ResortArena_Villa1_EventScript_Cafe_1


ResortArena_Villa1_EventScript_Gentleman_Text_0:
# 10 "data/maps/ResortArena_Villa1/scripts.pory"
	.string "Castles, resorts… does being king mean\n"
	.string "you get to own a lot of places?\p"
	.string "If you were only king for a day, you\n"
	.string "wouldn't really get to enjoy that…$"

ResortArena_Villa1_EventScript_Socialite_Text_0:
# 22 "data/maps/ResortArena_Villa1/scripts.pory"
	.string "This resort is nice, but my real dream is\n"
	.string "to visit the Popopo Islands sometime!\p"
	.string "I've heard the resort the Great King\n"
	.string "has there is even more excellent!$"

ResortArena_Villa1_EventScript_Cafe_Text_0:
# 36 "data/maps/ResortArena_Villa1/scripts.pory"
	.string "Hey, gimme a high-five!\p"
	.string "Yow! That was one mean slap!\n"
	.string "Here, why don't you take this?$"

ResortArena_Villa1_EventScript_Cafe_Text_1:
# 41 "data/maps/ResortArena_Villa1/scripts.pory"
	.string "Arm Thrust is a move where your Helper\n"
	.string "unleash a flurry of palm strikes!\p"
	.string "If you get lucky, it can hit up to\n"
	.string "five times!$"

ResortArena_Villa1_EventScript_Cafe_Text_2:
# 49 "data/maps/ResortArena_Villa1/scripts.pory"
	.string "I always make sure to greet everyone\n"
	.string "I meet with everything I've got!$"
