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
	goto_if_set FLAG_IS_CHAMPION, WaddleDeeTown_Cafe_EventScript_BerryMenu_2
# 151 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, WaddleDeeTown_Cafe_EventScript_BerryMenu_3
# 155 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, WaddleDeeTown_Cafe_EventScript_BerryMenu_4
# 159 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WaddleDeeTown_Cafe_EventScript_BerryMenu_5
# 163 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, WaddleDeeTown_Cafe_EventScript_BerryMenu_6
# 167 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, WaddleDeeTown_Cafe_EventScript_BerryMenu_7
# 171 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, WaddleDeeTown_Cafe_EventScript_BerryMenu_8
# 177 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart2
WaddleDeeTown_Cafe_EventScript_BerryMenu_1:
# 179 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox gText_PleaseComeAgain
# 180 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	end

WaddleDeeTown_Cafe_EventScript_BerryMenu_2:
# 149 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart9
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu_1

WaddleDeeTown_Cafe_EventScript_BerryMenu_3:
# 153 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart8
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu_1

WaddleDeeTown_Cafe_EventScript_BerryMenu_4:
# 157 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart7
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu_1

WaddleDeeTown_Cafe_EventScript_BerryMenu_5:
# 161 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart6
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu_1

WaddleDeeTown_Cafe_EventScript_BerryMenu_6:
# 165 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart5
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu_1

WaddleDeeTown_Cafe_EventScript_BerryMenu_7:
# 169 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart4
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu_1

WaddleDeeTown_Cafe_EventScript_BerryMenu_8:
# 173 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_BerryMart3
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu_1


WaddleDeeTown_Cafe_EventScript_DrinkMenu::
# 186 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 187 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 188 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	message WaddleDeeTown_Cafe_EventScript_DrinkMenu_Text_0
# 190 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	waitmessage
# 191 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, WaddleDeeTown_Cafe_EventScript_DrinkMenu_2
# 195 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, WaddleDeeTown_Cafe_EventScript_DrinkMenu_3
# 199 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, WaddleDeeTown_Cafe_EventScript_DrinkMenu_4
# 203 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WaddleDeeTown_Cafe_EventScript_DrinkMenu_5
# 207 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, WaddleDeeTown_Cafe_EventScript_DrinkMenu_6
# 211 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, WaddleDeeTown_Cafe_EventScript_DrinkMenu_7
# 215 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, WaddleDeeTown_Cafe_EventScript_DrinkMenu_8
# 221 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart2
WaddleDeeTown_Cafe_EventScript_DrinkMenu_1:
# 223 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox gText_PleaseComeAgain
# 224 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	end

WaddleDeeTown_Cafe_EventScript_DrinkMenu_2:
# 193 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart9
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu_1

WaddleDeeTown_Cafe_EventScript_DrinkMenu_3:
# 197 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart8
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu_1

WaddleDeeTown_Cafe_EventScript_DrinkMenu_4:
# 201 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart7
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu_1

WaddleDeeTown_Cafe_EventScript_DrinkMenu_5:
# 205 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart6
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu_1

WaddleDeeTown_Cafe_EventScript_DrinkMenu_6:
# 209 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart5
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu_1

WaddleDeeTown_Cafe_EventScript_DrinkMenu_7:
# 213 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart4
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu_1

WaddleDeeTown_Cafe_EventScript_DrinkMenu_8:
# 217 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DrinkMart3
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu_1


WaddleDeeTown_Cafe_EventScript_DessertMenu::
# 230 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 231 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 232 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	message WaddleDeeTown_Cafe_EventScript_DessertMenu_Text_0
# 234 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	waitmessage
# 235 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, WaddleDeeTown_Cafe_EventScript_DessertMenu_2
# 239 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, WaddleDeeTown_Cafe_EventScript_DessertMenu_3
# 243 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, WaddleDeeTown_Cafe_EventScript_DessertMenu_4
# 247 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WaddleDeeTown_Cafe_EventScript_DessertMenu_5
# 251 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, WaddleDeeTown_Cafe_EventScript_DessertMenu_6
# 255 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, WaddleDeeTown_Cafe_EventScript_DessertMenu_7
# 259 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, WaddleDeeTown_Cafe_EventScript_DessertMenu_8
# 265 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart2
WaddleDeeTown_Cafe_EventScript_DessertMenu_1:
# 267 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox gText_PleaseComeAgain
# 268 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	end

WaddleDeeTown_Cafe_EventScript_DessertMenu_2:
# 237 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart9
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu_1

WaddleDeeTown_Cafe_EventScript_DessertMenu_3:
# 241 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart8
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu_1

WaddleDeeTown_Cafe_EventScript_DessertMenu_4:
# 245 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart7
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu_1

