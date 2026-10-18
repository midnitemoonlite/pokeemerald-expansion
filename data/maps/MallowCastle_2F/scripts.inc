# 1 "data/maps/MallowCastle_2F/scripts.pory"

# 2 "data/maps/MallowCastle_2F/scripts.pory"
MallowCastle_2F_MapScripts::
# 3 "data/maps/MallowCastle_2F/scripts.pory"
	.byte 0

MallowCastle_2F_EventScript_WaddleDee1::
# 8 "data/maps/MallowCastle_2F/scripts.pory"
	lock
# 9 "data/maps/MallowCastle_2F/scripts.pory"
	faceplayer
# 10 "data/maps/MallowCastle_2F/scripts.pory"
	msgbox MallowCastle_2F_EventScript_WaddleDee1_Text_0
# 17 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_WaddleDee2::
# 22 "data/maps/MallowCastle_2F/scripts.pory"
	lock
# 23 "data/maps/MallowCastle_2F/scripts.pory"
	faceplayer
# 24 "data/maps/MallowCastle_2F/scripts.pory"
	msgbox MallowCastle_2F_EventScript_WaddleDee2_Text_0
# 38 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock1::
# 45 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 46 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 47 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_1
# 48 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_10
# 49 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 50 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 51 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 52 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 53 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 54 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 55 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 56 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 57 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 59 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 60 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 61 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 62 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 63 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 64 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 65 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 66 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 67 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 68 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 69 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 70 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 71 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 72 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 73 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 74 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 75 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 76 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 77 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 78 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 79 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 80 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 81 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 82 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock2::
# 87 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 88 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 89 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_2
# 90 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_11
# 91 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 92 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 93 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 94 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 95 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 96 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 97 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 98 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 21, 15, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 99 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 22, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 100 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 101 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 102 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 103 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 104 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 105 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 106 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 107 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 108 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 21, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 109 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 22, 15, METATILE_LilycoveMuseum_Floor, FALSE
# 110 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 111 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 112 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 113 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 114 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 115 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 116 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 117 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 118 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 21, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 119 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 22, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 120 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 122 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 123 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 124 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 125 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 126 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 127 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 128 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 21, 12, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 129 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 22, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 130 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 132 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 133 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 134 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 135 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 136 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 137 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 138 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 22, 12, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 139 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 140 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 141 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 142 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 143 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 144 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 145 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 146 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 147 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 148 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 149 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 150 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 151 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 152 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 153 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 154 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 24, 12, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 155 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 156 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 157 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 158 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 159 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 160 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 161 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 162 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 163 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 25, 12, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 164 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 165 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 166 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 167 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 168 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 169 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 170 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 171 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 172 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 173 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 174 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 175 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 176 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 177 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 178 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 179 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 12, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 180 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 181 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 182 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 183 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 184 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 185 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 186 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 187 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 188 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 189 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 190 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 191 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 192 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 193 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 194 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 195 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 196 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 197 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 198 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 199 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 200 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 201 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 202 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 203 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 204 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 205 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock3::
# 210 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 211 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 212 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_3
# 213 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_12
# 214 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 215 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 216 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 217 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 218 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 219 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 220 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 221 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 10, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 222 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 223 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 224 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 225 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 226 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 227 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 228 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 229 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 230 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 9, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 231 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 232 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 233 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 234 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 235 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 236 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 237 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 238 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 239 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 240 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 241 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 242 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 243 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 244 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 245 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 246 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 247 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 248 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 7, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 249 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 250 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 251 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 252 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 253 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 254 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 255 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 256 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 257 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 6, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 258 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 259 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 260 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 261 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 262 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 263 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 264 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 265 "data/maps/MallowCastle_2F/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, MallowCastle_2F_EventScript_Trainer1Battle
# 266 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock4::
# 271 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 272 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 273 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_4
# 274 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 275 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 276 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 277 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 278 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 279 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 280 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 281 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 282 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 12, 13, METATILE_LilycoveMuseum_WallLip, FALSE
# 283 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 285 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 286 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 287 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 288 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 289 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 290 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 291 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 13, 13, METATILE_LilycoveMuseum_WallLip, FALSE
# 292 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 293 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 294 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 295 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 296 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 297 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 298 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 299 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 300 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 14, 13, METATILE_LilycoveMuseum_WallLip, FALSE
# 301 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 302 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 303 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 304 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 305 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 306 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 307 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 308 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 309 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 15, 13, METATILE_LilycoveMuseum_WallRightCorner, FALSE
# 310 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 311 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 312 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 313 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 314 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 315 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 316 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 317 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 318 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 319 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 320 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 321 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 322 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 323 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 324 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 325 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 326 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 327 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 328 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 329 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 330 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 331 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 332 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 333 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 334 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 335 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 336 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 337 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 338 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 15, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 339 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 340 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 341 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 342 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 343 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 344 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 345 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 346 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 347 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 15, METATILE_LilycoveMuseum_Floor, FALSE
# 348 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 349 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 350 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 351 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 352 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 353 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 354 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 355 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 356 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 357 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 358 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 17, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 359 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 360 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 361 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 362 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 363 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 364 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 365 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 366 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 367 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 17, METATILE_LilycoveMuseum_Floor, FALSE
# 368 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 18, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 369 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 370 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 371 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 372 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 373 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 374 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 375 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 376 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 377 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 18, METATILE_LilycoveMuseum_Floor, FALSE
# 378 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 19, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 379 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 380 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 381 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 382 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 383 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 384 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 385 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 386 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 387 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 19, METATILE_LilycoveMuseum_Floor, FALSE
# 388 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 20, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 389 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 390 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 391 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 392 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 393 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 394 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 395 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 396 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 397 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 15, 20, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 398 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 20, METATILE_LilycoveMuseum_Floor, FALSE
# 399 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 21, METATILE_LilycoveMuseum_WallLip, FALSE
# 400 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 401 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 402 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 403 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 404 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 405 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 406 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 407 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 408 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_5
# 409 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_14
# 410 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 15, 21, METATILE_LilycoveMuseum_WallLip, FALSE
# 411 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 21, METATILE_LilycoveMuseum_WallLip, FALSE
# 412 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 413 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 414 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 415 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 416 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 417 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 418 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 419 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock5::
# 424 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 425 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 426 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_5
# 427 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_14
# 428 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 429 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 430 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 431 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 432 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 433 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 434 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 435 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 15, 20, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 436 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 437 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 438 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 439 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 440 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 441 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 442 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 443 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 444 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 20, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 445 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 15, 21, METATILE_LilycoveMuseum_WallLip, FALSE
# 446 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 447 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 448 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 449 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 450 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 451 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 452 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 453 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 454 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 19, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 455 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 20, METATILE_LilycoveMuseum_Floor, FALSE
# 456 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 21, METATILE_LilycoveMuseum_WallLip, FALSE
# 457 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 458 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 459 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 460 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 461 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 462 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 463 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 464 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 465 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 18, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 466 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 19, METATILE_LilycoveMuseum_Floor, FALSE
# 467 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 21, METATILE_LilycoveMuseum_WallLip, FALSE
# 468 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 469 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 470 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 471 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 472 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 473 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 474 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 475 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 476 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 17, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 477 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 18, METATILE_LilycoveMuseum_Floor, FALSE
# 478 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 479 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 480 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 481 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 482 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 483 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 484 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 485 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 486 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 487 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 17, METATILE_LilycoveMuseum_Floor, FALSE
# 488 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 489 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 490 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 491 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 492 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 493 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 494 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 495 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 496 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 15, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 497 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 498 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 499 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 500 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 501 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 502 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 503 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 504 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 505 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 506 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 507 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 15, METATILE_LilycoveMuseum_Floor, FALSE
# 508 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 509 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 510 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 511 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 512 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 513 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 514 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 515 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 516 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 16, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 517 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 518 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 519 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 520 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 521 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 522 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 523 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 524 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 525 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 526 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 15, 13, METATILE_LilycoveMuseum_WallRightCorner, FALSE
# 527 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 17, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 528 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 529 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 530 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 531 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 532 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 533 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 534 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 535 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 536 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 14, 13, METATILE_LilycoveMuseum_WallLip, FALSE
# 537 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 538 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 539 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 540 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 541 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 542 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 543 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 544 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 545 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 13, 13, METATILE_LilycoveMuseum_WallLip, FALSE
# 546 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 547 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 548 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 549 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 550 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 551 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 552 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 553 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 554 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 12, 13, METATILE_LilycoveMuseum_WallLip, FALSE
# 555 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 556 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 557 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 558 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 559 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 560 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 561 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 562 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 563 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_4
# 564 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 565 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 566 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 567 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 568 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 569 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 570 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 571 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock6::
# 576 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 577 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 578 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_6
# 579 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_15
# 580 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 581 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 582 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 583 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 584 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 585 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 586 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 587 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 6, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 588 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 7, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 589 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 590 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 591 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 592 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 593 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 594 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 595 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 596 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 597 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 598 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 6, 5, METATILE_LilycoveMuseum_Floor, FALSE
# 599 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 6, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 600 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 5, METATILE_LilycoveMuseum_Floor, FALSE
# 601 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 602 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 603 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 604 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 605 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 606 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 607 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 608 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 609 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 610 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 5, 5, METATILE_LilycoveMuseum_Floor, FALSE
# 611 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 5, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 612 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 613 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 614 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 10, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 615 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 616 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 617 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 618 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 619 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 620 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 621 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 622 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 623 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 624 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 625 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 626 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 11, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 627 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 628 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 629 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 630 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 631 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 632 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 633 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 634 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 635 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 3, 7, METATILE_LilycoveMuseum_Floor, FALSE
# 636 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 7, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 637 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 7, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 638 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 639 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 12, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 640 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 641 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 642 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 643 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 644 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 645 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 646 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 647 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 648 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 3, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 649 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 6, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 650 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 6, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 651 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 11, METATILE_LilycoveMuseum_Floor, FALSE
# 652 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 13, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 653 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 654 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 655 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 656 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 657 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 658 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 659 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 660 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 661 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 3, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 662 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 5, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 663 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 8, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 664 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 14, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 665 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 666 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 667 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 668 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 669 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 670 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 671 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 672 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 673 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 674 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 675 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 15, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 676 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 677 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 678 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 679 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 680 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 681 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 682 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 683 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 684 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 3, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 685 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 686 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 687 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 688 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 689 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 690 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 691 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 692 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 693 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 2, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 694 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 3, 4, METATILE_LilycoveMuseum_Floor, FALSE
# 695 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 696 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 697 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 698 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 699 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 700 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 701 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 702 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 703 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 704 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 3, 5, METATILE_LilycoveMuseum_Floor, FALSE
# 705 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 706 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 707 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 708 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 709 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 710 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 711 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 712 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 713 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 4, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 714 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 2, 5, METATILE_LilycoveMuseum_Floor, FALSE
# 715 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 19, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 716 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 717 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 718 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 719 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 720 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 721 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 722 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 723 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 724 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 5, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 725 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 20, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 726 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 727 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 728 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 729 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 730 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 731 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 732 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 733 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 734 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 5, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 735 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 20, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 736 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 737 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 738 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 739 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 740 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 741 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 742 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 743 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 744 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 745 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 6, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 746 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 21, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 747 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 748 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 749 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 750 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 751 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 752 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 753 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 754 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 755 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 756 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 7, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 757 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 22, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 758 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 759 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 760 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 761 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 762 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 763 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 764 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 765 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 766 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 767 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 768 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 23, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 769 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 770 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 771 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 772 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 773 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 774 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 775 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 776 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 777 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 778 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 9, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 779 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 24, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 780 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 781 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 782 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 783 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 784 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 785 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 786 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 787 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 788 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 789 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 10, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 790 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 25, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 791 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 792 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 793 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 794 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 795 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 796 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 797 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 798 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 799 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 800 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 1, 11, METATILE_LilycoveMuseum_WallLipDark, FALSE
# 801 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 802 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 803 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 804 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 805 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 806 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 807 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 808 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 809 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 810 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 2, 11, METATILE_LilycoveMuseum_WallLip, FALSE
# 811 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 6, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 812 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 813 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 814 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 815 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 816 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 817 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 818 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 819 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 820 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 821 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 3, 11, METATILE_LilycoveMuseum_WallLip, FALSE
# 822 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 823 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 824 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 825 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 826 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 827 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 828 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 829 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 830 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 831 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 832 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_11
# 833 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_1A
# 834 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 11, METATILE_LilycoveMuseum_WallLip, FALSE
# 835 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 836 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 837 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 838 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 839 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 840 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 841 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 842 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 843 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 844 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 5, 11, METATILE_LilycoveMuseum_WallRightCorner, FALSE
# 845 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 846 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 847 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 848 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 849 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 850 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 851 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 852 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 853 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 854 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 6, 11, METATILE_LilycoveMuseum_Floor, FALSE
# 855 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 856 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_13
# 857 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 858 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 859 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 860 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 861 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 862 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 863 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock7::
# 868 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 869 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 870 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_7
# 871 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_16
# 872 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 873 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 874 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 875 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 876 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 877 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 878 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 879 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 34, 14, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 880 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 881 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 882 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 883 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 884 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 885 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 886 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 887 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 888 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 889 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 890 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 891 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 892 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 893 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 894 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 895 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 32, 14, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 896 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 897 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 898 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 899 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 900 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 901 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 902 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 903 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 904 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 31, 14, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 905 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 906 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 907 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 908 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 909 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 910 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 911 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 912 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 913 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 914 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 915 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 916 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 917 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 918 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 919 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 920 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 921 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 922 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 923 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 924 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 925 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 926 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 927 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 928 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 929 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 930 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 931 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 932 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 933 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 934 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 935 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 936 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 937 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 938 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 14, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 939 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 940 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 941 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 942 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 943 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 944 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 945 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 946 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock8::
# 951 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 952 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 953 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_8
# 954 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_17
# 955 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 956 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 957 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 958 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 959 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 960 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 961 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 36, 9, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 962 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 963 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 964 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 965 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 966 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 967 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 968 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 969 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 970 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 971 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 972 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 973 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 974 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 975 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 976 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 977 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 978 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 979 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 980 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 981 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 982 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 983 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 984 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 985 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 986 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 987 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 988 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 989 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 990 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 991 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 992 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 993 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 994 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 995 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 996 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 997 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 998 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 32, 8, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 999 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1000 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1001 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1002 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1003 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1004 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1005 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1006 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1007 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 31, 8, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1008 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1009 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1010 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1011 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1012 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1013 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1014 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1015 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1016 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1017 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1018 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1019 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1020 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1021 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1022 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1023 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 1024 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1025 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1026 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1027 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1028 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1029 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1030 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1031 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1032 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 1033 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1034 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1035 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1036 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1037 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1038 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1039 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1040 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1041 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1042 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1043 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1044 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1045 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1046 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1047 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1048 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1049 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock9::
# 1054 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 1055 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1056 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_9
# 1057 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_18
# 1058 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1059 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1060 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1061 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1062 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1063 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1064 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1065 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 20, METATILE_LilycoveMuseum_Floor, FALSE
# 1066 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1067 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1068 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1069 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1070 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1071 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1072 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1073 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1074 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 19, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1075 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1076 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1077 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1078 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1079 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1080 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1081 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1082 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1083 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 18, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1084 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1085 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1086 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1087 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1088 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1089 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1090 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1091 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1092 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 17, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1093 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1094 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1095 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1096 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1097 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1098 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1099 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1100 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1101 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 1102 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1103 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1104 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1105 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1106 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1107 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1108 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1109 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1110 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 15, METATILE_LilycoveMuseum_Floor, FALSE
# 1111 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1112 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1113 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1114 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1115 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1116 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1117 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1118 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1119 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 1120 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1121 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1122 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1123 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1124 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1125 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1126 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1127 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1128 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 1129 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 47, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 1130 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1131 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1132 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1133 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1134 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1135 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1136 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1137 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1138 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 1139 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 47, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 1140 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1141 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1142 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1143 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1144 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1145 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1146 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1147 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1148 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 11, METATILE_LilycoveMuseum_Floor, FALSE
# 1149 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 47, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 1150 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 46, 13, METATILE_LilycoveMuseum_Floor, FALSE
# 1151 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1152 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1153 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1154 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1155 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1156 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1157 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1158 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1159 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1160 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 47, 11, METATILE_LilycoveMuseum_Floor, FALSE
# 1161 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 46, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 1162 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1163 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1164 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1165 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1166 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1167 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1168 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1169 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1170 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 1171 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 47, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1172 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 46, 11, METATILE_LilycoveMuseum_Floor, FALSE
# 1173 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 45, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 1174 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1175 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1176 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1177 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1178 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1179 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1180 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1181 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1182 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 48, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 1183 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 47, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 1184 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 46, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1185 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 45, 11, METATILE_LilycoveMuseum_Floor, FALSE
# 1186 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1187 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1188 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1189 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1190 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1191 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1192 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1193 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1194 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 47, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1195 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 46, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 1196 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 45, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1197 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 44, 11, METATILE_LilycoveMuseum_Floor, FALSE
# 1198 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1199 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1200 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1201 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1202 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1203 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1204 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1205 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1206 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 46, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1207 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 45, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 1208 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 44, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1209 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1210 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1211 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1212 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1213 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1214 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1215 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1216 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1217 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 45, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1218 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 44, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 1219 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 43, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1220 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1221 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1222 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1223 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1224 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1225 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1226 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1227 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1228 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 44, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1229 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 43, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 1230 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1231 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1232 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1233 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1234 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1235 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1236 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1237 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1238 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 43, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1239 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 42, 9, METATILE_LilycoveMuseum_Floor, FALSE
# 1240 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1241 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1242 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1243 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1244 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1245 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1246 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1247 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1248 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 42, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1249 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1250 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1251 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1252 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1253 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1254 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1255 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1256 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1257 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 41, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1258 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1259 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1260 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1261 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1262 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1263 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1264 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1265 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock10::
# 1270 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 1271 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1272 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_10
# 1273 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_19
# 1274 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1275 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1276 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1277 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1278 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1279 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1280 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1281 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 46, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1282 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1283 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1284 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1285 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1286 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1287 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1288 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1289 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1290 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 45, 3, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1291 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1292 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1293 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1294 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1295 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1296 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1297 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1298 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1299 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1300 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1301 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1302 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1303 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1304 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1305 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1306 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 43, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1307 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1308 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1309 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1310 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1311 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1312 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1313 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1314 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1315 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 42, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1316 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1317 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1318 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1319 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1320 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1321 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1322 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1323 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1324 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 41, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1325 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1326 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1327 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1328 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1329 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1330 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1331 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1332 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1333 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 40, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1334 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1335 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1336 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1337 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1338 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1339 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1340 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1341 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1342 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 39, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1343 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1344 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1345 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1346 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1347 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1348 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1349 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1350 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1351 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 38, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1352 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1353 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1354 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1355 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1356 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1357 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1358 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1359 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1360 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 38, 4, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1361 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1362 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1363 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1364 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1365 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1366 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1367 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1368 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1369 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 38, 5, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1370 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1371 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1372 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1373 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1374 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1375 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1376 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1377 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1378 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1379 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1380 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1381 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1382 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1383 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1384 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1385 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1386 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1387 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1388 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1389 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1390 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1391 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1392 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1393 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1394 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1395 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1396 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1397 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1398 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1399 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 38, 9, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1400 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1401 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1402 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1403 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1404 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1405 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1406 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1407 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1408 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 38, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1409 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1410 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1411 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1412 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1413 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1414 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1415 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1416 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1417 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 37, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1418 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1419 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1420 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1421 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1422 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1423 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1424 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1425 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1426 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 36, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1427 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1428 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1429 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1430 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1431 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1432 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1433 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1434 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1435 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 35, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1436 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1437 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1438 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1439 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1440 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1441 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1442 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1443 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1444 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 34, 10, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1445 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1446 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1447 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1448 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1449 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1450 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1451 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1452 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1453 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1454 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1455 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1456 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1457 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1458 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1459 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1460 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 32, 10, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1461 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1462 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1463 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1464 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1465 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1466 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1467 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1468 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1469 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 31, 10, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 1470 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1471 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1472 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1473 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1474 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1475 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1476 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1477 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1478 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1479 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1480 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1481 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1482 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1483 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1484 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1485 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1486 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1487 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1488 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1489 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1490 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1491 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1492 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1493 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1494 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1495 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1496 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1497 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1498 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1499 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1500 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1501 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 10, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1502 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1503 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1504 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1505 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1506 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1507 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1508 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1509 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock11::
# 1514 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 1515 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1516 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_11
# 1517 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_1A
# 1518 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1519 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1520 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1521 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1522 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1523 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1524 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1525 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 1526 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1527 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1528 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1529 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1530 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1531 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1532 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1533 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1534 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 6, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1535 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 6, METATILE_LilycoveMuseum_Floor, FALSE
# 1536 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1537 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1538 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1539 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1540 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1541 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1542 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1543 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1544 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 1545 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1546 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1547 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1548 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1549 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1550 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1551 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1552 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1553 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 8, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1554 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 8, METATILE_LilycoveMuseum_Floor, FALSE
# 1555 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1556 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1557 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1558 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1559 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1560 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1561 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1562 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1563 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1564 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1565 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1566 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1567 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1568 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1569 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1570 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1571 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1572 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 10, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1573 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 10, METATILE_LilycoveMuseum_Floor, FALSE
# 1574 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1575 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1576 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1577 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1578 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1579 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1580 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1581 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1582 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 1583 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1584 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1585 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1586 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1587 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1588 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1589 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1590 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1591 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 12, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1592 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 12, METATILE_LilycoveMuseum_Floor, FALSE
# 1593 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1594 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1595 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1596 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1597 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1598 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1599 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1600 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1601 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 1602 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1603 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1604 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1605 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1606 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1607 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1608 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1609 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1610 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 14, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1611 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 14, METATILE_LilycoveMuseum_Floor, FALSE
# 1612 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1613 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1614 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1615 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1616 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1617 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1618 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1619 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1620 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 28, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 1621 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1622 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1623 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1624 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1625 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1626 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1627 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1628 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1629 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 27, 16, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1630 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 29, 16, METATILE_LilycoveMuseum_Floor, FALSE
# 1631 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1632 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1633 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1634 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1635 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1636 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1637 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1638 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1639 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_1
# 1640 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_10
# 1641 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1642 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1643 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1644 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1645 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1646 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1647 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock12::
# 1652 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 1653 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1654 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_12
# 1655 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_1B
# 1656 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1657 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1658 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1659 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1660 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1661 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1662 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1663 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1664 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1665 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1666 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1667 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1668 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1669 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1670 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 37, METATILE_LilycoveMuseum_WallTop, TRUE
# 1671 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1672 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1673 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1674 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1675 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1676 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1677 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1678 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1679 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 38, METATILE_LilycoveMuseum_WallBottom, TRUE
# 1680 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1681 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1682 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1683 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1684 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1685 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1686 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1687 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1688 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 39, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1689 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1690 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1691 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1692 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1693 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1694 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1695 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1696 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1697 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 4, 40, METATILE_LilycoveMuseum_WallLip, FALSE
# 1698 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1699 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1700 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1701 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1702 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1703 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1704 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1705 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock13::
# 1710 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 1711 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1712 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_13
# 1713 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_1C
# 1714 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1715 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1716 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1717 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1718 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1719 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1720 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1721 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1722 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1723 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1724 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1725 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1726 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1727 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1728 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 7, 37, METATILE_LilycoveMuseum_WallTop, TRUE
# 1729 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1730 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1731 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1732 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1733 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1734 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1735 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1736 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1737 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 7, 38, METATILE_LilycoveMuseum_WallBottom, TRUE
# 1738 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1739 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1740 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1741 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1742 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1743 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1744 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1745 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1746 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 7, 39, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1747 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1748 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1749 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1750 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1751 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1752 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1753 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1754 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1755 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 7, 40, METATILE_LilycoveMuseum_WallLip, FALSE
# 1756 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1757 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1758 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1759 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1760 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1761 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1762 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1763 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock14::
# 1768 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 1769 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1770 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_14
# 1771 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_1D
# 1772 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1773 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1774 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1775 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1776 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1777 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1778 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1779 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1780 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1781 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1782 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1783 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1784 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1785 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1786 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 10, 37, METATILE_LilycoveMuseum_WallTop, TRUE
# 1787 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1788 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1789 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1790 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1791 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1792 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1793 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1794 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1795 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 10, 38, METATILE_LilycoveMuseum_WallBottom, TRUE
# 1796 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1797 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1798 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1799 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1800 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1801 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1802 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1803 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1804 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 10, 39, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 1805 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1806 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1807 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1808 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1809 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1810 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1811 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1812 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1813 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 10, 40, METATILE_LilycoveMuseum_WallLip, FALSE
# 1814 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1815 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1816 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1817 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1818 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1819 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1820 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1821 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_BombBlock15::
# 1826 "data/maps/MallowCastle_2F/scripts.pory"
	lockall
