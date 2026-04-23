# 1 "data/maps/WaddleDeeTown_Center/scripts.pory"

# 2 "data/maps/WaddleDeeTown_Center/scripts.pory"
WaddleDeeTown_Center_MapScripts::
# 3 "data/maps/WaddleDeeTown_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, WaddleDeeTown_Center_OnTransition
# 4 "data/maps/WaddleDeeTown_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/WaddleDeeTown_Center/scripts.pory"
	.byte 0
# 6 "data/maps/WaddleDeeTown_Center/scripts.pory"

# 7 "data/maps/WaddleDeeTown_Center/scripts.pory"
WaddleDeeTown_Center_OnTransition:
# 8 "data/maps/WaddleDeeTown_Center/scripts.pory"
	setrespawn HEAL_LOCATION_WADDLE_DEE_TOWN
# 9 "data/maps/WaddleDeeTown_Center/scripts.pory"
	end

WaddleDeeTown_Center_1F_EventScript_Nurse::
# 14 "data/maps/WaddleDeeTown_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_WADDLE_DEE_TOWN_NURSE
# 15 "data/maps/WaddleDeeTown_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/WaddleDeeTown_Center/scripts.pory"
	waitmessage
# 17 "data/maps/WaddleDeeTown_Center/scripts.pory"
	waitbuttonpress
# 18 "data/maps/WaddleDeeTown_Center/scripts.pory"
	release
	end


WaddleDeeTown_Center_1F_EventScript_Fisher::
# 24 "data/maps/WaddleDeeTown_Center/scripts.pory"
	lock
# 25 "data/maps/WaddleDeeTown_Center/scripts.pory"
	faceplayer
# 26 "data/maps/WaddleDeeTown_Center/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DEDEDE_DOLL, WaddleDeeTown_Center_1F_EventScript_Fisher_2
WaddleDeeTown_Center_1F_EventScript_Fisher_1:
# 42 "data/maps/WaddleDeeTown_Center/scripts.pory"
	msgbox WaddleDeeTown_Center_1F_EventScript_Fisher_Text_1
# 44 "data/maps/WaddleDeeTown_Center/scripts.pory"
	release
	return

WaddleDeeTown_Center_1F_EventScript_Fisher_2:
# 28 "data/maps/WaddleDeeTown_Center/scripts.pory"
	msgbox WaddleDeeTown_Center_1F_EventScript_Fisher_Text_0
# 39 "data/maps/WaddleDeeTown_Center/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 40 "data/maps/WaddleDeeTown_Center/scripts.pory"
	setflag FLAG_RECEIVED_DEDEDE_DOLL
	goto WaddleDeeTown_Center_1F_EventScript_Fisher_1


WaddleDeeTown_Center_1F_EventScript_Youngster::
# 49 "data/maps/WaddleDeeTown_Center/scripts.pory"
	lock
# 50 "data/maps/WaddleDeeTown_Center/scripts.pory"
	faceplayer
# 51 "data/maps/WaddleDeeTown_Center/scripts.pory"
	msgbox WaddleDeeTown_Center_1F_EventScript_Youngster_Text_0
# 53 "data/maps/WaddleDeeTown_Center/scripts.pory"
	release
	return


WaddleDeeTown_Center_1F_EventScript_WaddleDee::
# 58 "data/maps/WaddleDeeTown_Center/scripts.pory"
	lock
# 59 "data/maps/WaddleDeeTown_Center/scripts.pory"
	faceplayer
# 60 "data/maps/WaddleDeeTown_Center/scripts.pory"
	msgbox WaddleDeeTown_Center_1F_EventScript_WaddleDee_Text_0
# 66 "data/maps/WaddleDeeTown_Center/scripts.pory"
	release
	return


WaddleDeeTown_Center_1F_EventScript_Fisher_Text_0:
# 28 "data/maps/WaddleDeeTown_Center/scripts.pory"
	.string "Before Dedede's Royal Royale, the talk\n"
	.string "of the town was the park's pond.\p"
	.string "Supposedly there's a golden fish in\n"
	.string "its depths, waiting to be hooked…\p"
	.string "Now, just between you and me, a fish\n"
	.string "like that must be one tough catch.\p"
	.string "So it's always good to have a backup\n"
	.string "plan against a fearsome encounter.$"

WaddleDeeTown_Center_1F_EventScript_Fisher_Text_1:
# 42 "data/maps/WaddleDeeTown_Center/scripts.pory"
	.string "In a pinch, a Dedede Doll can help you\n"
	.string "escape from a wild Helper battle.$"

WaddleDeeTown_Center_1F_EventScript_Youngster_Text_0:
# 51 "data/maps/WaddleDeeTown_Center/scripts.pory"
	.string "Did you also see the Great King in town?\n"
	.string "Isn't he the coolest?$"

WaddleDeeTown_Center_1F_EventScript_WaddleDee_Text_0:
# 60 "data/maps/WaddleDeeTown_Center/scripts.pory"
	.string "When I woke up and saw Helpers all over\n"
	.string "the place, I was worried…\p"
	.string "But it seems the Great King has made a\n"
	.string "fun game out of their appearance.\l"
	.string "Just what I'd expect from him!$"
