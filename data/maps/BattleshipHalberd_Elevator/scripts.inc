# 1 "data/maps/BattleshipHalberd_Elevator/scripts.pory"

# 2 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
BattleshipHalberd_Elevator_MapScripts::
# 3 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleshipHalberd_Elevator_OnFrame
# 4 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	.byte 0
# 5 "data/maps/BattleshipHalberd_Elevator/scripts.pory"

# 6 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
BattleshipHalberd_Elevator_OnFrame::
# 7 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleshipHalberd_Elevator_EventScript_ElevatorSequence
# 8 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	.2byte 0

BattleshipHalberd_Elevator_EventScript_ElevatorSequence::
# 13 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	lock
# 14 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 0
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_2
# 20 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 1
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_3
# 26 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 2
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_4
# 32 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 3
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_5
# 38 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 4
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_6
# 46 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setdynamicwarp MAP_BATTLESHIP_HALBERD_REACTOR, 0, 0
# 47 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8005, 1
# 48 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8006, 9
BattleshipHalberd_Elevator_EventScript_ElevatorSequence_1:
# 50 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, BattleshipHalberd_Elevator_EventScript_ElevatorSequence_Movement_0
# 51 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitmovement
# 52 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	delay 20
# 53 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	special MoveElevator
# 54 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	delay 60
# 55 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, BattleshipHalberd_Elevator_EventScript_ElevatorSequence_Movement_1
# 56 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitmovement
# 57 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 0
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_13
# 65 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 1
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_14
# 73 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 2
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_15
# 81 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 3
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_16
# 89 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	compare VAR_ELEVATOR_DESTINATION, 4
	goto_if_eq BattleshipHalberd_Elevator_EventScript_ElevatorSequence_17
# 99 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 0
# 100 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setdynamicwarp MAP_BATTLESHIP_HALBERD_REACTOR, 0, 0
# 101 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitstate
# 102 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	releaseall
	end

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_2:
# 16 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setdynamicwarp MAP_BATTLESHIP_HALBERD_REACTOR, 9, 33
# 17 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8005, 1
# 18 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8006, 4
	goto BattleshipHalberd_Elevator_EventScript_ElevatorSequence_1

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_3:
# 22 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setdynamicwarp MAP_BATTLESHIP_HALBERD_REACTOR, 10, 40
# 23 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8005, 4
# 24 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8006, 1
	goto BattleshipHalberd_Elevator_EventScript_ElevatorSequence_1

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_4:
# 28 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setdynamicwarp MAP_BATTLESHIP_HALBERD_REACTOR, 3, 10
# 29 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8005, 1
# 30 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8006, 4
	goto BattleshipHalberd_Elevator_EventScript_ElevatorSequence_1

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_5:
# 34 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setdynamicwarp MAP_BATTLESHIP_HALBERD_REACTOR, 9, 4
# 35 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8005, 1
# 36 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8006, 6
	goto BattleshipHalberd_Elevator_EventScript_ElevatorSequence_1

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_6:
# 40 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setdynamicwarp MAP_BATTLESHIP_HALBERD_REACTOR, 17, 10
# 41 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8005, 6
# 42 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_0x8006, 1
	goto BattleshipHalberd_Elevator_EventScript_ElevatorSequence_1

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_13:
# 59 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 0
# 60 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	warp MAP_BATTLESHIP_HALBERD_REACTOR, 9, 33
# 61 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitstate
# 62 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	releaseall
	end

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_14:
# 67 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 2
# 68 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	warp MAP_BATTLESHIP_HALBERD_REACTOR, 10, 40
# 69 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitstate
# 70 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	releaseall
	end

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_15:
# 75 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 1
# 76 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	warp MAP_BATTLESHIP_HALBERD_REACTOR, 3, 10
# 77 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitstate
# 78 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	releaseall
	end

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_16:
# 83 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 4
# 84 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	warp MAP_BATTLESHIP_HALBERD_HALL, 2, 22
# 85 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitstate
# 86 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	releaseall
	end

BattleshipHalberd_Elevator_EventScript_ElevatorSequence_17:
# 91 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_DESTINATION, 3
# 92 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	warp MAP_BATTLESHIP_HALBERD_REACTOR, 17, 10
# 93 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	waitstate
# 94 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	releaseall
	end


# 50 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
BattleshipHalberd_Elevator_EventScript_ElevatorSequence_Movement_0:
# 50 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	walk_up
# 50 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	walk_in_place_down
	step_end

# 55 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
BattleshipHalberd_Elevator_EventScript_ElevatorSequence_Movement_1:
# 55 "data/maps/BattleshipHalberd_Elevator/scripts.pory"
	walk_down
	step_end
