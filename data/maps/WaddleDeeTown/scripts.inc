# 1 "data/maps/WaddleDeeTown/scripts.pory"

# 2 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_MapScripts::
# 3 "data/maps/WaddleDeeTown/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, WaddleDeeTown_OnLoad
# 4 "data/maps/WaddleDeeTown/scripts.pory"
    .byte 0
# 5 "data/maps/WaddleDeeTown/scripts.pory"

# 6 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_OnTransition:
# 7 "data/maps/WaddleDeeTown/scripts.pory"
    end
# 8 "data/maps/WaddleDeeTown/scripts.pory"

# 9 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_OnLoad:
# 10 "data/maps/WaddleDeeTown/scripts.pory"
	call_if_unset FLAG_WADDLE_DEE_TOWN_BLOCK_NORTHERN_HALF, WaddleDeeTown_EventScript_Avalanche
# 11 "data/maps/WaddleDeeTown/scripts.pory"
	end

WaddleDeeTown_EventScript_Avalanche::
# 16 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 6, 29, METATILE_Rustboro_Blockade, TRUE
# 17 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 7, 29, METATILE_Rustboro_Blockade, TRUE
# 18 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 8, 29, METATILE_Rustboro_Blockade, TRUE
# 19 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 9, 29, METATILE_Rustboro_Blockade, TRUE
# 20 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 10, 29, METATILE_Rustboro_Blockade, TRUE
# 21 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 11, 29, METATILE_Rustboro_Blockade, TRUE
# 22 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 12, 29, METATILE_Rustboro_Blockade, TRUE
# 23 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 13, 29, METATILE_Rustboro_Blockade, TRUE
# 24 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 14, 29, METATILE_Rustboro_Blockade, TRUE
# 25 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 15, 29, METATILE_Rustboro_Blockade, TRUE
# 26 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 16, 29, METATILE_Rustboro_Blockade, TRUE
# 27 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 17, 29, METATILE_Rustboro_Blockade, TRUE
# 28 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 18, 29, METATILE_Rustboro_Blockade, TRUE
# 29 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 41, 18, METATILE_Rustboro_Blockade, TRUE
# 30 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 42, 18, METATILE_Rustboro_Blockade, TRUE
# 31 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 43, 18, METATILE_Rustboro_Blockade, TRUE
# 32 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 44, 18, METATILE_Rustboro_Blockade, TRUE
# 33 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 45, 18, METATILE_Rustboro_Blockade, TRUE
# 34 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 46, 18, METATILE_Rustboro_Blockade, TRUE
# 35 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 47, 18, METATILE_Rustboro_Blockade, TRUE
# 36 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 48, 18, METATILE_Rustboro_Blockade, TRUE
# 37 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 49, 18, METATILE_Rustboro_Blockade, TRUE
# 38 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 50, 18, METATILE_Rustboro_Blockade, TRUE
# 39 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 51, 18, METATILE_Rustboro_Blockade, TRUE
# 40 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 52, 18, METATILE_Rustboro_Blockade, TRUE
# 41 "data/maps/WaddleDeeTown/scripts.pory"
	setmetatile 53, 18, METATILE_Rustboro_Blockade, TRUE
	return


WaddleDeeTown_EventScript_TownSign::
# 47 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
# 49 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_CafeSign::
# 54 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CafeSign_Text_0, MSGBOX_SIGN
# 56 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ArcadeSign::
# 61 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ArcadeSign_Text_0, MSGBOX_SIGN
# 63 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ShopSign::
# 68 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ShopSign_Text_0, MSGBOX_SIGN
# 70 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_DaycareSign::
# 75 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DaycareSign_Text_0, MSGBOX_SIGN
# 77 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_StoreSign::
# 82 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_StoreSign_Text_0, MSGBOX_SIGN
# 84 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_LabSign::
# 89 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_LabSign_Text_0, MSGBOX_SIGN
# 91 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ParkSign::
# 96 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ParkSign_Text_0, MSGBOX_SIGN
# 97 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_Fisherman::
# 102 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 103 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 104 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_BLING_BLIPPER
# 105 "data/maps/WaddleDeeTown/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_2
# 126 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_12
WaddleDeeTown_EventScript_Fisherman_8:
# 136 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_7
WaddleDeeTown_EventScript_Fisherman_5:
# 192 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_8
WaddleDeeTown_EventScript_Fisherman_1:
# 198 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_FISHERMAN_WADDLE_DEE, DIR_EAST
# 199 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_Fisherman_2:
# 108 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_0
# 116 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 117 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_1
# 118 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 119 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_2
# 121 "data/maps/WaddleDeeTown/scripts.pory"
	additem ITEM_SUPER_ROD
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_3
# 124 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_3:
# 128 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_4
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_4:
# 138 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_5
# 139 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 140 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, Common_Movement_ExclamationMark
# 141 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 142 "data/maps/WaddleDeeTown/scripts.pory"
	getobjectfacingdirection LOCALID_FISHERMAN_WADDLE_DEE, VAR_RESULT
