# 1 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"

# 2 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
WaddleDeeTown_CastleLobby_MapScripts::
# 3 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.byte 0

WaddleDeeTown_CastleLobby_EventScript_Youngster::
# 8 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Youngster_Text_0, MSGBOX_NPC
	return


WaddleDeeTown_CastleLobby_EventScript_Lass::
# 18 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Lass_Text_0, MSGBOX_NPC
	return


WaddleDeeTown_CastleLobby_EventScript_Conductor::
# 28 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Conductor_Text_0, MSGBOX_NPC
	return


WaddleDeeTown_CastleLobby_EventScript_Staff::
# 38 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DARK_TM, WaddleDeeTown_CastleLobby_EventScript_Staff_2
WaddleDeeTown_CastleLobby_EventScript_Staff_1:
# 53 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Staff_Text_1, MSGBOX_NPC
	return

WaddleDeeTown_CastleLobby_EventScript_Staff_2:
# 40 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Staff_Text_0, MSGBOX_NPC
# 50 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	giveitem ITEM_TM63
# 51 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	setflag FLAG_RECEIVED_DARK_TM
	goto WaddleDeeTown_CastleLobby_EventScript_Staff_1


WaddleDeeTown_CastleLobby_EventScript_Builder::
# 63 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Builder_Text_0, MSGBOX_NPC
	return


WaddleDeeTown_CastleLobby_EventScript_Soldier_Left::
# 72 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Soldier_Left_Text_0, MSGBOX_NPC
	return


WaddleDeeTown_CastleLobby_EventScript_Soldier_Right::
# 84 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Soldier_Right_Text_0, MSGBOX_NPC
	return


WaddleDeeTown_CastleLobby_EventScript_Soldier_Middle::
# 96 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	msgbox WaddleDeeTown_CastleLobby_EventScript_Soldier_Middle_Text_0, MSGBOX_NPC
	return


WaddleDeeTown_CastleLobby_EventScript_Youngster_Text_0:
# 8 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "I wanted to be the first challenger at\n"
	.string "the Arena, so I ran right in…\p"
	.string "Turns out I couldn't even score a\n"
	.string "single win! Now I'll be remembered\l"
	.string "as the Arena's first loss!$"

WaddleDeeTown_CastleLobby_EventScript_Lass_Text_0:
# 18 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "My strategy for the Arena? I'm betting\n"
	.string "it all on bringing the cutest Helpers.\p"
	.string "My opponents will be so charmed, they'll\n"
	.string "lose their desire to win the battle!\l"
	.string "Don't you think it's a foolproof plan?$"

WaddleDeeTown_CastleLobby_EventScript_Conductor_Text_0:
# 28 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "The last time King Dedede hosted a\n"
	.string "big tournament, he built an entire\l"
	.string "castle just to host the event.\p"
	.string "I think this time he realized, even for\n"
	.string "his standards, how excessive that was.$"

WaddleDeeTown_CastleLobby_EventScript_Staff_Text_0:
# 40 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "Do you know what a “TM” is?\p"
	.string "They're special items that can teach\n"
	.string "your Helpers new moves.\p"
	.string "Unlike most items, you can use them\n"
	.string "as many times as you'd like.\p"
	.string "Here's a TM that might help you out\n"
	.string "during your Arena battles!$"

WaddleDeeTown_CastleLobby_EventScript_Staff_Text_1:
# 53 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "Thief doesn't just deal damage; it can\n"
	.string "also steal the held item of the target\l"
	.string "if the user isn't holding anything.\p"
	.string "If you want more TMs, do your best to\n"
	.string "win at the various Arenas!$"

WaddleDeeTown_CastleLobby_EventScript_Builder_Text_0:
# 63 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "Have you seen the northern part of\n"
	.string "town? It's completely blocked off.\p"
	.string "I wonder what kinds of Helpers\n"
	.string "await on the other side…$"

WaddleDeeTown_CastleLobby_EventScript_Soldier_Left_Text_0:
# 72 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "This is the entrance to the Great King's\n"
	.string "personal treasury.\p"
	.string "…\n"
	.string "…\p"
	.string "Don't look at me like that, alright?\n"
	.string "I can't let you in.$"

WaddleDeeTown_CastleLobby_EventScript_Soldier_Right_Text_0:
# 84 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "A certain someone has tasked me with\n"
	.string "guarding this door.\p"
	.string "What's that? Why am I being so coy\n"
	.string "about the Great King's identity?\p"
	.string "You're right. If that was the case,\n"
	.string "why would I be coy about it?$"

WaddleDeeTown_CastleLobby_EventScript_Soldier_Middle_Text_0:
# 96 "data/maps/WaddleDeeTown_CastleLobby/scripts.pory"
	.string "The entrance to the Waddle Dee Arena\n"
	.string "is right through here.\p"
	.string "I want to enter, but I've been told\n"
	.string "to stand here and direct others…\p"
	.string "Good luck if you're planning on\n"
	.string "battling in the Arena.$"
