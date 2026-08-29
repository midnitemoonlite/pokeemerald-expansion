# 1 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 2 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_MapScripts::
# 3 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, BattleshipHalberd_Reactor_OnLoad
# 4 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.byte 0
# 5 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 6 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_OnLoad:
# 7 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    call_if_set FLAG_BATTLESHIP_HALBERD_REACTOR_LEFT_GATE, BattleshipHalberd_Reactor_EventScript_RemoveLeftGate
# 8 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    call_if_set FLAG_BATTLESHIP_HALBERD_REACTOR_MIDDLE_GATE, BattleshipHalberd_Reactor_EventScript_RemoveMiddleGate
# 9 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    call_if_set FLAG_BATTLESHIP_HALBERD_REACTOR_RIGHT_GATE, BattleshipHalberd_Reactor_EventScript_RemoveRightGate
# 10 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 11 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 12 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 13 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 14 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_UpdateBarriers::
# 15 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, BattleshipHalberd_Reactor_EventScript_SetAltBarriers
# 16 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 17 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 18 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_SetAltBarriers::
# 19 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 6, 15, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 20 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 15, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 21 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 16, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 22 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 16, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 23 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 9, 15, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 24 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 10, 15, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 25 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 9, 16, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 26 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 10, 16, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 27 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 15, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 28 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 15, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 29 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 16, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 30 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 16, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 31 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 16, METATILE_MauvilleGym_GreenBeamV1_On, TRUE
# 32 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 17, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 33 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 16, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 34 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 17, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 35 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 16, METATILE_MauvilleGym_GreenBeamV1_On, TRUE
# 36 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 17, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 37 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 16, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 38 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 17, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 39 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 18, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 40 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 18, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 41 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 19, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 42 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 19, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 43 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 9, 18, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 44 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 10, 18, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 45 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 9, 19, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 46 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 10, 19, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 47 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 18, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 48 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 18, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 49 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 19, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 50 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 19, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 51 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 19, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 52 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 20, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 53 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 19, METATILE_MauvilleGym_GreenBeamV1_On, TRUE
# 54 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 20, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 55 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 19, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 56 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 20, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 57 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 19, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 58 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 20, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 59 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 21, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 60 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 21, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 61 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 22, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 62 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 22, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 63 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 9, 21, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 64 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 10, 21, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 65 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 9, 22, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 66 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 10, 22, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 67 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 21, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 68 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 21, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 69 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 22, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 70 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 22, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 71 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 22, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 72 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 23, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 73 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 22, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 74 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 23, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 75 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 22, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 76 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 23, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 77 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 22, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 78 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 23, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 79 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 3, 24, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 80 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 4, 24, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 81 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 3, 25, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 82 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 4, 25, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 83 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 24, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 84 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 24, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 85 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 25, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 86 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 25, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 87 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 24, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 88 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 24, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 89 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 25, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 90 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 25, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 91 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 15, 24, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 92 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 16, 24, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 93 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 15, 25, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 94 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 16, 25, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 95 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 2, 25, METATILE_MauvilleGym_GreenBeamV1_On, TRUE
# 96 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 2, 26, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 97 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 25, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 98 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 26, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 99 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 25, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 100 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 8, 26, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 101 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 25, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 102 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 11, 26, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 103 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 25, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 104 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 26, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 105 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 17, 25, METATILE_MauvilleGym_GreenBeamV1_On, TRUE
# 106 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 17, 26, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 107 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 3, 27, METATILE_MauvilleGym_RedBeamH1_Off, FALSE
# 108 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 4, 27, METATILE_MauvilleGym_RedBeamH2_Off, FALSE
# 109 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 3, 28, METATILE_MauvilleGym_RedBeamH3_Off, FALSE
# 110 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 4, 28, METATILE_MauvilleGym_RedBeamH4_Off, FALSE
# 111 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 27, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 112 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 27, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 113 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 6, 28, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 114 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 7, 28, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 115 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 27, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 116 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 27, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 117 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 12, 28, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 118 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 13, 28, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 119 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 15, 27, METATILE_MauvilleGym_GreenBeamH1_On, FALSE
# 120 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 16, 27, METATILE_MauvilleGym_GreenBeamH2_On, FALSE
# 121 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 15, 28, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 122 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 16, 28, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 123 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 2, 28, METATILE_MauvilleGym_GreenBeamV1_On, TRUE
# 124 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 2, 29, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 125 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 28, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 126 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 5, 29, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 127 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 28, METATILE_MauvilleGym_GreenBeamV1_On, TRUE
# 128 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 14, 29, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 129 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 17, 28, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 130 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    setmetatile 17, 29, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 131 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    end
# 132 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 133 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch1Pressed::
# 134 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 0
# 135 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special MauvilleGymPressSwitch
# 136 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_UpdateBarriers
# 137 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 138 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 139 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch2Pressed::
# 140 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 1
# 141 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special MauvilleGymPressSwitch
# 142 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_UpdateBarriers
# 143 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 144 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 145 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch3Pressed::
# 146 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 2
# 147 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special MauvilleGymPressSwitch
# 148 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_UpdateBarriers
# 149 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 150 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 151 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch4Pressed::
# 152 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 3
# 153 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special MauvilleGymPressSwitch
# 154 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_UpdateBarriers
# 155 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 156 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 157 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch5Pressed::
# 158 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 4
# 159 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special MauvilleGymPressSwitch
# 160 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_UpdateBarriers
# 161 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 162 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 163 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch1::
# 164 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 165 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, BattleshipHalberd_Reactor_EventScript_SwitchDoNothing
# 166 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 167 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 0
# 168 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_PressFloorSwitch
# 169 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 170 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 171 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch2::
# 172 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 173 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, BattleshipHalberd_Reactor_EventScript_SwitchDoNothing
# 174 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 175 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 1
# 176 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_PressFloorSwitch
# 177 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 178 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 179 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch3::
# 180 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 181 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, BattleshipHalberd_Reactor_EventScript_SwitchDoNothing
# 182 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 183 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 2
# 184 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_PressFloorSwitch
# 185 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 186 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 187 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch4::
# 188 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 189 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, BattleshipHalberd_Reactor_EventScript_SwitchDoNothing
# 190 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 191 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 3
# 192 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_PressFloorSwitch
# 193 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 194 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 195 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_Switch5::
# 196 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 197 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 5, BattleshipHalberd_Reactor_EventScript_SwitchDoNothing
# 198 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 5
# 199 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 4
# 200 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto BattleshipHalberd_Reactor_EventScript_PressFloorSwitch
# 201 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 202 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 203 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_PressFloorSwitch::
# 204 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
    special MauvilleGymSetDefaultBarriers
