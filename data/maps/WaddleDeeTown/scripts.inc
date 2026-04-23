# 1 "data/maps/WaddleDeeTown/scripts.pory"

# 2 "data/maps/WaddleDeeTown/scripts.pory"
    WaddleDeeTown_MapScripts::
# 3 "data/maps/WaddleDeeTown/scripts.pory"
	.byte 0

WaddleDeeTown_EventScript_TownSign::
# 8 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
# 10 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_CafeSign::
# 15 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CafeSign_Text_0, MSGBOX_SIGN
# 17 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ArcadeSign::
# 22 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ArcadeSign_Text_0, MSGBOX_SIGN
# 24 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ShopSign::
# 29 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ShopSign_Text_0, MSGBOX_SIGN
# 31 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_DaycareSign::
# 36 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_DaycareSign_Text_0, MSGBOX_SIGN
# 38 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_StoreSign::
# 43 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_StoreSign_Text_0, MSGBOX_SIGN
# 45 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_LabSign::
# 50 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_LabSign_Text_0, MSGBOX_SIGN
# 52 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_ParkSign::
# 57 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ParkSign_Text_0, MSGBOX_SIGN
# 58 "data/maps/WaddleDeeTown/scripts.pory"
	closemessage
	return


WaddleDeeTown_EventScript_Fisherman::
# 63 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 64 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 65 "data/maps/WaddleDeeTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_BLING_BLIPPER
# 66 "data/maps/WaddleDeeTown/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 67 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_2
# 87 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_12
WaddleDeeTown_EventScript_Fisherman_8:
# 97 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, WaddleDeeTown_EventScript_Fisherman_7
WaddleDeeTown_EventScript_Fisherman_5:
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_8
WaddleDeeTown_EventScript_Fisherman_1:
# 159 "data/maps/WaddleDeeTown/scripts.pory"
	turnobject LOCALID_FISHERMAN_WADDLE_DEE, DIR_EAST
# 160 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_Fisherman_2:
# 69 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_0
# 77 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 78 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_1
# 79 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 80 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_2
# 82 "data/maps/WaddleDeeTown/scripts.pory"
	additem ITEM_SUPER_ROD
# 83 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_3
# 85 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_3:
# 89 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_4
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_4:
# 99 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_5
# 100 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_PIN
# 101 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, Common_Movement_ExclamationMark
# 102 "data/maps/WaddleDeeTown/scripts.pory"
	delay 60
# 103 "data/maps/WaddleDeeTown/scripts.pory"
	getobjectfacingdirection LOCALID_FISHERMAN_WADDLE_DEE, VAR_RESULT
# 104 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_18
# 112 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_19
# 120 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_20
WaddleDeeTown_EventScript_Fisherman_17:
# 128 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_6
# 142 "data/maps/WaddleDeeTown/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 10
# 143 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Fisherman_Text_7
# 149 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_SHOWN_BLING_BLIPPER
	goto WaddleDeeTown_EventScript_Fisherman_1

WaddleDeeTown_EventScript_Fisherman_6:
# 97 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WaddleDeeTown_EventScript_Fisherman_4
	goto WaddleDeeTown_EventScript_Fisherman_5

WaddleDeeTown_EventScript_Fisherman_7:
# 97 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_SHOWN_BLING_BLIPPER, WaddleDeeTown_EventScript_Fisherman_6
	goto WaddleDeeTown_EventScript_Fisherman_5

WaddleDeeTown_EventScript_Fisherman_11:
# 87 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WaddleDeeTown_EventScript_Fisherman_3
	goto WaddleDeeTown_EventScript_Fisherman_8

WaddleDeeTown_EventScript_Fisherman_12:
# 87 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_SHOWN_BLING_BLIPPER, WaddleDeeTown_EventScript_Fisherman_11
	goto WaddleDeeTown_EventScript_Fisherman_8

WaddleDeeTown_EventScript_Fisherman_18:
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_0
# 107 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 108 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 109 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_1
# 110 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17

WaddleDeeTown_EventScript_Fisherman_19:
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_2
# 115 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 116 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 117 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_3
# 118 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17

WaddleDeeTown_EventScript_Fisherman_20:
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_4
# 123 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
# 124 "data/maps/WaddleDeeTown/scripts.pory"
	playse SE_LEDGE
# 125 "data/maps/WaddleDeeTown/scripts.pory"
	applymovement LOCALID_FISHERMAN_WADDLE_DEE, WaddleDeeTown_EventScript_Fisherman_Movement_5
