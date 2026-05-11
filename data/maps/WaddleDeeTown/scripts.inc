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
# 320 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerLeft::
# 325 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 326 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 327 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerLeft_Text_0
# 333 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerRight::
# 338 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 339 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 340 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerRight_Text_0
# 348 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl1::
# 353 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 354 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl1_Text_0
# 356 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl2::
# 361 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 362 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl2_Text_0
# 363 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_EggDealer::
# 368 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 369 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 370 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_1
# 425 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_2
	return

WaddleDeeTown_EventScript_EggDealer_1:
# 372 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_0, MSGBOX_YESNO
# 388 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_5
# 418 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_6
	return

WaddleDeeTown_EventScript_EggDealer_2:
# 427 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_5
# 438 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_5:
# 390 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_1
# 391 "data/maps/WaddleDeeTown/scripts.pory"
	giveegg SPECIES_CHICK
# 392 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_9
# 402 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_10
# 412 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_11
	return

WaddleDeeTown_EventScript_EggDealer_6:
# 420 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_4
# 422 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_9:
# 394 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 395 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_2
# 396 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 397 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 398 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 399 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 400 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_10:
# 404 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 405 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_3
# 406 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 407 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 408 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 409 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_TransferredToPC
# 410 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_11:
# 414 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
# 415 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_Trigger_FirstCutscene::
# 444 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 445 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 446 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 447 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 448 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 449 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_Trigger_FirstCutscene_Text_0
# 451 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 452 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 1
# 453 "data/maps/WaddleDeeTown/scripts.pory"
	goto WaddleDeeTown_EventScript_DededeSpeech
	return


WaddleDeeTown_EventScript_Bandana::
# 458 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 459 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 460 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_Trigger_FirstCutscene_Text_0
# 462 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 463 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_WADDLE_DEE_TOWN_STATE, 1
# 464 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 465 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_Bandana_Movement_0
# 466 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 467 "data/maps/WaddleDeeTown/scripts.pory"
	goto WaddleDeeTown_EventScript_DededeSpeech
	return


WaddleDeeTown_EventScript_DededeSpeech::
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_0
# 473 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_0
# 474 "data/maps/WaddleDeeTown/scripts.pory"
	delay 12
# 480 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 481 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 482 "data/maps/WaddleDeeTown/scripts.pory"
	special SpawnCameraObject
# 483 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, WaddleDeeTown_EventScript_DededeSpeech_Movement_1
# 484 "data/maps/WaddleDeeTown/scripts.pory"
	fadeoutbgm 2
# 485 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 486 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 487 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 488 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 489 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_0
# 494 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 495 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_2
# 496 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 497 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_1
# 511 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 512 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_3
# 513 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 514 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_2
# 515 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 516 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_APPLAUSE
# 518 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_2, WaddleDeeTown_EventScript_DededeSpeech_Movement_4
# 519 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_5
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_8, WaddleDeeTown_EventScript_DededeSpeech_Movement_6
# 521 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_1, DIR_WEST
# 522 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_4, DIR_SOUTH
# 523 "data/maps/WaddleDeeTown/scripts.pory"
	delay 6
# 524 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_5, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 525 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_6, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 526 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_Fisherman_Movement_1
# 527 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_EAST
# 528 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 529 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_SOUTH
# 530 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_4, DIR_WEST
# 531 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 532 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_1, DIR_EAST
# 533 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_Fisherman_Movement_1
# 534 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_WEST
# 535 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 536 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_7, DIR_NORTH
# 537 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_5, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 538 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_6, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 539 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 540 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_Fisherman_Movement_1
# 541 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_4, DIR_NORTH
# 542 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 543 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_CROWD_1, DIR_NORTH
# 544 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 545 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_DededeSpeech_Text_3
# 547 "data/maps/WaddleDeeTown/scripts.pory"
	delay 140
