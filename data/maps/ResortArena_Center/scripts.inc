# 1 "data/maps/ResortArena_Center/scripts.pory"

# 2 "data/maps/ResortArena_Center/scripts.pory"
ResortArena_Center_MapScripts::
# 3 "data/maps/ResortArena_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, ResortArena_Center_OnTransition
# 4 "data/maps/ResortArena_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ResortArena_Center/scripts.pory"
	.byte 0
# 6 "data/maps/ResortArena_Center/scripts.pory"

# 7 "data/maps/ResortArena_Center/scripts.pory"
ResortArena_Center_OnTransition:
# 8 "data/maps/ResortArena_Center/scripts.pory"
	setrespawn HEAL_LOCATION_RESORT_ARENA
# 9 "data/maps/ResortArena_Center/scripts.pory"
	end

ResortArena_Center_EventScript_Nurse::
# 14 "data/maps/ResortArena_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_RESORT_ARENA_NURSE
# 15 "data/maps/ResortArena_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/ResortArena_Center/scripts.pory"
	waitmessage
# 17 "data/maps/ResortArena_Center/scripts.pory"
	waitbuttonpress
# 18 "data/maps/ResortArena_Center/scripts.pory"
	release
	end


ResortArena_Center_EventScript_RedSqueaker::
# 24 "data/maps/ResortArena_Center/scripts.pory"
	lock
# 25 "data/maps/ResortArena_Center/scripts.pory"
	faceplayer
# 26 "data/maps/ResortArena_Center/scripts.pory"
	msgbox ResortArena_Center_EventScript_RedSqueaker_Text_0
# 32 "data/maps/ResortArena_Center/scripts.pory"
	release
	return


ResortArena_Center_EventScript_RedSqueaker_Text_0:
# 26 "data/maps/ResortArena_Center/scripts.pory"
	.string "Squeak! I'm trying to avoid being seen\n"
	.string "by scouting the item shop from here…\p"
	.string "When someone goes in to clear their bag\n"
	.string "of a bunch of valuables, I'll go in and\l"
	.string "swipe them before anyone notices!$"
