# 1 "data/maps/MallowCastle_3F/scripts.pory"

# 2 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_MapScripts::
# 3 "data/maps/MallowCastle_3F/scripts.pory"
	.byte 0

MallowCastle_3F_EventScript_WaddleDee::
# 8 "data/maps/MallowCastle_3F/scripts.pory"
	lock
# 9 "data/maps/MallowCastle_3F/scripts.pory"
	faceplayer
# 10 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_EventScript_WaddleDee_Text_0
# 18 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_Trainer1::
# 25 "data/maps/MallowCastle_3F/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, MallowCastle_3F_Text_Trainer1Intro, MallowCastle_3F_Text_Trainer1Defeated
# 26 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	return


MallowCastle_3F_EventScript_Trainer2::
# 49 "data/maps/MallowCastle_3F/scripts.pory"
	trainerbattle_single TRAINER_LEROY, MallowCastle_3F_Text_Trainer2Intro, MallowCastle_3F_Text_Trainer2Defeated
# 50 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


MallowCastle_3F_EventScript_Trainer3::
# 75 "data/maps/MallowCastle_3F/scripts.pory"
	lock
# 76 "data/maps/MallowCastle_3F/scripts.pory"
	faceplayer
# 77 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_EventScript_Trainer3_Text_0
# 79 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_Trainer3Battle::
# 90 "data/maps/MallowCastle_3F/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, 0
# 91 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_3F_TRAINER_3, Common_Movement_ExclamationMark
# 92 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
# 93 "data/maps/MallowCastle_3F/scripts.pory"
	delay 60
# 94 "data/maps/MallowCastle_3F/scripts.pory"
	getplayerxy VAR_TEMP_5, VAR_TEMP_6
# 95 "data/maps/MallowCastle_3F/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq MallowCastle_3F_EventScript_Trainer3Battle_2
# 100 "data/maps/MallowCastle_3F/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq MallowCastle_3F_EventScript_Trainer3Battle_3
# 109 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_3F_TRAINER_3, MallowCastle_3F_EventScript_Trainer3Battle_Movement_3
# 110 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
# 111 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_PLAYER, MallowCastle_3F_EventScript_Trainer3Battle_Movement_2
# 112 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
MallowCastle_3F_EventScript_Trainer3Battle_1:
# 114 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_EventScript_Trainer3Battle_Text_0
# 119 "data/maps/MallowCastle_3F/scripts.pory"
	trainerbattle_no_intro TRAINER_WILTON_1, MallowCastle_3F_Text_Trainer3Defeated
# 120 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_EventScript_Trainer3Battle_Text_1
# 122 "data/maps/MallowCastle_3F/scripts.pory"
	closemessage
# 123 "data/maps/MallowCastle_3F/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq MallowCastle_3F_EventScript_Trainer3Battle_8
# 128 "data/maps/MallowCastle_3F/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq MallowCastle_3F_EventScript_Trainer3Battle_9
# 135 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_3F_TRAINER_3, MallowCastle_3F_EventScript_Trainer3Battle_Movement_6
# 136 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
MallowCastle_3F_EventScript_Trainer3Battle_7:
# 138 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return

MallowCastle_3F_EventScript_Trainer3Battle_2:
# 97 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_3F_TRAINER_3, MallowCastle_3F_EventScript_Trainer3Battle_Movement_0
# 98 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
	goto MallowCastle_3F_EventScript_Trainer3Battle_1

MallowCastle_3F_EventScript_Trainer3Battle_3:
# 102 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_3F_TRAINER_3, MallowCastle_3F_EventScript_Trainer3Battle_Movement_1
# 103 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
# 104 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_PLAYER, MallowCastle_3F_EventScript_Trainer3Battle_Movement_2
# 105 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
	goto MallowCastle_3F_EventScript_Trainer3Battle_1

MallowCastle_3F_EventScript_Trainer3Battle_8:
# 125 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_3F_TRAINER_3, MallowCastle_3F_EventScript_Trainer3Battle_Movement_4
# 126 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
	goto MallowCastle_3F_EventScript_Trainer3Battle_7

MallowCastle_3F_EventScript_Trainer3Battle_9:
# 130 "data/maps/MallowCastle_3F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_3F_TRAINER_3, MallowCastle_3F_EventScript_Trainer3Battle_Movement_5
# 131 "data/maps/MallowCastle_3F/scripts.pory"
	waitmovement
	goto MallowCastle_3F_EventScript_Trainer3Battle_7