# 143 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_18
# 151 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_19
# 159 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_20
WaddleDeeTown_EventScript_Fisherman_17:
# 167 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_6
# 181 "data/maps/WaddleDeeTown/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 10
# 182 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_7
# 188 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_SHOWN_BLING_BLIPPER
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_6:
# 136 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeTown_EventScript_Fisherman_4
	goto WaddleDeeTown_EventScript_Fisherman_5

WaddleDeeTown_EventScript_Fisherman_7:
# 136 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_SHOWN_BLING_BLIPPER, WaddleDeeTown_EventScript_Fisherman_6
	goto WaddleDeeTown_EventScript_Fisherman_5

WaddleDeeTown_EventScript_Fisherman_11:
# 126 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_3
	goto WaddleDeeTown_EventScript_Fisherman_8

WaddleDeeTown_EventScript_Fisherman_12:
# 126 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_SHOWN_BLING_BLIPPER, WaddleDeeTown_EventScript_Fisherman_11
	goto WaddleDeeTown_EventScript_Fisherman_8

WaddleDeeTown_EventScript_Fisherman_18:
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_0
# 146 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 147 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 148 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_1
# 149 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17

WaddleDeeTown_EventScript_Fisherman_19:
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_2
# 154 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 155 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 156 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_3
# 157 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17

WaddleDeeTown_EventScript_Fisherman_20:
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_4
# 162 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 163 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 164 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_5
# 165 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17


WaddleDeeTown_EventScript_ParkWaddleDee::
# 204 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 205 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 206 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ParkWaddleDee_Text_0
# 211 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CastleGuardLeft::
# 216 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 217 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 218 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CastleGuardLeft_Text_0
# 224 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CastleGuardRight::
# 229 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 230 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 231 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CastleGuardRight_Text_0
# 236 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CafeClosed::
# 241 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 242 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 243 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CafeClosed_Text_0
# 246 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_ArcadeClosed::
# 251 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 252 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 253 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ArcadeClosed_Text_0
# 256 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_StoreClosed::
# 261 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 262 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 263 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_StoreClosed_Text_0
# 268 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Gentleman::
# 273 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 274 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 275 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Gentleman_Text_0
# 281 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Socialite::
# 286 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 287 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 288 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Socialite_Text_0
# 293 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_HeadChef::
# 298 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 299 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 300 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_HeadChef_Text_0
# 305 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Astronomer::
# 310 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 311 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 312 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Astronomer_Text_0
# 317 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerLeft::
# 322 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 323 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 324 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerLeft_Text_0
# 330 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerRight::
# 335 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 336 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 337 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerRight_Text_0
# 345 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl1::
# 350 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 351 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl1_Text_0
# 353 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl2::
# 358 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 359 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl2_Text_0
# 360 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_EggDealer::
# 365 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 366 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 367 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_1
# 422 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_2
	return

WaddleDeeTown_EventScript_EggDealer_1:
# 369 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_0, MSGBOX_YESNO
# 385 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_5
# 415 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_6
	return

WaddleDeeTown_EventScript_EggDealer_2:
# 424 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_5
# 435 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_5:
# 387 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_1
# 388 "data/maps/WaddleDeeTown/scripts.pory"
	giveegg SPECIES_CHICK
