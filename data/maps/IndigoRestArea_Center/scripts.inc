# 1 "data/maps/IndigoRestArea_Center/scripts.pory"

# 2 "data/maps/IndigoRestArea_Center/scripts.pory"
IndigoRestArea_Center_MapScripts::
# 3 "data/maps/IndigoRestArea_Center/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, IndigoRestArea_Center_OnTransition
# 4 "data/maps/IndigoRestArea_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/IndigoRestArea_Center/scripts.pory"
	.byte 0
# 6 "data/maps/IndigoRestArea_Center/scripts.pory"

# 7 "data/maps/IndigoRestArea_Center/scripts.pory"
IndigoRestArea_Center_OnTransition:
# 8 "data/maps/IndigoRestArea_Center/scripts.pory"
	setrespawn HEAL_LOCATION_INDIGO_REST_AREA
# 9 "data/maps/IndigoRestArea_Center/scripts.pory"
	end

IndigoRestArea_Center_EventScript_Nurse::
# 14 "data/maps/IndigoRestArea_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_INDIGO_REST_AREA_NURSE
# 15 "data/maps/IndigoRestArea_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/IndigoRestArea_Center/scripts.pory"
	waitmessage
# 17 "data/maps/IndigoRestArea_Center/scripts.pory"
	waitbuttonpress
# 18 "data/maps/IndigoRestArea_Center/scripts.pory"
	release
	end


IndigoRestArea_Center_EventScript_RibbonWaddleDee::
# 24 "data/maps/IndigoRestArea_Center/scripts.pory"
	lock
# 25 "data/maps/IndigoRestArea_Center/scripts.pory"
	faceplayer
# 26 "data/maps/IndigoRestArea_Center/scripts.pory"
	goto_if_set FLAG_INDIGO_REST_AREA_TRADE_COMPLETED, IndigoRestArea_Center_EventScript_RibbonWaddleDee_2
# 38 "data/maps/IndigoRestArea_Center/scripts.pory"
	goto_if_unset FLAG_INDIGO_REST_AREA_TRADE_COMPLETED, IndigoRestArea_Center_EventScript_RibbonWaddleDee_3
IndigoRestArea_Center_EventScript_RibbonWaddleDee_1:
# 43 "data/maps/IndigoRestArea_Center/scripts.pory"
	release
	return

IndigoRestArea_Center_EventScript_RibbonWaddleDee_2:
# 28 "data/maps/IndigoRestArea_Center/scripts.pory"
	msgbox IndigoRestArea_Center_EventScript_RibbonWaddleDee_Text_0
	goto IndigoRestArea_Center_EventScript_RibbonWaddleDee_1

IndigoRestArea_Center_EventScript_RibbonWaddleDee_3:
# 40 "data/maps/IndigoRestArea_Center/scripts.pory"
	ingame_trade INGAME_TRADE_STARMAN, IndigoRestArea_Center_TradeMessage, IndigoRestArea_Center_DeclineScript, IndigoRestArea_Center_WrongScript, IndigoRestArea_Center_CompleteMessage
# 41 "data/maps/IndigoRestArea_Center/scripts.pory"
	setflag FLAG_INDIGO_REST_AREA_TRADE_COMPLETED
	goto IndigoRestArea_Center_EventScript_RibbonWaddleDee_1


IndigoRestArea_Center_DeclineScript::
# 67 "data/maps/IndigoRestArea_Center/scripts.pory"
	msgbox IndigoRestArea_Center_DeclineScript_Text_0
# 69 "data/maps/IndigoRestArea_Center/scripts.pory"
	release
	return


IndigoRestArea_Center_WrongScript::
# 74 "data/maps/IndigoRestArea_Center/scripts.pory"
	msgbox IndigoRestArea_Center_WrongScript_Text_0
# 78 "data/maps/IndigoRestArea_Center/scripts.pory"
	release
	return


IndigoRestArea_Center_EventScript_CafeWaddleDee::
# 91 "data/maps/IndigoRestArea_Center/scripts.pory"
	lock
# 92 "data/maps/IndigoRestArea_Center/scripts.pory"
	faceplayer
