# 1 "data/maps/CocoaCave_1F/scripts.pory"

# 2 "data/maps/CocoaCave_1F/scripts.pory"
CocoaCave_1F_MapScripts::
# 3 "data/maps/CocoaCave_1F/scripts.pory"
	.byte 0

CocoaCave_1F_EventScript_Spinni::
# 8 "data/maps/CocoaCave_1F/scripts.pory"
	lock
# 9 "data/maps/CocoaCave_1F/scripts.pory"
	faceplayer
# 10 "data/maps/CocoaCave_1F/scripts.pory"
	msgbox CocoaCave_1F_EventScript_Spinni_Text_0
# 21 "data/maps/CocoaCave_1F/scripts.pory"
	release
	return


CocoaCave_1F_EventScript_Spinni_Text_0:
# 10 "data/maps/CocoaCave_1F/scripts.pory"
	.string "Hiya, the name's Spinni. I'm looking for\n"
	.string "treasure on behalf of the Squeaks.\p"
	.string "If you're planning on going further, let\n"
	.string "me warn you: it's dark. Real dark.\p"
	.string "You probably won't get very far unless\n"
	.string "you can find a way to see down there.\p"
	.string "And remember: if you run into trouble,\n"
	.string "there's no shame in making an escape!$"
