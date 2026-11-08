# 1 "data/maps/BlueRestArea_Center/scripts.pory"

# 2 "data/maps/BlueRestArea_Center/scripts.pory"
BlueRestArea_Center_MapScripts::
# 3 "data/maps/BlueRestArea_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, CastleArena_Center_OnTransition
# 4 "data/maps/BlueRestArea_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/BlueRestArea_Center/scripts.pory"
	.byte 0
# 6 "data/maps/BlueRestArea_Center/scripts.pory"

# 7 "data/maps/BlueRestArea_Center/scripts.pory"
BlueRestArea_Center_OnTransition:
# 8 "data/maps/BlueRestArea_Center/scripts.pory"
	setrespawn HEAL_LOCATION_BLUE_REST_AREA
# 9 "data/maps/BlueRestArea_Center/scripts.pory"
	end

BlueRestArea_Center_EventScript_Nurse::
# 14 "data/maps/BlueRestArea_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_BLUE_REST_AREA_NURSE
# 15 "data/maps/BlueRestArea_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/BlueRestArea_Center/scripts.pory"
	waitmessage
# 17 "data/maps/BlueRestArea_Center/scripts.pory"
	waitbuttonpress
# 18 "data/maps/BlueRestArea_Center/scripts.pory"
	release
	end


BlueRestArea_Center_EventScript_FatMan::
# 24 "data/maps/BlueRestArea_Center/scripts.pory"
	lock
# 25 "data/maps/BlueRestArea_Center/scripts.pory"
	faceplayer
# 26 "data/maps/BlueRestArea_Center/scripts.pory"
	msgbox BlueRestArea_Center_EventScript_FatMan_Text_0
# 30 "data/maps/BlueRestArea_Center/scripts.pory"
	release
	return


BlueRestArea_Center_EventScript_FatMan_Text_0:
# 26 "data/maps/BlueRestArea_Center/scripts.pory"
	.string "A game can be disassembled and put\n"
	.string "back together to make something new…\p"
	.string "The power of science is staggering!$"
