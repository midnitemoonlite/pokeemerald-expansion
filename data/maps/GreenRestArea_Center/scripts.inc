# 1 "data/maps/GreenRestArea_Center/scripts.pory"

# 2 "data/maps/GreenRestArea_Center/scripts.pory"
GreenRestArea_Center_MapScripts::
# 3 "data/maps/GreenRestArea_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, GreenRestArea_Center_OnTransition
# 4 "data/maps/GreenRestArea_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/GreenRestArea_Center/scripts.pory"
	.byte 0
# 6 "data/maps/GreenRestArea_Center/scripts.pory"

# 7 "data/maps/GreenRestArea_Center/scripts.pory"
GreenRestArea_Center_OnTransition:
# 8 "data/maps/GreenRestArea_Center/scripts.pory"
	setrespawn HEAL_LOCATION_GREEN_REST_AREA
# 9 "data/maps/GreenRestArea_Center/scripts.pory"
	end
# 10 "data/maps/GreenRestArea_Center/scripts.pory"

# 11 "data/maps/GreenRestArea_Center/scripts.pory"
Common_Text_LookCloserAtMap:
# 12 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "Kirby took a closer look at the\n"
# 13 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "map of Dream Land.$"

GreenRestArea_Center_EventScript_WaddleDeeNight::
# 18 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 19 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 20 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeeNight_Text_0
# 25 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_EventScript_WaddleDeeHopscotch::
# 30 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 31 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 32 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeeHopscotch_Text_0
# 39 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_EventScript_WaddleDeePC::
# 44 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 45 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 46 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeePC_Text_0
# 58 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_EventScript_WaddleDeeMap::
# 63 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 64 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 65 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeeMap_Text_0
# 67 "data/maps/GreenRestArea_Center/scripts.pory"
	turnobject LOCALID_MAP_WADDLE_DEE, DIR_NORTH
# 68 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_1F_EventScript_Nurse::
# 73 "data/maps/GreenRestArea_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_GREEN_REST_AREA_NURSE
# 74 "data/maps/GreenRestArea_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 75 "data/maps/GreenRestArea_Center/scripts.pory"
	waitmessage
# 76 "data/maps/GreenRestArea_Center/scripts.pory"
	waitbuttonpress
# 77 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	end


GreenRestArea_Center_EventScript_WaddleDeeNight_Text_0:
# 20 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "I'm impressed how swiftly the king has\n"
	.string "gotten his Royal Royale running.\p"
	.string "But I shouldn't be surprised. He does\n"
	.string "work best late at night!$"

GreenRestArea_Center_EventScript_WaddleDeeHopscotch_Text_0:
# 32 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "If I were king… what would I do?\p"
	.string "Hmm… maybe I could order everyone\n"
	.string "to play hopscotch with me.\l"
	.string "That's my favorite game.\p"
	.string "Wow! Being king sounds fun!$"

GreenRestArea_Center_EventScript_WaddleDeePC_Text_0:
# 46 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "Kirby, have you seen that tall machine\n"
	.string "by the corner?\p"
	.string "Apparently, it's called a “PC”. There's a\n"
	.string "limit to how many Helpers you can take\l"
	.string "with you, so the rest go in there.\p"
	.string "I've never seen anything like it. I wish\n"
	.string "I could take it apart to understand it.\p"
	.string "But that would certainly disqualify me\n"
	.string "from Dedede's Royal Royale. Sigh…$"

GreenRestArea_Center_EventScript_WaddleDeeMap_Text_0:
# 65 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "I'm planning a trip to Ice Cream Island!\n"
	.string "Going to the beach sounds fun!$"