MallowCastle_3F_EventScript_BombBlock1::
# 145 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 146 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 147 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_1
# 148 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_10
# 149 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 150 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 151 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 152 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 153 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 154 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 155 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 156 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 27, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 157 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 29, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 158 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 159 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 160 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 161 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 162 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 163 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 164 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 165 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 166 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 26, METATILE_LilycoveMuseum_Block, TRUE
# 167 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 30, METATILE_LilycoveMuseum_Floor, FALSE
# 168 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 170 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 171 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 172 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 173 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 174 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 175 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 176 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 25, METATILE_LilycoveMuseum_Block, TRUE
# 177 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 31, METATILE_LilycoveMuseum_Floor, FALSE
# 178 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 179 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 180 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 181 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 182 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 183 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 184 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 185 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 186 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 32, METATILE_LilycoveMuseum_WallLip, FALSE
# 187 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 188 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 189 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 190 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 191 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 192 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 193 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 194 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 195 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 33, 32, METATILE_LilycoveMuseum_WallLip, FALSE
# 196 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 197 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 198 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 199 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 200 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 201 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 202 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 203 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 204 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 33, 31, METATILE_LilycoveMuseum_Floor, FALSE
# 205 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 206 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 207 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 208 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 209 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 210 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 211 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 212 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 213 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 33, 30, METATILE_LilycoveMuseum_Floor, FALSE
# 214 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 215 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 216 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 217 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 218 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 219 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 220 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 221 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 222 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 33, 29, METATILE_LilycoveMuseum_Block, TRUE
# 223 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 224 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 225 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 226 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 227 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 228 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 229 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 230 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 231 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 29, METATILE_LilycoveMuseum_Block, TRUE
# 232 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 233 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 234 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 235 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 236 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 237 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 238 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 239 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 240 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 28, METATILE_LilycoveMuseum_Block, TRUE
# 241 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 242 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 243 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 244 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 245 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 246 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 247 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 248 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 249 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 27, METATILE_LilycoveMuseum_Block, TRUE
# 250 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 251 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 252 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 253 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 254 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 255 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 256 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 257 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock2::
# 262 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 263 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 264 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_2
# 265 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_11
# 266 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 267 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 268 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 269 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 270 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 271 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 272 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 273 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 39, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 274 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 276 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 277 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 278 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 279 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 280 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 281 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 282 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 38, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 283 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 285 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 286 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 287 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 288 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 289 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 290 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 291 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 37, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 292 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 293 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 294 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 295 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 296 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 297 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 298 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 299 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 300 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 36, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 301 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 302 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 303 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 304 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 305 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 306 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 307 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 308 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 309 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 35, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 310 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 311 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 312 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 313 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 314 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 315 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 316 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 317 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 318 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 34, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 319 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 320 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 321 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 322 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 323 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 324 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 325 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 326 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 327 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 33, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 328 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 329 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 330 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 331 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 332 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 333 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 334 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 335 "data/maps/MallowCastle_3F/scripts.pory"
	checkflag FLAG_TEMP_10
# 336 "data/maps/MallowCastle_3F/scripts.pory"
	goto_if_set FLAG_TEMP_10, MallowCastle_3F_EventScript_BombBlock2Continued
# 337 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock2Continued::
# 342 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 343 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 344 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 345 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 346 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 347 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 348 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 349 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 350 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 351 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 352 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 31, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 353 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 354 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 355 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 356 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 357 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 358 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 359 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 360 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 361 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 30, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 362 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 363 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 364 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 365 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 366 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 367 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 368 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 369 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 370 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 29, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 371 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 372 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 373 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 374 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 375 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 376 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 377 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 378 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 379 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 28, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 380 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 381 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 382 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 383 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 384 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 385 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 386 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 387 "data/maps/MallowCastle_3F/scripts.pory"
	checkflag FLAG_TEMP_13
# 388 "data/maps/MallowCastle_3F/scripts.pory"
	goto_if_unset FLAG_TEMP_13, MallowCastle_3F_EventScript_BombBlock2_Continued_Continued
# 389 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock2_Continued_Continued::
# 394 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 395 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_4
# 396 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_13
# 397 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 398 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 399 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 400 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 401 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 402 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
	return


