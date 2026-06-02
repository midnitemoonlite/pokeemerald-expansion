# 1 "data/maps/WaddleDeeTown/scripts.pory"

# 2 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_MapScripts::
# 3 "data/maps/WaddleDeeTown/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, WaddleDeeTown_OnLoad
# 4 "data/maps/WaddleDeeTown/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, WaddleDeeTown_OnFrame
# 5 "data/maps/WaddleDeeTown/scripts.pory"
    .byte 
# 6 "data/maps/WaddleDeeTown/scripts.pory"
    
# 7 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_OnFrame::
# 8 "data/maps/WaddleDeeTown/scripts.pory"
	map_script_2 VAR_WADDLE_DEE_TOWN_STATE, 2, WaddleDeeTown_EventScript_LabIsOpen
# 9 "data/maps/WaddleDeeTown/scripts.pory"
	.2byte 0
# 10 "data/maps/WaddleDeeTown/scripts.pory"

# 11 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_OnTransition:
# 12 "data/maps/WaddleDeeTown/scripts.pory"
    end
# 13 "data/maps/WaddleDeeTown/scripts.pory"

# 14 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_OnLoad:
# 15 "data/maps/WaddleDeeTown/scripts.pory"
	call_if_unset FLAG_WADDLE_DEE_TOWN_BLOCK_NORTHERN_HALF, WaddleDeeTown_EventScript_Avalanche
# 16 "data/maps/WaddleDeeTown/scripts.pory"
	end

WaddleDeeTown_EventScript_Avalanche::
# 21 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 6, 35, METATILE_Rustboro_Blockade, TRUE
# 22 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 7, 35, METATILE_Rustboro_Blockade, TRUE
# 23 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 8, 35, METATILE_Rustboro_Blockade, TRUE
# 24 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 9, 35, METATILE_Rustboro_Blockade, TRUE
# 25 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 10, 35, METATILE_Rustboro_Blockade, TRUE
# 26 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 11, 35, METATILE_Rustboro_Blockade, TRUE
# 27 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 12, 35, METATILE_Rustboro_Blockade, TRUE
# 28 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 13, 35, METATILE_Rustboro_Blockade, TRUE
# 29 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 14, 35, METATILE_Rustboro_Blockade, TRUE
# 30 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 15, 35, METATILE_Rustboro_Blockade, TRUE
# 31 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 16, 35, METATILE_Rustboro_Blockade, TRUE
# 32 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 17, 35, METATILE_Rustboro_Blockade, TRUE
# 33 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 18, 35, METATILE_Rustboro_Blockade, TRUE
# 34 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 41, 24, METATILE_Rustboro_Blockade, TRUE
# 35 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 42, 24, METATILE_Rustboro_Blockade, TRUE
# 36 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 43, 24, METATILE_Rustboro_Blockade, TRUE
# 37 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 44, 24, METATILE_Rustboro_Blockade, TRUE
# 38 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 45, 24, METATILE_Rustboro_Blockade, TRUE
# 39 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 46, 24, METATILE_Rustboro_Blockade, TRUE
# 40 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 47, 24, METATILE_Rustboro_Blockade, TRUE
# 41 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 48, 24, METATILE_Rustboro_Blockade, TRUE
# 42 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 49, 24, METATILE_Rustboro_Blockade, TRUE
# 43 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 50, 24, METATILE_Rustboro_Blockade, TRUE
# 44 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 51, 24, METATILE_Rustboro_Blockade, TRUE
# 45 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 52, 24, METATILE_Rustboro_Blockade, TRUE
# 46 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 53, 24, METATILE_Rustboro_Blockade, TRUE
	return


WaddleDeeTown_EventScript_LabIsOpen::
# 52 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 53 "data/maps/WaddleDeeTown/scripts.pory"
	checkobjectat 29, 34
# 54 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeTown_EventScript_LabIsOpen_2
# 61 "data/maps/WaddleDeeTown/scripts.pory"
	addobject LOCALID_TOWN_BWD
# 62 "data/maps/WaddleDeeTown/scripts.pory"
	setobjectxy LOCALID_TOWN_BWD, 30, 41
WaddleDeeTown_EventScript_LabIsOpen_1:
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_LabIsOpen_Movement_0
# 65 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 66 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_LabIsOpen_Text_0
# 68 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 69 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 70 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_LabIsOpen_Movement_1
# 71 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 72 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_LabIsOpen_Text_1
# 83 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_LabIsOpen_Movement_2
# 85 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 86 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_TOWN_BWD
# 87 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 3
# 88 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_LabIsOpen_2:
# 56 "data/maps/WaddleDeeTown/scripts.pory"
	addobject LOCALID_TOWN_BWD