# 1827 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1828 "data/maps/MallowCastle_2F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_2F_15
# 1829 "data/maps/MallowCastle_2F/scripts.pory"
	setflag FLAG_TEMP_1E
# 1830 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1831 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1832 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1833 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1834 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1835 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1836 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1837 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1838 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1839 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1840 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1841 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1842 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1843 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1844 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 13, 37, METATILE_LilycoveMuseum_Block, TRUE
# 1845 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1846 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1847 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1848 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1849 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1850 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1851 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1852 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1853 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 13, 38, METATILE_LilycoveMuseum_Block, TRUE
# 1854 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1855 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1856 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1857 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1858 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1859 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1860 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1861 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1862 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 13, 39, METATILE_LilycoveMuseum_Block, TRUE
# 1863 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1864 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1865 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1866 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1867 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1868 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1869 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1870 "data/maps/MallowCastle_2F/scripts.pory"
	playse SE_M_DIG
# 1871 "data/maps/MallowCastle_2F/scripts.pory"
	setmetatile 13, 40, METATILE_LilycoveMuseum_Block, TRUE
# 1872 "data/maps/MallowCastle_2F/scripts.pory"
	special DrawWholeMapView
# 1873 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 1874 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8005, 0
# 1875 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8006, 2
# 1876 "data/maps/MallowCastle_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 1877 "data/maps/MallowCastle_2F/scripts.pory"
	special ShakeCamera