# 126 "data/maps/WaddleDeeTown/scripts.pory"
	waitmovement
	goto WaddleDeeTown_EventScript_Fisherman_17


WaddleDeeTown_EventScript_ParkWaddleDee::
# 165 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 166 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 167 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ParkWaddleDee_Text_0
# 172 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CastleGuardLeft::
# 177 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 178 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 179 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CastleGuardLeft_Text_0
# 185 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CastleGuardRight::
# 190 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 191 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 192 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CastleGuardRight_Text_0
# 197 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_CafeClosed::
# 202 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 203 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 204 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_CafeClosed_Text_0
# 207 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_ArcadeClosed::
# 212 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 213 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 214 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_ArcadeClosed_Text_0
# 217 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_StoreClosed::
# 222 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 223 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 224 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_StoreClosed_Text_0
# 229 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Gentleman::
# 234 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 235 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 236 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Gentleman_Text_0
# 242 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Socialite::
# 247 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 248 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 249 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Socialite_Text_0
# 254 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_HeadChef::
# 259 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 260 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 261 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_HeadChef_Text_0
# 266 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_Astronomer::
# 271 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 272 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 273 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_Astronomer_Text_0
# 278 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerLeft::
# 283 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 284 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 285 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerLeft_Text_0
# 291 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_WorkerRight::
# 296 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 297 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 298 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_WorkerRight_Text_0
# 306 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl1::
# 311 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 312 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl1_Text_0
# 314 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_TagGirl2::
# 319 "data/maps/WaddleDeeTown/scripts.pory"
	lockall
# 320 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_TagGirl2_Text_0
# 321 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


WaddleDeeTown_EventScript_EggDealer::
# 326 "data/maps/WaddleDeeTown/scripts.pory"
	lock
# 327 "data/maps/WaddleDeeTown/scripts.pory"
	faceplayer
# 328 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_1
# 383 "data/maps/WaddleDeeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHICK_EGG, WaddleDeeTown_EventScript_EggDealer_2
	return

WaddleDeeTown_EventScript_EggDealer_1:
# 330 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_0, MSGBOX_YESNO
# 346 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_5
# 376 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_6
	return

WaddleDeeTown_EventScript_EggDealer_2:
# 385 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_5
# 396 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_5:
# 348 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_1
# 349 "data/maps/WaddleDeeTown/scripts.pory"
	giveegg SPECIES_CHICK
# 350 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_9
# 360 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_10
# 370 "data/maps/WaddleDeeTown/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq WaddleDeeTown_EventScript_EggDealer_11
	return

WaddleDeeTown_EventScript_EggDealer_6:
# 378 "data/maps/WaddleDeeTown/scripts.pory"
	msgbox WaddleDeeTown_EventScript_EggDealer_Text_4
# 380 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_9:
# 352 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 353 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_2
# 354 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 355 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 356 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 357 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 358 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_10:
# 362 "data/maps/WaddleDeeTown/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 363 "data/maps/WaddleDeeTown/scripts.pory"
	message WaddleDeeTown_EventScript_EggDealer_Text_3
# 364 "data/maps/WaddleDeeTown/scripts.pory"
	waitmessage
# 365 "data/maps/WaddleDeeTown/scripts.pory"
	waitfanfare
# 366 "data/maps/WaddleDeeTown/scripts.pory"
	setflag FLAG_RECEIVED_CHICK_EGG
# 367 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_TransferredToPC
# 368 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return

WaddleDeeTown_EventScript_EggDealer_11:
# 372 "data/maps/WaddleDeeTown/scripts.pory"
	call Common_EventScript_NoMoreRoomForPokemon
# 373 "data/maps/WaddleDeeTown/scripts.pory"
	release
	return


# 106 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_0:
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_up
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
# 106 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 109 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_1:
# 109 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_up
	step_end

# 114 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_2:
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_left
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
# 114 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 117 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_3:
# 117 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_left
	step_end

# 122 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_4:
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_fast_down
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/WaddleDeeTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 125 "data/maps/WaddleDeeTown/scripts.pory"
WaddleDeeTown_EventScript_Fisherman_Movement_5:
# 125 "data/maps/WaddleDeeTown/scripts.pory"
	jump_in_place_down
	step_end

WaddleDeeTown_EventScript_TownSign_Text_0:
# 8 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE TOWN\n"
	.string "A castle town for the king's subjects.$"