# 93 "data/maps/IndigoRestArea_Center/scripts.pory"
	msgbox IndigoRestArea_Center_EventScript_CafeWaddleDee_Text_0
# 98 "data/maps/IndigoRestArea_Center/scripts.pory"
	release
	return


IndigoRestArea_Center_EventScript_ParasolWaddleDee::
# 103 "data/maps/IndigoRestArea_Center/scripts.pory"
	lock
# 104 "data/maps/IndigoRestArea_Center/scripts.pory"
	faceplayer
# 105 "data/maps/IndigoRestArea_Center/scripts.pory"
	msgbox IndigoRestArea_Center_EventScript_ParasolWaddleDee_Text_0
# 107 "data/maps/IndigoRestArea_Center/scripts.pory"
	turnobject LOCALID_MAP_WADDLE_DEE_2, DIR_NORTH
# 108 "data/maps/IndigoRestArea_Center/scripts.pory"
	release
	return


IndigoRestArea_Center_EventScript_FisherWaddleDee::
# 113 "data/maps/IndigoRestArea_Center/scripts.pory"
	lock
# 114 "data/maps/IndigoRestArea_Center/scripts.pory"
	faceplayer
# 115 "data/maps/IndigoRestArea_Center/scripts.pory"
	msgbox IndigoRestArea_Center_EventScript_FisherWaddleDee_Text_0
# 122 "data/maps/IndigoRestArea_Center/scripts.pory"
	release
	return


IndigoRestArea_Center_EventScript_RibbonWaddleDee_Text_0:
# 28 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "Hey, how is my Starman doing?\n"
	.string "You better be taking good care of it!\p"
	.string "Am I taking good care of my Cappy?\n"
	.string "Really? Do you even need to ask?\p"
	.string "My precious little Cappy gets only\n"
	.string "the best love and attention!\l"
	.string "Ohhh, I love you sooo much, Cappy!$"

IndigoRestArea_Center_DeclineScript_Text_0:
# 67 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "Nooooo… I thought I had it!\n"
	.string "I really want a Cappy…$"

IndigoRestArea_Center_WrongScript_Text_0:
# 74 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "Hey! That's not Cappy!\p"
	.string "I only want Cappy! With the cute\n"
	.string "polka-dotted mushroom cap!$"

IndigoRestArea_Center_EventScript_CafeWaddleDee_Text_0:
# 93 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "Even with a new Arena being built there,\n"
	.string "the resort's a sort of sleepy place.\p"
	.string "If you prefer an exciting lifestyle,\n"
	.string "the beachhouse is where to be.$"

IndigoRestArea_Center_EventScript_ParasolWaddleDee_Text_0:
# 105 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "I'm finally on vacation! What do I do \n"
	.string "first? There's so many options!$"

IndigoRestArea_Center_EventScript_FisherWaddleDee_Text_0:
# 115 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "All my fellow fishers are raving about\n"
	.string "it, but I don't buy the legend of the\l"
	.string "golden catch in Waddle Dee Town.\p"
	.string "I much prefer fishing by the ocean\n"
	.string "compared to fresh water, anyways.\l"
	.string "You catch more than just Blippers here!$"

IndigoRestArea_Center_TradeMessage::
# 46 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "Hi, mister! Did you get here from Fruity\n"
	.string "Forest?\p"
	.string "You did? Really? Oh, this might be my\n"
	.string "lucky day!\p"
	.string "You see, there's a Helper on the other\n"
	.string "side of the forest I reaaally want, but…\p"
	.string "I can't do it! I can't find my way around\n"
	.string "at all! It's too dark in there!\p"
	.string "Please, mister! If you have one, could\n"
	.string "you trade me the helper called Cappy?\l"
	.string "I'll give you my Starman in exchange!$"

IndigoRestArea_Center_CompleteMessage::
# 81 "data/maps/IndigoRestArea_Center/scripts.pory"
	.string "Yes! Thank you, mister! You're the best!\p"
	.string "Oh, it's even more adorable up close!\n"
	.string "I'm so happy to have Cappy!$"