# 205 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special MauvilleGymPressSwitch
# 206 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special DrawWholeMapView
# 207 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playse SE_UNLOCK
# 208 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, BattleshipHalberd_Reactor_EventScript_ClearBarriersAltState
# 209 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, BattleshipHalberd_Reactor_EventScript_SetBarriersAltState
# 210 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
# 211 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 212 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 213 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_SetBarriersAltState::
# 214 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 215 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
# 216 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 217 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 218 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_ClearBarriersAltState::
# 219 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 220 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
# 221 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end
# 222 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 223 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_EventScript_SwitchDoNothing::
# 224 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
# 225 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	end

BattleshipHalberd_Reactor_EventScript_Wheelie::
# 230 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lock
# 231 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	faceplayer
# 232 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playmoncry SPECIES_WHEELIE_BIKE, CRY_MODE_NORMAL
# 233 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_Wheelie_Text_0, MSGBOX_YESNO
# 238 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_1
# 276 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	release
	return

BattleshipHalberd_Reactor_EventScript_Wheelie_1:
# 240 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WHEELIE_BIKE
# 241 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	givemon SPECIES_WHEELIE_BIKE, 24
# 242 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_5
BattleshipHalberd_Reactor_EventScript_Wheelie_4:
# 256 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_8
BattleshipHalberd_Reactor_EventScript_Wheelie_7:
# 270 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setflag FLAG_OBTAINED_WHEELIE
# 271 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	removeobject LOCALID_WHEELIE_BIKE
# 272 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	release
	return

BattleshipHalberd_Reactor_EventScript_Wheelie_5:
# 244 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playfanfare MUS_EVOLVED
# 245 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	message BattleshipHalberd_Reactor_EventScript_Wheelie_Text_1
# 246 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitmessage
# 247 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitfanfare
# 248 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_Wheelie_Text_2, MSGBOX_YESNO
# 250 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_10
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_4

BattleshipHalberd_Reactor_EventScript_Wheelie_8:
# 258 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playfanfare MUS_EVOLVED
# 259 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	message BattleshipHalberd_Reactor_EventScript_Wheelie_Text_1
# 260 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitmessage
# 261 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitfanfare
# 262 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_Wheelie_Text_2, MSGBOX_YESNO
# 264 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_13
BattleshipHalberd_Reactor_EventScript_Wheelie_12:
# 268 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_7