# 548 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_1, WaddleDeeTown_EventScript_DededeSpeech_Movement_8
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_2, WaddleDeeTown_EventScript_DededeSpeech_Movement_9
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_5, WaddleDeeTown_EventScript_DededeSpeech_Movement_10
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_6, WaddleDeeTown_EventScript_DededeSpeech_Movement_11
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_9, WaddleDeeTown_EventScript_DededeSpeech_Movement_12
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_8, WaddleDeeTown_EventScript_DededeSpeech_Movement_13
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_7, WaddleDeeTown_EventScript_DededeSpeech_Movement_14
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_10, WaddleDeeTown_EventScript_DededeSpeech_Movement_15
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_4, WaddleDeeTown_EventScript_DededeSpeech_Movement_16
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_17
# 559 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 560 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 561 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_18
# 562 "data/maps/WaddleDeeTown/scripts.pory"
	waitse
# 563 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 564 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 565 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 566 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 567 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 568 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 569 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_19
# 570 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 571 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, Common_Movement_ExclamationMark
# 572 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 573 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 574 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_CROWD_3, WaddleDeeTown_EventScript_DededeSpeech_Movement_20
# 576 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 577 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, WaddleDeeTown_EventScript_DededeSpeech_Movement_21
# 578 "data/maps/WaddleDeeTown/scripts.pory"
	fadeoutbgm 1
# 579 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 580 "data/maps/WaddleDeeTown/scripts.pory"
	delay 15
# 581 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 582 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 583 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 584 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_HIDE_CROWD_WADDLE_DEE_TOWN
# 585 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_1
# 586 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_2
# 587 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_3
# 588 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_4
# 589 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_5
# 590 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_6
# 591 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_7
# 592 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_8
# 593 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_9
# 594 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_CROWD_10
# 595 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 596 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_4
# 601 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_22
# 602 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_5
# 604 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 605 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_7
# 606 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 607 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 608 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, Common_Movement_ExclamationMark
# 609 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 610 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 611 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 612 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_6
# 616 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_23
# 617 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_7
# 625 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_24
# 626 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_8
# 633 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 634 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_Fisherman_Movement_5
# 635 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 636 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8004, 2
# 637 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8005, 0
# 638 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8006, 2
# 639 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8007, 3
# 640 "data/maps/WaddleDeeTown/scripts.pory"
	special ShakeCamera
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_9
# 645 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 646 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_25
# 647 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 648 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 649 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_10
# 657 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 658 "data/maps/WaddleDeeTown/scripts.pory"
	delay 20
# 659 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_19
# 660 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_11
# 673 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 674 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_26
# 675 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_27
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_KING_DEDEDE, WaddleDeeTown_EventScript_DededeSpeech_Movement_28
# 677 "data/maps/WaddleDeeTown/scripts.pory"
	fadeoutbgm 1
# 678 "data/maps/WaddleDeeTown/scripts.pory"
	delay 30
# 679 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_EventScript_DededeSpeech_Movement_29
# 680 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_30
# 681 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 682 "data/maps/WaddleDeeTown/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 683 "data/maps/WaddleDeeTown/scripts.pory"
	special RemoveCameraObject
# 684 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_12
# 689 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_PLAYER, WaddleDeeTown_Trigger_FirstCutscene_Movement_0
# 690 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_Trigger_FirstCutscene_Movement_1
# 691 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DededeSpeech_Text_13
# 703 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_TOWN_BWD, WaddleDeeTown_EventScript_DededeSpeech_Movement_31
# 705 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 706 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_HIDE_DEDEDE_WADDLE_DEE_TOWN
# 707 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_HIDE_BWD_WADDLE_DEE_TOWN
# 708 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_TOWN_BWD
# 709 "data/maps/WaddleDeeTown/scripts.pory"
	removeobject LOCALID_TOWN_KING_DEDEDE
# 710 "data/maps/WaddleDeeTown/scripts.pory"
	release
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

# 445 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_Trigger_FirstCutscene_Movement_0:
# 445 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_right
	step_end

# 446 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_Trigger_FirstCutscene_Movement_1:
# 446 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_left
	step_end

# 465 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Bandana_Movement_0:
# 465 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 465 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
	step_end

# 472 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_0:
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 472 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
	step_end

# 483 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_1:
# 483 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_up
# 483 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_up
	step_end

