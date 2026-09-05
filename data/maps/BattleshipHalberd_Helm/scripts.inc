# 1 "data/maps/BattleshipHalberd_Helm/scripts.pory"

# 2 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_MapScripts::
# 3 "data/maps/BattleshipHalberd_Helm/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleshipHalberd_Helm_OnFrame
# 4 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.byte 0
# 5 "data/maps/BattleshipHalberd_Helm/scripts.pory"

# 6 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_OnFrame::
# 7 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	map_script_2 VAR_ORANGE_OCEAN_STATE, 0, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne
# 8 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.2byte 0

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne::
# 13 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	lockall
# 14 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_PLAYER, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_0
# 15 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 16 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay 16
# 17 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	special SpawnCameraObject
# 18 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_1
# 19 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 20 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay 15
# 21 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_0
# 26 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 27 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_VUL, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_2
# 28 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 29 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_PIN
# 30 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_VUL, Common_Movement_ExclamationMark
# 31 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 32 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_1
# 33 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 34 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_3
# 35 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 36 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 37 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_2
# 42 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 43 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_4
# 44 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 45 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay 16
# 46 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_3
# 47 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 48 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay 16
# 49 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_1
# 50 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 51 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_VUL, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_5
# 52 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay 16
# 53 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_4, MSGBOX_YESNO
# 57 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_2
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_1:
# 62 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_5
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_4:
# 67 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 68 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_2
# 69 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 70 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay 8
# 71 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_7
# 84 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 85 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_VUL, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_6
# 86 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 87 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_8
# 89 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_7
# 90 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_9
# 91 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 92 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_VUL, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_8
# 93 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_2
# 94 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 95 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_10
# 96 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 97 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_EXIT
# 98 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	addobject LOCALID_HELM_AXE
# 99 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitse
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_AXE, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_9
# 101 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_EXIT
# 102 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	addobject LOCALID_HELM_MACE
# 103 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitse
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_MACE, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_10
# 105 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_EXIT
# 106 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	addobject LOCALID_HELM_TRIDENT
# 107 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitse
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_TRIDENT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_11
# 109 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_EXIT
# 110 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	addobject LOCALID_HELM_JAVELIN
# 111 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitse
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_JAVELIN, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_12
# 113 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 114 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_11
# 119 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	trainerbattle_no_intro TRAINER_GWEN, BattleshipHalberd_Helm_Text_MetaKnightOneDefeat
# 120 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_TRIDENT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_13
# 121 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_LEDGE
# 122 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 123 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_12
# 124 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 125 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_MACE, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_13
# 126 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_LEDGE
# 127 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 128 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_13
# 129 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 130 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_AXE, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_13
# 131 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_LEDGE
# 132 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 133 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_14
# 135 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 136 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_JAVELIN, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_13
# 137 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_LEDGE
# 138 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 139 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_15
# 141 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 142 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_14
# 143 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 144 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_16
# 145 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_TRIDENT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_15
# 146 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_MACE, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_15
# 147 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_AXE, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_15
# 148 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_JAVELIN, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_15
# 149 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_17
# 158 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 159 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_EXIT
# 160 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	addobject LOCALID_HELM_SAILOR
# 161 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitse
# 162 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_SAILOR, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_16
# 163 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 164 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_LEDGE
# 165 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_SAILOR, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_17
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_PLAYER, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_18
# 167 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 168 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_18
# 173 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 174 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	playse SE_PIN
# 175 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_VUL, Common_Movement_ExclamationMark
# 176 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 177 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_19
# 178 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_19
# 180 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 181 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_20
# 186 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	setspeaker NULL
# 187 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	giveitem_msg BattleshipHalberd_Helm_Text_ReceivedKinesPresent, ITEM_SAPPHIRE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 188 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_21
# 189 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	applymovement LOCALID_HELM_METAKNIGHT, BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_20
# 190 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	waitmovement
# 191 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_22
# 196 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	closemessage
# 197 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	setvar VAR_ORANGE_OCEAN_STATE, 1
# 198 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	warp MAP_ORANGE_OCEAN, 14, 31
	return

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_2:
# 59 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_5
	goto BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_1

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_5:
# 64 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	msgbox BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_6
	goto BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_4


# 14 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_0:
# 14 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_up
# 14 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_up
# 14 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_up
# 14 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_up
# 14 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_up
	step_end

# 18 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_1:
# 18 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_slow_up
	step_end

# 27 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_2:
# 27 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_down
	step_end

# 34 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_3:
# 34 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_slow_down
	step_end

# 43 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_4:
# 43 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_slow_down
	step_end

# 51 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_5:
# 51 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_left
	step_end

# 85 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_6:
# 85 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_left
# 85 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_left
# 85 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_left
	step_end

# 89 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_7:
# 89 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_right
	step_end

# 92 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_8:
# 92 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_down
	step_end

# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_9:
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_right
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 100 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	jump_in_place_down
	step_end

# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_10:
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_left
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 104 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	jump_in_place_down
	step_end

# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_11:
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_left
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_left
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 108 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	jump_in_place_down
	step_end

# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_12:
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_right
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_right
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 112 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	jump_in_place_down
	step_end

# 120 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_13:
# 120 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	jump_in_place_down
	step_end

# 142 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_14:
# 142 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_fast_down
# 142 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_fast_down
# 142 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_fast_down
	step_end

# 145 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_15:
# 145 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_up
	step_end

# 162 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_16:
# 162 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 162 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 162 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 162 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
	step_end

# 165 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_17:
# 165 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
# 165 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_fast_up
	step_end

# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_18:
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	jump_left
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_right
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_left
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_down
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_right
# 166 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_up
	step_end

# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_19:
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_right
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_down
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	face_right
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_right
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_right
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	delay_16
# 179 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_slow_down
	step_end

# 189 "data/maps/BattleshipHalberd_Helm/scripts.pory"
BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Movement_20:
# 189 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	walk_in_place_up
	step_end

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_0:
# 21 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Pressure tanks remain steady.\n"
	.string "Ammunitions are in working order. Hm…\p"
	.string "Fluctuating energy levels in reactor 3?\n"
	.string "What could have happened there?$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_1:
# 32 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Gadzooks! What's Kirby doing here?!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_2:
# 37 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Kirby… ever the surprising individual\n"
	.string "you are.\p"
	.string "It must not have been easy to reach us\n"
	.string "here, at the bottom of the sea.$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_3:
# 46 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}And these are…$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_4:
# 53 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}I see. Your “Helpers”.\p"
	.string "Tell me, Kirby. Have you been enjoying\n"
	.string "the king's little diversion?$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_5:
# 59 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Of course you are. You're still so naive\n"
	.string "when it comes to fun and games.$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_6:
# 64 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Is that so? Hmhm… ha ha ha.\n"
	.string "How amusing. Maybe I misjudged you.$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_7:
# 71 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Let me tell you something. The\n"
	.string "Royal Royale is not to be trusted.\p"
	.string "Dedede, of all people, looking to give up\n"
	.string "his lordship? It's preposterous.\l"
	.string "He wouldn't let it go for even one day!\p"
	.string "And what good is it to teach a populace\n"
	.string "how to laze about and bark down orders?\p"
	.string "I may not know what clouds his mind, but\n"
	.string "something sinister is afoot, I'm sure.\l"
	.string "And I will be the one to stop it!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_8:
# 87 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Lord Meta Knight, I trust you have not\n"
	.string "forgotten our plan?$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_9:
# 90 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Of course not. But first…$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_10:
# 95 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Meta-Knights! To the helm, immediately!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_11:
# 114 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}I can't let trespassing on the Halberd\n"
	.string "go unpunished, Kirby!\p"
	.string "Come, and let me show you how a real\n"
	.string "leader's army operates!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_12:
# 123 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Lord Meta Knight! We've failed you!!!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_13:
# 128 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Forgive us! Dem Helpers are too strong!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_14:
# 133 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Give us another shot! Please! We'll get\n"
	.string "it right this time!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_15:
# 139 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Can we even beat Kirby like this!? Do we\n"
	.string "really need Helpers to stand a chance?!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_16:
# 144 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Enough!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_17:
# 149 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}You've already suffered one loss.\n"
	.string "Fighting now will do you no good.\p"
	.string "Kirby… I underestimated your potential\n"
	.string "when it comes to commanding Helpers.\l"
	.string "I won't make that mistake again.\p"
	.string "However, that doesn't mean I'll forgive\n"
	.string "your transgressions so easily…!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_18:
# 168 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Lord Meta Knight, please stop! Kirby's\n"
	.string "not here to interfere with us!\p"
	.string "He's just looking for a present his\n"
	.string "friend dropped in the ocean here!$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_19:
# 177 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Hm? Hrrm!? You mean this here?$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_20:
# 181 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}…\p"
	.string "I see…\p"
	.string "Take this.$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_21:
# 188 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Now…$"

BattleshipHalberd_Helm_EventScript_MetaKnightEncounterOne_Text_22:
# 191 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "{SPEAKER NAME_META}Crew! Eject Kirby from the premises!\n"
	.string "And prepare for liftoff!\p"
	.string "The Halberd will fly again! It's time to\n"
	.string "put a stop to King Dedede's plot!$"

BattleshipHalberd_Helm_Text_MetaKnightOneDefeat::
# 202 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Hmph…$"

BattleshipHalberd_Helm_Text_ReceivedKinesPresent::
# 207 "data/maps/BattleshipHalberd_Helm/scripts.pory"
	.string "Kirby received {COLOR RED}Kine's Gift{COLOR DARK_GRAY}!$"
