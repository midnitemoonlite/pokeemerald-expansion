# 1 "data/maps/MallowCastle_4F/scripts.pory"

# 2 "data/maps/MallowCastle_4F/scripts.pory"
MallowCastle_4F_MapScripts::
# 3 "data/maps/MallowCastle_4F/scripts.pory"
	.byte 0

MallowCastle_4F_EventScript_WaddleDeeTutorial::
# 8 "data/maps/MallowCastle_4F/scripts.pory"
	lock
# 9 "data/maps/MallowCastle_4F/scripts.pory"
	faceplayer
# 10 "data/maps/MallowCastle_4F/scripts.pory"
	msgbox MallowCastle_4F_EventScript_WaddleDeeTutorial_Text_0
# 23 "data/maps/MallowCastle_4F/scripts.pory"
	release
	return


MallowCastle_4F_EventScript_WaddleDeeObstacle1::
# 28 "data/maps/MallowCastle_4F/scripts.pory"
	lock
# 29 "data/maps/MallowCastle_4F/scripts.pory"
	faceplayer
# 30 "data/maps/MallowCastle_4F/scripts.pory"
	msgbox MallowCastle_4F_EventScript_WaddleDeeObstacle1_Text_0
# 35 "data/maps/MallowCastle_4F/scripts.pory"
	release
	return


MallowCastle_4F_EventScript_WaddleDeeObstacle2::
# 40 "data/maps/MallowCastle_4F/scripts.pory"
	lock
# 41 "data/maps/MallowCastle_4F/scripts.pory"
	faceplayer
# 42 "data/maps/MallowCastle_4F/scripts.pory"
	msgbox MallowCastle_4F_EventScript_WaddleDeeObstacle2_Text_0
# 47 "data/maps/MallowCastle_4F/scripts.pory"
	release
	return


MallowCastle_4F_EventScript_WaddleDeeObstacle3::
# 52 "data/maps/MallowCastle_4F/scripts.pory"
	lock
# 53 "data/maps/MallowCastle_4F/scripts.pory"
	faceplayer
# 54 "data/maps/MallowCastle_4F/scripts.pory"
	msgbox MallowCastle_4F_EventScript_WaddleDeeObstacle3_Text_0
# 57 "data/maps/MallowCastle_4F/scripts.pory"
	release
	return


MallowCastle_4F_EventScript_WaddleDeeObstacle4::
# 62 "data/maps/MallowCastle_4F/scripts.pory"
	lock
# 63 "data/maps/MallowCastle_4F/scripts.pory"
	faceplayer
# 64 "data/maps/MallowCastle_4F/scripts.pory"
	msgbox MallowCastle_4F_EventScript_WaddleDeeObstacle4_Text_0
# 70 "data/maps/MallowCastle_4F/scripts.pory"
	release
	return


MallowCastle_4F_EventScript_WaddleDeeObstacle5::
# 75 "data/maps/MallowCastle_4F/scripts.pory"
	lock
# 76 "data/maps/MallowCastle_4F/scripts.pory"
	faceplayer
# 77 "data/maps/MallowCastle_4F/scripts.pory"
	msgbox MallowCastle_4F_EventScript_WaddleDeeObstacle5_Text_0
# 79 "data/maps/MallowCastle_4F/scripts.pory"
	release
	return


MallowCastle_4F_EventScript_BombBlock::
# 84 "data/maps/MallowCastle_4F/scripts.pory"
	releaseall
# 85 "data/maps/MallowCastle_4F/scripts.pory"
	release
# 86 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 87 "data/maps/MallowCastle_4F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_4F
# 88 "data/maps/MallowCastle_4F/scripts.pory"
	setflag FLAG_TEMP_10
# 89 "data/maps/MallowCastle_4F/scripts.pory"
	releaseall
# 90 "data/maps/MallowCastle_4F/scripts.pory"
	release
