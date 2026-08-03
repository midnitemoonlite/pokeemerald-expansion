# 1 "data/maps/OrangeRestArea_Center/scripts.pory"

# 2 "data/maps/OrangeRestArea_Center/scripts.pory"
OrangeRestArea_Center_MapScripts::
# 3 "data/maps/OrangeRestArea_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, OrangeRestArea_Center_OnTransition
# 4 "data/maps/OrangeRestArea_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/OrangeRestArea_Center/scripts.pory"
	.byte 0
# 6 "data/maps/OrangeRestArea_Center/scripts.pory"

# 7 "data/maps/OrangeRestArea_Center/scripts.pory"
OrangeRestArea_Center_OnTransition:
# 8 "data/maps/OrangeRestArea_Center/scripts.pory"
	setrespawn HEAL_LOCATION_ORANGE_REST_AREA
# 9 "data/maps/OrangeRestArea_Center/scripts.pory"
	end

OrangeRestArea_Center_EventScript_Nurse::
# 14 "data/maps/OrangeRestArea_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_ORANGE_REST_AREA_NURSE
# 15 "data/maps/OrangeRestArea_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/OrangeRestArea_Center/scripts.pory"
	waitmessage
# 17 "data/maps/OrangeRestArea_Center/scripts.pory"
	waitbuttonpress
# 18 "data/maps/OrangeRestArea_Center/scripts.pory"
	release
	end


OrangeRestArea_Center_Grambly::
# 24 "data/maps/OrangeRestArea_Center/scripts.pory"
	lock
# 25 "data/maps/OrangeRestArea_Center/scripts.pory"
	faceplayer
# 26 "data/maps/OrangeRestArea_Center/scripts.pory"
	msgbox OrangeRestArea_Center_Grambly_Text_0
# 31 "data/maps/OrangeRestArea_Center/scripts.pory"
	release
	return


OrangeRestArea_Center_EventScript_FluffWaddleDee::
# 36 "data/maps/OrangeRestArea_Center/scripts.pory"
	lock
# 37 "data/maps/OrangeRestArea_Center/scripts.pory"
	faceplayer
# 38 "data/maps/OrangeRestArea_Center/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, OrangeRestArea_Center_EventScript_FluffWaddleDee_2
# 45 "data/maps/OrangeRestArea_Center/scripts.pory"
	msgbox OrangeRestArea_Center_EventScript_FluffWaddleDee_Text_1
# 48 "data/maps/OrangeRestArea_Center/scripts.pory"
	giveitem ITEM_TM25
# 49 "data/maps/OrangeRestArea_Center/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 50 "data/maps/OrangeRestArea_Center/scripts.pory"
	msgbox OrangeRestArea_Center_EventScript_FluffWaddleDee_Text_2
OrangeRestArea_Center_EventScript_FluffWaddleDee_1:
# 56 "data/maps/OrangeRestArea_Center/scripts.pory"
	release
	return

OrangeRestArea_Center_EventScript_FluffWaddleDee_2:
# 40 "data/maps/OrangeRestArea_Center/scripts.pory"
	msgbox OrangeRestArea_Center_EventScript_FluffWaddleDee_Text_0
	goto OrangeRestArea_Center_EventScript_FluffWaddleDee_1


OrangeRestArea_Center_Grambly_Text_0:
# 26 "data/maps/OrangeRestArea_Center/scripts.pory"
	.string "There are so many Helpers in this world…\n"
	.string "I can't wait to meet them all!\p"
	.string "I hope I can get Grambly as a Helper!\n"
	.string "That's my favorite!$"

OrangeRestArea_Center_EventScript_FluffWaddleDee_Text_0:
# 40 "data/maps/OrangeRestArea_Center/scripts.pory"
	.string "Besides, if I wanted to spit seeds, I'm\n"
	.string "better off eating a juicy watermelon!$"

OrangeRestArea_Center_EventScript_FluffWaddleDee_Text_1:
# 45 "data/maps/OrangeRestArea_Center/scripts.pory"
	.string "Hmmwo! M've gmf smmfmmf frr ym!\p"
	.string "Ptoo!$"

OrangeRestArea_Center_EventScript_FluffWaddleDee_Text_2:
# 50 "data/maps/OrangeRestArea_Center/scripts.pory"
	.string "Sorry about that! I was trying to teach\n"
	.string "myself Bullet Seed, but it didn't work…\p"
	.string "I can't learn it, and neither can my\n"
	.string "Helpers, but I hope it's useful for you!$"
