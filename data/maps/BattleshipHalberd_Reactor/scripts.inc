# 1 "data/maps/BattleshipHalberd_Reactor/scripts.pory"

# 2 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
BattleshipHalberd_Reactor_MapScripts::
# 3 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.byte 0

BattleshipHalberd_Reactor_EventScript_Wheelie::
# 8 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lock
# 9 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	faceplayer
# 10 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playmoncry SPECIES_WHEELIE_BIKE, CRY_MODE_NORMAL
# 11 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_Wheelie_Text_0, MSGBOX_YESNO
# 16 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_1
# 54 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	release
	return

BattleshipHalberd_Reactor_EventScript_Wheelie_1:
# 18 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WHEELIE_BIKE
# 19 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	givemon SPECIES_WHEELIE_BIKE, 24
# 20 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_5
BattleshipHalberd_Reactor_EventScript_Wheelie_4:
# 34 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_8
BattleshipHalberd_Reactor_EventScript_Wheelie_7:
# 48 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setflag FLAG_OBTAINED_WHEELIE
# 49 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	removeobject LOCALID_WHEELIE_BIKE
# 50 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	release
	return

BattleshipHalberd_Reactor_EventScript_Wheelie_5:
# 22 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playfanfare MUS_EVOLVED
# 23 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	message BattleshipHalberd_Reactor_EventScript_Wheelie_Text_1
# 24 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitmessage
# 25 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitfanfare
# 26 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_Wheelie_Text_2, MSGBOX_YESNO
# 28 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_10
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_4

BattleshipHalberd_Reactor_EventScript_Wheelie_8:
# 36 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playfanfare MUS_EVOLVED
# 37 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	message BattleshipHalberd_Reactor_EventScript_Wheelie_Text_1
# 38 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitmessage
# 39 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitfanfare
# 40 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_EventScript_Wheelie_Text_2, MSGBOX_YESNO
# 42 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_EventScript_Wheelie_13
BattleshipHalberd_Reactor_EventScript_Wheelie_12:
# 46 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_7

BattleshipHalberd_Reactor_EventScript_Wheelie_10:
# 30 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 31 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_4

BattleshipHalberd_Reactor_EventScript_Wheelie_13:
# 44 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto BattleshipHalberd_Reactor_EventScript_Wheelie_12


BattleshipHalberd_Reactor_EventScript_Trainer::
# 60 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, BattleshipHalberd_Reactor_Text_TrainerIntro, BattleshipHalberd_Reactor_Text_TrainerDefeated
# 61 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_Text_TrainerPost, MSGBOX_AUTOCLOSE
	return


BattleshipHalberd_Reactor_MiddleSwitch::
# 94 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	lockall
# 95 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_MiddleSwitch_Text_0, MSGBOX_YESNO
# 96 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleshipHalberd_Reactor_MiddleSwitch_1
# 118 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return

BattleshipHalberd_Reactor_MiddleSwitch_1:
# 98 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_MiddleSwitch_Text_1
# 99 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	closemessage
# 100 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 9, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 101 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 10, 12, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 102 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 9, 13, METATILE_MauvilleGym_BattleshipHalberd_Reactor_LeftTile, FALSE
# 103 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setmetatile 10, 13, METATILE_MauvilleGym_BattleshipHalberd_Reactor_RightTile, FALSE
# 104 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	playse SE_BANG
# 106 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8004, 2
# 107 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8005, 0
# 108 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8006, 2
# 109 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	setvar VAR_0x8007, 3
# 110 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	special ShakeCamera
# 111 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	waitse
# 112 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	delay 12
# 113 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	msgbox BattleshipHalberd_Reactor_MiddleSwitch_Text_2
# 114 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	releaseall
	return


BattleshipHalberd_Reactor_EventScript_Wheelie_Text_0:
# 11 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "It's a Wheelie Bike. Seems like it\n"
	.string "escaped from the power generator…\p"
	.string "The Wheelie looks at you expectantly.\n"
	.string "Will you let it join your party?$"

BattleshipHalberd_Reactor_EventScript_Wheelie_Text_1:
# 23 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "You obtained Wheelie!$"

BattleshipHalberd_Reactor_EventScript_Wheelie_Text_2:
# 26 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Wheelie?$"

BattleshipHalberd_Reactor_MiddleSwitch_Text_0:
# 95 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "It's a power switch. Will you flip it?$"

BattleshipHalberd_Reactor_MiddleSwitch_Text_1:
# 98 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "You flipped the power switch!$"

BattleshipHalberd_Reactor_MiddleSwitch_Text_2:
# 113 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "A locked path opened up!$"

BattleshipHalberd_Reactor_Text_TrainerIntro::
# 64 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "What do you think you're doing here?\n"
	.string "The reactor's a highly sensitive place!\p"
	.string "I kindly suggest you take your leave.\n"
	.string "And I won't take anything else kindly!$"

BattleshipHalberd_Reactor_Text_TrainerDefeated::
# 73 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "Yow ow ow! Okay, fine, I'll tell you where\n"
	.string "to go!$"

BattleshipHalberd_Reactor_Text_TrainerPost::
# 79 "data/maps/BattleshipHalberd_Reactor/scripts.pory"
	.string "We installed electric gates to protect\n"
	.string "the reactor and power generator.\p"
	.string "Step on the floor tiles to flip the\n"
	.string "gates and reach the power switches.\p"
	.string "There's an elevator to the helm you can\n"
	.string "turn on if you hit the far right switch.\l"
	.string "You got that? Don't press any others!$"