# 495 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_2:
# 495 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_right
# 495 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_down
	step_end

# 512 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_3:
# 512 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_left
# 512 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_down
	step_end

# 518 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_4:
# 518 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 518 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 518 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 518 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 518 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
# 518 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
	step_end

# 519 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_5:
# 519 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 519 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 519 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 519 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 519 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
	step_end

# 520 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_6:
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 520 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
	step_end

# 537 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_7:
# 537 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
	step_end

# 549 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_8:
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 549 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 550 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_9:
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 550 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 551 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_10:
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 551 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 552 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_11:
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 552 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 553 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_12:
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 553 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 554 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_13:
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 554 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
	step_end

# 555 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_14:
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 555 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
	step_end

# 556 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_15:
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 556 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
	step_end

# 557 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_16:
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 557 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
	step_end

# 558 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_17:
# 558 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_right
	step_end

# 561 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_18:
# 561 "data/maps/WaddleDeeTown/scripts.pory"
	jump_left
	step_end

# 569 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_19:
# 569 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_down
	step_end

# 575 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_20:
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_right
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
# 575 "data/maps/WaddleDeeTown/scripts.pory"
	walk_fast_down
	step_end

# 577 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_21:
# 577 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_down
# 577 "data/maps/WaddleDeeTown/scripts.pory"
	walk_slow_down
	step_end

# 601 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_22:
# 601 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 601 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 616 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_23:
# 616 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
# 616 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_up
	step_end

# 625 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_24:
# 625 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_down
	step_end

# 646 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_25:
# 646 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_slow_up
	step_end

# 674 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_26:
# 674 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 674 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 674 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_right
	step_end

# 675 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_27:
# 675 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 675 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 675 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_left
	step_end

# 676 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_28:
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
# 676 "data/maps/WaddleDeeTown/scripts.pory"
	walk_down
	step_end

# 679 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_29:
# 679 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 679 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 679 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_down
	step_end

# 680 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_30:
# 680 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 680 "data/maps/WaddleDeeTown/scripts.pory"
	walk_left
# 680 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_down
	step_end

# 704 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_DededeSpeech_Movement_31:
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_up
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
# 704 "data/maps/WaddleDeeTown/scripts.pory"
	walk_right
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
	.string "So the Waddle Dee Arena was built in the\n"
	.string "back room of the town's castle, huh?\p"
	.string "It was blocked off before. Last I saw,\n"
	.string "there was a strange teleporter inside.\p"
	.string "Do you think it had to be moved\n"
	.string "elsewhere to make way for the Arena?$"

WaddleDeeTown_EventScript_WorkerLeft_Text_0:
# 327 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Just our luck… right as the Great King\n"
	.string "opens his tournament, our town gets hit\l"
	.string "with an avalanche of garbage blocks!\p"
	.string "It'll be a while before we can clean\n"
	.string "it all up. Sorry, kiddo.$"

WaddleDeeTown_EventScript_WorkerRight_Text_0:
# 340 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Supposedly the Great King gave out an\n"
	.string "order to restrict the town's north exit.\p"
	.string "But when he saw all these blockades, he\n"
	.string "cried out, “this is way too far!”\p"
	.string "Does he think we're the ones who\n"
	.string "caused this mess…?$"

WaddleDeeTown_EventScript_TagGirl1_Text_0:
# 354 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Heeey! Come here! I've got a heart\n"
	.string "for you!$"

WaddleDeeTown_EventScript_TagGirl2_Text_0:
# 362 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Eeek! I'm gonna be caught! Ha ha ha!$"

WaddleDeeTown_EventScript_EggDealer_Text_0:
# 372 "data/maps/WaddleDeeTown/scripts.pory"
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
# 390 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, thank you! Here you go, then!$"

WaddleDeeTown_EventScript_EggDealer_Text_2:
# 395 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received the egg.$"

WaddleDeeTown_EventScript_EggDealer_Text_3:
# 405 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received an egg in the PC.$"

WaddleDeeTown_EventScript_EggDealer_Text_4:
# 420 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, alright… I guess this egg will stay\n"
	.string "unhatched for a long time then…$"