# 389 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_9
# 399 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_10
# 409 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_11
	return

WaddleDeeTown_EventScript_EggDealer_6:
# 417 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_4
# 419 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_9:
# 391 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 392 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_2
# 393 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 394 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 395 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 396 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 397 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_10:
# 401 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 402 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_3
# 403 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 404 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 405 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 406 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_TransferredToPC
# 407 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_11:
# 411 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
# 412 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_Trigger_FirstCutscene::
# 441 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 442 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 443 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 444 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 445 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 446 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_Trigger_FirstCutscene_Text_0
# 447 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 448 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 1
# 449 "data/maps/WaddleDeeTown/scripts.pory"
	goto WaddleDeeTown_EventScript_DededeSpeech
	return


WaddleDeeTown_EventScript_Bandana::
# 454 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 455 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 456 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_Trigger_FirstCutscene_Text_0
# 457 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 458 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 1
# 459 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 460 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_Bandana_Movement_0
# 461 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 462 "data/maps/WaddleDeeTown/scripts.pory"
	goto WaddleDeeTown_EventScript_DededeSpeech
	return


WaddleDeeTown_EventScript_DededeSpeech::
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_0
# 468 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_0
# 469 "data/maps/WaddleDeeTown/scripts.pory"
	delay 12
# 470 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_EXIT
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	call WaddleDeeTown_EventScript_PopulateTown
# 473 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 475 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 476 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 477 "data/maps/WaddleDeeTown/scripts.pory"
	special SpawnCameraObject
# 478 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, WaddleDeeTown_EventScript_DededeSpeech_Movement_1
# 479 "data/maps/WaddleDeeTown/scripts.pory"
	fadeoutbgm 2
# 480 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 481 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
	return


WaddleDeeTown_EventScript_PopulateTown::
# 486 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 0, 26, 31, 3, DIR_EAST
# 487 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 1, 27, 31, 3, DIR_EAST
# 488 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 2, 32, 31, 3, DIR_WEST
# 489 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 3, 33, 31, 3, DIR_WEST
# 490 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 4, 26, 32, 3, DIR_EAST
# 491 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 5, 27, 32, 3, DIR_EAST
# 492 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 6, 32, 32, 3, DIR_WEST
# 493 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 7, 33, 32, 3, DIR_WEST
# 494 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 8, 26, 33, 3, DIR_EAST
# 495 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 9, 27, 33, 3, DIR_EAST
# 496 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 10, 32, 33, 3, DIR_WEST
# 497 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 11, 33, 33, 3, DIR_WEST
# 498 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 12, 27, 34, 3, DIR_NORTH
# 499 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 13, 28, 34, 3, DIR_NORTH
# 500 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 14, 29, 34, 3, DIR_NORTH
# 501 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 15, 30, 34, 3, DIR_NORTH
# 502 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 16, 31, 34, 3, DIR_NORTH
# 503 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 17, 32, 34, 3, DIR_NORTH
# 504 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 18, 28, 35, 3, DIR_NORTH
# 505 "data/maps/WaddleDeeTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_BOY_1, 19, 31, 35, 3, DIR_NORTH
	return


# 145 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_0:
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 145 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 148 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_1:
# 148 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
	step_end

# 153 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_2:
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 156 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_3:
# 156 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_left
	step_end

# 161 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_4:
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 161 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 164 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_5:
# 164 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_down
	step_end

# 442 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_Trigger_FirstCutscene_Movement_0:
# 442 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_right
	step_end

# 443 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_Trigger_FirstCutscene_Movement_1:
# 443 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_left
	step_end

# 460 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Bandana_Movement_0:
# 460 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 460 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
	step_end

# 467 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_0:
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
	step_end

# 478 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_1:
# 478 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_up
# 478 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_up
# 478 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_up
	step_end

WaddleDeeTown_EventScript_TownSign_Text_0:
# 47 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE TOWN\n"
	.string "A castle town for the king's subjects.$"

WaddleDeeTown_EventScript_CafeSign_Text_0:
# 54 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE CAFÉ\n"
	.string "Delicious Times, Precious Memories$"