# 57 "data/maps/WaddleDeeTown/scripts.pory"
	setobjectxy LOCALID_TOWN_BWD, 29, 41
	goto WaddleDeeTown_EventScript_LabIsOpen_1


WaddleDeeTown_EventScript_TownSign::
# 93 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
# 95 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_CafeSign::
# 100 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CafeSign_Text_0, MSGBOX_SIGN
# 102 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ArcadeSign::
# 107 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ArcadeSign_Text_0, MSGBOX_SIGN
# 109 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ShopSign::
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ShopSign_Text_0, MSGBOX_SIGN
# 116 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_DaycareSign::
# 121 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DaycareSign_Text_0, MSGBOX_SIGN
# 123 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_StoreSign::
# 128 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_StoreSign_Text_0, MSGBOX_SIGN
# 130 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_LabSign::
# 135 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_LabSign_Text_0, MSGBOX_SIGN
# 137 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ParkSign::
# 142 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ParkSign_Text_0, MSGBOX_SIGN
# 143 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_Fisherman::
# 148 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 149 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 150 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_BLING_BLIPPER
# 151 "data/maps/WaddleDeeTown/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 152 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_2
# 172 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_12
WaddleDeeTown_EventScript_Fisherman_8:
# 182 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_7
WaddleDeeTown_EventScript_Fisherman_5:
# 238 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_8
WaddleDeeTown_EventScript_Fisherman_1:
# 244 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_FISHERMAN_WADDLE_DEE, DIR_EAST
# 245 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_Fisherman_2:
# 154 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_0
# 162 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 163 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_1
# 164 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 165 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_2
# 167 "data/maps/WaddleDeeTown/scripts.pory"
	additem ITEM_SUPER_ROD
# 168 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_3
# 170 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_3:
# 174 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_4
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_4:
# 184 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_5
# 185 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 186 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, Common_Movement_ExclamationMark
# 187 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 188 "data/maps/WaddleDeeTown/scripts.pory"
	getobjectfacingdirection LOCALID_FISHERMAN_WADDLE_DEE, VAR_RESULT
# 189 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_18
# 197 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_19
# 205 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_20
WaddleDeeTown_EventScript_Fisherman_17:
# 213 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_6
# 227 "data/maps/WaddleDeeTown/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 10
# 228 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_7
# 234 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_SHOWN_BLING_BLIPPER
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_6:
# 182 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeTown_EventScript_Fisherman_4
	goto WaddleDeeTown_EventScript_Fisherman_5

WaddleDeeTown_EventScript_Fisherman_7:
# 182 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_SHOWN_BLING_BLIPPER, WaddleDeeTown_EventScript_Fisherman_6
	goto WaddleDeeTown_EventScript_Fisherman_5

WaddleDeeTown_EventScript_Fisherman_11:
# 172 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_3
	goto WaddleDeeTown_EventScript_Fisherman_8

WaddleDeeTown_EventScript_Fisherman_12:
# 172 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_SHOWN_BLING_BLIPPER, WaddleDeeTown_EventScript_Fisherman_11
	goto WaddleDeeTown_EventScript_Fisherman_8

WaddleDeeTown_EventScript_Fisherman_18:
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_0
# 192 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 193 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 194 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_LabIsOpen_Movement_1
# 195 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17

WaddleDeeTown_EventScript_Fisherman_19:
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_1
# 200 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 201 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 202 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_2
# 203 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17

WaddleDeeTown_EventScript_Fisherman_20:
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_3
# 208 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 209 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 210 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_4
# 211 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17