# 91 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 92 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 93 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 24, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 94 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 95 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 96 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 97 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 25, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 98 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 99 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 100 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 101 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 26, 25, METATILE_LilycoveMuseum_Floor, FALSE
# 102 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 103 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 104 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 105 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 106 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 107 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 28, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 108 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 109 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 110 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 111 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 29, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 112 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 113 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 114 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 115 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 30, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 116 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 117 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 118 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 119 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 31, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 120 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 121 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 122 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 123 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 32, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 124 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 126 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 127 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 33, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 128 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 129 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 130 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 131 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 34, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 132 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 134 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 135 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 35, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 136 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 137 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 138 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 139 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 36, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 140 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 141 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 142 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 143 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 37, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 144 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 145 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 146 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 147 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 38, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 148 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 149 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 150 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 151 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 39, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 152 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 153 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 154 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 155 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 25, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 156 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 157 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 158 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 159 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 24, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 160 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 161 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 162 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 163 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 23, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 164 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 165 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 166 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 167 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 22, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 168 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 170 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 171 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 21, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 172 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 173 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 174 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 175 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 20, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 176 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 177 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 178 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 179 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 19, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 180 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 181 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 182 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 183 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 18, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 184 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 185 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 186 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 187 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 17, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 188 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 189 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 190 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 191 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 16, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 192 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 193 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 194 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 195 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 15, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 196 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 197 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 198 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 199 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 14, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 200 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 201 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 202 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 203 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 13, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 204 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 205 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 206 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 207 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 12, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 208 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 209 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 210 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 211 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 11, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 212 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 213 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 214 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 215 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 10, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 216 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 217 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 218 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 219 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 9, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 220 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 221 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 222 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 223 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 8, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 224 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 225 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 226 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 227 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 7, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 228 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 229 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 230 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 231 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 232 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 233 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 234 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 235 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 5, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 236 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 237 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 238 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 239 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 4, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 240 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 241 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 242 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 243 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 244 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 245 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 246 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 247 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 2, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 248 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 249 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 250 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 251 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 1, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 252 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 253 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 254 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 255 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 40, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 256 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 257 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 258 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 259 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 39, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 260 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 261 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 262 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 263 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 38, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 264 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 265 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 266 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 267 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 37, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 268 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 269 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 270 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 271 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 36, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 272 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 273 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 274 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 275 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 35, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 276 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 277 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 278 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 279 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 34, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 280 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 281 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 282 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 283 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 33, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 284 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 285 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 286 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 287 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 32, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 288 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 289 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 290 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 291 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 31, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 292 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 293 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 294 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 295 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 30, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 296 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 297 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 298 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 299 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 29, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 300 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 301 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 302 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 303 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 28, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 304 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 305 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 306 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 307 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 27, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 308 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 309 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 310 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 311 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 26, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 312 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 313 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 314 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 315 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 25, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 316 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 317 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 318 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 319 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 24, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 320 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 321 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 322 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 323 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 23, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 324 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 325 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 326 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 327 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 22, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 328 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 329 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 330 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 331 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 21, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 332 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 333 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 334 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 335 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 20, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 336 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 337 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 338 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 339 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 19, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 340 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 341 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 342 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 343 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 18, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 344 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 345 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 346 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 347 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 17, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 348 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 349 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 350 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 351 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 16, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 352 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 353 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 354 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 355 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 15, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 356 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 357 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 358 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 359 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 14, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 360 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 361 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 362 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 363 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 13, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 364 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 365 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 366 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 367 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 12, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 368 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 369 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 370 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 371 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 11, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 372 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 373 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 374 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 375 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 10, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 376 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 377 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 378 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 379 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 9, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 380 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 381 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 382 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 383 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 8, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 384 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 385 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 386 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 387 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 7, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 388 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 389 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 390 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 391 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 6, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 392 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 393 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 394 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 395 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 5, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 396 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 397 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 398 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 399 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 4, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 400 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 401 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 402 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 403 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 3, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 404 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 405 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 406 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 407 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 2, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 408 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 409 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 410 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 411 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 0, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 412 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 413 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 414 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 415 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 1, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 416 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 417 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 418 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 419 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 2, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 420 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 421 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 422 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 423 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 3, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 424 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 425 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 426 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 427 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 4, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 428 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 429 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 430 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 431 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 5, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 432 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 433 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 434 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 435 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 6, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 436 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 437 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 438 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 439 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 7, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 440 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 441 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 442 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 443 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 8, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 444 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 445 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 446 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 447 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 9, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 448 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 449 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 450 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 451 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 10, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 452 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 453 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 454 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 455 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 11, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 456 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 457 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 458 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 459 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 1, 12, METATILE_LilycoveMuseum_BlueVoid, TRUE
# 460 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 461 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 462 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 463 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 464 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 465 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 466 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 467 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 468 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 469 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 470 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 471 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 3, 15, METATILE_LilycoveMuseum_Block, TRUE
# 472 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 473 "data/maps/MallowCastle_4F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 474 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8004, 3
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_3
MallowCastle_4F_EventScript_BombBlock_1:
# 480 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 481 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 482 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 4, 15, METATILE_LilycoveMuseum_Block, TRUE
# 483 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 484 "data/maps/MallowCastle_4F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 485 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8004, 4
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_8
MallowCastle_4F_EventScript_BombBlock_6:
# 491 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 492 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 493 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 5, 15, METATILE_LilycoveMuseum_Block, TRUE
# 494 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 495 "data/maps/MallowCastle_4F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 496 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8004, 5
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_13
MallowCastle_4F_EventScript_BombBlock_11:
# 502 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 503 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 504 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 6, 15, METATILE_LilycoveMuseum_Block, TRUE
# 505 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 506 "data/maps/MallowCastle_4F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 507 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_18
MallowCastle_4F_EventScript_BombBlock_16:
# 513 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
# 514 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_M_DIG
# 515 "data/maps/MallowCastle_4F/scripts.pory"
	setmetatile 7, 15, METATILE_LilycoveMuseum_Block, TRUE