WaddleDeeTown_EventScript_ArcadeSign_Text_0:
# 61 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MERRY MAGOCADE\n"
	.string "Enjoy various subgames here!$"

WaddleDeeTown_EventScript_ShopSign_Text_0:
# 68 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MACHINE SHOP\n"
	.string "Offering new wares and repairs.$"

WaddleDeeTown_EventScript_DaycareSign_Text_0:
# 75 "data/maps/WaddleDeeTown/scripts.pory"
	.string "HELPER DAY CARE\n"
	.string "We'll help raise your Helpers!$"

WaddleDeeTown_EventScript_StoreSign_Text_0:
# 82 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MAGOLOR'S DEPARTMENT STORE\n"
	.string "One-stop shop for all your item needs!$"

WaddleDeeTown_EventScript_LabSign_Text_0:
# 89 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE LIBRARY\n"
	.string "Please use your indoor voice.$"

WaddleDeeTown_EventScript_ParkSign_Text_0:
# 96 "data/maps/WaddleDeeTown/scripts.pory"
	.string "DEDEDE PARK$"

WaddleDeeTown_EventScript_Fisherman_Text_0:
# 108 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I've heard rumors of a glimmering golden\n"
	.string "fish living in this humble pond.\p"
	.string "I haven't caught a glimpse of it yet,\n"
	.string "but that's alright. Fishing is relaxing…\p"
	.string "You wanna try, Kirby? Here, I'll lend\n"
	.string "you one of my spare rods.$"

WaddleDeeTown_EventScript_Fisherman_Text_1:
# 117 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received a {COLOR RED}Fishing Rod{COLOR DARK_GRAY}!$"

WaddleDeeTown_EventScript_Fisherman_Text_2:
# 119 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby put away the Fishing Rod\n"
	.string "in the KEY ITEMS POCKET.$"

WaddleDeeTown_EventScript_Fisherman_Text_3:
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Cast your line into any body of water,\n"
	.string "and you might hook up something.$"

WaddleDeeTown_EventScript_Fisherman_Text_4:
# 128 "data/maps/WaddleDeeTown/scripts.pory"
	.string "How's fishing treating you, Kirby?\p"
	.string "Me? Well, that golden catch I'm looking\n"
	.string "for still eludes me, I'm afraid.\p"
	.string "Oh, what I'd give to see for myself\n"
	.string "if the rumors are true…$"

WaddleDeeTown_EventScript_Fisherman_Text_5:
# 138 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Huh? Is that…?$"

WaddleDeeTown_EventScript_Fisherman_Text_6:
# 167 "data/maps/WaddleDeeTown/scripts.pory"
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
# 182 "data/maps/WaddleDeeTown/scripts.pory"
	.string "It might seem like a lot, but trust me:\n"
	.string "this gold is nothing compared to the \l"
	.string "legendary Bling Blipper.\p"
	.string "You can put the treasure I've fished\n"
	.string "up to better use than I could.$"

WaddleDeeTown_EventScript_Fisherman_Text_8:
# 192 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Thank you, Kirby. Seeing that Bling\n"
	.string "Blipper has given me peace of mind.\p"
	.string "And fishing is already peaceful… I\n"
	.string "couldn't be more relaxed if I tried!$"

WaddleDeeTown_EventScript_ParkWaddleDee_Text_0:
# 206 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King made this garden for us\n"
	.string "to enjoy with his own two hands.\p"
	.string "I heard he's thinking about building a\n"
	.string "playground here too. I'd love that!$"

WaddleDeeTown_EventScript_CastleGuardLeft_Text_0:
# 218 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King doesn't visit often;\n"
	.string "this is like a vacation home to him.\p"
	.string "In exchange for maintaining the place\n"
	.string "while he's gone, we're allowed to\l"
	.string "reside within the castle walls.$"

WaddleDeeTown_EventScript_CastleGuardRight_Text_0:
# 231 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King has all sorts of castles,\n"
	.string "but his favorite is up on Mt. Dedede.\p"
	.string "Must be nice to serve as a guard there.\n"
	.string "You'd get a great view of Dream Land!$"

