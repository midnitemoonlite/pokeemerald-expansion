# 1 "data/maps/MallowCastle_1F/scripts.pory"

# 2 "data/maps/MallowCastle_1F/scripts.pory"
MallowCastle_1F_MapScripts::
# 3 "data/maps/MallowCastle_1F/scripts.pory"
	.byte 0

MallowCastle_1F_EventScript_WaddleDee::
# 8 "data/maps/MallowCastle_1F/scripts.pory"
	lock
# 9 "data/maps/MallowCastle_1F/scripts.pory"
	faceplayer
# 10 "data/maps/MallowCastle_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, MallowCastle_1F_EventScript_WaddleDee_2
# 23 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_EventScript_WaddleDee_Text_1
MallowCastle_1F_EventScript_WaddleDee_1:
# 29 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return

MallowCastle_1F_EventScript_WaddleDee_2:
# 12 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_EventScript_WaddleDee_Text_0
	goto MallowCastle_1F_EventScript_WaddleDee_1


MallowCastle_1F_EventScript_BombBlock1::
# 36 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 37 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 38 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_1
# 39 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 40 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 41 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 42 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 43 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 44 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 45 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 46 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 47 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 44, METATILE_LilycoveMuseum_Floor, FALSE
# 48 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 50 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 51 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 52 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 53 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 54 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 55 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 56 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 57 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 59 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 60 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 61 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 62 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 63 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 64 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 65 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 66 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 67 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 68 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 69 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 70 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 71 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 72 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 73 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 74 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 75 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 76 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 77 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 78 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 79 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 80 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 81 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 82 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 83 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 84 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 86 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 87 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 88 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 89 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 90 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 91 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 92 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 93 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 94 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 95 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 96 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 97 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 98 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 99 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 100 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 101 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 102 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 103 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 104 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 105 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 106 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 107 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 108 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 109 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 110 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 44, METATILE_LilycoveMuseum_Floor, FALSE
# 111 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 112 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 113 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 114 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 115 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 116 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 117 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 118 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 119 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 120 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 45, METATILE_LilycoveMuseum_WallLeftCorner, FALSE
# 121 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 122 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 123 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 124 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 125 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 126 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 127 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 128 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock2::
# 133 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 134 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 135 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_2
# 136 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 137 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 138 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 139 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 140 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 141 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 142 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 143 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 144 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 145 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 146 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 147 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 148 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 149 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 150 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 151 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 152 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 153 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 154 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 155 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 156 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 157 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 158 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 159 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 160 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 161 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 162 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 163 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 164 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 165 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 166 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 167 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 168 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 169 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 170 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 171 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 172 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 173 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 174 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 175 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 176 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 177 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 178 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 179 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 180 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 181 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 182 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 183 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 184 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 185 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 186 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 187 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 188 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 189 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 190 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 191 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 192 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 193 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 194 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 195 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 196 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 197 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 198 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 199 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 200 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 201 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 202 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 203 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 204 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 205 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 206 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 207 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 208 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 209 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 210 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 211 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 212 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 213 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 214 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 215 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 216 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 217 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 218 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 219 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 220 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 221 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 222 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 223 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 224 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 225 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock3::
# 230 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 231 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 232 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_3
# 233 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_12
# 234 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 235 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 236 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 237 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 238 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 239 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 240 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 241 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 242 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 243 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 244 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 245 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 246 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 247 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 248 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 249 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 250 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 251 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 252 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 253 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 254 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 255 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 256 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 257 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 258 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 259 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 260 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 261 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 262 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 263 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 264 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 265 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 266 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 267 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 268 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 269 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 270 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 271 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 272 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 273 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 274 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 275 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 276 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 277 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 278 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 279 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 280 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 281 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 282 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 283 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 284 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 285 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 286 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 287 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 288 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 289 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 290 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 291 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 292 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 293 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 294 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 295 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 296 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 297 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 298 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 299 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 300 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 301 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 302 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 303 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 304 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 305 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 306 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 307 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 308 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 309 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 310 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 311 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 312 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 34, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 313 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 314 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 315 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 316 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 317 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 318 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 319 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 320 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 321 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_9
# 322 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_18
# 323 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 324 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 325 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 326 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 327 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 328 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 329 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock4::
# 334 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 335 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 336 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_4
# 337 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_13
# 338 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 339 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 340 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 341 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 342 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 343 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 344 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 345 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 2, 29, METATILE_LilycoveMuseum_WallLip, FALSE
# 346 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 347 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 348 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 349 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 350 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 351 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 352 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 353 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 354 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 3, 29, METATILE_LilycoveMuseum_WallLip, FALSE
# 355 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 356 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 357 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 358 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 359 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 360 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 361 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 362 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 363 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 4, 29, METATILE_LilycoveMuseum_WallLip, FALSE
# 364 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 365 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 366 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 367 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 368 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 369 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 370 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 371 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 372 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 29, METATILE_LilycoveMuseum_WallRightCorner, FALSE
# 373 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 374 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 375 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 376 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 377 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 378 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 379 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 380 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock5::
# 385 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 386 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 387 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_5
# 388 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_14
# 389 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 390 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 391 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 392 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 393 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 394 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 395 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 396 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 24, METATILE_LilycoveMuseum_Floor, FALSE
# 397 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 398 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 399 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 400 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 401 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 402 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 403 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 404 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 405 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 25, METATILE_LilycoveMuseum_WallRightCorner, FALSE
# 406 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 407 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 408 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 409 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 410 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 411 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 412 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 413 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 414 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 25, METATILE_LilycoveMuseum_Block, TRUE
# 415 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 416 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 417 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 418 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 419 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 420 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 421 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 422 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 423 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 25, METATILE_LilycoveMuseum_Block, TRUE
# 424 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 425 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 426 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 427 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 428 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 429 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 430 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 431 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 432 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 25, METATILE_LilycoveMuseum_Block, TRUE
# 433 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 434 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 435 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 436 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 437 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 438 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 439 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 440 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 441 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 25, METATILE_LilycoveMuseum_Block, TRUE
# 442 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 443 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 444 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 445 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 446 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 447 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 448 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 449 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 450 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 24, METATILE_LilycoveMuseum_Block, TRUE
# 451 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 452 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 453 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 454 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 455 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 456 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 457 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 458 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 459 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 23, METATILE_LilycoveMuseum_Block, TRUE
# 460 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 461 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 462 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 463 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 464 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 465 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 466 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 467 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 468 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock6::
# 473 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 474 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 475 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_6
# 476 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_15
# 477 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 478 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 479 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 480 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 481 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 482 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 483 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 484 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 24, METATILE_LilycoveMuseum_Floor, FALSE
# 485 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 486 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 487 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 488 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 489 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 490 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 491 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 492 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 493 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 25, METATILE_LilycoveMuseum_WallLeftCorner, FALSE
# 494 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 495 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 496 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 497 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 498 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 499 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 500 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 501 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 502 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 25, METATILE_LilycoveMuseum_Block, TRUE
# 503 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 504 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 505 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 506 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 507 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 508 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 509 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 510 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 511 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 25, METATILE_LilycoveMuseum_Block, TRUE
# 512 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 513 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 514 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 515 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 516 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 517 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 518 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 519 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 520 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 25, METATILE_LilycoveMuseum_Block, TRUE
# 521 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 522 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 523 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 524 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 525 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 526 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 527 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 528 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 529 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 25, METATILE_LilycoveMuseum_Block, TRUE
# 530 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 531 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 532 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 533 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 534 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 535 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 536 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 537 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 538 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 24, METATILE_LilycoveMuseum_Block, TRUE
# 539 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 540 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 541 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 542 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 543 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 544 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 545 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 546 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 547 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 23, METATILE_LilycoveMuseum_Block, TRUE
# 548 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 549 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 550 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 551 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 552 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 553 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 554 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 555 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 556 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock7::
# 561 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 562 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 563 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_7
# 564 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_16
# 565 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 566 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 567 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 568 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 569 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 570 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 571 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 572 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 13, 29, METATILE_LilycoveMuseum_WallLip, FALSE
# 573 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 574 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 575 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 576 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 577 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 578 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 579 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 580 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 581 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 12, 29, METATILE_LilycoveMuseum_WallLip, FALSE
# 582 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 583 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 584 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 585 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 586 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 587 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 588 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 589 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 590 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 11, 29, METATILE_LilycoveMuseum_WallLip, FALSE
# 591 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 592 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 593 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 594 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 595 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 596 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 597 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 598 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 599 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 29, METATILE_LilycoveMuseum_WallLeftCorner, FALSE
# 600 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 601 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 602 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 603 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 604 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 605 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 606 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 607 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock8::
# 612 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 613 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 614 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_8
# 615 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_17
# 616 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 617 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 618 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 619 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 620 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 621 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 622 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 623 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 21, METATILE_LilycoveMuseum_Floor, FALSE
# 624 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 625 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 626 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 627 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 628 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 629 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 630 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 631 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 632 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 21, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 633 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 22, METATILE_LilycoveMuseum_Floor, FALSE
# 634 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 635 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 636 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 637 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 638 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 639 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 640 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 641 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 642 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 22, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 643 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 644 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 645 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 646 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 647 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 648 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 649 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 650 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock9::
# 655 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 656 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 657 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_9
# 658 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_18
# 659 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 660 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 661 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 662 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 663 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 664 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 665 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 666 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 34, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 667 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 668 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 669 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 670 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 671 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 672 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 673 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 674 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 675 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 676 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 677 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 678 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 679 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 680 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 681 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 682 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 683 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 684 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 685 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_2
# 686 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 687 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 688 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 689 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 690 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 691 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 692 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 693 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 694 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 695 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 696 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 697 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 698 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 699 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 700 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 701 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 702 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 703 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 704 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 705 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 706 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 707 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 708 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 709 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 710 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 711 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 712 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 713 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 714 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 715 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 716 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 717 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 718 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 719 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 720 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 721 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 722 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 723 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 724 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 725 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 726 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 727 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 728 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 729 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 730 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 731 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 732 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 733 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 734 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 735 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 736 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 737 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 738 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 739 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 740 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_3
# 741 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_12
# 742 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 743 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 744 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 745 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 746 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 747 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 748 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_Blockin::
# 753 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 754 "data/maps/MallowCastle_1F/scripts.pory"
	setwildbattle SPECIES_BLOCKIN, 25