# 516 "data/maps/MallowCastle_4F/scripts.pory"
	special DrawWholeMapView
# 517 "data/maps/MallowCastle_4F/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 518 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8004, 7
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_23
MallowCastle_4F_EventScript_BombBlock_21:
# 524 "data/maps/MallowCastle_4F/scripts.pory"
	delay 5
	end

MallowCastle_4F_EventScript_BombBlock_2:
# 476 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_LEDGE
# 477 "data/maps/MallowCastle_4F/scripts.pory"
	applymovement LOCALID_PLAYER, MallowCastle_4F_EventScript_BombBlock_Movement_0
# 478 "data/maps/MallowCastle_4F/scripts.pory"
	waitmovement
	goto MallowCastle_4F_EventScript_BombBlock_1

MallowCastle_4F_EventScript_BombBlock_3:
# 474 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8005, 15
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_2
	goto MallowCastle_4F_EventScript_BombBlock_1

MallowCastle_4F_EventScript_BombBlock_7:
# 487 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_LEDGE
# 488 "data/maps/MallowCastle_4F/scripts.pory"
	applymovement LOCALID_PLAYER, MallowCastle_4F_EventScript_BombBlock_Movement_0
# 489 "data/maps/MallowCastle_4F/scripts.pory"
	waitmovement
	goto MallowCastle_4F_EventScript_BombBlock_6

MallowCastle_4F_EventScript_BombBlock_8:
# 485 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8005, 15
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_7
	goto MallowCastle_4F_EventScript_BombBlock_6

MallowCastle_4F_EventScript_BombBlock_12:
# 498 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_LEDGE
# 499 "data/maps/MallowCastle_4F/scripts.pory"
	applymovement LOCALID_PLAYER, MallowCastle_4F_EventScript_BombBlock_Movement_0
# 500 "data/maps/MallowCastle_4F/scripts.pory"
	waitmovement
	goto MallowCastle_4F_EventScript_BombBlock_11

