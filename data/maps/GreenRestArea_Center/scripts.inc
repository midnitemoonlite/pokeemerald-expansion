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

GreenRestArea_Center_EventScript_WaddleDeeNight::
# 14 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 15 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 16 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeeNight_Text_0
# 21 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_EventScript_WaddleDeeHopscotch::
# 26 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 27 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 28 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeeHopscotch_Text_0
# 35 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_EventScript_WaddleDeePC::
# 40 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 41 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 42 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeePC_Text_0
# 44 "data/maps/GreenRestArea_Center/scripts.pory"
	turnobject LOCALID_PC_WADDLE_DEE, DIR_NORTH
# 45 "data/maps/GreenRestArea_Center/scripts.pory"
	delay 15
# 46 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeePC_Text_1
# 49 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 50 "data/maps/GreenRestArea_Center/scripts.pory"
	delay 15
# 51 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeePC_Text_2
# 56 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_EventScript_WaddleDeeMap::
# 61 "data/maps/GreenRestArea_Center/scripts.pory"
	lock
# 62 "data/maps/GreenRestArea_Center/scripts.pory"
	faceplayer
# 63 "data/maps/GreenRestArea_Center/scripts.pory"
	msgbox GreenRestArea_Center_EventScript_WaddleDeeMap_Text_0
# 65 "data/maps/GreenRestArea_Center/scripts.pory"
	turnobject LOCALID_MAP_WADDLE_DEE, DIR_NORTH
# 66 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	return


GreenRestArea_Center_1F_EventScript_Nurse::
# 71 "data/maps/GreenRestArea_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_GREEN_REST_AREA_NURSE
# 72 "data/maps/GreenRestArea_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 73 "data/maps/GreenRestArea_Center/scripts.pory"
	waitmessage
# 74 "data/maps/GreenRestArea_Center/scripts.pory"
	waitbuttonpress
# 75 "data/maps/GreenRestArea_Center/scripts.pory"
	release
	end


GreenRestArea_Center_EventScript_WaddleDeeNight_Text_0:
# 16 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "I'm impressed how swiftly the king has\n"
	.string "gotten this Royal Royale running.\p"
	.string "But I shouldn't be surprised. He does\n"
	.string "work best late at night!$"

GreenRestArea_Center_EventScript_WaddleDeeHopscotch_Text_0:
# 28 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "If I were king… what would I do?\p"
	.string "Hmm… maybe I could order everyone\n"
	.string "to play hopscotch with me.\l"
	.string "That's my favorite game.\p"
	.string "Wow! Being king sounds fun!$"

GreenRestArea_Center_EventScript_WaddleDeePC_Text_0:
# 42 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "Kirby, have you seen that tall machine\n"
	.string "by the corner?$"

GreenRestArea_Center_EventScript_WaddleDeePC_Text_1:
# 46 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "Apparently, it's called a “PC”. There's a\n"
	.string "limit to how many Helpers you can take\l"
	.string "with you, so the rest go in there.$"

GreenRestArea_Center_EventScript_WaddleDeePC_Text_2:
# 51 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "It seems a little small, doesn't it?\n"
	.string "How do you fit Helpers inside a PC?\p"
	.string "Oh, do you think maybe there's a\n"
	.string "tunnel underneath it?$"

GreenRestArea_Center_EventScript_WaddleDeeMap_Text_0:
# 63 "data/maps/GreenRestArea_Center/scripts.pory"
	.string "I'm planning a trip to Ice Cream Island!\n"
	.string "Going to the beach sounds fun!$"
