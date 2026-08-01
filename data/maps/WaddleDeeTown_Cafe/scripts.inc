# 1 "data/maps/WaddleDeeTown_Cafe/scripts.pory"

# 2 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_MapScripts::
# 3 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.byte 0

WaddleDeeTown_Cafe_EventScript_CafeManager::
# 8 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 9 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 10 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_CafeManager_Text_0
# 16 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_LonelyWaddleDee::
# 21 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 22 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 23 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_LonelyWaddleDee_Text_0
# 28 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_BreakWaddleDee::
# 33 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 34 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 35 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_BreakWaddleDee_Text_0
# 40 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_WinterWaddleDee::
# 45 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 46 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 47 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_WinterWaddleDee_Text_0
# 52 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_CleaningWaddleDee::
# 57 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 58 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 59 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_CleaningWaddleDee_Text_0
# 64 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee::
# 69 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 70 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 71 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_RECEIVED_TWISTED_SPOON, WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_2
# 77 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TWISTED_SPOON, WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_3
WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_1:
# 89 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return

WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_2:
# 73 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_Text_0
	goto WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_1

WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_3:
# 79 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_Text_1
# 86 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	giveitem ITEM_TWISTED_SPOON
# 87 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	setflag FLAG_RECEIVED_TWISTED_SPOON
	goto WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_1


WaddleDeeTown_Cafe_EventScript_DeliveryWaddleDee::
# 94 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 95 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 96 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_DeliveryWaddleDee_Text_0
# 101 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_SinkWaddleDee::
# 106 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 107 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 108 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_SinkWaddleDee_Text_0
# 110 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_DatingWaddleDee::
# 115 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 116 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 117 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_DatingWaddleDee_Text_0
# 125 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_RibbonWaddleDee::
# 130 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 131 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 132 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_RibbonWaddleDee_Text_0
# 137 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_BerryMenu::
# 142 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 143 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 144 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	message WaddleDeeTown_Cafe_EventScript_BerryMenu_Text_0
# 146 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	waitmessage
# 147 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart
# 148 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox gText_PleaseComeAgain
# 149 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	end


WaddleDeeTown_Cafe_EventScript_DrinkMenu::
# 155 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 156 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 157 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	message WaddleDeeTown_Cafe_EventScript_DrinkMenu_Text_0
# 159 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	waitmessage
# 160 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart
# 161 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox gText_PleaseComeAgain
# 162 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	end


WaddleDeeTown_Cafe_EventScript_DessertMenu::
# 168 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 169 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 170 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	message WaddleDeeTown_Cafe_EventScript_DessertMenu_Text_0
# 172 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	waitmessage
# 173 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart
# 174 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox gText_PleaseComeAgain
# 175 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	end


WaddleDeeTown_Cafe_EventScript_IngredientMenu::
# 181 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 182 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 183 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_IngredientMenu_Text_0
# 191 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	return


WaddleDeeTown_Cafe_EventScript_BerryDesk::
# 196 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_BERRY_SERVER, DIR_SOUTH
# 197 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu
	return


WaddleDeeTown_Cafe_EventScript_DrinkDesk::
# 202 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_DRINK_SERVER, DIR_SOUTH
# 203 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu
	return


WaddleDeeTown_Cafe_EventScript_DessertDesk::
# 208 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_DESSERT_SERVER, DIR_SOUTH
# 209 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu
	return


WaddleDeeTown_Cafe_EventScript_IngredientDesk::
# 214 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_INGREDIENT_SERVER, DIR_SOUTH
# 215 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu
	return


	.align 2
# 218 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart:
# 220 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 221 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 222 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 223 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_NONE

	.align 2
# 226 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart:
# 228 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

	.align 2
# 231 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart:
# 233 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 234 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

WaddleDeeTown_Cafe_EventScript_CafeManager_Text_0:
# 10 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "Welcome to the Waddle Dee Café!\n"
	.string "If you're looking to order, please speak\l"
	.string "to the café staff behind the kitchen.\p"
	.string "We make regular additions to our menu,\n"
	.string "so we hope to see you again soon!$"