MallowCastle_4F_EventScript_BombBlock_13:
# 496 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8005, 15
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_12
	goto MallowCastle_4F_EventScript_BombBlock_11

MallowCastle_4F_EventScript_BombBlock_17:
# 509 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_LEDGE
# 510 "data/maps/MallowCastle_4F/scripts.pory"
	applymovement LOCALID_PLAYER, MallowCastle_4F_EventScript_BombBlock_Movement_0
# 511 "data/maps/MallowCastle_4F/scripts.pory"
	waitmovement
	goto MallowCastle_4F_EventScript_BombBlock_16

MallowCastle_4F_EventScript_BombBlock_18:
# 507 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8005, 15
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_17
	goto MallowCastle_4F_EventScript_BombBlock_16

MallowCastle_4F_EventScript_BombBlock_22:
# 520 "data/maps/MallowCastle_4F/scripts.pory"
	playse SE_LEDGE
# 521 "data/maps/MallowCastle_4F/scripts.pory"
	applymovement LOCALID_PLAYER, MallowCastle_4F_EventScript_BombBlock_Movement_0
# 522 "data/maps/MallowCastle_4F/scripts.pory"
	waitmovement
	goto MallowCastle_4F_EventScript_BombBlock_21

MallowCastle_4F_EventScript_BombBlock_23:
# 518 "data/maps/MallowCastle_4F/scripts.pory"
	compare VAR_0x8005, 15
	goto_if_eq MallowCastle_4F_EventScript_BombBlock_22
	goto MallowCastle_4F_EventScript_BombBlock_21


# 477 "data/maps/MallowCastle_4F/scripts.pory"
MallowCastle_4F_EventScript_BombBlock_Movement_0:
# 477 "data/maps/MallowCastle_4F/scripts.pory"
	jump_down
	step_end

MallowCastle_4F_EventScript_WaddleDeeTutorial_Text_0:
# 10 "data/maps/MallowCastle_4F/scripts.pory"
	.string "Pant… pant…\p"
	.string "This bomb block… it's a real doozy, I\n"
	.string "tell you what…\p"
	.string "Once this path opens, it'll keep on\n"
	.string "going until it closes the other exit.\p"
	.string "You'll have to run as fast as you can to\n"
	.string "make it there before that happens…\p"
	.string "…pant… I'm not a very fast runner, as it\n"
	.string "turns out…$"

MallowCastle_4F_EventScript_WaddleDeeObstacle1_Text_0:
# 30 "data/maps/MallowCastle_4F/scripts.pory"
	.string "Hi, Kirby. I appreciate you stopping by\n"
	.string "and talking to me.\p"
	.string "Don't you think there's something else\n"
	.string "you should be focusing on, though?$"

MallowCastle_4F_EventScript_WaddleDeeObstacle2_Text_0:
# 42 "data/maps/MallowCastle_4F/scripts.pory"
	.string "I'm too busy walking in circles to tell\n"
	.string "which way you're coming from.\p"
	.string "Hopefully it's not walking back to the\n"
	.string "start because you were too slow?$"

MallowCastle_4F_EventScript_WaddleDeeObstacle3_Text_0:
# 54 "data/maps/MallowCastle_4F/scripts.pory"
	.string "Walking back and forth like this would\n"
	.string "be more fun if I could see my footsteps.\l"
	.string "Maybe I should visit the Iceberg next.$"

MallowCastle_4F_EventScript_WaddleDeeObstacle4_Text_0:
# 64 "data/maps/MallowCastle_4F/scripts.pory"
	.string "Nobody uses this castle for anything,\n"
	.string "right? Then I say we should make\l"
	.string "a race course out of it!\p"
	.string "It'd be so much fun driving laps down\n"
	.string "all the twisty-turny hallways!$"

MallowCastle_4F_EventScript_WaddleDeeObstacle5_Text_0:
# 77 "data/maps/MallowCastle_4F/scripts.pory"
	.string "You're almost at the end, Kirby! Just a\n"
	.string "few more steps to the Castle Arena!$"