WaddleDeeTown_EventScript_ParkWaddleDee::
# 250 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 251 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 252 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ParkWaddleDee_Text_0
# 257 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_BorderWaddleDee::
# 262 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 263 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 264 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_BorderWaddleDee_Text_0, MSGBOX_YESNO
# 266 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_BorderWaddleDee_Text_1
# 274 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_LabWaddleDee::
# 279 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 280 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 281 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, Common_Movement_ExclamationMark
# 282 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 283 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_LabWaddleDee_Text_0
# 297 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CastleGuardLeft::
# 302 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 303 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 304 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CastleGuardLeft_Text_0
# 310 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CastleGuardRight::
# 315 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 316 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 317 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CastleGuardRight_Text_0
# 322 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CafeClosed::
# 327 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 328 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 329 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CafeClosed_Text_0
# 332 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_ArcadeClosed::
# 337 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 338 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 339 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ArcadeClosed_Text_0
# 342 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_StoreClosed::
# 347 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 348 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 349 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_StoreClosed_Text_0
# 354 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Gentleman::
# 359 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 360 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 361 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Gentleman_Text_0
# 367 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Socialite::
# 372 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 373 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 374 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Socialite_Text_0
# 379 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_HeadChef::
# 384 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 385 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 386 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_HeadChef_Text_0
# 391 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Astronomer::
# 396 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 397 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 398 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Astronomer_Text_0
# 406 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerLeft::
# 411 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 412 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 413 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerLeft_Text_0
# 419 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerRight::
# 424 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 425 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 426 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerRight_Text_0
# 434 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl1::
# 439 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 440 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl1_Text_0
# 442 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl2::
# 447 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 448 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl2_Text_0
# 449 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_EggDealer::
# 454 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 455 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 456 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_1
# 511 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_2
	return

WaddleDeeTown_EventScript_EggDealer_1:
# 458 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_0, MSGBOX_YESNO
# 474 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_5
# 504 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_6
	return

WaddleDeeTown_EventScript_EggDealer_2:
# 513 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_5
# 524 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_5:
# 476 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_1
# 477 "data/maps/WaddleDeeTown/scripts.pory"
	giveegg SPECIES_CHICK
# 478 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_9
# 488 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_10
# 498 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_11
	return

WaddleDeeTown_EventScript_EggDealer_6:
# 506 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_4
# 508 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_9:
# 480 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 481 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_2
# 482 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 483 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 484 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 485 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 486 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_10:
# 490 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 491 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_3
# 492 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 493 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 494 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 495 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_TransferredToPC
# 496 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_11:
# 500 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
# 501 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_Trigger_FirstCutscene::
# 530 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 531 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 532 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 533 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 534 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 535 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_Trigger_FirstCutscene_Text_0
# 537 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 538 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 1
# 539 "data/maps/WaddleDeeTown/scripts.pory"
	goto WaddleDeeTown_EventScript_DededeSpeech
	return


WaddleDeeTown_EventScript_Bandana::
# 544 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 545 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 546 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_Trigger_FirstCutscene_Text_0
# 548 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 1
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_Bandana_Movement_0
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	goto WaddleDeeTown_EventScript_DededeSpeech
	return


WaddleDeeTown_EventScript_DededeSpeech::
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_0
# 559 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_0
# 560 "data/maps/WaddleDeeTown/scripts.pory"
	delay 12
# 566 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 567 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 568 "data/maps/WaddleDeeTown/scripts.pory"
	special SpawnCameraObject
# 569 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, WaddleDeeTown_EventScript_DededeSpeech_Movement_1
# 570 "data/maps/WaddleDeeTown/scripts.pory"
	fadeoutbgm 2
# 571 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 572 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 573 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 574 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_0
# 580 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 581 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_2
# 582 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 583 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_1
# 597 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 598 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_3
# 599 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 600 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_2
# 601 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 602 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_APPLAUSE
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_2, WaddleDeeTown_EventScript_DededeSpeech_Movement_4
# 605 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_5
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_8, WaddleDeeTown_EventScript_DededeSpeech_Movement_6
# 607 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_1, DIR_WEST
# 608 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_4, DIR_SOUTH
# 609 "data/maps/WaddleDeeTown/scripts.pory"
	delay 6
# 610 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_5, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 611 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_6, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 612 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_LabIsOpen_Movement_1
# 613 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_EAST
# 614 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 615 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_SOUTH
# 616 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_4, DIR_WEST
# 617 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 618 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_1, DIR_EAST
# 619 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_LabIsOpen_Movement_1
# 620 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_WEST
# 621 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 622 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_NORTH
# 623 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_5, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 624 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_6, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 625 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 626 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_LabIsOpen_Movement_1
# 627 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_4, DIR_NORTH
# 628 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 629 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_1, DIR_NORTH
# 630 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 631 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_DededeSpeech_Text_3
# 633 "data/maps/WaddleDeeTown/scripts.pory"
	delay 140