BattleshipHalberd_Reactor_EventScript_Wheelie_10:
# 252 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 253 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_4

BattleshipHalberd_Reactor_EventScript_Wheelie_13:
# 266 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_12


BattleshipHalberd_Reactor_EventScript_Trainer::
# 282 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, BattleshipHalberd_Reactor_Text_TrainerIntro, BattleshipHalberd_Reactor_Text_TrainerDefeated
# 283 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_Text_TrainerPost, MSGBOX_AUTOCLOSE
	return


BattleshipHalberd_Reactor_EventScript_SailorWaddleDee::
# 320 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lock
# 321 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	faceplayer
# 322 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_0
# 335 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	closemessage
# 336 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_SAILOR_QUEST, 1
	goto_if_eq BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_2
BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_1:
# 360 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	release
	return

BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_2:
# 338 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playse SE_PIN
# 339 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	applymovement LOCALID_SAILOR_REACTOR, Common_Movement_QuestionMark
# 340 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitmovement
# 341 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitse
# 342 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_1
# 348 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	closemessage
# 349 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	delay 90
# 350 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_2
# 352 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	giveitem_msg BattleshipHalberd_Reactor_Text_ReceivedLetter, ITEM_LETTER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 353 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_3
# 358 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_SAILOR_QUEST, 2
	goto BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_1


BattleshipHalberd_Reactor_EventScript_MiddleSwitch::
# 365 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 366 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_unset FLAG_BATTLESHIP_HALBERD_REACTOR_MIDDLE_GATE, BattleshipHalberd_Reactor_EventScript_MiddleSwitch_1
# 397 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_3
# 398 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return

BattleshipHalberd_Reactor_EventScript_MiddleSwitch_1:
# 368 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_0, MSGBOX_YESNO
# 369 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_MiddleSwitch_4
# 392 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return

BattleshipHalberd_Reactor_EventScript_MiddleSwitch_4:
# 371 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_1
# 372 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	closemessage
# 373 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playse SE_BANG
# 374 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 2
# 375 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8005, 0
# 376 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8006, 2
# 377 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8007, 3
# 378 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special ShakeCamera
# 379 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 9, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 380 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 10, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 381 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 9, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 382 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 10, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 383 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special DrawWholeMapView
# 384 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitse
# 385 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	delay 12
# 386 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_2
# 387 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setflag FLAG_BATTLESHIP_HALBERD_REACTOR_MIDDLE_GATE
# 388 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return


BattleshipHalberd_Reactor_EventScript_RemoveMiddleGate::
# 404 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 9, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 405 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 10, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 406 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 9, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 407 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 10, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
	return


BattleshipHalberd_Reactor_EventScript_LeftSwitch::
# 413 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_unset FLAG_BATTLESHIP_HALBERD_REACTOR_LEFT_GATE, BattleshipHalberd_Reactor_EventScript_LeftSwitch_1
# 445 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_3
# 446 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return

BattleshipHalberd_Reactor_EventScript_LeftSwitch_1:
# 415 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 416 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_0, MSGBOX_YESNO
# 417 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_LeftSwitch_4
# 440 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return

BattleshipHalberd_Reactor_EventScript_LeftSwitch_4:
# 419 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_1
# 420 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	closemessage
# 421 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playse SE_BANG
# 422 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 2
# 423 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8005, 0
# 424 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8006, 2
# 425 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8007, 3
# 426 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special ShakeCamera
# 427 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 428 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 429 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 2, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 430 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 431 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special DrawWholeMapView
# 432 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitse
# 433 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	delay 12
# 434 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_2
# 435 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setflag FLAG_BATTLESHIP_HALBERD_REACTOR_LEFT_GATE
# 436 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return


BattleshipHalberd_Reactor_EventScript_RemoveLeftGate::
# 452 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 453 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 454 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 2, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 455 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
	return


BattleshipHalberd_Reactor_EventScript_RightSwitch::
# 461 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	goto_if_unset FLAG_BATTLESHIP_HALBERD_REACTOR_RIGHT_GATE, BattleshipHalberd_Reactor_EventScript_RightSwitch_1
# 493 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_3
# 494 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return

BattleshipHalberd_Reactor_EventScript_RightSwitch_1:
# 463 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 464 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_0, MSGBOX_YESNO
# 465 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_RightSwitch_4
# 488 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return