# 1878 "data/maps/MallowCastle_2F/scripts.pory"
	waitstate
# 1879 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_Trainer1Battle::
# 1886 "data/maps/MallowCastle_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_FEMALE, 0
# 1887 "data/maps/MallowCastle_2F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_2F_TRAINER_1, Common_Movement_ExclamationMark
# 1888 "data/maps/MallowCastle_2F/scripts.pory"
	waitmovement
# 1889 "data/maps/MallowCastle_2F/scripts.pory"
	delay 60
# 1890 "data/maps/MallowCastle_2F/scripts.pory"
	applymovement LOCALID_MALLOW_CASTLE_2F_TRAINER_1, MallowCastle_2F_EventScript_Trainer1Battle_Movement_0
# 1891 "data/maps/MallowCastle_2F/scripts.pory"
	waitmovement
# 1892 "data/maps/MallowCastle_2F/scripts.pory"
	msgbox MallowCastle_2F_EventScript_Trainer1Battle_Text_0
# 1894 "data/maps/MallowCastle_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GEORGE, MallowCastle_2F_Text_Trainer1Defeated
# 1895 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_Trainer1::
# 1900 "data/maps/MallowCastle_2F/scripts.pory"
	lock
# 1901 "data/maps/MallowCastle_2F/scripts.pory"
	faceplayer