# 634 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_1, WaddleDeeTown_EventScript_DededeSpeech_Movement_8
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_2, WaddleDeeTown_EventScript_DededeSpeech_Movement_9
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_5, WaddleDeeTown_EventScript_DededeSpeech_Movement_10
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_6, WaddleDeeTown_EventScript_DededeSpeech_Movement_11
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_DededeSpeech_Movement_12
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_8, WaddleDeeTown_EventScript_DededeSpeech_Movement_13
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_7, WaddleDeeTown_EventScript_DededeSpeech_Movement_14
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_10, WaddleDeeTown_EventScript_DededeSpeech_Movement_15
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_4, WaddleDeeTown_EventScript_DededeSpeech_Movement_16
# 644 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_17
# 645 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 646 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 647 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_18
# 648 "data/maps/WaddleDeeTown/scripts.pory"
	waitse
# 649 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 650 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 651 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 652 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 653 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 654 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 655 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_19
# 656 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 657 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, Common_Movement_ExclamationMark
# 658 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 659 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 660 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_20
# 662 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 663 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, WaddleDeeTown_EventScript_DededeSpeech_Movement_21
# 664 "data/maps/WaddleDeeTown/scripts.pory"
	fadeoutbgm 1
# 665 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 666 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 667 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 668 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 669 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 670 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_HIDE_CROWD_WADDLE_DEE_TOWN
# 671 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_1
# 672 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_2
# 673 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_3
# 674 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_4
# 675 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_5
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_6
# 677 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_7
# 678 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_8
# 679 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_9
# 680 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_10
# 681 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 682 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_4
# 687 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_22
# 688 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_5
# 690 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 691 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 692 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 693 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 694 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, Common_Movement_ExclamationMark
# 695 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 696 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 697 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 698 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_6
# 702 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_23
# 703 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_7
# 711 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_24
# 712 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_8
# 719 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 720 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_Fisherman_Movement_4
# 721 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 722 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8004, 2
# 723 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8005, 0
# 724 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8006, 2
# 725 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8007, 3
# 726 "data/maps/WaddleDeeTown/scripts.pory"
	special ShakeCamera
# 727 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_9
# 731 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 732 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_25
# 733 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 734 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 735 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_10
# 743 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 744 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 745 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_19
# 746 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_11
# 759 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 760 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_26
# 761 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_27
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_28
# 763 "data/maps/WaddleDeeTown/scripts.pory"
	fadeoutbgm 1
# 764 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 765 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_29
# 766 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_30
# 767 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 768 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 769 "data/maps/WaddleDeeTown/scripts.pory"
	special RemoveCameraObject
# 770 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_12
# 775 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 776 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 777 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_13
# 789 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_31
# 791 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 792 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_HIDE_DEDEDE_WADDLE_DEE_TOWN
# 793 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_HIDE_BWD_WADDLE_DEE_TOWN
# 794 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_TOWN_BWD
# 795 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_TOWN_KING_DEDEDE
# 796 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_EastGuard::
# 801 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 802 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 803 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EastGuard_Text_0
# 809 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_EastExitBlocked::
# 814 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 815 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 816 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_EAST_GUARD, Common_Movement_ExclamationMark
# 817 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 818 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_EAST_GUARD, WaddleDeeTown_EventScript_DededeSpeech_Movement_19
# 819 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 820 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EastExitBlocked_Text_0
# 828 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 829 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_EastExitBlocked_Movement_0
# 830 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 831 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


# 64 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_LabIsOpen_Movement_0:
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_LabIsOpen_Movement_1:
# 70 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
	step_end

# 84 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_LabIsOpen_Movement_2:
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 191 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_0:
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 199 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_1:
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 202 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_2:
# 202 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_left
	step_end

# 207 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_3:
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 210 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_4:
# 210 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_down
	step_end

# 531 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_Trigger_FirstCutscene_Movement_0:
# 531 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_right
	step_end

# 532 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_Trigger_FirstCutscene_Movement_1:
# 532 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_left
	step_end

# 551 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Bandana_Movement_0:
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
	step_end

# 558 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_0:
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
	step_end

# 569 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_1:
# 569 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_up
# 569 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_up
	step_end

# 581 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_2:
# 581 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_right
# 581 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_down
	step_end

# 598 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_3:
# 598 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_left
# 598 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_down
	step_end

# 604 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_4:
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
	step_end

# 605 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_5:
# 605 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 605 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 605 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 605 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 605 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
	step_end

# 606 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_6:
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
	step_end

# 623 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_7:
# 623 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
	step_end

