# 1 "data/maps/FloatIslands_SmallCave/scripts.pory"

# 2 "data/maps/FloatIslands_SmallCave/scripts.pory"
FloatIslands_SmallCave_MapScripts::
# 3 "data/maps/FloatIslands_SmallCave/scripts.pory"
	.byte 0

FloatIslands_SmallCave_EventScript_Trainer::
# 8 "data/maps/FloatIslands_SmallCave/scripts.pory"
	trainerbattle_single TRAINER_RICKY_3, FloatIslands_SmallCave_Text_TrainerIntro, FloatIslands_SmallCave_Text_TrainerDefeated
# 9 "data/maps/FloatIslands_SmallCave/scripts.pory"
	msgbox FloatIslands_SmallCave_Text_TrainerPost, MSGBOX_AUTOCLOSE
	return


FloatIslands_SmallCave_Text_TrainerIntro::
# 12 "data/maps/FloatIslands_SmallCave/scripts.pory"
	.string "My Helpers and I are both powered up in\n"
	.string "the rain!$"

FloatIslands_SmallCave_Text_TrainerDefeated::
# 18 "data/maps/FloatIslands_SmallCave/scripts.pory"
	.string "Defeated by someone who doesn't even\n"
	.string "carry a parasol…$"

FloatIslands_SmallCave_Text_TrainerPost::
# 24 "data/maps/FloatIslands_SmallCave/scripts.pory"
	.string "Do you view rainy days as time to play\n"
	.string "or time to stay at home?\p"
	.string "If you're like me, I think you'll enjoy\n"
	.string "what's up ahead.$"