WaddleDeeTown_Cafe_EventScript_DessertMenu_5:
# 249 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart6
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu_1

WaddleDeeTown_Cafe_EventScript_DessertMenu_6:
# 253 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart5
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu_1

WaddleDeeTown_Cafe_EventScript_DessertMenu_7:
# 257 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart4
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu_1

WaddleDeeTown_Cafe_EventScript_DessertMenu_8:
# 261 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_DessertMart3
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu_1


WaddleDeeTown_Cafe_EventScript_IngredientMenu::
# 274 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	lock
# 275 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	faceplayer
# 276 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, WaddleDeeTown_Cafe_EventScript_IngredientMenu_2
# 286 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	message WaddleDeeTown_Cafe_EventScript_IngredientMenu_Text_1
# 288 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	waitmessage
# 289 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, WaddleDeeTown_Cafe_EventScript_IngredientMenu_6
# 293 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, WaddleDeeTown_Cafe_EventScript_IngredientMenu_7
# 297 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, WaddleDeeTown_Cafe_EventScript_IngredientMenu_8
# 301 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, WaddleDeeTown_Cafe_EventScript_IngredientMenu_9
# 305 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, WaddleDeeTown_Cafe_EventScript_IngredientMenu_10
# 311 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_SeasoningMart4
WaddleDeeTown_Cafe_EventScript_IngredientMenu_5:
# 313 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox gText_PleaseComeAgain
WaddleDeeTown_Cafe_EventScript_IngredientMenu_1:
# 315 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	release
	end

WaddleDeeTown_Cafe_EventScript_IngredientMenu_2:
# 278 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	msgbox WaddleDeeTown_Cafe_EventScript_IngredientMenu_Text_0
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu_1

WaddleDeeTown_Cafe_EventScript_IngredientMenu_6:
# 291 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_SeasoningMart9
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu_5

WaddleDeeTown_Cafe_EventScript_IngredientMenu_7:
# 295 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_SeasoningMart8
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu_5

WaddleDeeTown_Cafe_EventScript_IngredientMenu_8:
# 299 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_SeasoningMart7
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu_5

WaddleDeeTown_Cafe_EventScript_IngredientMenu_9:
# 303 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_SeasoningMart6
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu_5

WaddleDeeTown_Cafe_EventScript_IngredientMenu_10:
# 307 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	pokemart2 WaddleDeeTown_Cafe_SeasoningMart5
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu_5


WaddleDeeTown_Cafe_EventScript_BerryDesk::
# 321 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_BERRY_SERVER, DIR_SOUTH
# 322 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_BerryMenu
	return


WaddleDeeTown_Cafe_EventScript_DrinkDesk::
# 327 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_DRINK_SERVER, DIR_SOUTH
# 328 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_DrinkMenu
	return


WaddleDeeTown_Cafe_EventScript_DessertDesk::
# 333 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_DESSERT_SERVER, DIR_SOUTH
# 334 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_DessertMenu
	return


WaddleDeeTown_Cafe_EventScript_IngredientDesk::
# 339 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	turnobject LOCALID_CAFE_INGREDIENT_SERVER, DIR_SOUTH
# 340 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	goto WaddleDeeTown_Cafe_EventScript_IngredientMenu
	return


	.align 2
# 343 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart2:
# 345 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 346 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 347 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 348 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_NONE

	.align 2
# 351 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart2:
# 353 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

	.align 2
# 356 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart2:
# 358 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 359 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE

	.align 2
# 362 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart3:
# 364 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 365 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 366 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 367 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 368 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 369 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 370 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 371 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 374 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart3:
# 376 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 377 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

	.align 2
# 380 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart3:
# 382 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 383 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 384 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 385 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
	.2byte ITEM_NONE

	.align 2
# 388 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart4:
# 390 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 391 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 392 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 393 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 394 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 395 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 396 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 397 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 398 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 399 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 400 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 401 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 402 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WACAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 405 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart4:
# 407 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 408 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 409 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SODA_POP
	.2byte ITEM_NONE

	.align 2
# 412 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart4:
# 414 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 415 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 416 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 417 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 418 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_NONE

	.align 2
# 421 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_SeasoningMart4:
# 423 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 426 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart5:
# 428 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 429 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 430 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 431 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 432 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 433 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 434 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 435 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 436 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 437 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 438 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 439 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 440 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 441 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 442 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 443 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 444 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 445 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
	.2byte ITEM_NONE

	.align 2
# 448 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart5:
# 450 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 451 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 452 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SODA_POP
# 453 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

	.align 2
# 456 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart5:
# 458 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 459 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 460 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 461 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 462 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 463 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 464 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_NONE

	.align 2
# 467 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_SeasoningMart5:
# 469 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 470 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GRASSY_SEED
	.2byte ITEM_NONE

	.align 2
