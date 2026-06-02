# 1 "data/maps/GreenRestArea_Mart/scripts.pory"

# 2 "data/maps/GreenRestArea_Mart/scripts.pory"
GreenRestArea_Mart_MapScripts::
# 3 "data/maps/GreenRestArea_Mart/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, GreenRestArea_Mart_OnResume
# 4 "data/maps/GreenRestArea_Mart/scripts.pory"
	.byte 0
# 5 "data/maps/GreenRestArea_Mart/scripts.pory"

# 6 "data/maps/GreenRestArea_Mart/scripts.pory"
GreenRestArea_Mart_OnResume:
# 7 "data/maps/GreenRestArea_Mart/scripts.pory"
	call_if_ge VAR_LUMBERJACK_QUEST, 2, GreenRestArea_Mart_EventScript_HideLumberjack
# 8 "data/maps/GreenRestArea_Mart/scripts.pory"
	end

GreenRestArea_Mart_EventScript_HideLumberjack::
# 13 "data/maps/GreenRestArea_Mart/scripts.pory"
	removeobject LOCALID_LUMBERJACK_MART
	return


GreenRestArea_Mart_EventScript_Clerk::
# 19 "data/maps/GreenRestArea_Mart/scripts.pory"
	lock
# 20 "data/maps/GreenRestArea_Mart/scripts.pory"
	faceplayer
# 21 "data/maps/GreenRestArea_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 22 "data/maps/GreenRestArea_Mart/scripts.pory"
	waitmessage
# 23 "data/maps/GreenRestArea_Mart/scripts.pory"
	pokemart GreenRestArea_Mart
# 24 "data/maps/GreenRestArea_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 25 "data/maps/GreenRestArea_Mart/scripts.pory"
	release
	end


	.align 2
# 29 "data/maps/GreenRestArea_Mart/scripts.pory"
GreenRestArea_Mart:
# 31 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 32 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 33 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_POTION
# 34 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 37 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 38 "data/maps/GreenRestArea_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

GreenRestArea_EventScript_WaddleDeeJuice::
# 43 "data/maps/GreenRestArea_Mart/scripts.pory"
	lock
# 44 "data/maps/GreenRestArea_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/GreenRestArea_Mart/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeJuice_Text_0
# 50 "data/maps/GreenRestArea_Mart/scripts.pory"
	release
	return


GreenRestArea_EventScript_WaddleDeeSell::
# 55 "data/maps/GreenRestArea_Mart/scripts.pory"
	lock
# 56 "data/maps/GreenRestArea_Mart/scripts.pory"
	faceplayer
# 57 "data/maps/GreenRestArea_Mart/scripts.pory"
	compare VAR_LUMBERJACK_QUEST, 1
	goto_if_eq GreenRestArea_EventScript_WaddleDeeSell_2
# 94 "data/maps/GreenRestArea_Mart/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeSell_Text_1
GreenRestArea_EventScript_WaddleDeeSell_1:
# 104 "data/maps/GreenRestArea_Mart/scripts.pory"
	release
	return

GreenRestArea_EventScript_WaddleDeeSell_2:
# 59 "data/maps/GreenRestArea_Mart/scripts.pory"
	msgbox GreenRestArea_EventScript_WaddleDeeSell_Text_0
# 72 "data/maps/GreenRestArea_Mart/scripts.pory"
	closemessage
# 73 "data/maps/GreenRestArea_Mart/scripts.pory"
	checkobjectat 59, 9
# 74 "data/maps/GreenRestArea_Mart/scripts.pory"
	checkobjectat 5, 2
# 75 "data/maps/GreenRestArea_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GreenRestArea_EventScript_WaddleDeeSell_6
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	applymovement LOCALID_LUMBERJACK_MART, GreenRestArea_EventScript_WaddleDeeSell_Movement_1
# 83 "data/maps/GreenRestArea_Mart/scripts.pory"
	waitmovement
GreenRestArea_EventScript_WaddleDeeSell_5:
# 85 "data/maps/GreenRestArea_Mart/scripts.pory"
	removeobject LOCALID_LUMBERJACK_MART
# 86 "data/maps/GreenRestArea_Mart/scripts.pory"
	setflag FLAG_HIDE_LUMBERJACK_MART
# 87 "data/maps/GreenRestArea_Mart/scripts.pory"
	clearflag FLAG_HIDE_LUMBERJACK_FARMHOUSE
# 88 "data/maps/GreenRestArea_Mart/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/GreenRestArea_Mart/scripts.pory"
	waitse
# 90 "data/maps/GreenRestArea_Mart/scripts.pory"
	setvar VAR_LUMBERJACK_QUEST, 2
	goto GreenRestArea_EventScript_WaddleDeeSell_1

GreenRestArea_EventScript_WaddleDeeSell_6:
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	applymovement LOCALID_LUMBERJACK_MART, GreenRestArea_EventScript_WaddleDeeSell_Movement_0
# 78 "data/maps/GreenRestArea_Mart/scripts.pory"
	waitmovement
	goto GreenRestArea_EventScript_WaddleDeeSell_5


# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
GreenRestArea_EventScript_WaddleDeeSell_Movement_0:
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_left
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_left
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 77 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
	step_end

# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
GreenRestArea_EventScript_WaddleDeeSell_Movement_1:
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_left
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_left
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
# 82 "data/maps/GreenRestArea_Mart/scripts.pory"
	walk_down
	step_end

GreenRestArea_EventScript_WaddleDeeJuice_Text_0:
# 45 "data/maps/GreenRestArea_Mart/scripts.pory"
	.string "I know that Cherry Juice is supposed to\n"
	.string "be for your Helpers, but…\p"
	.string "I can't help it! It tastes so good!\n"
	.string "I love juice!!$"

GreenRestArea_EventScript_WaddleDeeSell_Text_0:
# 59 "data/maps/GreenRestArea_Mart/scripts.pory"
	.string "Hm? You want to know if I live at the\n"
	.string "farmhouse in Vegetable Valley?\p"
	.string "Why, yes I do. Can I help you?\p"
	.string "What's that? My partner asked you\n"
	.string "to look for me?\p"
	.string "Oh dear! How long has it been since\n"
	.string "I left? She must be worried sick!\p"
	.string "Thank you, my friend. No more lounging\n"
	.string "around for me. I have to hurry back!$"

GreenRestArea_EventScript_WaddleDeeSell_Text_1:
# 94 "data/maps/GreenRestArea_Mart/scripts.pory"
	.string "I grow crops in Vegetable Valley, then\n"
	.string "bring them down here to sell.\p"
	.string "Those crops get used to make hearty\n"
	.string "meals and drinks.\p"
	.string "After a long day of work, there's\n"
	.string "nothing better to refresh yourself\l"
	.string "with. It's nature's blessing!$"
