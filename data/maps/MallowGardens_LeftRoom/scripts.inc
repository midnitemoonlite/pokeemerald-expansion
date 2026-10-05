# 1 "data/maps/MallowGardens_LeftRoom/scripts.pory"

# 2 "data/maps/MallowGardens_LeftRoom/scripts.pory"
MallowGardens_LeftRoom_MapScripts::
# 3 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.byte 0

MallowGardens_LeftRoom_EventScript_Ribbon::
# 8 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	lock
# 9 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	faceplayer
# 10 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_EventScript_Ribbon_Text_0
# 15 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	release
	return


MallowGardens_LeftRoom_EventScript_Gentleman::
# 20 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	lock
# 21 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	faceplayer
# 22 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_METRONOME, MallowGardens_LeftRoom_EventScript_Gentleman_2
MallowGardens_LeftRoom_EventScript_Gentleman_1:
# 54 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_EventScript_Gentleman_Text_4
# 63 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	release
	return

MallowGardens_LeftRoom_EventScript_Gentleman_2:
# 24 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_EventScript_Gentleman_Text_0, MSGBOX_YESNO
# 32 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MallowGardens_LeftRoom_EventScript_Gentleman_4
# 49 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_EventScript_Gentleman_Text_3
# 50 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	release
	end

MallowGardens_LeftRoom_EventScript_Gentleman_4:
# 34 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_EventScript_Gentleman_Text_1
# 36 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY_5, MallowGardens_Text_GentDefeat
# 37 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_EventScript_Gentleman_Text_2
# 44 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	giveitem ITEM_METRONOME, 1
# 45 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	setflag FLAG_RECEIVED_METRONOME
	goto MallowGardens_LeftRoom_EventScript_Gentleman_1


MallowGardens_LeftRoom_EventScript_Chef::
# 68 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	lock
# 69 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	faceplayer
# 70 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, MallowGardens_LeftRoom_EventScript_Chef_2
# 84 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_NPC_TRADE_COMPLETED, MallowGardens_LeftRoom_EventScript_Chef_3
MallowGardens_LeftRoom_EventScript_Chef_1:
# 89 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	release
	return

MallowGardens_LeftRoom_EventScript_Chef_2:
# 72 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_EventScript_Chef_Text_0
	goto MallowGardens_LeftRoom_EventScript_Chef_1

MallowGardens_LeftRoom_EventScript_Chef_3:
# 86 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	ingame_trade INGAME_TRADE_SNOOTER, MallowGardens_LeftRoom_TradeMessage, MallowGardens_LeftRoom_DeclineScript, MallowGardens_LeftRoom_WrongScript, MallowGardens_LeftRoom_CompleteMessage
# 87 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
	goto MallowGardens_LeftRoom_EventScript_Chef_1


MallowGardens_LeftRoom_DeclineScript::
# 115 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_DeclineScript_Text_0
# 117 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	release
	return


MallowGardens_LeftRoom_WrongScript::
# 122 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	msgbox MallowGardens_LeftRoom_WrongScript_Text_0
# 127 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	release
	return


MallowGardens_LeftRoom_EventScript_Ribbon_Text_0:
# 10 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "Considering nobody lives in this place,\n"
	.string "it's surpisingly well-kept.\p"
	.string "An old, abandoned castle sounds like it\n"
	.string "would be scary and haunted, doesn't it?$"

MallowGardens_LeftRoom_EventScript_Gentleman_Text_0:
# 24 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "Salutations, my dear fellow! I'm\n"
	.string "quite enjoying the Royal Royale.\p"
	.string "And so, I've organized a little trial\n"
	.string "in this room for other participants.\p"
	.string "Win a battle against me, and I'll\n"
	.string "gift you an item. How does that sound?$"

MallowGardens_LeftRoom_EventScript_Gentleman_Text_1:
# 34 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "Splendid! Let's see how you fare in a\n"
	.string "game of chance!$"

MallowGardens_LeftRoom_EventScript_Gentleman_Text_2:
# 37 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "Bravo! You managed to best my team!\p"
	.string "It may not be very strong, but it was\n"
	.string "fun seeing what moves came next, yes?\p"
	.string "As promised, here is your prize: your\n"
	.string "very own metronome!$"

MallowGardens_LeftRoom_EventScript_Gentleman_Text_3:
# 49 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "No takers? What a shame, what a shame…$"

MallowGardens_LeftRoom_EventScript_Gentleman_Text_4:
# 54 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "This is an item that increases the\n"
	.string "power of a Helper's move when\l"
	.string "it is used in succession.\p"
	.string "It may not be very effective when\n"
	.string "used alongside the move Metronome…\p"
	.string "If you did get the same move twice in a\n"
	.string "row, though, you'd be very lucky!$"

MallowGardens_LeftRoom_EventScript_Chef_Text_0:
# 72 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "I ended up taking a closer look at the\n"
	.string "Snooter you traded me…\p"
	.string "It seems to have a different ability,\n"
	.string "which gives it its trademark appetite.\p"
	.string "Hmm… did the Snooter I give you have\n"
	.string "some kind of particularly rare ability?\p"
	.string "I don't know the best way to use it in\n"
	.string "battle, but maybe you can figure it out!$"

MallowGardens_LeftRoom_DeclineScript_Text_0:
# 115 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "Oh well… I should have figured such a\n"
	.string "moody Helper was a tough sell.$"

MallowGardens_LeftRoom_WrongScript_Text_0:
# 122 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "I'm sorry, but this isn't quite the\n"
	.string "Snooter I'm looking for…\p"
	.string "Snooters are stout creatures with big\n"
	.string "mouths. They're unmistakable!$"

MallowGardens_LeftRoom_TradeMessage::
# 92 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "Oh, dear… what should I do?\p"
	.string "I heard of this Helper named Snooter,\n"
	.string "who supposedly had a refined palate.\p"
	.string "I came all this way to find one, hoping\n"
	.string "it would help with my cooking skills…\l"
	.string "but this one is so temperamental!\p"
	.string "It gets so angry, it refuses to eat\n"
	.string "most of what I give it, and storms off.\p"
	.string "I hate to bother you, but could you help\n"
	.string "me with befriending another Snooter?\p"
	.string "In return, I'll trade this one to you.\n"
	.string "A Snooter-for-Snooter exchange!$"

MallowGardens_LeftRoom_CompleteMessage::
# 130 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "Ahh, yes! This one seems more relaxed.\n"
	.string "Thank you for your assistance!\p"
	.string "Now, Snooter and I will work together\n"
	.string "to become the greatest chef duo!$"

MallowGardens_Text_GentDefeat::
# 139 "data/maps/MallowGardens_LeftRoom/scripts.pory"
	.string "How exciting! You never know what will\n"
	.string "come next this way!$"