# 755 "data/maps/MallowCastle_1F/scripts.pory"
	playmoncry SPECIES_BLOCKIN, CRY_MODE_NORMAL
# 756 "data/maps/MallowCastle_1F/scripts.pory"
	waitmoncry
# 757 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_EventScript_Blockin_Text_0
# 759 "data/maps/MallowCastle_1F/scripts.pory"
	playmoncry SPECIES_BLOCKIN, CRY_MODE_ENCOUNTER
# 760 "data/maps/MallowCastle_1F/scripts.pory"
	waitmoncry
# 761 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 762 "data/maps/MallowCastle_1F/scripts.pory"
	dowildbattle
# 763 "data/maps/MallowCastle_1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 764 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BLOCKIN_MALLOW_CASTLE
# 765 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_18
# 766 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_Trainer::
# 771 "data/maps/MallowCastle_1F/scripts.pory"
	trainerbattle_single TRAINER_PARKER, MallowCastle_1F_Text_TrainerIntro, MallowCastle_1F_Text_TrainerDefeated
# 772 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_Text_TrainerPost, MSGBOX_AUTOCLOSE
	return


MallowCastle_1F_EventScript_WaddleDee_Text_0:
# 12 "data/maps/MallowCastle_1F/scripts.pory"
	.string "If you find a bomb block, you should\n"
	.string "give it a good hit!\p"
	.string "It'll blow up, and take out any other\n"
	.string "sturdy blocks in its path as well!\p"
	.string "Now… I'm afraid of explosives, so can\n"
	.string "you try it out yourself, please?$"

MallowCastle_1F_EventScript_WaddleDee_Text_1:
# 23 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Eep! I stood a little too close to those\n"
	.string "metal blocks for comfort…\p"
	.string "But now you know how bomb blocks work.\n"
	.string "And the path forward is open! Hooray!$"

MallowCastle_1F_EventScript_Blockin_Text_0:
# 757 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Uh oh! The Star Block was actually\n"
	.string "a Blockin in disguise!$"

MallowCastle_1F_Text_TrainerIntro::
# 775 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Do you think if I become Dream Land's\n"
	.string "king, I can change my title to queen?$"

MallowCastle_1F_Text_TrainerDefeated::
# 781 "data/maps/MallowCastle_1F/scripts.pory"
	.string "My queenly dreams are one step farther\n"
	.string "away now…$"

MallowCastle_1F_Text_TrainerPost::
# 787 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Maybe we can all share Dream Land's\n"
	.string "crown, and form a royal court together?\l"
	.string "That way, we'll all be kings and queens!$"
