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
	setmetatile 32, 26, METATILE_LilycoveMuseum_Floor, FALSE
# 354 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 355 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 356 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 357 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 358 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 359 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 360 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 361 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 362 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 30, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 363 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 27, METATILE_LilycoveMuseum_Floor, FALSE
# 364 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 365 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 366 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 367 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 368 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 369 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 370 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 371 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 372 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 29, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 373 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 28, METATILE_LilycoveMuseum_Floor, FALSE
# 374 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 375 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 376 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 377 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 378 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 379 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 380 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 381 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 382 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 28, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 383 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 32, 29, METATILE_LilycoveMuseum_Floor, FALSE
# 384 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 385 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 386 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 387 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 388 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 389 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 390 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 391 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 392 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 33, 29, METATILE_LilycoveMuseum_Floor, FALSE
# 393 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 394 "data/maps/MallowCastle_3F/scripts.pory"
	checkflag FLAG_TEMP_13
# 395 "data/maps/MallowCastle_3F/scripts.pory"
	call_if_unset FLAG_TEMP_13, MallowCastle_3F_EventScript_BombBlock2_Continued_Continued
# 396 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 397 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 398 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 399 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 400 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 401 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 402 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock2_Continued_Continued::
# 407 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_4
# 408 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_13
	return


MallowCastle_3F_EventScript_BombBlock3::
# 413 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 414 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 415 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_3
# 416 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_12
# 417 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 418 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 419 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 420 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 421 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 422 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 423 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 424 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 40, 30, METATILE_LilycoveMuseum_Floor, FALSE
# 425 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 426 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 427 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 428 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 429 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 430 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 431 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 432 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 433 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 39, 30, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 434 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 40, 31, METATILE_LilycoveMuseum_Floor, FALSE
# 435 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 436 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 437 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 438 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 439 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 440 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 441 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 442 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 443 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 39, 31, METATILE_LilycoveMuseum_Floor, FALSE
# 444 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 40, 32, METATILE_LilycoveMuseum_WallLip, FALSE
# 445 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 446 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 447 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 448 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 449 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 450 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 451 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 452 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 453 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 39, 32, METATILE_LilycoveMuseum_WallLip, FALSE
# 454 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 455 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 456 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 457 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 458 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 459 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 460 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 461 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock4::
# 466 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 467 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 468 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_4
# 469 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_13
# 470 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 471 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 472 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 473 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 474 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 475 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 476 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 477 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 28, 25, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 478 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 479 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 480 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 481 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 482 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 483 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 484 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 485 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 486 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 29, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 487 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 488 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 489 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 490 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 491 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 492 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 493 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 494 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 495 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 30, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 496 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 497 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 498 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 499 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 500 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 501 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 502 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 503 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 504 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 31, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 505 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 506 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 507 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 508 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 509 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 510 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 511 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 512 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock5::
# 517 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 518 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 519 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_5
# 520 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_14
# 521 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 522 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 523 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 524 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 525 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 526 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 527 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 528 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 21, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 529 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 23, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 530 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 531 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 532 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 533 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 534 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 535 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 536 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock6::
# 541 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 542 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 543 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_6
# 544 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_15
# 545 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 546 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 547 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 548 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 549 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 550 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 551 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 552 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 28, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 553 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 30, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 554 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 555 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 556 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 557 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 558 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 559 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 560 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 561 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock7::
# 566 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 567 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 568 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_7
# 569 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_16
# 570 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 571 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 572 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 573 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 574 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 575 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 576 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 577 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 35, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 578 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 37, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 579 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 580 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 581 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 582 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 583 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 584 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 585 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 586 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock8::
# 591 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 592 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 593 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_8
# 594 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_17
# 595 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 596 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 597 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 598 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 599 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 600 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 601 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 602 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 603 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 604 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 605 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 606 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 607 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 608 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 609 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 8, 4, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 610 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 611 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 612 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 613 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 614 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 615 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 616 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 617 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 618 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 9, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 619 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 620 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 621 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 622 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 623 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 624 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 625 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 626 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 627 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 10, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 628 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 629 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 630 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 631 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 632 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 633 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 634 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 635 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 636 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 11, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 637 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 638 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 639 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 640 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 641 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 642 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 643 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 644 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 645 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 12, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 646 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 647 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 648 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 649 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 650 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 651 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 652 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 653 "data/maps/MallowCastle_3F/scripts.pory"
	goto_if_not_defeated TRAINER_WILTON_1, MallowCastle_3F_EventScript_Trainer3Battle
