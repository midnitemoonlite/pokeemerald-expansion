# 1 "data/maps/MallowGardens_RightRoom/scripts.pory"

# 2 "data/maps/MallowGardens_RightRoom/scripts.pory"
MallowGardens_RightRoom_MapScripts::
# 3 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.byte 0

MallowGardens_RightRoom_EventScript_Ribbon::
# 8 "data/maps/MallowGardens_RightRoom/scripts.pory"
	lock
# 9 "data/maps/MallowGardens_RightRoom/scripts.pory"
	faceplayer
# 10 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Ribbon_Text_0
# 17 "data/maps/MallowGardens_RightRoom/scripts.pory"
	release
	return


MallowGardens_RightRoom_EventScript_Youngster::
# 22 "data/maps/MallowGardens_RightRoom/scripts.pory"
	lock
# 23 "data/maps/MallowGardens_RightRoom/scripts.pory"
	faceplayer
# 24 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Youngster_Text_0
# 30 "data/maps/MallowGardens_RightRoom/scripts.pory"
	release
	return


MallowGardens_RightRoom_EventScript_WaddleDee::
# 35 "data/maps/MallowGardens_RightRoom/scripts.pory"
	lock
# 36 "data/maps/MallowGardens_RightRoom/scripts.pory"
	faceplayer
# 37 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_WaddleDee_Text_0
# 43 "data/maps/MallowGardens_RightRoom/scripts.pory"
	release
	return


MallowGardens_RightRoom_EventScript_Vendor::
# 48 "data/maps/MallowGardens_RightRoom/scripts.pory"
	lock
# 49 "data/maps/MallowGardens_RightRoom/scripts.pory"
	faceplayer
# 50 "data/maps/MallowGardens_RightRoom/scripts.pory"
	goto_if_unset FLAG_BOUGHT_PRANK, MallowGardens_RightRoom_EventScript_Vendor_2
# 128 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Vendor_Text_6
# 133 "data/maps/MallowGardens_RightRoom/scripts.pory"
	release
	return

MallowGardens_RightRoom_EventScript_Vendor_2:
# 52 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Vendor_Text_0
# 57 "data/maps/MallowGardens_RightRoom/scripts.pory"
	showmoneybox 0, 0
# 58 "data/maps/MallowGardens_RightRoom/scripts.pory"
	message MallowGardens_RightRoom_EventScript_Vendor_Text_1
# 60 "data/maps/MallowGardens_RightRoom/scripts.pory"
	waitmessage
# 61 "data/maps/MallowGardens_RightRoom/scripts.pory"
	dynmultichoice 20, 8, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, MallowGardens_RightRoom_Text_ImIn, MallowGardens_RightRoom_Text_ImOut
# 62 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_5
# 120 "data/maps/MallowGardens_RightRoom/scripts.pory"
	hidemoneybox
# 121 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Vendor_Text_5
# 125 "data/maps/MallowGardens_RightRoom/scripts.pory"
	release
	end

MallowGardens_RightRoom_EventScript_Vendor_5:
# 64 "data/maps/MallowGardens_RightRoom/scripts.pory"
	checkmoney 500
# 65 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_9
MallowGardens_RightRoom_EventScript_Vendor_8:
# 69 "data/maps/MallowGardens_RightRoom/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PRANK
# 70 "data/maps/MallowGardens_RightRoom/scripts.pory"
	givemon SPECIES_PRANK, 25
# 71 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_12
MallowGardens_RightRoom_EventScript_Vendor_11:
# 75 "data/maps/MallowGardens_RightRoom/scripts.pory"
	delay 16
# 76 "data/maps/MallowGardens_RightRoom/scripts.pory"
	removemoney 500
# 77 "data/maps/MallowGardens_RightRoom/scripts.pory"
	updatemoneybox
# 78 "data/maps/MallowGardens_RightRoom/scripts.pory"
	playse SE_SHOP
# 79 "data/maps/MallowGardens_RightRoom/scripts.pory"
	waitse
# 80 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Vendor_Text_2
# 82 "data/maps/MallowGardens_RightRoom/scripts.pory"
	hidemoneybox
# 83 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_15
# 97 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_16
# 111 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_17
MallowGardens_RightRoom_EventScript_Vendor_14:
# 115 "data/maps/MallowGardens_RightRoom/scripts.pory"
	setflag FLAG_BOUGHT_PRANK
# 116 "data/maps/MallowGardens_RightRoom/scripts.pory"
	release
	end

MallowGardens_RightRoom_EventScript_Vendor_9:
# 67 "data/maps/MallowGardens_RightRoom/scripts.pory"
	goto MallowGardens_RightRoom_EventScript_CantAfford
	goto MallowGardens_RightRoom_EventScript_Vendor_8

MallowGardens_RightRoom_EventScript_Vendor_12:
# 73 "data/maps/MallowGardens_RightRoom/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto MallowGardens_RightRoom_EventScript_Vendor_11

MallowGardens_RightRoom_EventScript_Vendor_15:
# 85 "data/maps/MallowGardens_RightRoom/scripts.pory"
	playfanfare MUS_EVOLVED
# 86 "data/maps/MallowGardens_RightRoom/scripts.pory"
	message MallowGardens_RightRoom_EventScript_Vendor_Text_3
