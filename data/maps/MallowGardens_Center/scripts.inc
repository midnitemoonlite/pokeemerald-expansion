# 1 "data/maps/MallowGardens_Center/scripts.pory"

# 2 "data/maps/MallowGardens_Center/scripts.pory"
MallowGardens_Center_MapScripts::
# 3 "data/maps/MallowGardens_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, MallowGardens_Center_OnTransition
# 4 "data/maps/MallowGardens_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/MallowGardens_Center/scripts.pory"
	.byte 0
# 6 "data/maps/MallowGardens_Center/scripts.pory"

# 7 "data/maps/MallowGardens_Center/scripts.pory"
MallowGardens_Center_OnTransition:
# 8 "data/maps/MallowGardens_Center/scripts.pory"
	setrespawn HEAL_LOCATION_MALLOW_GARDENS
# 9 "data/maps/MallowGardens_Center/scripts.pory"
	end

MallowGardens_Center_EventScript_Nurse::
# 14 "data/maps/MallowGardens_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_MALLOW_GARDENS_NURSE
# 15 "data/maps/MallowGardens_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/MallowGardens_Center/scripts.pory"
	waitmessage
# 17 "data/maps/MallowGardens_Center/scripts.pory"
	waitbuttonpress
# 18 "data/maps/MallowGardens_Center/scripts.pory"
	release
	end


MallowGardens_Center_EventScript_WaddleDee::
# 24 "data/maps/MallowGardens_Center/scripts.pory"
	lock
# 25 "data/maps/MallowGardens_Center/scripts.pory"
	faceplayer
# 26 "data/maps/MallowGardens_Center/scripts.pory"
	msgbox MallowGardens_Center_EventScript_WaddleDee_Text_0
# 30 "data/maps/MallowGardens_Center/scripts.pory"
	release
	return


MallowGardens_Center_EventScript_Socialite::
# 35 "data/maps/MallowGardens_Center/scripts.pory"
	lock
# 36 "data/maps/MallowGardens_Center/scripts.pory"
	faceplayer
# 37 "data/maps/MallowGardens_Center/scripts.pory"
	msgbox MallowGardens_Center_EventScript_Socialite_Text_0
# 46 "data/maps/MallowGardens_Center/scripts.pory"
	release
	return


MallowGardens_Center_EventScript_Delivery::
# 51 "data/maps/MallowGardens_Center/scripts.pory"
	lock
# 52 "data/maps/MallowGardens_Center/scripts.pory"
	faceplayer
# 53 "data/maps/MallowGardens_Center/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHARP_BEAK, MallowGardens_Center_EventScript_Delivery_2
# 61 "data/maps/MallowGardens_Center/scripts.pory"
	msgbox MallowGardens_Center_EventScript_Delivery_Text_1
# 69 "data/maps/MallowGardens_Center/scripts.pory"
	release
	return

MallowGardens_Center_EventScript_Delivery_2:
# 55 "data/maps/MallowGardens_Center/scripts.pory"
	msgbox MallowGardens_Center_EventScript_Delivery_Text_0
# 56 "data/maps/MallowGardens_Center/scripts.pory"
	giveitem ITEM_SHARP_BEAK
# 57 "data/maps/MallowGardens_Center/scripts.pory"
	setflag FLAG_RECEIVED_SHARP_BEAK
# 58 "data/maps/MallowGardens_Center/scripts.pory"
	release
	end


MallowGardens_Center_EventScript_WaddleDee_Text_0:
# 26 "data/maps/MallowGardens_Center/scripts.pory"
	.string "I think the Great King's peace sign is\n"
	.string "so cool…\p"
	.string "Sigh… it must be nice to have fingers.$"

MallowGardens_Center_EventScript_Socialite_Text_0:
# 37 "data/maps/MallowGardens_Center/scripts.pory"
	.string "I wasn't really sure if I could see any\n"
	.string "sort of Waddle Dee becoming king…\l"
	.string "but now I'm convinced! There is one!\p"
	.string "He had strong Helpers, a kind heart, and\n"
	.string "a dashing blue bandana…\p"
	.string "I hope someone like him will win\n"
	.string "Dedede's Royal Royale.$"

MallowGardens_Center_EventScript_Delivery_Text_0:
# 55 "data/maps/MallowGardens_Center/scripts.pory"
	.string "Surprise delivery!$"

MallowGardens_Center_EventScript_Delivery_Text_1:
# 61 "data/maps/MallowGardens_Center/scripts.pory"
	.string "…what's that? You're wondering why you\n"
	.string "were surprised with this item?\p"
	.string "Well… it landed on me after a Cawcun\n"
	.string "flying overhead dropped it.\p"
	.string "I just wanted to get it off my hands…\n"
	.string "but maybe your Helpers can use it?$"