# 635 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_8:
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 636 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_9:
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 637 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_10:
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 638 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_11:
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 639 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_12:
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 640 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_13:
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
	step_end

# 641 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_14:
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
	step_end

# 642 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_15:
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 642 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
	step_end

# 643 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_16:
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 643 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 644 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_17:
# 644 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_right
	step_end

# 647 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_18:
# 647 "data/maps/WaddleDeeTown/scripts.pory"
	jump_left
	step_end

# 655 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_19:
# 655 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_down
	step_end

# 661 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_20:
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_right
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 661 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
	step_end

# 663 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_21:
# 663 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_down
# 663 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_down
	step_end

# 687 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_22:
# 687 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 687 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 702 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_23:
# 702 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 702 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
	step_end

# 711 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_24:
# 711 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_down
	step_end

# 732 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_25:
# 732 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_up
	step_end

# 760 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_26:
# 760 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 760 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 760 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_right
	step_end

# 761 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_27:
# 761 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 761 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 761 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_left
	step_end

# 762 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_28:
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 762 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 765 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_29:
# 765 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 765 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 765 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_down
	step_end

# 766 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_30:
# 766 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 766 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 766 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_down
	step_end

# 790 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_31:
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 790 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
	step_end

# 829 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_EastExitBlocked_Movement_0:
# 829 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

WaddleDeeTown_EventScript_LabIsOpen_Text_0:
# 66 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}There you are, Kirby! What were you…\n"
	.string "Wait, what's that you've got there?$"

WaddleDeeTown_EventScript_LabIsOpen_Text_1:
# 72 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Is that a Brooch?!\n"
	.string "So you already cleared an Arena…\p"
	.string "You're really something, Kirby!\n"
	.string "Congratulations!\p"
	.string "I saw Wise Waddle Dee return to his lab,\n"
	.string "so he asked me to call you over.\p"
	.string "It's the building on the right side of\n"
	.string "town. Let's catch up there!$"

WaddleDeeTown_EventScript_TownSign_Text_0:
# 93 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE TOWN\n"
	.string "A castle town for the king's subjects.$"

WaddleDeeTown_EventScript_CafeSign_Text_0:
# 100 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE CAFÉ\n"
	.string "Delicious Times, Precious Memories$"

WaddleDeeTown_EventScript_ArcadeSign_Text_0:
# 107 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MERRY MAGOCADE\n"
	.string "Enjoy various subgames here!$"

WaddleDeeTown_EventScript_ShopSign_Text_0:
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MACHINE SHOP\n"
	.string "Offering new wares and repairs.$"

WaddleDeeTown_EventScript_DaycareSign_Text_0:
# 121 "data/maps/WaddleDeeTown/scripts.pory"
	.string "HELPER DAY CARE\n"
	.string "We'll help raise your Helpers!$"

WaddleDeeTown_EventScript_StoreSign_Text_0:
# 128 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MAGOLOR'S DEPARTMENT STORE\n"
	.string "One-stop shop for all your item needs!$"

WaddleDeeTown_EventScript_LabSign_Text_0:
# 135 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE LIBRARY\n"
	.string "Please use your indoor voice.$"

WaddleDeeTown_EventScript_ParkSign_Text_0:
# 142 "data/maps/WaddleDeeTown/scripts.pory"
	.string "DEDEDE PARK$"

WaddleDeeTown_EventScript_Fisherman_Text_0:
# 154 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I've heard rumors of a glimmering golden\n"
	.string "fish living in this humble pond.\p"
	.string "I haven't caught a glimpse of it yet,\n"
	.string "but that's alright. Fishing is relaxing…\p"
	.string "You wanna try, Kirby? Here, I'll lend\n"
	.string "you one of my spare rods.$"

WaddleDeeTown_EventScript_Fisherman_Text_1:
# 163 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received a {COLOR RED}Fishing Rod{COLOR DARK_GRAY}!$"

WaddleDeeTown_EventScript_Fisherman_Text_2:
# 165 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby put away the Fishing Rod\n"
	.string "in the KEY ITEMS POCKET.$"

WaddleDeeTown_EventScript_Fisherman_Text_3:
# 168 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Cast your line into any body of water,\n"
	.string "and you might hook up something.$"