# 1902 "data/maps/MallowCastle_2F/scripts.pory"
	msgbox MallowCastle_2F_EventScript_Trainer1_Text_0
# 1910 "data/maps/MallowCastle_2F/scripts.pory"
	release
	return


MallowCastle_2F_EventScript_Trainer2::
# 1921 "data/maps/MallowCastle_2F/scripts.pory"
	trainerbattle_single TRAINER_BERKE, MallowCastle_2F_Text_Trainer2Intro, MallowCastle_2F_Text_Trainer2Defeated
# 1922 "data/maps/MallowCastle_2F/scripts.pory"
	msgbox MallowCastle_2F_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	return


MallowCastle_2F_EventScript_Trainer3::
# 1948 "data/maps/MallowCastle_2F/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, MallowCastle_2F_Text_Trainer3Intro, MallowCastle_2F_Text_Trainer3Defeated
# 1949 "data/maps/MallowCastle_2F/scripts.pory"
	msgbox MallowCastle_2F_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	return


# 1890 "data/maps/MallowCastle_2F/scripts.pory"
MallowCastle_2F_EventScript_Trainer1Battle_Movement_0:
# 1890 "data/maps/MallowCastle_2F/scripts.pory"
	walk_down
# 1890 "data/maps/MallowCastle_2F/scripts.pory"
	walk_down
