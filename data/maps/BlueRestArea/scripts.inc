# 1 "data/maps/BlueRestArea/scripts.pory"

# 2 "data/maps/BlueRestArea/scripts.pory"
BlueRestArea_MapScripts::
# 3 "data/maps/BlueRestArea/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, BlueRestArea_OnResume
# 4 "data/maps/BlueRestArea/scripts.pory"
	.byte 0
# 5 "data/maps/BlueRestArea/scripts.pory"

# 6 "data/maps/BlueRestArea/scripts.pory"
BlueRestArea_OnResume:
# 7 "data/maps/BlueRestArea/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 8 "data/maps/BlueRestArea/scripts.pory"
	end

BLueRestArea_EventScript_Sign::
# 13 "data/maps/BlueRestArea/scripts.pory"
	msgbox BLueRestArea_EventScript_Sign_Text_0, MSGBOX_SIGN
# 15 "data/maps/BlueRestArea/scripts.pory"
	closemessage
	return


BLueRestArea_EventScript_Sign_Text_0:
# 13 "data/maps/BlueRestArea/scripts.pory"
	.string "BLUE REST AREA\n"
	.string "A patch of warm in the unforgiving cold.$"