# 87 "data/maps/MallowGardens_RightRoom/scripts.pory"
	waitmessage
# 88 "data/maps/MallowGardens_RightRoom/scripts.pory"
	waitfanfare
# 89 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Vendor_Text_4, MSGBOX_YESNO
# 91 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_21
	goto MallowGardens_RightRoom_EventScript_Vendor_14

MallowGardens_RightRoom_EventScript_Vendor_16:
# 99 "data/maps/MallowGardens_RightRoom/scripts.pory"
	playfanfare MUS_EVOLVED
# 100 "data/maps/MallowGardens_RightRoom/scripts.pory"
	message MallowGardens_RightRoom_EventScript_Vendor_Text_3
# 101 "data/maps/MallowGardens_RightRoom/scripts.pory"
	waitmessage
# 102 "data/maps/MallowGardens_RightRoom/scripts.pory"
	waitfanfare
# 103 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_Vendor_Text_4, MSGBOX_YESNO
# 105 "data/maps/MallowGardens_RightRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_RightRoom_EventScript_Vendor_24
MallowGardens_RightRoom_EventScript_Vendor_23:
# 109 "data/maps/MallowGardens_RightRoom/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto MallowGardens_RightRoom_EventScript_Vendor_14

MallowGardens_RightRoom_EventScript_Vendor_17:
# 113 "data/maps/MallowGardens_RightRoom/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto MallowGardens_RightRoom_EventScript_Vendor_14

MallowGardens_RightRoom_EventScript_Vendor_21:
# 93 "data/maps/MallowGardens_RightRoom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 94 "data/maps/MallowGardens_RightRoom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto MallowGardens_RightRoom_EventScript_Vendor_14

MallowGardens_RightRoom_EventScript_Vendor_24:
# 107 "data/maps/MallowGardens_RightRoom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto MallowGardens_RightRoom_EventScript_Vendor_23


MallowGardens_RightRoom_EventScript_CantAfford::
# 138 "data/maps/MallowGardens_RightRoom/scripts.pory"
	msgbox MallowGardens_RightRoom_EventScript_CantAfford_Text_0
# 140 "data/maps/MallowGardens_RightRoom/scripts.pory"
	release
	end


MallowGardens_RightRoom_EventScript_Ribbon_Text_0:
# 10 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "Hey, hey, listen to me. Don't you think\n"
	.string "Ice-type Helpers are the best kind?\l"
	.string "They're rare and mysterious…\p"
	.string "…hey, wait, have you even seen a single\n"
	.string "Ice-type Helper yet? How are you going\l"
	.string "to agree with me then?$"

MallowGardens_RightRoom_EventScript_Youngster_Text_0:
# 24 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "You think Fire-types are the best type\n"
	.string "of Helper, right? They're so cool!\p"
	.string "Nobody's scared of ice, or… well,\n"
	.string "I guess lightning is pretty scary,\l"
	.string "but fire's scarier! It's the toughest!$"

MallowGardens_RightRoom_EventScript_WaddleDee_Text_0:
# 37 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "I think Electric-type Helpers are the\n"
	.string "best, personally. They're very popular!\p"
	.string "Even if you don't agree with me, I met\n"
	.string "someone in Float Islands who did, so\l"
	.string "I've got the high ground.$"

MallowGardens_RightRoom_EventScript_Vendor_Text_0:
# 52 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "Oh, you're the kid who beat my boss\n"
	.string "in the Waddle Dee Arena! Small world!\p"
	.string "Hey, for such a strong trainer, I've\n"
	.string "got a special deal for you.$"

MallowGardens_RightRoom_EventScript_Vendor_Text_1:
# 58 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "One extra-rare, extra-powerful Helper\n"
	.string "for the low, low cost of ¥500! You in?$"

MallowGardens_RightRoom_EventScript_Vendor_Text_2:
# 80 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "Great choice, kid! Here it is: Prank!\n"
	.string "Now remember, I don't offer refunds!$"

MallowGardens_RightRoom_EventScript_Vendor_Text_3:
# 86 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "You paid ¥500 and bought Prank…!$"

MallowGardens_RightRoom_EventScript_Vendor_Text_4:
# 89 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "Prank?$"

MallowGardens_RightRoom_EventScript_Vendor_Text_5:
# 121 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "What's the matter? Don't trust me?\n"
	.string "C'mon, we've got a common friend!\l"
	.string "That basically makes us pals too!$"

MallowGardens_RightRoom_EventScript_Vendor_Text_6:
# 128 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "What's the matter? Feeling buyer's\n"
	.string "remorse with your new Helper?\p"
	.string "Aw, come on. Any friend of Magolor's\n"
	.string "should be ready for a prank! Hehe!$"

MallowGardens_RightRoom_EventScript_CantAfford_Text_0:
# 138 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "Wait a minute… you can't afford this!\n"
	.string "Are you trying to swindle me?$"

MallowGardens_RightRoom_Text_ImIn::
# 144 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "I'M IN$"

MallowGardens_RightRoom_Text_ImOut::
# 149 "data/maps/MallowGardens_RightRoom/scripts.pory"
	.string "I'M OUT$"