MallowCastle_3F_EventScript_BombBlock3::
# 407 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 408 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 409 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_3
# 410 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_12
# 411 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 412 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 413 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 414 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 415 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 416 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 417 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 418 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 40, 30, METATILE_LilycoveMuseum_Floor, FALSE
# 419 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 420 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 421 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 422 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 423 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 424 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 425 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 426 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 427 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 39, 30, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 428 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 40, 31, METATILE_LilycoveMuseum_Floor, FALSE
# 429 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 430 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 431 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 432 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 433 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 434 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 435 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 436 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 437 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 39, 31, METATILE_LilycoveMuseum_Floor, FALSE
# 438 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 40, 32, METATILE_LilycoveMuseum_WallLip, FALSE
# 439 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 440 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 441 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 442 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 443 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 444 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 445 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 446 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 447 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 39, 32, METATILE_LilycoveMuseum_WallLip, FALSE
# 448 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 449 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 450 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 451 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 452 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 453 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 454 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 455 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock4::
# 460 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 461 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 462 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_4
# 463 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_13
# 464 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 465 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 466 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 467 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 468 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 469 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 470 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 471 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 28, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 472 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 473 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 474 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 475 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 476 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 477 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 478 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 479 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 480 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 29, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 481 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 482 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 483 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 484 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 485 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 486 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 487 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 488 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 489 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 30, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 490 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 491 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 492 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 493 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 494 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 495 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 496 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 497 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 498 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 31, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 499 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 500 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 501 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 502 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 503 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 504 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 505 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 506 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock5::
# 511 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 512 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 513 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_5
# 514 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_14
# 515 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 516 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 517 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 518 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 519 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 520 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 521 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 522 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 21, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 523 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 23, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 524 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 525 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 526 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 527 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 528 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 529 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 530 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock6::
# 535 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 536 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 537 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_6
# 538 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_15
# 539 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 540 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 541 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 542 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 543 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 544 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 545 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 546 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 28, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 547 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 30, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 548 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 549 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 550 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 551 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 552 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 553 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 554 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 555 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock7::
# 560 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 561 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 562 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_7
# 563 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_16
# 564 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 565 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 566 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 567 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 568 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 569 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 570 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 571 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 35, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 572 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 37, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 573 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 574 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 575 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 576 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 577 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 578 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 579 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 580 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock8::
# 585 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 586 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 587 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_8
# 588 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_17
# 589 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 590 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 591 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 592 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 593 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 594 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 595 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 596 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 597 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 598 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 599 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 600 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 601 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 602 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 603 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 8, 4, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 604 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 605 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 606 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 607 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 608 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 609 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 610 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 611 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 612 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 9, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 613 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 614 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 615 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 616 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 617 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 618 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 619 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 620 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 621 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 10, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 622 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 623 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 624 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 625 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 626 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 627 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 628 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 629 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 630 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 11, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 631 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 632 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 633 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 634 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 635 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 636 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 637 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 638 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 639 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 12, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 640 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 641 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 642 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 643 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 644 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 645 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 646 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 647 "data/maps/MallowCastle_3F/scripts.pory"
	goto_if_not_defeated TRAINER_WILTON_1, MallowCastle_3F_EventScript_Trainer3Battle
# 648 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock9::
# 653 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 654 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 655 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_9
# 656 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_18
# 657 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 658 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 659 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 660 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 661 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 662 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 663 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 664 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 665 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 666 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 667 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 668 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 669 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 670 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 671 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 672 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 673 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 674 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 675 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 676 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 677 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 678 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 679 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 680 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 681 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 682 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 683 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 684 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 685 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 686 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 687 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 688 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 689 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 690 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 691 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 692 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 693 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 694 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 695 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 696 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 697 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 698 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 699 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 700 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 701 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 702 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 703 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 704 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 705 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 706 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 707 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 708 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 709 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 710 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 711 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 712 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 713 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 714 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 715 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 716 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 717 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 718 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 719 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 720 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 721 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 722 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 723 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 724 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 725 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 726 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 727 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 728 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 729 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 730 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 731 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 732 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 733 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 734 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 735 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 736 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 737 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 738 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 739 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 740 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 741 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 1, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 742 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 743 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 744 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 745 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 746 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 747 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 748 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 749 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 750 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 751 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 752 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 753 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 754 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 755 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 756 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 757 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 758 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 759 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 760 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 761 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 762 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 763 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 764 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 765 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 766 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 767 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 768 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 769 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 770 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 771 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 5, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 772 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 773 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 774 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 775 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 776 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 777 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 778 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 779 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 780 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 6, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 781 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 782 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 783 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 784 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 785 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 786 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 787 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 788 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 789 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 7, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 790 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 791 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 792 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 793 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 794 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 795 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 796 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 797 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 798 "data/maps/MallowCastle_3F/scripts.pory"
	checkflag FLAG_TEMP_1B
