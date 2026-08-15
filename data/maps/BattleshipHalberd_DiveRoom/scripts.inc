# 1 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"

# 2 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
BattleshipHalberd_DiveRoom_MapScripts::
# 3 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	.byte 0

BattleshipHalberd_ReturnToOrangeOcean::
# 8 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	lockall
# 9 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	msgbox BattleshipHalberd_ReturnToOrangeOcean_Text_0, MSGBOX_YESNO
# 16 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleshipHalberd_ReturnToOrangeOcean_1
# 23 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	releaseall
	return

BattleshipHalberd_ReturnToOrangeOcean_1:
# 18 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	warp MAP_ORANGE_OCEAN, 14, 31
# 19 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	releaseall
	return


BattleshipHalberd_ReturnToOrangeOcean_Text_0:
# 9 "data/maps/BattleshipHalberd_DiveRoom/scripts.pory"
	.string "You peer through the hatch below you,\n"
	.string "and see nothing but endless ocean.\p"
	.string "You can leave through here, the same\n"
	.string "way that you entered the ship.\p"
	.string "Will you return to Orange Ocean?$"
