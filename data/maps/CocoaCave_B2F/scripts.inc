# 1 "data/maps/CocoaCave_B2F/scripts.pory"

# 2 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_MapScripts::
# 3 "data/maps/CocoaCave_B2F/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, CocoaCave_B2F_OnTransition
# 4 "data/maps/CocoaCave_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/CocoaCave_B2F/scripts.pory"

# 6 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_OnTransition:
# 7 "data/maps/CocoaCave_B2F/scripts.pory"
	call CocoaCave_B2F_EventScript_SetFlashLevel
# 8 "data/maps/CocoaCave_B2F/scripts.pory"
	end
# 9 "data/maps/CocoaCave_B2F/scripts.pory"

# 10 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_SetFlashLevel::
# 11 "data/maps/CocoaCave_B2F/scripts.pory"
	goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 4, CocoaCave_B2F_EventScript_SetFlashLevelBright
# 12 "data/maps/CocoaCave_B2F/scripts.pory"
    goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 3, CocoaCave_B2F_EventScript_SetFlashLevel3
# 13 "data/maps/CocoaCave_B2F/scripts.pory"
    goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 2, CocoaCave_B2F_EventScript_SetFlashLevel2
# 14 "data/maps/CocoaCave_B2F/scripts.pory"
    goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 1, CocoaCave_B2F_EventScript_SetFlashLevel1
# 15 "data/maps/CocoaCave_B2F/scripts.pory"
	goto CocoaCave_B2F_EventScript_SetFlashLevelDim
# 16 "data/maps/CocoaCave_B2F/scripts.pory"

# 17 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_AnimateFlashLevel::
# 18 "data/maps/CocoaCave_B2F/scripts.pory"
    goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 4, CocoaCave_B2F_EventScript_AnimateFlash4
# 19 "data/maps/CocoaCave_B2F/scripts.pory"
    goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 3, CocoaCave_B2F_EventScript_AnimateFlash3
# 20 "data/maps/CocoaCave_B2F/scripts.pory"
    goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 2, CocoaCave_B2F_EventScript_AnimateFlash2
# 21 "data/maps/CocoaCave_B2F/scripts.pory"
    goto_if_eq VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 1, CocoaCave_B2F_EventScript_AnimateFlash1
# 22 "data/maps/CocoaCave_B2F/scripts.pory"

# 23 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_SetFlashLevelBright::
# 24 "data/maps/CocoaCave_B2F/scripts.pory"
	setflashlevel 1
# 25 "data/maps/CocoaCave_B2F/scripts.pory"
	return
# 26 "data/maps/CocoaCave_B2F/scripts.pory"

# 27 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_SetFlashLevel3::
# 28 "data/maps/CocoaCave_B2F/scripts.pory"
    setflashlevel 3
# 29 "data/maps/CocoaCave_B2F/scripts.pory"
    return
# 30 "data/maps/CocoaCave_B2F/scripts.pory"

# 31 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_SetFlashLevel2::
# 32 "data/maps/CocoaCave_B2F/scripts.pory"
    setflashlevel 4
# 33 "data/maps/CocoaCave_B2F/scripts.pory"
    return
# 34 "data/maps/CocoaCave_B2F/scripts.pory"

# 35 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_SetFlashLevel1::
# 36 "data/maps/CocoaCave_B2F/scripts.pory"
    setflashlevel 5
# 37 "data/maps/CocoaCave_B2F/scripts.pory"
    return
# 38 "data/maps/CocoaCave_B2F/scripts.pory"

# 39 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_SetFlashLevelDim::
# 40 "data/maps/CocoaCave_B2F/scripts.pory"
	setflashlevel 6
# 41 "data/maps/CocoaCave_B2F/scripts.pory"
	return
# 42 "data/maps/CocoaCave_B2F/scripts.pory"

# 43 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_AnimateFlash1::
# 44 "data/maps/CocoaCave_B2F/scripts.pory"
    playse SE_SWITCH
# 45 "data/maps/CocoaCave_B2F/scripts.pory"
    animateflash 5
# 46 "data/maps/CocoaCave_B2F/scripts.pory"
    call CocoaCave_B2F_EventScript_SetFlashLevel
# 47 "data/maps/CocoaCave_B2F/scripts.pory"
    return
# 48 "data/maps/CocoaCave_B2F/scripts.pory"

# 49 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_AnimateFlash2::
# 50 "data/maps/CocoaCave_B2F/scripts.pory"
    playse SE_SWITCH
# 51 "data/maps/CocoaCave_B2F/scripts.pory"
    animateflash 4
# 52 "data/maps/CocoaCave_B2F/scripts.pory"
    call CocoaCave_B2F_EventScript_SetFlashLevel
# 53 "data/maps/CocoaCave_B2F/scripts.pory"
    return
# 54 "data/maps/CocoaCave_B2F/scripts.pory"

# 55 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_AnimateFlash3::
# 56 "data/maps/CocoaCave_B2F/scripts.pory"
    playse SE_SWITCH
# 57 "data/maps/CocoaCave_B2F/scripts.pory"
    animateflash 3