# 473 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart6:
# 475 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 476 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 477 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 478 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 479 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 480 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 481 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 482 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 483 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 484 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 485 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 486 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 487 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 488 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 489 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 490 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 491 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 492 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 493 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 494 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 495 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 496 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 497 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 498 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_TANGA_BERRY
	.2byte ITEM_NONE

	.align 2
# 501 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart6:
# 503 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 504 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 505 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SODA_POP
# 506 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LEMONADE
# 507 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

	.align 2
# 510 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart6:
# 512 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 513 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 514 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 515 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 516 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 517 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 518 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 519 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_NONE

	.align 2
# 522 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_SeasoningMart6:
# 524 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 525 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 526 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
	.2byte ITEM_NONE

	.align 2
# 529 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart7:
# 531 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 532 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 533 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 534 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 535 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 536 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 537 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 538 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 539 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 540 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 541 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 542 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 543 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 544 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 545 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 546 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 547 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 548 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 549 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 550 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 551 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 552 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 553 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 554 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 555 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 556 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 557 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 558 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 559 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
	.2byte ITEM_NONE

	.align 2
# 562 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart7:
# 564 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 565 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 566 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SODA_POP
# 567 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LEMONADE
# 568 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 569 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

	.align 2
# 572 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart7:
# 574 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 575 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 576 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 577 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 578 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 579 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 580 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 581 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 582 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 583 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_NONE

	.align 2
# 586 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_SeasoningMart7:
# 588 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 589 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 590 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 591 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MISTY_SEED
	.2byte ITEM_NONE

	.align 2
# 594 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart8:
# 596 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 597 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 598 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 599 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 600 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 601 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 602 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 603 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 604 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 605 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 606 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 607 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 608 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 609 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 610 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 611 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 612 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 613 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 614 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 615 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 616 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 617 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 618 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 619 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 620 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 621 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 622 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 623 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 624 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 625 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 626 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 627 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 628 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 629 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
	.2byte ITEM_NONE

	.align 2
# 632 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart8:
# 634 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 635 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 636 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SODA_POP
# 637 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LEMONADE
# 638 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 639 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 640 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

	.align 2
# 643 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart8:
# 645 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 646 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 647 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 648 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 649 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 650 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 651 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 652 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 653 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RESIST_MOCHI
# 654 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 655 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 656 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_NONE

	.align 2
# 659 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_SeasoningMart8:
# 661 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 662 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 663 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 664 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 665 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_NONE

	.align 2
# 668 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_BerryMart9:
# 670 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 671 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 672 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 673 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 674 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 675 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 676 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 677 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 678 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 679 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 680 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 681 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 682 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 683 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 684 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 685 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 686 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 687 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 688 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 689 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 690 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 691 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 692 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 693 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 694 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 695 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 696 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 697 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 698 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 699 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 700 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 701 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 702 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 703 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 704 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 705 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 706 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 707 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 708 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 709 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 710 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 711 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 712 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 713 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 714 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 715 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
	.2byte ITEM_NONE

	.align 2
# 718 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DrinkMart9:
# 720 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 721 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 722 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SODA_POP
# 723 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LEMONADE
# 724 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 725 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 726 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

	.align 2
# 729 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_DessertMart9:
# 731 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 732 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 733 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 734 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 735 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 736 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 737 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 738 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 739 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 740 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RESIST_MOCHI
# 741 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 742 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 743 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_NONE

	.align 2
# 746 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
WaddleDeeTown_Cafe_SeasoningMart9:
# 748 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 749 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 750 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 751 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 752 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 753 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 754 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 755 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_LAX_MINT
# 756 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 757 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 758 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MILD_MINT
# 759 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_RASH_MINT
# 760 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 761 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CALM_MINT
# 762 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 763 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 764 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 765 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 766 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 767 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 768 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 769 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 770 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 771 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 772 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
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
	.string "Maybe I should find something to fill\n"
	.string "the other seat with…$"

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
# 188 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "We serve drinks and snacks here!\n"
	.string "What can I get for you today?$"

WaddleDeeTown_Cafe_EventScript_DessertMenu_Text_0:
# 232 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "We serve desserts here!\n"
	.string "What can I get for you today?$"

WaddleDeeTown_Cafe_EventScript_IngredientMenu_Text_0:
# 278 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "I'm sorry, but we're still a bit low on\n"
	.string "supply for seasonings…\p"
	.string "Once some more shipments arrive, I'll\n"
	.string "be happy to sell you our offerings.$"

WaddleDeeTown_Cafe_EventScript_IngredientMenu_Text_1:
# 286 "data/maps/WaddleDeeTown_Cafe/scripts.pory"
	.string "We serve seasonings here!\n"
	.string "What can I get for you today?$"