# 1890 "data/maps/MallowCastle_2F/scripts.pory"
	walk_down
# 1890 "data/maps/MallowCastle_2F/scripts.pory"
	walk_down
# 1890 "data/maps/MallowCastle_2F/scripts.pory"
	walk_down
# 1890 "data/maps/MallowCastle_2F/scripts.pory"
	walk_down
	step_end

MallowCastle_2F_EventScript_WaddleDee1_Text_0:
# 10 "data/maps/MallowCastle_2F/scripts.pory"
	.string "This place is way bigger on the inside\n"
	.string "than it looks from the outside…\p"
	.string "I've lost count of all the bomb blocks\n"
	.string "I needed to hit to reach the next floor.\p"
	.string "Maybe I should've brought a map…$"

MallowCastle_2F_EventScript_WaddleDee2_Text_0:
# 24 "data/maps/MallowCastle_2F/scripts.pory"
	.string "Hey, are you trying to reach the Castle\n"
	.string "Arena too? Here, let me give you a tip.\p"
	.string "You've seen how bomb blocks can cause\n"
	.string "blocks to both appear and disappear?\p"
	.string "Sometimes, those blocks might get in\n"
	.string "the way and stop you from continuing.\p"
	.string "If you make a mistake, just leave the\n"
	.string "floor and come back. All the blocks\l"
	.string "will return to how they were before.\p"
	.string "It's tricky, but don't give up!$"