# 58 "data/maps/CocoaCave_B2F/scripts.pory"
    call CocoaCave_B2F_EventScript_SetFlashLevel
# 59 "data/maps/CocoaCave_B2F/scripts.pory"
    return
# 60 "data/maps/CocoaCave_B2F/scripts.pory"

# 61 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_AnimateFlash4::
# 62 "data/maps/CocoaCave_B2F/scripts.pory"
    playse SE_SWITCH
# 63 "data/maps/CocoaCave_B2F/scripts.pory"
    animateflash 1
# 64 "data/maps/CocoaCave_B2F/scripts.pory"
    call CocoaCave_B2F_EventScript_SetFlashLevel
# 65 "data/maps/CocoaCave_B2F/scripts.pory"
    return

CocoaCave_B2F_EventScript_TopLeftLantern::
# 71 "data/maps/CocoaCave_B2F/scripts.pory"
	goto_if_set FLAG_COCOA_CAVE_B2F_TOP_LEFT_LANTERN, CocoaCave_B2F_EventScript_TopLeftLantern_1
# 79 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 80 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_1, MSGBOX_YESNO
# 81 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CocoaCave_B2F_EventScript_TopLeftLantern_5
CocoaCave_B2F_EventScript_TopLeftLantern_4:
# 98 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CocoaCave_B2F_EventScript_TopLeftLantern_7
	return

CocoaCave_B2F_EventScript_TopLeftLantern_1:
# 73 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 74 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_0
# 75 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_TopLeftLantern_5:
# 83 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_2
# 84 "data/maps/CocoaCave_B2F/scripts.pory"
	closemessage
# 85 "data/maps/CocoaCave_B2F/scripts.pory"
	setflag FLAG_COCOA_CAVE_B2F_TOP_LEFT_LANTERN
# 86 "data/maps/CocoaCave_B2F/scripts.pory"
	addvar VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 1
# 87 "data/maps/CocoaCave_B2F/scripts.pory"
	call CocoaCave_B2F_EventScript_AnimateFlashLevel
# 88 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 4
	goto_if_eq CocoaCave_B2F_EventScript_TopLeftLantern_10
# 94 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LittleBrighter
CocoaCave_B2F_EventScript_TopLeftLantern_9:
# 96 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	goto CocoaCave_B2F_EventScript_TopLeftLantern_4

CocoaCave_B2F_EventScript_TopLeftLantern_7:
# 100 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_TopLeftLantern_10:
# 90 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LotBrighter
	goto CocoaCave_B2F_EventScript_TopLeftLantern_9


CocoaCave_B2F_EventScript_BottomLeftLantern::
# 107 "data/maps/CocoaCave_B2F/scripts.pory"
	goto_if_set FLAG_COCOA_CAVE_B2F_BOTTOM_LEFT_LANTERN, CocoaCave_B2F_EventScript_BottomLeftLantern_1
# 115 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 116 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_1, MSGBOX_YESNO
# 117 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CocoaCave_B2F_EventScript_BottomLeftLantern_5
CocoaCave_B2F_EventScript_BottomLeftLantern_4:
# 134 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CocoaCave_B2F_EventScript_BottomLeftLantern_7
	return

CocoaCave_B2F_EventScript_BottomLeftLantern_1:
# 109 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 110 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_0
# 111 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_BottomLeftLantern_5:
# 119 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_2
# 120 "data/maps/CocoaCave_B2F/scripts.pory"
	closemessage
# 121 "data/maps/CocoaCave_B2F/scripts.pory"
	setflag FLAG_COCOA_CAVE_B2F_BOTTOM_LEFT_LANTERN
# 122 "data/maps/CocoaCave_B2F/scripts.pory"
	addvar VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 1
# 123 "data/maps/CocoaCave_B2F/scripts.pory"
	call CocoaCave_B2F_EventScript_AnimateFlashLevel
# 124 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 4
	goto_if_eq CocoaCave_B2F_EventScript_BottomLeftLantern_10
# 130 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LittleBrighter
CocoaCave_B2F_EventScript_BottomLeftLantern_9:
# 132 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	goto CocoaCave_B2F_EventScript_BottomLeftLantern_4

CocoaCave_B2F_EventScript_BottomLeftLantern_7:
# 136 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_BottomLeftLantern_10:
# 126 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LotBrighter
	goto CocoaCave_B2F_EventScript_BottomLeftLantern_9


CocoaCave_B2F_EventScript_TopRightLantern::
# 143 "data/maps/CocoaCave_B2F/scripts.pory"
	goto_if_set FLAG_COCOA_CAVE_B2F_TOP_RIGHT_LANTERN, CocoaCave_B2F_EventScript_TopRightLantern_1
# 151 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 152 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_1, MSGBOX_YESNO
# 153 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CocoaCave_B2F_EventScript_TopRightLantern_5
CocoaCave_B2F_EventScript_TopRightLantern_4:
# 170 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CocoaCave_B2F_EventScript_TopRightLantern_7
	return

CocoaCave_B2F_EventScript_TopRightLantern_1:
# 145 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 146 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_0
# 147 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_TopRightLantern_5:
# 155 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_2
# 156 "data/maps/CocoaCave_B2F/scripts.pory"
	closemessage