WaddleDeeTown_EventScript_CafeSign_Text_0:
# 15 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE CAFÉ\n"
	.string "Delicious Times, Precious Memories$"

WaddleDeeTown_EventScript_ArcadeSign_Text_0:
# 22 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MERRY MAGOCADE\n"
	.string "Enjoy various subgames here!$"

WaddleDeeTown_EventScript_ShopSign_Text_0:
# 29 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MACHINE SHOP\n"
	.string "Offering new wares and repairs.$"

WaddleDeeTown_EventScript_DaycareSign_Text_0:
# 36 "data/maps/WaddleDeeTown/scripts.pory"
	.string "HELPER DAY CARE\n"
	.string "We'll help raise your Helpers!$"

WaddleDeeTown_EventScript_StoreSign_Text_0:
# 43 "data/maps/WaddleDeeTown/scripts.pory"
	.string "MAGOLOR'S DEPARTMENT STORE\n"
	.string "One-stop shop for all your item needs!$"

WaddleDeeTown_EventScript_LabSign_Text_0:
# 50 "data/maps/WaddleDeeTown/scripts.pory"
	.string "WADDLE DEE LIBRARY\n"
	.string "Please use your indoor voice.$"

WaddleDeeTown_EventScript_ParkSign_Text_0:
# 57 "data/maps/WaddleDeeTown/scripts.pory"
	.string "DEDEDE PARK$"

WaddleDeeTown_EventScript_Fisherman_Text_0:
# 69 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I've heard rumors of a glimmering golden\n"
	.string "fish living in this humble pond.\p"
	.string "I haven't caught a glimpse of it yet,\n"
	.string "but that's alright. Fishing is relaxing…\p"
	.string "You wanna try, Kirby? Here, I'll lend\n"
	.string "you one of my spare rods.$"

WaddleDeeTown_EventScript_Fisherman_Text_1:
# 78 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received a {COLOR RED}Fishing Rod{COLOR DARK_GRAY}!$"

WaddleDeeTown_EventScript_Fisherman_Text_2:
# 80 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby put away the Fishing Rod\n"
	.string "in the KEY ITEMS POCKET.$"

WaddleDeeTown_EventScript_Fisherman_Text_3:
# 83 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Cast your line into any body of water,\n"
	.string "and you might hook up something.$"

WaddleDeeTown_EventScript_Fisherman_Text_4:
# 89 "data/maps/WaddleDeeTown/scripts.pory"
	.string "How's fishing treating you, Kirby?\p"
	.string "Me? Well, that golden catch I'm looking\n"
	.string "for still eludes me, I'm afraid.\p"
	.string "Oh, what I'd give to see for myself\n"
	.string "if the rumors are true…$"

WaddleDeeTown_EventScript_Fisherman_Text_5:
# 99 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Huh? Is that…?$"

WaddleDeeTown_EventScript_Fisherman_Text_6:
# 128 "data/maps/WaddleDeeTown/scripts.pory"
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
# 143 "data/maps/WaddleDeeTown/scripts.pory"
	.string "It might seem like a lot, but trust me:\n"
	.string "this gold is nothing compared to the \l"
	.string "legendary Bling Blipper.\p"
	.string "You can put the treasure I've fished\n"
	.string "up to better use than I could.$"

WaddleDeeTown_EventScript_Fisherman_Text_8:
# 153 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Thank you, Kirby. Seeing that Bling\n"
	.string "Blipper has given me peace of mind.\p"
	.string "And fishing is already peaceful… I\n"
	.string "couldn't be more relaxed if I tried!$"

WaddleDeeTown_EventScript_ParkWaddleDee_Text_0:
# 167 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King made this garden for us\n"
	.string "to enjoy with his own two hands.\p"
	.string "I heard he's thinking about building a\n"
	.string "playground here too. I'd love that!$"

WaddleDeeTown_EventScript_CastleGuardLeft_Text_0:
# 179 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King doesn't visit often;\n"
	.string "this is like a vacation home to him.\p"
	.string "In exchange for maintaining the place\n"
	.string "while he's gone, we're allowed to\l"
	.string "reside within the castle walls.$"

WaddleDeeTown_EventScript_CastleGuardRight_Text_0:
# 192 "data/maps/WaddleDeeTown/scripts.pory"
	.string "The Great King has all sorts of castles,\n"
	.string "but his favorite is up on Mt. Dedede.\p"
	.string "Must be nice to serve as a guard there.\n"
	.string "You'd get a great view of Dream Land!$"