BattleshipHalberd_Reactor_EventScript_RightSwitch_4:
# 467 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_1
# 468 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	closemessage
# 469 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playse SE_BANG
# 470 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 2
# 471 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8005, 0
# 472 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8006, 2
# 473 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8007, 3
# 474 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special ShakeCamera
# 475 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 16, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 476 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 17, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 477 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 16, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 478 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 17, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 479 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special DrawWholeMapView
# 480 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitse
# 481 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	delay 12
# 482 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_2
# 483 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setflag FLAG_BATTLESHIP_HALBERD_REACTOR_RIGHT_GATE
# 484 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return


BattleshipHalberd_Reactor_EventScript_RemoveRightGate::
# 500 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 16, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 501 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 17, 11, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 502 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 16, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 503 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 17, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
	return


BattleshipHalberd_Reactor_EventScript_SetElevatorDestination::
# 509 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 510 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_2
# 510 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_2
# 514 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_3
# 514 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_eq BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_3
# 518 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_TEMP_2, 16
	goto_if_eq BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_4
# 518 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_TEMP_2, 17
	goto_if_eq BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_4
BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_1:
	return

BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_2:
# 512 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 1
	goto BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_1

BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_3:
# 516 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 2
	goto BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_1

BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_4:
# 520 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 3
	goto BattleshipHalberd_Reactor_EventScript_SetElevatorDestination_1


BattleshipHalberd_Reactor_EventScript_Wheelie_Text_0:
# 233 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "It's a Wheelie Bike. Seems like it\n"
	.string "escaped from the power generator…\p"
	.string "The Wheelie looks at you expectantly.\n"
	.string "Will you let it join your party?$"

BattleshipHalberd_Reactor_EventScript_Wheelie_Text_1:
# 245 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "You obtained Wheelie!$"

BattleshipHalberd_Reactor_EventScript_Wheelie_Text_2:
# 248 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Wheelie?$"

BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_0:
# 322 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "Kirby! How did you get here? If Lord\n"
	.string "Meta Knight sees you, he'll…\p"
	.string "…huh? You're looking for a present\n"
	.string "that fell in the ocean around here?\p"
	.string "Oh! Yes! I hauled in something like that\n"
	.string "earlier! It looked too nice to toss, so\l"
	.string "I ended up gifting it to the captain…\p"
	.string "He might still have it. I hope you can\n"
	.string "find it! And once you get it back,\l"
	.string "I'm rooting for your destruction!$"

BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_1:
# 342 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "What's that? You have something else\n"
	.string "you want to ask me about? If I know\l"
	.string "a lumberjack by the resort?\p"
	.string "They're wondering how I'm doing? Hm…$"

BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_2:
# 350 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "Here. Can you do me a favor and deliver\n"
	.string "this letter to them?$"

BattleshipHalberd_Reactor_EventScript_SailorWaddleDee_Text_3:
# 353 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "It's hard work here on the Halberd, so I\n"
	.string "don't get a lot of free time.\p"
	.string "Even if I may not be able to see them,\n"
	.string "I hope this will satisfy them!$"

BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_0:
# 368 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "It's a power switch. Will you flip it?$"

BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_1:
# 371 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "You flipped the power switch!$"

BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_2:
# 386 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "A locked path opened up!$"

BattleshipHalberd_Reactor_EventScript_MiddleSwitch_Text_3:
# 397 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "This switch has already been flipped.$"

BattleshipHalberd_Reactor_Text_TrainerIntro::
# 286 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "What do you think you're doing here?\n"
	.string "The reactor's a highly sensitive place!\p"
	.string "I kindly suggest you take your leave.\n"
	.string "And I won't take anything else kindly!$"

BattleshipHalberd_Reactor_Text_TrainerDefeated::
# 295 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "Yow ow ow! Okay, fine, I'll tell you how\n"
	.string "to get past here!$"

BattleshipHalberd_Reactor_Text_TrainerPost::
# 301 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "We installed electric gates to protect\n"
	.string "the reactor and its several generators.\p"
	.string "You see the lightning-bolt tiles on the\n"
	.string "floor? The electric gates will change\l"
	.string "positions when you step on them.\p"
	.string "Find a way to the top right generator,\n"
	.string "and you can open up an elevator that\l"
	.string "will lead you directly to the helm.\p"
	.string "You hear that? The top right generator!\n"
	.string "Don't go activating any others, now!$"

BattleshipHalberd_Reactor_Text_ReceivedLetter::
# 525 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "Obtained the {COLOR BLUE}Letter{COLOR DARK_GRAY}!$"