# 799 "data/maps/MallowCastle_3F/scripts.pory"
	call_if_unset FLAG_TEMP_1B, MallowCastle_3F_EventScript_BombBlock9_ExtraRemoval
# 800 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 801 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 802 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 803 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 804 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 805 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 806 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 807 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 808 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 809 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 9, METATILE_LilycoveMuseum_WallLip, FALSE
# 810 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 811 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 812 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 813 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 814 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 815 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 816 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 817 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock9_ExtraRemoval::
# 822 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_12
# 823 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_1B
	return


MallowCastle_3F_EventScript_BombBlock10::
# 828 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 829 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 830 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_10
# 831 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_19
# 832 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 833 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 834 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 835 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 836 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 837 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 838 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 839 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 840 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 841 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 842 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 843 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 844 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 845 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 846 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 8, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 847 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 848 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 849 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 850 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 851 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 852 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 853 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 854 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 855 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 9, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 856 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 857 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 858 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 859 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 860 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 861 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 862 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 863 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 864 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 10, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 865 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 866 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 867 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 868 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 869 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 870 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 871 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 872 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 873 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 11, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 874 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 875 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 876 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 877 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 878 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 879 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 880 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 881 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 882 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 12, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 883 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 884 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 885 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 886 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 887 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 888 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 889 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 890 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock11::
# 895 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 896 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 897 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_11
# 898 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_1A
# 899 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 900 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 901 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 902 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 903 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 904 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 905 "data/maps/MallowCastle_3F/scripts.pory"
	delay 120
# 906 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_EventScript_BombBlock11_Text_0
# 907 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock12::
# 912 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 913 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 914 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_12
# 915 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_1B
# 916 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 917 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 918 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 919 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 920 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 921 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 922 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 923 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 924 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 925 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 926 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 927 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 928 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 929 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 930 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 931 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 932 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 933 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 934 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 935 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 936 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 937 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 938 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 939 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 940 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 941 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 942 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 5, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 943 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 9, METATILE_LilycoveMuseum_WallLip, FALSE
# 944 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 945 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 946 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 947 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 948 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 949 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 950 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 951 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


# 97 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_EventScript_Trainer3Battle_Movement_0:
# 97 "data/maps/MallowCastle_3F/scripts.pory"
	walk_down
# 97 "data/maps/MallowCastle_3F/scripts.pory"
	walk_down
# 97 "data/maps/MallowCastle_3F/scripts.pory"
	walk_left
# 97 "data/maps/MallowCastle_3F/scripts.pory"
	walk_left
# 97 "data/maps/MallowCastle_3F/scripts.pory"
	walk_left
	step_end

# 102 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_EventScript_Trainer3Battle_Movement_1:
# 102 "data/maps/MallowCastle_3F/scripts.pory"
	walk_down
# 102 "data/maps/MallowCastle_3F/scripts.pory"
	walk_down
# 102 "data/maps/MallowCastle_3F/scripts.pory"
	walk_down
# 102 "data/maps/MallowCastle_3F/scripts.pory"
	walk_left
# 102 "data/maps/MallowCastle_3F/scripts.pory"
	walk_left
	step_end

# 104 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_EventScript_Trainer3Battle_Movement_2:
# 104 "data/maps/MallowCastle_3F/scripts.pory"
	face_right
	step_end

# 109 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_EventScript_Trainer3Battle_Movement_3:
# 109 "data/maps/MallowCastle_3F/scripts.pory"
	walk_down
# 109 "data/maps/MallowCastle_3F/scripts.pory"
	walk_down
# 109 "data/maps/MallowCastle_3F/scripts.pory"
	walk_left
	step_end

# 125 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_EventScript_Trainer3Battle_Movement_4:
# 125 "data/maps/MallowCastle_3F/scripts.pory"
	walk_right
# 125 "data/maps/MallowCastle_3F/scripts.pory"
	walk_right
# 125 "data/maps/MallowCastle_3F/scripts.pory"
	walk_right
# 125 "data/maps/MallowCastle_3F/scripts.pory"
	walk_up
