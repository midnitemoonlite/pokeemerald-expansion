# 1 "data/maps/CastleArena_Center/scripts.pory"

# 2 "data/maps/CastleArena_Center/scripts.pory"
CastleArena_Center_MapScripts::
# 3 "data/maps/CastleArena_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, CastleArena_Center_OnTransition
# 4 "data/maps/CastleArena_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/CastleArena_Center/scripts.pory"
	.byte 0
# 6 "data/maps/CastleArena_Center/scripts.pory"

# 7 "data/maps/CastleArena_Center/scripts.pory"
CastleArena_Center_OnTransition:
# 8 "data/maps/CastleArena_Center/scripts.pory"
	setrespawn HEAL_LOCATION_CASTLE_ARENA
# 9 "data/maps/CastleArena_Center/scripts.pory"
	end

CastleArena_Center_EventScript_Nurse::
# 14 "data/maps/CastleArena_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_CASTLE_ARENA_NURSE
# 15 "data/maps/CastleArena_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/CastleArena_Center/scripts.pory"
	waitmessage
# 17 "data/maps/CastleArena_Center/scripts.pory"
	waitbuttonpress
# 18 "data/maps/CastleArena_Center/scripts.pory"
	release
	end


CastleArena_Center_EventScript_WaddleDee::
# 24 "data/maps/CastleArena_Center/scripts.pory"
	lock
# 25 "data/maps/CastleArena_Center/scripts.pory"
	faceplayer
# 26 "data/maps/CastleArena_Center/scripts.pory"
	msgbox CastleArena_Center_EventScript_WaddleDee_Text_0
# 29 "data/maps/CastleArena_Center/scripts.pory"
	release
	return


CastleArena_Center_EventScript_Lass::
# 34 "data/maps/CastleArena_Center/scripts.pory"
	lock
# 35 "data/maps/CastleArena_Center/scripts.pory"
	faceplayer
# 36 "data/maps/CastleArena_Center/scripts.pory"
	msgbox CastleArena_Center_EventScript_Lass_Text_0
# 44 "data/maps/CastleArena_Center/scripts.pory"
	release
	return


CastleArena_Center_EventScript_WaddleDee_Text_0:
# 26 "data/maps/CastleArena_Center/scripts.pory"
	.string "The Royal Royale is fun and all, but how\n"
	.string "much longer do I have to keep playing\l"
	.string "before the lore drops start happening?$"

CastleArena_Center_EventScript_Lass_Text_0:
# 36 "data/maps/CastleArena_Center/scripts.pory"
	.string "Not having a preliminary bracket at\n"
	.string "this Arena is pretty tough…\p"
	.string "I like using the time inbetween to\n"
	.string "make last-minute preparations.\p"
	.string "Here, though? You need to make sure\n"
	.string "your Helpers are prepared for anything.$"
