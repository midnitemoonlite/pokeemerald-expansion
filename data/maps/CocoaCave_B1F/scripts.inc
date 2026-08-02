# 1 "data/maps/CocoaCave_B1F/scripts.pory"

# 2 "data/maps/CocoaCave_B1F/scripts.pory"
CocoaCave_B1F_MapScripts::
# 3 "data/maps/CocoaCave_B1F/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, CocoaCave_B1F_OnTransition
# 4 "data/maps/CocoaCave_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/CocoaCave_B1F/scripts.pory"

# 6 "data/maps/CocoaCave_B1F/scripts.pory"
CocoaCave_B1F_OnTransition:
# 7 "data/maps/CocoaCave_B1F/scripts.pory"
	call CocoaCave_B1F_EventScript_SetFlashLevel
# 8 "data/maps/CocoaCave_B1F/scripts.pory"
	end
# 9 "data/maps/CocoaCave_B1F/scripts.pory"

# 10 "data/maps/CocoaCave_B1F/scripts.pory"
CocoaCave_B1F_EventScript_SetFlashLevel::
# 11 "data/maps/CocoaCave_B1F/scripts.pory"
	goto_if_eq VAR_COCOA_CAVE_B1F_STATE, 1, CocoaCave_B1F_EventScript_SetFlashLevelBright
# 12 "data/maps/CocoaCave_B1F/scripts.pory"
	goto CocoaCave_B1F_EventScript_SetFlashLevelDim
# 13 "data/maps/CocoaCave_B1F/scripts.pory"

# 14 "data/maps/CocoaCave_B1F/scripts.pory"
CocoaCave_B1F_EventScript_SetFlashLevelBright::
# 15 "data/maps/CocoaCave_B1F/scripts.pory"
	setflashlevel 1
# 16 "data/maps/CocoaCave_B1F/scripts.pory"
	return
# 17 "data/maps/CocoaCave_B1F/scripts.pory"

# 18 "data/maps/CocoaCave_B1F/scripts.pory"
CocoaCave_B1F_EventScript_SetFlashLevelDim::
# 19 "data/maps/CocoaCave_B1F/scripts.pory"
	setflashlevel 5
# 20 "data/maps/CocoaCave_B1F/scripts.pory"
	return

CocoaCave_B1F_EventScript_Lantern::
# 25 "data/maps/CocoaCave_B1F/scripts.pory"
	compare VAR_COCOA_CAVE_B1F_STATE, 1
	goto_if_eq CocoaCave_B1F_EventScript_Lantern_1
# 33 "data/maps/CocoaCave_B1F/scripts.pory"
	lockall
# 34 "data/maps/CocoaCave_B1F/scripts.pory"
	msgbox CocoaCave_B1F_EventScript_Lantern_Text_1, MSGBOX_YESNO
# 35 "data/maps/CocoaCave_B1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CocoaCave_B1F_EventScript_Lantern_5
CocoaCave_B1F_EventScript_Lantern_4:
# 46 "data/maps/CocoaCave_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CocoaCave_B1F_EventScript_Lantern_7
	return

CocoaCave_B1F_EventScript_Lantern_1:
# 27 "data/maps/CocoaCave_B1F/scripts.pory"
	lockall
# 28 "data/maps/CocoaCave_B1F/scripts.pory"
	msgbox CocoaCave_B1F_EventScript_Lantern_Text_0
# 29 "data/maps/CocoaCave_B1F/scripts.pory"
	releaseall
	return

CocoaCave_B1F_EventScript_Lantern_5:
# 37 "data/maps/CocoaCave_B1F/scripts.pory"
	msgbox CocoaCave_B1F_EventScript_Lantern_Text_2
# 38 "data/maps/CocoaCave_B1F/scripts.pory"
	closemessage
# 39 "data/maps/CocoaCave_B1F/scripts.pory"
	setvar VAR_COCOA_CAVE_B1F_STATE, 1
# 40 "data/maps/CocoaCave_B1F/scripts.pory"
	playse SE_SWITCH
# 41 "data/maps/CocoaCave_B1F/scripts.pory"
	animateflash 1
# 42 "data/maps/CocoaCave_B1F/scripts.pory"
	call CocoaCave_B1F_EventScript_SetFlashLevel
# 43 "data/maps/CocoaCave_B1F/scripts.pory"
	msgbox CocoaCave_B1F_EventScript_Lantern_Text_3
# 44 "data/maps/CocoaCave_B1F/scripts.pory"
	releaseall
	goto CocoaCave_B1F_EventScript_Lantern_4

CocoaCave_B1F_EventScript_Lantern_7:
# 48 "data/maps/CocoaCave_B1F/scripts.pory"
	releaseall
	return


CocoaCave_B1F_EventScript_TooDark::
# 55 "data/maps/CocoaCave_B1F/scripts.pory"
	lockall
# 56 "data/maps/CocoaCave_B1F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 57 "data/maps/CocoaCave_B1F/scripts.pory"
	msgbox CocoaCave_B1F_EventScript_TooDark_Text_0
# 59 "data/maps/CocoaCave_B1F/scripts.pory"
	closemessage
# 60 "data/maps/CocoaCave_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, CocoaCave_B1F_EventScript_TooDark_Movement_0
# 61 "data/maps/CocoaCave_B1F/scripts.pory"
	waitmovement
# 62 "data/maps/CocoaCave_B1F/scripts.pory"
	releaseall
	return


# 60 "data/maps/CocoaCave_B1F/scripts.pory"
CocoaCave_B1F_EventScript_TooDark_Movement_0:
# 60 "data/maps/CocoaCave_B1F/scripts.pory"
	walk_down
	step_end

CocoaCave_B1F_EventScript_Lantern_Text_0:
# 28 "data/maps/CocoaCave_B1F/scripts.pory"
	.string "The lantern's flame kindles brightly.$"

CocoaCave_B1F_EventScript_Lantern_Text_1:
# 34 "data/maps/CocoaCave_B1F/scripts.pory"
	.string "It's an unlit lantern. Light it?$"

CocoaCave_B1F_EventScript_Lantern_Text_2:
# 37 "data/maps/CocoaCave_B1F/scripts.pory"
	.string "You light the lantern!$"

CocoaCave_B1F_EventScript_Lantern_Text_3:
# 43 "data/maps/CocoaCave_B1F/scripts.pory"
	.string "The cave has gotten a lot brighter!$"

CocoaCave_B1F_EventScript_TooDark_Text_0:
# 57 "data/maps/CocoaCave_B1F/scripts.pory"
	.string "No light reaches the path ahead…\n"
	.string "It's too murky to travel any deeper.$"
