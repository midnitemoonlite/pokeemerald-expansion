# 1 "data/maps/VegetableValley_Farmhouse/scripts.pory"

# 2 "data/maps/VegetableValley_Farmhouse/scripts.pory"
VegetableValley_Farmhouse_MapScripts::
# 3 "data/maps/VegetableValley_Farmhouse/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, VegetableValley_Farmhouse_OnTransition
# 4 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.byte 0
# 5 "data/maps/VegetableValley_Farmhouse/scripts.pory"

# 6 "data/maps/VegetableValley_Farmhouse/scripts.pory"
VegetableValley_Farmhouse_OnTransition:
# 7 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	call_if_le VAR_LUMBERJACK_QUEST, 1, VegetableValley_Farmhouse_EventScript_HideLumberjack
# 8 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	end

VegetableValley_Farmhouse_EventScript_HideLumberjack::
# 13 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	setflag FLAG_HIDE_LUMBERJACK_FARMHOUSE
	return


VegetableValley_Farmhouse_EventScript_Camper::
# 19 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	lock
# 20 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	faceplayer
# 21 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	compare VAR_LUMBERJACK_QUEST, 0
	goto_if_eq VegetableValley_Farmhouse_EventScript_Camper_2
# 37 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	compare VAR_LUMBERJACK_QUEST, 1
	goto_if_eq VegetableValley_Farmhouse_EventScript_Camper_3
# 45 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	compare VAR_LUMBERJACK_QUEST, 2
	goto_if_eq VegetableValley_Farmhouse_EventScript_Camper_4
# 60 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	compare VAR_LUMBERJACK_QUEST, 3
	goto_if_eq VegetableValley_Farmhouse_EventScript_Camper_5
VegetableValley_Farmhouse_EventScript_Camper_1:
# 68 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	release
	return

VegetableValley_Farmhouse_EventScript_Camper_2:
# 23 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Camper_Text_0
# 35 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	setvar VAR_LUMBERJACK_QUEST, 1
	goto VegetableValley_Farmhouse_EventScript_Camper_1

VegetableValley_Farmhouse_EventScript_Camper_3:
# 39 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Camper_Text_1
	goto VegetableValley_Farmhouse_EventScript_Camper_1

VegetableValley_Farmhouse_EventScript_Camper_4:
# 47 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Camper_Text_2
# 52 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	giveitem ITEM_CHARCOAL
# 53 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Camper_Text_3
# 58 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	setvar VAR_LUMBERJACK_QUEST, 3
	goto VegetableValley_Farmhouse_EventScript_Camper_1

VegetableValley_Farmhouse_EventScript_Camper_5:
# 62 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Camper_Text_4
	goto VegetableValley_Farmhouse_EventScript_Camper_1


VegetableValley_Farmhouse_EventScript_Lumberjack::
# 73 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	lock
# 74 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	faceplayer
# 75 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Lumberjack_Text_0
# 83 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	release
	return


VegetableValley_Farmhouse_EventScript_Lass::
# 88 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	lock
# 89 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	faceplayer
# 90 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_PLUCK_TM, VegetableValley_Farmhouse_EventScript_Lass_2
VegetableValley_Farmhouse_EventScript_Lass_1:
# 101 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PLUCK_TM, VegetableValley_Farmhouse_EventScript_Lass_5
VegetableValley_Farmhouse_EventScript_Lass_4:
# 117 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	release
	return

VegetableValley_Farmhouse_EventScript_Lass_2:
# 92 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Lass_Text_0
	goto VegetableValley_Farmhouse_EventScript_Lass_1

VegetableValley_Farmhouse_EventScript_Lass_5:
# 103 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Lass_Text_1
# 109 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	giveitem ITEM_TM84
# 110 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	msgbox VegetableValley_Farmhouse_EventScript_Lass_Text_2
# 115 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	setflag FLAG_RECEIVED_PLUCK_TM
	goto VegetableValley_Farmhouse_EventScript_Lass_4


VegetableValley_Farmhouse_EventScript_Camper_Text_0:
# 23 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "Oh? You came here all the way from\n"
	.string "Green Greens?\p"
	.string "Hm… this might be a long shot, but did\n"
	.string "you see a lumberjack on your way here?\p"
	.string "He went off to deliver our latest\n"
	.string "haul of crops a while ago, but I'm\l"
	.string "starting to get worried about him…\p"
	.string "If you happen to see him, please tell\n"
	.string "him to hurry on home soon!$"

VegetableValley_Farmhouse_EventScript_Camper_Text_1:
# 39 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "My partner… his trademark item is a\n"
	.string "feathered green cap.\p"
	.string "If you've seen anyone who looks like\n"
	.string "that, please check to see if it's him!$"

VegetableValley_Farmhouse_EventScript_Camper_Text_2:
# 47 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "Oh, thank you so much! I'm so happy\n"
	.string "now that my partner is back home!\p"
	.string "I don't know how else to express\n"
	.string "my gratitude… oh, here, maybe this?$"

VegetableValley_Farmhouse_EventScript_Camper_Text_3:
# 53 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "It looks like you're taking part in that\n"
	.string "royale that's the talk of the town.\p"
	.string "This fire-ready wood might be a good\n"
	.string "fit for some of your helpers!$"

VegetableValley_Farmhouse_EventScript_Camper_Text_4:
# 62 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "Our family lives a cozy life here,\n"
	.string "collecting wood and growing crops.\p"
	.string "Nature has given us so much, so we do\n"
	.string "our part to take care of it in turn.$"

VegetableValley_Farmhouse_EventScript_Lumberjack_Text_0:
# 75 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "Hey there! Sorry to have caused you\n"
	.string "so much trouble.\p"
	.string "Looks like I got a little carried away\n"
	.string "enjoying the fruits of my labor…\p"
	.string "But it's great to be back! I'm raring\n"
	.string "to get to work again!$"

VegetableValley_Farmhouse_EventScript_Lass_Text_0:
# 92 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "I've heard some pretty nasty things\n"
	.string "about the guardian of the forest…\p"
	.string "But I've never run into trouble.\n"
	.string "Do you know why?\p"
	.string "Because I make sure not to take too\n"
	.string "much, and always say thank you after!$"

VegetableValley_Farmhouse_EventScript_Lass_Text_1:
# 103 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "I like to go picking for apples in\n"
	.string "Fruity Forest!\p"
	.string "Hey, would you and your Helpers like\n"
	.string "to go picking for fruit too?\l"
	.string "Maybe you can use this!$"

VegetableValley_Farmhouse_EventScript_Lass_Text_2:
# 110 "data/maps/VegetableValley_Farmhouse/scripts.pory"
	.string "This fell into my last basket, but I\n"
	.string "don't have any Helpers.\p"
	.string "I hope you and your Helpers have fun\n"
	.string "picking all sorts of things!$"