WaddleDeeTown_EventScript_Fisherman_Text_4:
# 174 "data/maps/WaddleDeeTown/scripts.pory"
	.string "How's fishing treating you, Kirby?\p"
	.string "Me? Well, that golden catch I'm looking\n"
	.string "for still eludes me, I'm afraid.\p"
	.string "Oh, what I'd give to see for myself\n"
	.string "if the rumors are true…$"

WaddleDeeTown_EventScript_Fisherman_Text_5:
# 184 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Huh? Is that…?$"

WaddleDeeTown_EventScript_Fisherman_Text_6:
# 213 "data/maps/WaddleDeeTown/scripts.pory"
	.string "No! It c-can't be...! Kirby, you CAUGHT\n"
	.string "the legendary golden fish?!\p"
	.string "Unbelievable! It's HUGE! And that sheen\n"
	.string "is even shinier than I imagined!\p"
	.string "Ahaha… it's real! The glimmering\n"
	.string "golden Bling Blipper is actually real!\p"
	.string "I may not have caught one myself, but\n"
	.string "just seeing it is enough to satisfy me.\p"
	.string "Here, let me give you a little\n"
	.string "token of my appreciation.$"

WaddleDeeTown_EventScript_Fisherman_Text_7:
# 228 "data/maps/WaddleDeeTown/scripts.pory"
	.string "It might seem like a lot, but trust me:\n"
	.string "this gold is nothing compared to the \l"
	.string "legendary Bling Blipper.\p"
	.string "You can put the treasure I've fished\n"
	.string "up to better use than I could.$"

WaddleDeeTown_EventScript_Fisherman_Text_8:
# 238 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Thank you, Kirby. Seeing that Bling\n"
	.string "Blipper has given me peace of mind.\p"
	.string "And fishing is already peaceful… I\n"
	.string "couldn't be more relaxed if I tried!$"

WaddleDeeTown_EventScript_ParkWaddleDee_Text_0:
# 252 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King made this garden for us\n"
	.string "to enjoy with his own two hands.\p"
	.string "I heard he's thinking about building a\n"
	.string "playground here too. I'd love that!$"

WaddleDeeTown_EventScript_BorderWaddleDee_Text_0:
# 264 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oooooh, yes! Do you know how long I've\n"
	.string "been waiting for someone to talk to me?$"

WaddleDeeTown_EventScript_BorderWaddleDee_Text_1:
# 266 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Amazing! My new menu border\n"
	.string "looks so stylish!\p"
	.string "Huh? You can't see what I mean?\n"
	.string "Have you checked your options?\p"
	.string "There's so many types to choose from!\n"
	.string "Try giving your border a makeover!$"

WaddleDeeTown_EventScript_LabWaddleDee_Text_0:
# 283 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, hello, Kirby!\n"
	.string "I've been expecting you!\p"
	.string "Wise Waddle Dee's lab is inside. He\n"
	.string "mentioned you were likely to pass by.\p"
	.string "He thought you would be a bit longer,\n"
	.string "though, so he's handling more errands.\p"
	.string "I'm sorry to ask, but do you mind\n"
	.string "waiting until he comes back?\p"
	.string "I'll let you know when he returns, so\n"
	.string "feel free to wander the town for now.$"

WaddleDeeTown_EventScript_CastleGuardLeft_Text_0:
# 304 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King doesn't visit often;\n"
	.string "this is like a vacation home to him.\p"
	.string "In exchange for maintaining the place\n"
	.string "while he's gone, we're allowed to\l"
	.string "reside within the castle walls.$"

WaddleDeeTown_EventScript_CastleGuardRight_Text_0:
# 317 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King has all sorts of castles,\n"
	.string "but his favorite is up on Mt. Dedede.\p"
	.string "Must be nice to serve as a guard there.\n"
	.string "You'd get a great view of Dream Land!$"

WaddleDeeTown_EventScript_CafeClosed_Text_0:
# 329 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Our sincerest apologies. Waddle Dee\n"
	.string "Café is currently under renovation.\l"
	.string "We hope to open our doors again soon.$"

WaddleDeeTown_EventScript_ArcadeClosed_Text_0:
# 339 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Sorry, Kirby! We're getting some new\n"
	.string "games in the arcade set up right now.\l"
	.string "Check back in a bit later!$"

WaddleDeeTown_EventScript_StoreClosed_Text_0:
# 349 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Magolor helped us build a department\n"
	.string "store. Our grand opening will be soon.\p"
	.string "We're still setting up inventory, so\n"
	.string "please wait a little longer, alright?$"

