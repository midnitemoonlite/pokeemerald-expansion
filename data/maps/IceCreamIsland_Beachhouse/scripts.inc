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
	faceplayer
# 48 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_BEACHHOUSE_ITEM, IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_2
IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_1:
# 56 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BEACHHOUSE_ITEM, IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_5
IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_4:
# 71 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_2:
# 50 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_0
	goto IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_1

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_5:
# 58 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_1
# 63 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 64 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	setflag FLAG_RECEIVED_BEACHHOUSE_ITEM
# 65 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_2
	goto IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_4


IceCreamIsland_Beachhouse_EventScript_WaddleDee::
# 76 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 77 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 78 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_WaddleDee_Text_0
# 83 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_ParasolWaddleDee::
# 88 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 89 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 90 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_ParasolWaddleDee_Text_0
# 95 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_GentlemanWaddleDee::
# 100 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 101 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 102 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_GentlemanWaddleDee_Text_0
# 108 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return


IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee::
# 113 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 114 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 115 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PEARL, IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_2
IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_1:
# 122 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_1
# 124 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	return

IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_2:
# 117 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_0
# 119 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	giveitem ITEM_PEARL
# 120 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	setflag FLAG_RECEIVED_PEARL
	goto IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_1


IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee::
# 129 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	lock
# 130 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	faceplayer
# 131 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_GEM_APPLE_SORBET, IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_2
IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_1:
# 136 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GEM_APPLE_SORBET, IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_5
IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_4:
# 152 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	release
	end

IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_2:
# 133 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_Text_0
	goto IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_1

IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_5:
# 138 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_Text_1
# 143 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 144 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	setflag FLAG_RECEIVED_GEM_APPLE_SORBET
# 145 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	msgbox IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_Text_2
	goto IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_4


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
# 50 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "The Royal Royale is a pretty in-depth\n"
	.string "game. I'm still learning all the rules…\p"
	.string "I think that sort of mystery and\n"
	.string "surprise is part of the fun, though.$"

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_1:
# 58 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "So you're taking part in Dedede's\n"
	.string "Royal Royale too, Kirby?\p"
	.string "Here, I've got something you might be\n"
	.string "able to make better use of than me.$"

IceCreamIsland_Beachhouse_EventScript_TableWaddleDee_Text_2:
# 65 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "Apparently this can give your Helpers\n"
	.string "some kind of special ability.\p"
	.string "It seems pretty rare. I hope you can\n"
	.string "make good use of it!$"

IceCreamIsland_Beachhouse_EventScript_WaddleDee_Text_0:
# 78 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I can't get enough of this place!\n"
	.string "The vibes are off the charts!\p"
	.string "The beach is fine, but sharing good\n"
	.string "food with good folks is the best!$"

IceCreamIsland_Beachhouse_EventScript_ParasolWaddleDee_Text_0:
# 90 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I came here hoping to escape from the\n"
	.string "heat outside, but…\p"
	.string "I had no idea this place was so\n"
	.string "popular. I'm a little overwhelmed…$"

IceCreamIsland_Beachhouse_EventScript_GentlemanWaddleDee_Text_0:
# 102 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I'm not quite sure what to make of\n"
	.string "Dedede's Royal Royale…\p"
	.string "Even with a new Arena built there, it\n"
	.string "seems the sleepy resort people aren't\l"
	.string "really sold on the concept either.$"

IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_0:
# 117 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "I found this by the seashore.\n"
	.string "Isn't it beautiful?$"

IceCreamIsland_Beachhouse_EventScript_SocialiteWaddleDee_Text_1:
# 122 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "All my jewelry is crafted from baubles\n"
	.string "I pick up at the beach.$"

IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_Text_0:
# 133 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "You got a journey to go on?\n"
	.string "Take care out there, lil' dude!$"

IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_Text_1:
# 138 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "Heeeey, welcome to the beachhouse,\n"
	.string "lil' dude!\p"
	.string "Looking to beat the heat? Here, this\n"
	.string "special's on the house for ya!$"

IceCreamIsland_Beachhouse_EventScript_ManagerWaddleDee_Text_2:
# 145 "data/maps/IceCreamIsland_Beachhouse/scripts.pory"
	.string "Made with freshly sliced Gem Apples,\n"
	.string "this sorbet's our signature!\p"
	.string "If you can resist the temptation to\n"
	.string "eat it yourself, I'm sure your\l"
	.string "Helpers'll love a treat this sweet!$"