# 157 "data/maps/CocoaCave_B2F/scripts.pory"
	setflag FLAG_COCOA_CAVE_B2F_TOP_RIGHT_LANTERN
# 158 "data/maps/CocoaCave_B2F/scripts.pory"
	addvar VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 1
# 159 "data/maps/CocoaCave_B2F/scripts.pory"
	call CocoaCave_B2F_EventScript_AnimateFlashLevel
# 160 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 4
	goto_if_eq CocoaCave_B2F_EventScript_TopRightLantern_10
# 166 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LittleBrighter
CocoaCave_B2F_EventScript_TopRightLantern_9:
# 168 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	goto CocoaCave_B2F_EventScript_TopRightLantern_4

CocoaCave_B2F_EventScript_TopRightLantern_7:
# 172 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_TopRightLantern_10:
# 162 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LotBrighter
	goto CocoaCave_B2F_EventScript_TopRightLantern_9


CocoaCave_B2F_EventScript_CenterLantern::
# 179 "data/maps/CocoaCave_B2F/scripts.pory"
	goto_if_set FLAG_COCOA_CAVE_B2F_CENTER_LANTERN, CocoaCave_B2F_EventScript_CenterLantern_1
# 187 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 188 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_1, MSGBOX_YESNO
# 189 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CocoaCave_B2F_EventScript_CenterLantern_5
CocoaCave_B2F_EventScript_CenterLantern_4:
# 206 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CocoaCave_B2F_EventScript_CenterLantern_7
	return

CocoaCave_B2F_EventScript_CenterLantern_1:
# 181 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 182 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_0
# 183 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_CenterLantern_5:
# 191 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TopLeftLantern_Text_2
# 192 "data/maps/CocoaCave_B2F/scripts.pory"
	closemessage
# 193 "data/maps/CocoaCave_B2F/scripts.pory"
	setflag FLAG_COCOA_CAVE_B2F_CENTER_LANTERN
# 194 "data/maps/CocoaCave_B2F/scripts.pory"
	addvar VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 1
# 195 "data/maps/CocoaCave_B2F/scripts.pory"
	call CocoaCave_B2F_EventScript_AnimateFlashLevel
# 196 "data/maps/CocoaCave_B2F/scripts.pory"
	compare VAR_COCOA_CAVE_B2F_LANTERNS_LIT, 4
	goto_if_eq CocoaCave_B2F_EventScript_CenterLantern_10
# 202 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LittleBrighter
CocoaCave_B2F_EventScript_CenterLantern_9:
# 204 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	goto CocoaCave_B2F_EventScript_CenterLantern_4

CocoaCave_B2F_EventScript_CenterLantern_7:
# 208 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return

CocoaCave_B2F_EventScript_CenterLantern_10:
# 198 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_Text_LotBrighter
	goto CocoaCave_B2F_EventScript_CenterLantern_9


CocoaCave_B2F_EventScript_TooDark::
# 215 "data/maps/CocoaCave_B2F/scripts.pory"
	lockall
# 216 "data/maps/CocoaCave_B2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 217 "data/maps/CocoaCave_B2F/scripts.pory"
	msgbox CocoaCave_B2F_EventScript_TooDark_Text_0
# 219 "data/maps/CocoaCave_B2F/scripts.pory"
	closemessage
# 220 "data/maps/CocoaCave_B2F/scripts.pory"
	applymovement LOCALID_PLAYER, CocoaCave_B2F_EventScript_TooDark_Movement_0
# 221 "data/maps/CocoaCave_B2F/scripts.pory"
	waitmovement
# 222 "data/maps/CocoaCave_B2F/scripts.pory"
	releaseall
	return


# 220 "data/maps/CocoaCave_B2F/scripts.pory"
CocoaCave_B2F_EventScript_TooDark_Movement_0:
# 220 "data/maps/CocoaCave_B2F/scripts.pory"
	walk_down
	step_end

CocoaCave_B2F_EventScript_TopLeftLantern_Text_0:
# 74 "data/maps/CocoaCave_B2F/scripts.pory"
	.string "The lantern's flame kindles brightly.$"

CocoaCave_B2F_EventScript_TopLeftLantern_Text_1:
# 80 "data/maps/CocoaCave_B2F/scripts.pory"
	.string "It's an unlit lantern. Light it?$"

CocoaCave_B2F_EventScript_TopLeftLantern_Text_2:
# 83 "data/maps/CocoaCave_B2F/scripts.pory"
	.string "You light the lantern!$"

CocoaCave_B2F_EventScript_TooDark_Text_0:
# 217 "data/maps/CocoaCave_B2F/scripts.pory"
	.string "No light reaches the path ahead…\n"
	.string "It's too murky to travel any deeper.$"

CocoaCave_B2F_Text_LittleBrighter::
# 225 "data/maps/CocoaCave_B2F/scripts.pory"
	.string "The cave has gotten a little brighter.$"

CocoaCave_B2F_Text_LotBrighter::
# 230 "data/maps/CocoaCave_B2F/scripts.pory"
	.string "The cave has gotten a lot brighter!$"