WaddleDeeTown_EventScript_CafeClosed_Text_0:
# 204 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Our sincerest apologies. Waddle Dee\n"
	.string "Café is currently under renovation.\l"
	.string "We hope to open our doors again soon.$"

WaddleDeeTown_EventScript_ArcadeClosed_Text_0:
# 214 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Sorry, Kirby! We're getting some new\n"
	.string "games in the arcade set up right now.\l"
	.string "Check back in a bit later!$"

WaddleDeeTown_EventScript_StoreClosed_Text_0:
# 224 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Magolor helped us build a department\n"
	.string "store. Our grand opening will be soon.\p"
	.string "We're still setting up inventory, so\n"
	.string "please wait a little longer, alright?$"

WaddleDeeTown_EventScript_Gentleman_Text_0:
# 236 "data/maps/WaddleDeeTown/scripts.pory"
	.string "First, a game shop…\n"
	.string "Then, a luxury department store…\p"
	.string "He's a skilled craftsman, but soon this\n"
	.string "place will be more Magolor than Dedede!\l"
	.string "Does noone else find this concerning?$"

WaddleDeeTown_EventScript_Socialite_Text_0:
# 249 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I think it's rather nice seeing\n"
	.string "Waddle Dee Town develop and flourish.\p"
	.string "Why would I be worried about Magolor?\n"
	.string "He's such a hardworking, honest fellow!$"

WaddleDeeTown_EventScript_HeadChef_Text_0:
# 261 "data/maps/WaddleDeeTown/scripts.pory"
	.string "I heard the café's head chef is out\n"
	.string "on an ingredient-gathering voyage.\p"
	.string "What kind of ingredients? My tummy's\n"
	.string "getting hungry just thinking about it…$"

WaddleDeeTown_EventScript_Astronomer_Text_0:
# 273 "data/maps/WaddleDeeTown/scripts.pory"
	.string "If you're planning on challenging the\n"
	.string "Arenas, you should stop by the castle.\p"
	.string "The Waddle Dee Arena is inside there.\n"
	.string "It's the perfect place to start!$"

WaddleDeeTown_EventScript_WorkerLeft_Text_0:
# 285 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Just our luck… right as the Great King\n"
	.string "opens his tournament, our town gets hit\l"
	.string "with an avalanche of garbage blocks!\p"
	.string "It'll be a while before we can clean\n"
	.string "it all up. Sorry, kiddo.$"

WaddleDeeTown_EventScript_WorkerRight_Text_0:
# 298 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Supposedly the Great King gave out an\n"
	.string "order to restrict the town's north exit.\p"
	.string "But when he saw all these blockades, he\n"
	.string "cried out, “this is way too far!”\p"
	.string "Does he think we're the ones who\n"
	.string "caused this mess…?$"

WaddleDeeTown_EventScript_TagGirl1_Text_0:
# 312 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Heeey! Come here! I've got a heart\n"
	.string "for you!$"

WaddleDeeTown_EventScript_TagGirl2_Text_0:
# 320 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Eeek! I'm gonna be caught! Ha ha ha!$"

WaddleDeeTown_EventScript_EggDealer_Text_0:
# 330 "data/maps/WaddleDeeTown/scripts.pory"
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
# 348 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, thank you! Here you go, then!$"

WaddleDeeTown_EventScript_EggDealer_Text_2:
# 353 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received the egg.$"

WaddleDeeTown_EventScript_EggDealer_Text_3:
# 363 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Kirby received an egg in the PC.$"

WaddleDeeTown_EventScript_EggDealer_Text_4:
# 378 "data/maps/WaddleDeeTown/scripts.pory"
	.string "Oh, alright… I guess this egg will stay\n"
	.string "unhatched for a long time then…$"

WaddleDeeTown_EventScript_EggDealer_Text_5:
# 385 "data/maps/WaddleDeeTown/scripts.pory"
	.string "There's a lot we're still learning about\n"
	.string "how Helpers propagate.\p"
	.string "Thanks to the newly opened Day Care, we\n"
	.string "know that Helpers can hatch from eggs…\p"
	.string "But there haven't been any signs of\n"
	.string "eggs from outside this town.\p"
	.string "It begs the question; do the original\n"
	.string "Helpers come from something else?$"