WaddleDeeTown_EventScript_EggDealer_Text_5:
# 427 "data/maps/WaddleDeeTown/scripts.pory"
	.string "There's a lot we're still learning about\n"
	.string "how Helpers propagate.\p"
	.string "Thanks to the newly opened Day Care, we\n"
	.string "know that Helpers can hatch from eggs…\p"
	.string "But there haven't been any signs of\n"
	.string "eggs from outside this town.\p"
	.string "It begs the question; do the original\n"
	.string "Helpers come from something else?$"

WaddleDeeTown_Trigger_FirstCutscene_Text_0:
# 449 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}The Great King's up ahead, Kirby.\n"
	.string "Let's hurry!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_0:
# 489 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Looks like some of you have already got\n"
	.string "your own Helpers! Not bad, not bad!\p"
	.string "Now, I can't really stop 'ya if you'd\n"
	.string "rather keep 'em as companions…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_1:
# 497 "data/maps/WaddleDeeTown/scripts.pory"
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
# 514 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Now then, you're all dismissed!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_3:
# 545 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Yes, Great King!\n"
	.string "Thank you, Great King!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_4:
# 596 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Ah, looks like we only caught the end of\n"
	.string "the Great King's speech…\p"
	.string "I wonder how tough the challengers at\n"
	.string "the Arena here will be?$"

WaddleDeeTown_EventScript_DededeSpeech_Text_5:
# 602 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Well, well, well!\n"
	.string "If it isn't my favorite lil' nuisance!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_6:
# 612 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}G-Great King!\p"
	.string "{SPEAKER NAME_DEDEDE}And ol' Bandana too! Well? How about it?\n"
	.string "Ya enjoying the Royal Royale so far?$"

WaddleDeeTown_EventScript_DededeSpeech_Text_7:
# 617 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}Um, it's… you really put your all into\n"
	.string "this game, Great King! It's impressive!\p"
	.string "I'm still learning all sorts of things\n"
	.string "as I go, but I'm enjoying it.\p"
	.string "Wise Waddle Dee taught us the basics,\n"
	.string "so now we're helping him in exchange…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_8:
# 626 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Ohh, filling out the Info Cards, ain't\n"
	.string "ya? That's some real great news!\l"
	.string "Even I don't know all the Helpers yet!\p"
	.string "{SPEAKER NAME_BANDANA}That reminds me, Wise Waddle Dee said he\n"
	.string "didn't know where Helpers came from.\l"
	.string "Great King, do you…?$"

WaddleDeeTown_EventScript_DededeSpeech_Text_9:
# 641 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}Nope! Nuh uh! Couldn't tell ya!\p"
	.string "Don't sweat the small details, yeah?\n"
	.string "The most important thing is having fun!$"

WaddleDeeTown_EventScript_DededeSpeech_Text_10:
# 649 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_DEDEDE}The road to becoming a Great King isn't\n"
	.string "easy. I don't expect most to make it.\p"
	.string "But I wanted to put something together\n"
	.string "that could be enjoyed regardless.\p"
	.string "I want my subjects to come away from\n"
	.string "this with something new…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_11:
# 660 "data/maps/WaddleDeeTown/scripts.pory"
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
# 684 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}I hate having to say this, but…\n"
	.string "He's definitely hiding something, right?\p"
	.string "Looks like it's up to us to figure out\n"
	.string "why Dream Land is full of Helpers…$"

WaddleDeeTown_EventScript_DededeSpeech_Text_13:
# 691 "data/maps/WaddleDeeTown/scripts.pory"
	.string "{SPEAKER NAME_BANDANA}I'm gonna ask around town and see if I\n"
	.string "can figure anything out for myself.\p"
	.string "Kirby, why don't you check out the\n"
	.string "Waddle Dee Arena?\p"
	.string "You're better at battling than I am, so\n"
	.string "you might have a shot at victory there.\p"
	.string "If you can score some Brooches, I'm\n"
	.string "sure the Great King'll recognize you\l"
	.string "as a real contender for the crown!$"