# 125 "data/maps/MallowCastle_3F/scripts.pory"
	walk_up
# 125 "data/maps/MallowCastle_3F/scripts.pory"
	walk_in_place_down
	step_end

# 130 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_EventScript_Trainer3Battle_Movement_5:
# 130 "data/maps/MallowCastle_3F/scripts.pory"
	walk_right
# 130 "data/maps/MallowCastle_3F/scripts.pory"
	walk_right
# 130 "data/maps/MallowCastle_3F/scripts.pory"
	walk_up
# 130 "data/maps/MallowCastle_3F/scripts.pory"
	walk_up
# 130 "data/maps/MallowCastle_3F/scripts.pory"
	walk_up
# 130 "data/maps/MallowCastle_3F/scripts.pory"
	walk_in_place_down
	step_end

# 135 "data/maps/MallowCastle_3F/scripts.pory"
MallowCastle_3F_EventScript_Trainer3Battle_Movement_6:
# 135 "data/maps/MallowCastle_3F/scripts.pory"
	walk_right
# 135 "data/maps/MallowCastle_3F/scripts.pory"
	walk_up
# 135 "data/maps/MallowCastle_3F/scripts.pory"
	walk_up
# 135 "data/maps/MallowCastle_3F/scripts.pory"
	walk_in_place_down
	step_end

MallowCastle_3F_EventScript_WaddleDee_Text_0:
# 10 "data/maps/MallowCastle_3F/scripts.pory"
	.string "Hi, Kirby! Do you like my corner?\n"
	.string "I think it's pretty cozy.\l"
	.string "We can share if you'd like!\p"
	.string "What's that? You stumbled in here by\n"
	.string "accident looking for the Castle Arena?\p"
	.string "Oh… alright. Well, more corner for me!$"

MallowCastle_3F_EventScript_Trainer3_Text_0:
# 77 "data/maps/MallowCastle_3F/scripts.pory"
	.string "You get a lot of time to think when you\n"
	.string "sit behind a nigh-indestructible wall.$"

MallowCastle_3F_EventScript_Trainer3Battle_Text_0:
# 114 "data/maps/MallowCastle_3F/scripts.pory"
	.string "I caught you in my line of sight while\n"
	.string "you were wondering what block to hit!\p"
	.string "Now that I'm free, I can finally\n"
	.string "challenge you to a Helper battle!$"

MallowCastle_3F_EventScript_Trainer3Battle_Text_1:
# 120 "data/maps/MallowCastle_3F/scripts.pory"
	.string "Sigh… I guess I'll go back and sit in\n"
	.string "my hole in shame…$"

MallowCastle_3F_EventScript_BombBlock11_Text_0:
# 906 "data/maps/MallowCastle_3F/scripts.pory"
	.string "Looks like that was a dud…$"

MallowCastle_3F_Text_Trainer1Intro::
# 29 "data/maps/MallowCastle_3F/scripts.pory"
	.string "Oh, dearie me. It seems my Helpers are\n"
	.string "itching for a proper battle!$"

MallowCastle_3F_Text_Trainer1Defeated::
# 35 "data/maps/MallowCastle_3F/scripts.pory"
	.string "I hope your Helpers enjoyed their\n"
	.string "playtime as well!$"

MallowCastle_3F_Text_Trainer1Post::
# 41 "data/maps/MallowCastle_3F/scripts.pory"
	.string "My Helpers are so battle-hungry… I wish\n"
	.string "I could just go home and spoil them!$"

MallowCastle_3F_Text_Trainer2Intro::
# 53 "data/maps/MallowCastle_3F/scripts.pory"
	.string "Finally, a fresh face! Goodness knows\n"
	.string "how long I've been lost in here!$"

MallowCastle_3F_Text_Trainer2Defeated::
# 59 "data/maps/MallowCastle_3F/scripts.pory"
	.string "So strong! Please, show me the way out!$"

MallowCastle_3F_Text_Trainer2Post::
# 64 "data/maps/MallowCastle_3F/scripts.pory"
	.string "I tried using my cell phone to call for\n"
	.string "an exit, but it's out of battery!\p"
	.string "If you find any spare batteries lying\n"
	.string "around, please tell me!$"

MallowCastle_3F_Text_Trainer3Defeated::
# 82 "data/maps/MallowCastle_3F/scripts.pory"
	.string "All of that waiting, and I couldn't even\n"
	.string "scrape up a victory…$"
