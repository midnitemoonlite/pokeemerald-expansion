# 1 "data/maps/BattleshipHalberd_Storage/scripts.pory"

# 2 "data/maps/BattleshipHalberd_Storage/scripts.pory"
BattleshipHalberd_Storage_MapScripts::
# 3 "data/maps/BattleshipHalberd_Storage/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, BattleshipHalberd_Storage_OnLoad
# 4 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.byte 0
# 5 "data/maps/BattleshipHalberd_Storage/scripts.pory"

# 6 "data/maps/BattleshipHalberd_Storage/scripts.pory"
BattleshipHalberd_Storage_OnLoad:
# 7 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	call_if_eq VAR_ORANGE_OCEAN_STATE, 0, BattleshipHalberd_Storage_EventScript_CloseDoor
# 8 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	end
# 9 "data/maps/BattleshipHalberd_Storage/scripts.pory"

# 10 "data/maps/BattleshipHalberd_Storage/scripts.pory"
BattleshipHalberd_Storage_EventScript_CloseDoor::
# 11 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	setmetatile 1, 13, METATILE_Facility_NewMauvilleDoor_Closed_Tile0, TRUE
# 12 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	setmetatile 2, 13, METATILE_Facility_NewMauvilleDoor_Closed_Tile1, TRUE
# 13 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	setmetatile 3, 13, METATILE_Facility_NewMauvilleDoor_Closed_Tile2, TRUE
# 14 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	setmetatile 1, 14, METATILE_Facility_NewMauvilleDoor_Closed_Tile3, TRUE
# 15 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	setmetatile 2, 14, METATILE_Facility_NewMauvilleDoor_Closed_Tile4, TRUE
# 16 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	setmetatile 3, 14, METATILE_Facility_NewMauvilleDoor_Closed_Tile5, TRUE
# 17 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	return

BattleshipHalberd_Storage_EventScript_Trainer1West::
# 22 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_5, BattleshipHalberd_Storage_Text_Trainer1WestIntro, BattleshipHalberd_Storage_Text_Trainer1WestDefeated
# 23 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	msgbox BattleshipHalberd_Storage_Text_Trainer1WestPost, MSGBOX_AUTOCLOSE
	return


BattleshipHalberd_Storage_EventScript_Trainer2West::
# 52 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	trainerbattle_single TRAINER_GABBY_AND_TY_6, BattleshipHalberd_Storage_Text_Trainer2WestIntro, BattleshipHalberd_Storage_Text_Trainer2WestDefeated
# 53 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	msgbox BattleshipHalberd_Storage_Text_Trainer2WestPost, MSGBOX_AUTOCLOSE
	return


BattleshipHalberd_Storage_EventScript_Trainer3West::
# 82 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, BattleshipHalberd_Storage_Text_Trainer3WestIntro, BattleshipHalberd_Storage_Text_Trainer3WestDefeated
# 83 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	msgbox BattleshipHalberd_Storage_Text_Trainer3WestPost, MSGBOX_AUTOCLOSE
	return


BattleshipHalberd_Storage_EventScript_DeckClosed::
# 108 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	lockall
# 109 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	playse SE_BANG
# 110 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	applymovement LOCALID_PLAYER, BattleshipHalberd_Storage_EventScript_DeckClosed_Movement_0
# 111 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	waitmovement
# 112 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	delay 16
# 113 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	msgbox BattleshipHalberd_Storage_EventScript_DeckClosed_Text_0
# 115 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	releaseall
	return


# 110 "data/maps/BattleshipHalberd_Storage/scripts.pory"
BattleshipHalberd_Storage_EventScript_DeckClosed_Movement_0:
# 110 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	walk_in_place_up
# 110 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	walk_in_place_up
	step_end

BattleshipHalberd_Storage_EventScript_DeckClosed_Text_0:
# 113 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "The gateway to the deck is locked shut.\n"
	.string "After all, it's underwater right now.$"

BattleshipHalberd_Storage_Text_Trainer1WestIntro::
# 26 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "Intruder alert! …wait a sec!\p"
	.string "Kirby?! We're docked under the ocean\n"
	.string "right now! How'd you get in here?\p"
	.string "Well, never mind that! No hard feelings,\n"
	.string "but under Lord Meta Knight's orders…\l"
	.string "I'll have to take you out right now!$"

BattleshipHalberd_Storage_Text_Trainer1WestDefeated::
# 38 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "What's going on?!?$"

BattleshipHalberd_Storage_Text_Trainer1WestPost::
# 43 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "Urgh… this is bad… and you're using…\p"
	.string "Ggh… gotta let… Lord Meta Knight know…$"

BattleshipHalberd_Storage_Text_Trainer2WestIntro::
# 56 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "Aaaaaa-ha! Caught you!\p"
	.string "I got the memo from Axe Knight! You and\n"
	.string "your motley crew won't get past me!$"

BattleshipHalberd_Storage_Text_Trainer2WestDefeated::
# 64 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "What's wrong with you? Why couldn't you\n"
	.string "just inhale me like you normally do?!$"

BattleshipHalberd_Storage_Text_Trainer2WestPost::
# 70 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "Ouch… look, if you have to be here,\n"
	.string "just don't touch anything, okay?\p"
	.string "We're supposed to be undergoing covert\n"
	.string "maintenace. And Lord Meta Knight will\l"
	.string "get really mad if you interfere…!$"

BattleshipHalberd_Storage_Text_Trainer3WestIntro::
# 86 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "Nuh uh! You ain't sneaking outta here!\n"
	.string "Me and my mace have got news for ya!$"

BattleshipHalberd_Storage_Text_Trainer3WestDefeated::
# 92 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "Your Helpers… they're way too tough!$"

BattleshipHalberd_Storage_Text_Trainer3WestPost::
# 97 "data/maps/BattleshipHalberd_Storage/scripts.pory"
	.string "Even here, we're dealing with Helpers.\n"
	.string "Our orders are to take them all out.\p"
	.string "But what's up with yours? Are they so\n"
	.string "strong because they're with ya?$"