WaddleDeeTown_EventScript_CafeClosed_Text_0:
# 243 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Our sincerest apologies. Waddle Dee\n"
	.string "Café is currently under renovation.\l"
	.string "We hope to open our doors again soon.$"

WaddleDeeTown_EventScript_ArcadeClosed_Text_0:
# 253 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Sorry, Kirby! We're getting some new\n"
	.string "games in the arcade set up right now.\l"
	.string "Check back in a bit later!$"

WaddleDeeTown_EventScript_StoreClosed_Text_0:
# 263 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Magolor helped us build a department\n"
	.string "store. Our grand opening will be soon.\p"
	.string "We're still setting up inventory, so\n"
	.string "please wait a little longer, alright?$"

WaddleDeeTown_EventScript_Gentleman_Text_0:
# 275 "data/maps/WaddleDeeTown/scripts.pory"
	.string "First, a game shop…\n"
	.string "Then, a luxury department store…\p"
	.string "He's a skilled craftsman, but soon this\n"
	.string "place will be more Magolor than Dedede!\l"
	.string "Does no one else find this concerning?$"

WaddleDeeTown_EventScript_Socialite_Text_0:
# 288 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I think it's rather nice seeing\n"
	.string "Waddle Dee Town develop and flourish.\p"
	.string "Why would I be worried about Magolor?\n"
	.string "He's such a hardworking, honest fellow!$"

WaddleDeeTown_EventScript_HeadChef_Text_0:
# 300 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I heard the café's head chef is out\n"
	.string "on an ingredient-gathering voyage.\p"
	.string "What kind of ingredients? My tummy's\n"
	.string "getting hungry just thinking about it…$"

WaddleDeeTown_EventScript_Astronomer_Text_0:
# 312 "data/maps/WaddleDeeTown/scripts.pory"
	.string "If you're planning on challenging the\n"
	.string "Arenas, you should stop by the castle.\p"
	.string "The Waddle Dee Arena is inside there.\n"
	.string "It's the perfect place to start!$"

WaddleDeeTown_EventScript_WorkerLeft_Text_0:
# 324 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Just our luck… right as the Great King\n"
	.string "opens his tournament, our town gets hit\l"
	.string "with an avalanche of garbage blocks!\p"
	.string "It'll be a while before we can clean\n"
	.string "it all up. Sorry, kiddo.$"

WaddleDeeTown_EventScript_WorkerRight_Text_0:
# 337 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Supposedly the Great King gave out an\n"
	.string "order to restrict the town's north exit.\p"
	.string "But when he saw all these blockades, he\n"
	.string "cried out, “this is way too far!”\p"
	.string "Does he think we're the ones who\n"
	.string "caused this mess…?$"

WaddleDeeTown_EventScript_TagGirl1_Text_0:
# 351 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Heeey! Come here! I've got a heart\n"
	.string "for you!$"

WaddleDeeTown_EventScript_TagGirl2_Text_0:
# 359 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Eeek! I'm gonna be caught! Ha ha ha!$"

WaddleDeeTown_EventScript_EggDealer_Text_0:
# 369 "data/maps/WaddleDeeTown/scripts.pory"
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
# 387 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, thank you! Here you go, then!$"

WaddleDeeTown_EventScript_EggDealer_Text_2:
# 392 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received the egg.$"

WaddleDeeTown_EventScript_EggDealer_Text_3:
# 402 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received an egg in the PC.$"

WaddleDeeTown_EventScript_EggDealer_Text_4:
# 417 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, alright… I guess this egg will stay\n"
	.string "unhatched for a long time then…$"

WaddleDeeTown_EventScript_EggDealer_Text_5:
# 424 "data/maps/WaddleDeeTown/scripts.pory"
	.string "There's a lot we're still learning about\n"
	.string "how Helpers propagate.\p"
	.string "Thanks to the newly opened Day Care, we\n"
	.string "know that Helpers can hatch from eggs…\p"
	.string "But there haven't been any signs of\n"
	.string "eggs from outside this town.\p"
	.string "It begs the question; do the original\n"
	.string "Helpers come from something else?$"

WaddleDeeTown_Trigger_FirstCutscene_Text_0:
# 446 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}We're just in time, Kirby. Come here!$"