WaddleDeeTown_Cafe_EventScript_LonelyWaddleDee_Text_0:
# 23 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "I love eating at the café, but I feel\n"
	.string "a bit lonely coming on my own so often.\p"
	.string "Wouldn't it be nice if they could sit a\n"
	.string "doll or something across from me?$"

WaddleDeeTown_Cafe_EventScript_BreakWaddleDee_Text_0:
# 35 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "…what? You think it's odd seeing a café\n"
	.string "chef eating at their own restaurant?\p"
	.string "Us hardworking cooks need snack breaks\n"
	.string "too, you know!$"

WaddleDeeTown_Cafe_EventScript_WinterWaddleDee_Text_0:
# 47 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "My favorite dish to order is the\n"
	.string "Superspicy Curry! It warms me right up!\p"
	.string "I've had it so much, it's actually\n"
	.string "starting to taste pretty mild…$"

WaddleDeeTown_Cafe_EventScript_CleaningWaddleDee_Text_0:
# 59 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "When guests finish their meals, it's my\n"
	.string "job to clean the tables they sit at.\p"
	.string "Look at that! My own reflection! Yep,\n"
	.string "this table is spick and span!$"

WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_Text_0:
# 73 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "I'm still waiting on my new silverware!\n"
	.string "What do they expect me to do,\l"
	.string "drink this soup with my hands?$"

WaddleDeeTown_Cafe_EventScript_SpoonWaddleDee_Text_1:
# 79 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "Excuse me! Do you work here?\n"
	.string "I've got a complaint to file!\p"
	.string "The silverware I've been handed with my\n"
	.string "meal is completely broken!\p"
	.string "I can't use this! Take it back, will you?$"

WaddleDeeTown_Cafe_EventScript_DeliveryWaddleDee_Text_0:
# 96 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "Excuse me! I'm busy taking dishes\n"
	.string "from the kitchen to the guests,\l"
	.string "and from the guests to the kitchen!\p"
	.string "Whew! This job's a workout!$"

WaddleDeeTown_Cafe_EventScript_SinkWaddleDee_Text_0:
# 108 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "Whew… I've washed so many vegetables\n"
	.string "today, my hands are starting to prune…$"

WaddleDeeTown_Cafe_EventScript_DatingWaddleDee_Text_0:
# 117 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "I wanted to impress my friend, so I\n"
	.string "invited them to this fancy café…\p"
	.string "The thing is, I'm worried of picking\n"
	.string "an item that'll make me look lame!\p"
	.string "What do I do? Maybe I should just order\n"
	.string "whatever she's having…$"

WaddleDeeTown_Cafe_EventScript_RibbonWaddleDee_Text_0:
# 132 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "Oooh! I've never been to this café\n"
	.string "before… what should I get?\p"
	.string "Ahh, everything on here looks yummy…\n"
	.string "maybe I'll get whatever my friend does!$"

WaddleDeeTown_Cafe_EventScript_BerryMenu_Text_0:
# 144 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "We serve fresh berries here!\n"
	.string "What can I get for you today?$"

WaddleDeeTown_Cafe_EventScript_DrinkMenu_Text_0:
# 157 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "We serve drinks and snacks here!\n"
	.string "What can I get for you today?$"

WaddleDeeTown_Cafe_EventScript_DessertMenu_Text_0:
# 170 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "We serve desserts here!\n"
	.string "What can I get for you today?$"

WaddleDeeTown_Cafe_EventScript_IngredientMenu_Text_0:
# 183 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "We're planning on selling ingredients\n"
	.string "for food preparation soon.\p"
	.string "It might seem counterintuitive, but\n"
	.string "our head chef is mostly concerned with\l"
	.string "making sure everyone eats well.\p"
	.string "We hope you'll check back in later!$"