# 654 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock9::
# 659 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 660 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 661 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_9
# 662 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_18
# 663 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 664 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 665 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 666 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 667 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 668 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 669 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 670 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 671 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 672 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 673 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 674 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 675 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 676 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 677 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 678 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 679 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 680 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 681 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 682 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 683 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 684 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 685 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 686 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 687 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 688 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 689 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 690 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 691 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 692 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 693 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 694 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 695 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 696 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 697 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 698 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 699 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 700 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 701 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 702 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 703 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 704 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 705 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 706 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 707 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 708 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 709 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 710 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 711 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 712 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 713 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 714 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 715 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 716 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 717 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 718 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 719 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 720 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 721 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 722 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 723 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 724 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 725 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 726 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 727 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 728 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 729 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 730 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 731 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 732 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 733 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 734 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 735 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 736 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 737 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 738 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 739 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 740 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 741 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 742 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 743 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 744 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 745 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 746 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 747 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 1, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 748 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 749 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 750 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 751 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 752 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 753 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 754 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 755 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 756 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 757 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 758 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 759 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 760 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 761 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 762 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 763 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 764 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 765 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 766 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 767 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 768 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 769 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 770 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 771 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 772 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 773 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 774 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 775 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 776 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 777 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 5, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 778 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 779 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 780 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 781 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 782 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 783 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 784 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 785 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 786 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 6, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 787 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 788 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 789 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 790 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 791 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 792 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 793 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 794 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 795 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 7, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 796 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 797 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 798 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 799 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 800 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 801 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 802 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 803 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 804 "data/maps/MallowCastle_3F/scripts.pory"
	checkflag FLAG_TEMP_1B
# 805 "data/maps/MallowCastle_3F/scripts.pory"
	call_if_unset FLAG_TEMP_1B, MallowCastle_3F_EventScript_BombBlock9_ExtraRemoval
# 806 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 807 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 808 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 809 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 810 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 811 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 812 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 813 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 814 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 815 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 9, METATILE_LilycoveMuseum_WallLip, FALSE
# 816 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 817 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 818 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 819 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 820 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 821 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 822 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 823 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock9_ExtraRemoval::
# 828 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_12
# 829 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_1B
	return


MallowCastle_3F_EventScript_BombBlock10::
# 834 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 835 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 836 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_10
# 837 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_19
# 838 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 839 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 840 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 841 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 842 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 843 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 844 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 845 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 846 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 847 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 848 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 849 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 850 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 851 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 852 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 8, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 853 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 854 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 855 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 856 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 857 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 858 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 859 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 860 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 861 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 9, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 862 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 863 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 864 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 865 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 866 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 867 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 868 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 869 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 870 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 10, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 871 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 872 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 873 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 874 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 875 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 876 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 877 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 878 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 879 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 11, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 880 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 881 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 882 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 883 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 884 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 885 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 886 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 887 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 888 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 12, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 889 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 890 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 891 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 892 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 893 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 894 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 895 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 896 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock11::
# 901 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 902 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 903 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_11
# 904 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_1A
# 905 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 906 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 907 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 908 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 909 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 910 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 911 "data/maps/MallowCastle_3F/scripts.pory"
	delay 120
# 912 "data/maps/MallowCastle_3F/scripts.pory"
	msgbox MallowCastle_3F_EventScript_BombBlock11_Text_0
# 913 "data/maps/MallowCastle_3F/scripts.pory"
	release
	return


MallowCastle_3F_EventScript_BombBlock12::
# 918 "data/maps/MallowCastle_3F/scripts.pory"
	lockall
# 919 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 920 "data/maps/MallowCastle_3F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_3F_12
# 921 "data/maps/MallowCastle_3F/scripts.pory"
	setflag FLAG_TEMP_1B
# 922 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 923 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 924 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 925 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 926 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 927 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 928 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 929 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 930 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 931 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 932 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 933 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 934 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 935 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 936 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 937 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 938 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 939 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 940 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 941 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 942 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 943 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 944 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 945 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 946 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 947 "data/maps/MallowCastle_3F/scripts.pory"
	playse SE_M_DIG
# 948 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 5, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 949 "data/maps/MallowCastle_3F/scripts.pory"
	setmetatile 6, 9, METATILE_LilycoveMuseum_WallLip, FALSE
# 950 "data/maps/MallowCastle_3F/scripts.pory"
	special DrawWholeMapView
# 951 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8004, 1
# 952 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8005, 0
# 953 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8006, 2
# 954 "data/maps/MallowCastle_3F/scripts.pory"
	setvar VAR_0x8007, 3
# 955 "data/maps/MallowCastle_3F/scripts.pory"
	special ShakeCamera
# 956 "data/maps/MallowCastle_3F/scripts.pory"
	waitstate
# 957 "data/maps/MallowCastle_3F/scripts.pory"
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
# 912 "data/maps/MallowCastle_3F/scripts.pory"
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