MallowCastle_2F_EventScript_Trainer1Battle_Text_0:
# 1892 "data/maps/MallowCastle_2F/scripts.pory"
	.string "Ahhhh, finally! I don't know how long\n"
	.string "I've been stuck back there for!$"

MallowCastle_2F_EventScript_Trainer1_Text_0:
# 1902 "data/maps/MallowCastle_2F/scripts.pory"
	.string "There's no bomb blocks down this\n"
	.string "corridor. I checked, alright?\p"
	.string "I double-checked, and triple-checked,\n"
	.string "and quadruple-checked, and… uh…\p"
	.string "What comes after quadruple again…?\n"
	.string "Anyways, point is, I checked a lot!$"

MallowCastle_2F_Text_Trainer1Defeated::
# 1913 "data/maps/MallowCastle_2F/scripts.pory"
	.string "I could use a trip to the break room\n"
	.string "right about now…$"

MallowCastle_2F_Text_Trainer2Intro::
# 1925 "data/maps/MallowCastle_2F/scripts.pory"
	.string "I feel right at home next to all these\n"
	.string "bomb blocks!$"

MallowCastle_2F_Text_Trainer2Defeated::
# 1931 "data/maps/MallowCastle_2F/scripts.pory"
	.string "Bam! Boom! Kablam!$"

MallowCastle_2F_Text_Trainer2Post::
# 1936 "data/maps/MallowCastle_2F/scripts.pory"
	.string "It's been a while since I've gotten to\n"
	.string "do any fun demolition work…\p"
	.string "Maybe I should ask the Great King if we\n"
	.string "can blow up all the Arenas once the\l"
	.string "Royal Royale has wrapped up!$"

MallowCastle_2F_Text_Trainer3Intro::
# 1952 "data/maps/MallowCastle_2F/scripts.pory"
	.string "If you beat me in a Helper battle, I'll\n"
	.string "tell you what I'd do as king for a day!$"

MallowCastle_2F_Text_Trainer3Defeated::
# 1958 "data/maps/MallowCastle_2F/scripts.pory"
	.string "As king, I'd invite everyone to a big\n"
	.string "banquet! Doesn't that sound wonderful?$"

MallowCastle_2F_Text_Trainer3Post::
# 1964 "data/maps/MallowCastle_2F/scripts.pory"
	.string "You really like the banquet idea, huh,\n"
	.string "Kirby? I can see it in your eyes…\l"
	.string "and in your drooling mouth too!$"