WaddleDeeTown_EventScript_Gentleman_Text_0:
# 361 "data/maps/WaddleDeeTown/scripts.pory"
	.string "First, a game shop…\n"
	.string "Then, a luxury department store…\p"
	.string "He's a skilled craftsman, but soon this\n"
	.string "place will be more Magolor than Dedede!\l"
	.string "Does no one else find this concerning?$"

WaddleDeeTown_EventScript_Socialite_Text_0:
# 374 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I think it's rather nice seeing\n"
	.string "Waddle Dee Town develop and flourish.\p"
	.string "Why would I be worried about Magolor?\n"
	.string "He's such a hardworking, honest fellow!$"

WaddleDeeTown_EventScript_HeadChef_Text_0:
# 386 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I heard the café's head chef is out\n"
	.string "on an ingredient-gathering voyage.\p"
	.string "What kind of ingredients? My tummy's\n"
	.string "getting hungry just thinking about it…$"

WaddleDeeTown_EventScript_Astronomer_Text_0:
# 398 "data/maps/WaddleDeeTown/scripts.pory"
	.string "So the Waddle Dee Arena was built in the\n"
	.string "back room of the town's castle, huh?\p"
	.string "It was blocked off before. Last I saw,\n"
	.string "there was a strange teleporter inside.\p"
	.string "Do you think it had to be moved\n"
	.string "elsewhere to make way for the Arena?$"

WaddleDeeTown_EventScript_WorkerLeft_Text_0:
# 413 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Just our luck… right as the Great King\n"
	.string "opens his tournament, our town gets hit\l"
	.string "with an avalanche of garbage blocks!\p"
	.string "It'll be a while before we can clean\n"
	.string "it all up. Sorry, kiddo.$"

WaddleDeeTown_EventScript_WorkerRight_Text_0:
# 426 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Supposedly the Great King gave out an\n"
	.string "order to restrict the town's north exit.\p"
	.string "But when he saw all these blockades, he\n"
	.string "cried out, “this is way too far!”\p"
	.string "Does he think we're the ones who\n"
	.string "caused this mess…?$"

WaddleDeeTown_EventScript_TagGirl1_Text_0:
# 440 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Heeey! Come here! I've got a heart\n"
	.string "for you!$"

WaddleDeeTown_EventScript_TagGirl2_Text_0:
# 448 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Eeek! I'm gonna be caught! Ha ha ha!$"

WaddleDeeTown_EventScript_EggDealer_Text_0:
# 458 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, hello, Kirby! You're helping fill out\n"
	.string "Info Cards for Wise Waddle Dee, right?\l"
	.string "Could I ask you for a favor?\p"
	.string "I found this egg caught in the rubble\n"
	.string "cutting off the north half of town.\l"
	.string "I think it might be a Helper's egg.\p"
	.string "There's just one problem… Helper eggs\n"
	.string "incubate as you travel with them.\p"
	.string "I couldn't possibly hatch this egg\n"
	.string "when I'm cooped up in a lab all day!\p"
	.string "Do you think you could take this\n"
	.string "egg off my hands for me?$"

WaddleDeeTown_EventScript_EggDealer_Text_1:
# 476 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, thank you! Here you go, then!$"

WaddleDeeTown_EventScript_EggDealer_Text_2:
# 481 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received the egg.$"

WaddleDeeTown_EventScript_EggDealer_Text_3:
# 491 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received an egg in the PC.$"

WaddleDeeTown_EventScript_EggDealer_Text_4:
# 506 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, alright… I guess this egg will stay\n"
	.string "unhatched for a long time then…$"

WaddleDeeTown_EventScript_EggDealer_Text_5:
# 513 "data/maps/WaddleDeeTown/scripts.pory"
	.string "There's a lot we're still learning about\n"
	.string "how Helpers propagate.\p"
	.string "Thanks to the newly opened Day Care, we\n"
	.string "know that Helpers can hatch from eggs…\p"
	.string "But there haven't been any signs of\n"
	.string "eggs from outside this town.\p"
	.string "It begs the question; do the original\n"
	.string "Helpers come from something else?$"

WaddleDeeTown_Trigger_FirstCutscene_Text_0:
# 535 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}The Great King's up ahead, Kirby.\n"
	.string "Let's hurry!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_0:
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Looks like some of you have already got\n"
	.string "your own Helpers! Not bad, not bad!\p"
	.string "Now, I can't really stop 'ya if you'd\n"
	.string "rather keep 'em as companions…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_1:
