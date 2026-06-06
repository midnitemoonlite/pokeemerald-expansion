# 1 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"

# 2 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
IceCreamIsland_Beachhouse_MapScripts::
# 3 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.byte 0

IceCreamIsland_Beachhouse_EventScript_BlueSqueaker::
# 8 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 9 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_BlueSqueaker_Text_0
# 10 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_GreenSqueaker::
# 15 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 16 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_GreenSqueaker_Text_0
# 17 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_YellowSqueaker::
# 22 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 23 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_YellowSqueaker_Text_0
# 24 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_RedSqueaker::
# 29 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 30 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_RedSqueaker_Text_0
# 33 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_ShavedIceWaddleDee::
# 38 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 39 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_ShavedIceWaddleDee_Text_0
# 41 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_TableWaddleDee::
# 46 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 47 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_BEACHHOUSE_ITEM, IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_2
IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_1:
# 55 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BEACHHOUSE_ITEM, IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_5
IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_4:
# 70 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_2:
# 49 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_0
	goto IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_1

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_5:
# 57 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_1
# 62 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 63 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	setflag FLAG_RECEIVED_BEACHHOUSE_ITEM
# 64 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_2
	goto IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_4


IceCreamIsland_Beachhouse_EventScript_WaddleDee::
# 75 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 76 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_WaddleDee_Text_0
# 81 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_ParasolWaddleDee::
# 86 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 87 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 88 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_ParasolWaddleDee_Text_0
# 93 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_GentlemanWaddleDee::
# 98 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 99 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 100 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_GentlemanWaddleDee_Text_0
# 106 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee::
# 111 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 112 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 113 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PEARL, IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_2
IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_1:
# 120 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_1
# 122 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return

IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_2:
# 115 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_0
# 117 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	giveitem ITEM_PEARL
# 118 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	setflag FLAG_RECEIVED_PEARL
	goto IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_1


IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee::
# 127 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 128 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 129 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	message IceCreamIsland_Beachhouse_Text_Introduction
# 130 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	waitmessage
# 131 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	pokemart IceCreamIsland_Beachhouse_Menu
# 132 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox gText_PleaseComeAgain
# 133 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	end


	.align 2
# 137 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
IceCreamIsland_Beachhouse_Menu:
# 139 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 140 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.2byte ITEM_SODA_POP
# 141 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.2byte ITEM_LEMONADE
# 142 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

IceCreamIsland_Beachhouse_EventScript_BlueSqueaker_Text_0:
# 9 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "We…$"

IceCreamIsland_Beachhouse_EventScript_GreenSqueaker_Text_0:
# 16 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "…love…$"

IceCreamIsland_Beachhouse_EventScript_YellowSqueaker_Text_0:
# 23 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "…shaved…$"

IceCreamIsland_Beachhouse_EventScript_RedSqueaker_Text_0:
# 30 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "Brain freeze!!\p"
	.string "Uh… I mean… ice!$"

IceCreamIsland_Beachhouse_EventScript_ShavedIceWaddleDee_Text_0:
# 39 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "There's so many flavors… what do I get?\n"
	.string "Oh! I know! I'll make a rainbow sorbet!$"

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_0:
# 49 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "There's a lot about the Royal Royale\n"
	.string "that goes over my head…\p"
	.string "I'm having fun, but I wonder how far\n"
	.string "I'll be able to make it in the end.$"

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_1:
# 57 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "Are you taking part in that game\n"
	.string "the Great King put together?\p"
	.string "Here, I've got something you might be\n"
	.string "able to make better use of than me.$"

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_2:
# 64 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "Apparently, this item can give your\n"
	.string "Helpers a special “ability”.\p"
	.string "To be honest, I'm not really sure\n"
	.string "what that means. I hope it's useful!$"

IceCreamIsland_Beachhouse_EventScript_WaddleDee_Text_0:
# 76 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I can't get enough of this place!\n"
	.string "The vibes are off the charts!\p"
	.string "The beach is fine, but sharing good\n"
	.string "food with good folks is the best!$"

IceCreamIsland_Beachhouse_EventScript_ParasolWaddleDee_Text_0:
# 88 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I came here hoping to escape from the\n"
	.string "heat outside, but…\p"
	.string "I had no idea this place was so\n"
	.string "popular. I'm a little overwhelmed…$"

IceCreamIsland_Beachhouse_EventScript_GentlemanWaddleDee_Text_0:
# 100 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I'm not quite sure what to make of\n"
	.string "Dedede's Royal Royale…\p"
	.string "Even with a new Arena built there, it\n"
	.string "seems the sleepy resort people aren't\l"
	.string "really sold on the concept.$"

IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_0:
# 115 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I found this by the seashore.\n"
	.string "Isn't it beautiful?$"

IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_1:
# 120 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "All my jewelry is crafted from baubles\n"
	.string "I pick up at the beach.$"

IceCreamIsland_Beachhouse_Text_Introduction::
# 145 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "Welcome to the beachhouse!\n"
	.string "What can I get you today?$"