# 583 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}…but what I really wanna see are\n"
	.string "leaders and teams pushed to the limit!\p"
	.string "And so, I'm proud to cut the ribbon for\n"
	.string "this town's very own Waddle Dee Arena!\p"
	.string "This here castle behind me has a new\n"
	.string "room in the back where the Arena is at.\p"
	.string "If ya choose to enter, you'd better be\n"
	.string "ready for a gauntlet of Helper battles!\p"
	.string "Only tournament winners get to go home\n"
	.string "with a shiny new Brooch to their name.$"

WaddleDeeTown_EventScript_DededeSpeech_Text_2:
# 600 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Now then, you're all dismissed!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_3:
# 631 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Yes, Great King!\n"
	.string "Thank you, Great King!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_4:
# 682 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Ah, looks like we only caught the end of\n"
	.string "the Great King's speech…\p"
	.string "I wonder how tough the challengers at\n"
	.string "the Arena here will be?$"

WaddleDeeTown_EventScript_DededeSpeech_Text_5:
# 688 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Well, well, well!\n"
	.string "If it isn't my favorite lil' nuisance!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_6:
# 698 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}G-Great King!\p"
	.string "{SPEAKER NAME_DEDEDE}And ol' Bandana too! Well? How about it?\n"
	.string "Ya enjoying the Royal Royale so far?$"

WaddleDeeTown_EventScript_DededeSpeech_Text_7:
# 703 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Um, it's… you really put your all into\n"
	.string "this game, Great King! It's impressive!\p"
	.string "I'm still learning all sorts of things\n"
	.string "as I go, but I'm enjoying it.\p"
	.string "Wise Waddle Dee taught us the basics,\n"
	.string "so now we're helping him in exchange…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_8:
# 712 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Ohh, filling out the Info Cards, ain't\n"
	.string "ya? That's some real great news!\l"
	.string "Even I don't know all the Helpers yet!\p"
	.string "{SPEAKER NAME_BANDANA}That reminds me, Wise Waddle Dee said he\n"
	.string "didn't know where Helpers came from.\l"
	.string "Great King, do you…?$"

WaddleDeeTown_EventScript_DededeSpeech_Text_9:
# 727 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Nope! Nuh uh! Couldn't tell ya!\p"
	.string "Don't sweat the small details, yeah?\n"
	.string "The most important thing is having fun!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_10:
# 735 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}The road to becoming a Great King isn't\n"
	.string "easy. I don't expect most to make it.\p"
	.string "But I wanted to put something together\n"
	.string "that could be enjoyed regardless.\p"
	.string "I want my subjects to come away from\n"
	.string "this with something new…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_11:
# 746 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}So, Kirby, huh? Why, I shudder to think\n"
	.string "what HE would be like as king!\p"
	.string "I can picture it now... he'd order all\n"
	.string "of Dream Land's food be for himself!\p"
	.string "Ha ha haaaa! Whew…\p"
	.string "Well, that was entertaining enough.\n"
	.string "I'm a busy king, with places to be.\l"
	.string "You'll have to excuse me for now.\p"
	.string "Peace!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_12:
# 770 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}I hate having to say this, but…\n"
	.string "He's definitely hiding something, right?\p"
	.string "Looks like it's up to us to figure out\n"
	.string "why Dream Land is full of Helpers…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_13:
# 777 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}I'm gonna ask around town and see if I\n"
	.string "can figure anything out for myself.\p"
	.string "Kirby, why don't you check out the\n"
	.string "Waddle Dee Arena?\p"
	.string "You're better at battling than I am, so\n"
	.string "you might have a shot at victory there.\p"
	.string "If you can score some Brooches, I'm\n"
	.string "sure the Great King'll recognize you\l"
	.string "as a real contender for the crown!$"

WaddleDeeTown_EventScript_EastGuard_Text_0:
# 803 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I'm sorry, but I can't let you pass\n"
	.string "through to Vegetable Valley just yet.\p"
	.string "We're doing inspections in the area\n"
	.string "to make sure it's safe for traversal\l"
	.string "following the recent avalanche.$"

WaddleDeeTown_EventScript_EastExitBlocked_Text_0:
# 820 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Excuse me!\p"
	.string "I'm sorry, but I can't let you pass\n"
	.string "through to Vegetable Valley just yet.\p"
	.string "We're doing inspections in the area\n"
	.string "to make sure it's safe for traversal\l"
	.string "following the recent avalanche.$"
