# 1 "data/maps/MallowCastle_1F/scripts.pory"

# 2 "data/maps/MallowCastle_1F/scripts.pory"
MallowCastle_1F_MapScripts::
# 3 "data/maps/MallowCastle_1F/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, MallowCastle_1F_OnLoad
# 4 "data/maps/MallowCastle_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MallowCastle_1F/scripts.pory"

# 6 "data/maps/MallowCastle_1F/scripts.pory"
MallowCastle_1F_OnLoad:
# 7 "data/maps/MallowCastle_1F/scripts.pory"
	call_if_set FLAG_MET_RIVAL_MOM, MallowCastle_1F_EventScript_OpenShortcut
# 8 "data/maps/MallowCastle_1F/scripts.pory"
	end

MallowCastle_1F_EventScript_OpenShortcut::
# 13 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 21, METATILE_LilycoveMuseum_Floor, FALSE
# 14 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 21, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 15 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 22, METATILE_LilycoveMuseum_Floor, FALSE
# 16 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 22, METATILE_LilycoveMuseum_DarkFloor, FALSE
	return


MallowCastle_1F_EventScript_WaddleDee::
# 22 "data/maps/MallowCastle_1F/scripts.pory"
	lock
# 23 "data/maps/MallowCastle_1F/scripts.pory"
	faceplayer
# 24 "data/maps/MallowCastle_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, MallowCastle_1F_EventScript_WaddleDee_2
# 37 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_EventScript_WaddleDee_Text_1
MallowCastle_1F_EventScript_WaddleDee_1:
# 43 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return

MallowCastle_1F_EventScript_WaddleDee_2:
# 26 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_EventScript_WaddleDee_Text_0
	goto MallowCastle_1F_EventScript_WaddleDee_1


MallowCastle_1F_EventScript_BombBlock1::
# 50 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 51 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 52 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_1
# 53 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 54 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 55 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 56 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 57 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 58 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 59 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 60 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 61 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 44, METATILE_LilycoveMuseum_Floor, FALSE
# 62 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 63 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 64 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 65 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 66 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 67 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 68 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 69 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 70 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 71 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 73 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 74 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 75 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 76 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 77 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 78 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 79 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 80 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 81 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 82 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 83 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 84 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 85 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 86 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 87 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 88 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 89 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 90 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 91 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 92 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 93 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 94 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 95 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 96 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 97 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 98 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 99 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 100 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 101 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 102 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 103 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 104 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 105 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 106 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 107 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 108 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 109 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 110 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 111 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 112 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 113 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 114 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 115 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 116 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 117 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 118 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 119 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 120 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 121 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 122 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 123 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 124 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 44, METATILE_LilycoveMuseum_Floor, FALSE
# 125 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 126 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 127 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 128 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 129 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 130 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 132 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 133 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 134 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 45, METATILE_LilycoveMuseum_WallLeftCorner, FALSE
# 135 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 136 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 137 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 138 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 139 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 140 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 141 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 142 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock2::
# 147 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 148 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 149 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_2
# 150 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 151 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 152 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 153 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 154 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 155 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 156 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 157 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 158 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 159 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 160 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 161 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 162 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 163 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 164 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 165 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 166 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 167 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 168 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 170 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 171 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 172 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 173 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 174 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 175 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 176 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 177 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 178 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 179 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 180 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 181 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 182 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 183 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 184 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 185 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 43, METATILE_LilycoveMuseum_Floor, FALSE
# 186 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 187 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 188 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 189 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 190 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 191 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 192 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 193 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 194 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 195 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 196 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 197 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 198 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 199 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 200 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 201 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 202 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 203 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 204 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 205 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 206 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 207 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 208 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 209 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 210 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 211 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 212 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 213 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 214 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 215 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 216 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 217 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 218 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 219 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 220 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 221 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 222 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 223 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 224 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 225 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 226 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 227 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 228 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 229 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 230 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 231 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 232 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 233 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 234 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 235 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 236 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 237 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 238 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 239 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock3::
# 244 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 245 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 246 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_3
# 247 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_12
# 248 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 249 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 250 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 251 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 252 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 253 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 254 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 255 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 256 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 257 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 258 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 259 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 260 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 261 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 262 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 263 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 264 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 265 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 266 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 267 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 268 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 269 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 270 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 271 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 272 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 273 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 274 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 276 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 277 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 278 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 279 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 280 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 281 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 282 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 283 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 285 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 286 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 287 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 288 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 289 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 290 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 291 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 292 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 293 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 294 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 295 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 296 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 297 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 298 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 299 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 300 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 301 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 302 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 303 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 304 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 305 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 306 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 307 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 308 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 309 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 310 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 311 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 312 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 313 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 314 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 315 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 316 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 317 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 318 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 319 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 320 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 321 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 322 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 323 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 324 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 325 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 326 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 34, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 327 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 328 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 329 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 330 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 331 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 332 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 333 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 334 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 335 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_9
# 336 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_18
# 337 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 338 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 339 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 340 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 341 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 342 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 343 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock4::
# 348 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 349 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 350 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_4
# 351 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_13
# 352 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 353 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 354 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 355 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 356 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 357 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 358 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 359 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 2, 29, METATILE_LilycoveMuseum_WallLip, FALSE
# 360 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 361 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 362 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 363 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 364 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 365 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 366 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 367 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 368 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 3, 29, METATILE_LilycoveMuseum_WallLipDark, FALSE
# 369 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 370 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 371 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 372 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 373 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 374 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 375 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 376 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 377 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 4, 29, METATILE_LilycoveMuseum_WallLipDark, FALSE
# 378 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 379 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 380 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 381 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 382 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 383 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 384 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 385 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 386 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 29, METATILE_LilycoveMuseum_WallRightCornerDark, FALSE
# 387 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 388 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 389 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 390 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 391 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 392 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 393 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 394 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock5::
# 399 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 400 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 401 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_5
# 402 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_14
# 403 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 404 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 405 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 406 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 407 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 408 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 409 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 410 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 24, METATILE_LilycoveMuseum_Floor, FALSE
# 411 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 412 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 413 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 414 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 415 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 416 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 417 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 418 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 419 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 25, METATILE_LilycoveMuseum_WallRightCorner, FALSE
# 420 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 421 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 422 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 423 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 424 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 425 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 426 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 427 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 428 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 25, METATILE_LilycoveMuseum_Block, TRUE
# 429 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 430 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 431 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 432 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 433 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 434 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 435 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 436 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 437 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 25, METATILE_LilycoveMuseum_Block, TRUE
# 438 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 439 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 440 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 441 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 442 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 443 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 444 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 445 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 446 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 25, METATILE_LilycoveMuseum_Block, TRUE
# 447 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 448 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 449 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 450 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 451 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 452 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 453 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 454 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 455 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 25, METATILE_LilycoveMuseum_Block, TRUE
# 456 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 457 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 458 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 459 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 460 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 461 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 462 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 463 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 464 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 24, METATILE_LilycoveMuseum_Block, TRUE
# 465 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 466 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 467 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 468 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 469 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 470 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 471 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 472 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 473 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 23, METATILE_LilycoveMuseum_Block, TRUE
# 474 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 475 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 476 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 477 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 478 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 479 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 480 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 481 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 482 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock6::
# 487 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 488 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 489 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_6
# 490 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_15
# 491 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 492 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 493 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 494 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 495 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 496 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 497 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 498 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 24, METATILE_LilycoveMuseum_Floor, FALSE
# 499 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 500 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 501 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 502 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 503 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 504 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 505 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 506 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 507 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 25, METATILE_LilycoveMuseum_WallLeftCorner, FALSE
# 508 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 509 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 510 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 511 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 512 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 513 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 514 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 515 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 516 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 25, METATILE_LilycoveMuseum_Block, TRUE
# 517 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 518 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 519 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 520 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 521 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 522 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 523 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 524 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 525 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 25, METATILE_LilycoveMuseum_Block, TRUE
# 526 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 527 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 528 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 529 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 530 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 531 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 532 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 533 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 534 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 25, METATILE_LilycoveMuseum_Block, TRUE
# 535 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 536 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 537 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 538 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 539 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 540 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 541 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 542 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 543 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 25, METATILE_LilycoveMuseum_Block, TRUE
# 544 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 545 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 546 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 547 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 548 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 549 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 550 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 551 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 552 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 24, METATILE_LilycoveMuseum_Block, TRUE
# 553 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 554 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 555 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 556 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 557 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 558 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 559 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 560 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 561 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 23, METATILE_LilycoveMuseum_Block, TRUE
# 562 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 563 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 564 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 565 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 566 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 567 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 568 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 569 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 570 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock7::
# 575 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 576 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 577 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_7
# 578 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_16
# 579 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 580 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 581 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 582 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 583 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 584 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 585 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 586 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 13, 29, METATILE_LilycoveMuseum_WallLipDark, FALSE
# 587 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 588 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 589 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 590 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 591 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 592 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 593 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 594 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 595 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 12, 29, METATILE_LilycoveMuseum_WallLipDark, FALSE
# 596 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 597 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 598 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 599 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 600 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 601 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 602 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 603 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 604 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 11, 29, METATILE_LilycoveMuseum_WallLipDark, FALSE
# 605 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 606 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 607 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 608 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 609 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 610 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 611 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 612 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 613 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 29, METATILE_LilycoveMuseum_WallLeftCornerDark, FALSE
# 614 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 615 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 616 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 617 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 618 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 619 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 620 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 621 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock8::
# 626 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 627 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 628 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_8
# 629 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 630 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 631 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 632 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 633 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 634 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 635 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 636 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 637 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 21, METATILE_LilycoveMuseum_Floor, FALSE
# 638 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 639 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 640 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 641 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 642 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 643 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 644 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 645 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 646 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 21, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 647 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 22, METATILE_LilycoveMuseum_Floor, FALSE
# 648 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 649 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 650 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 651 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 652 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 653 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 654 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 655 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 656 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 22, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 657 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 658 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 659 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 660 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 661 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 662 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 663 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 664 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_BombBlock9::
# 669 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 670 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 671 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_9
# 672 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_18
# 673 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 674 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 675 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 676 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 677 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 678 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 679 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 680 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 34, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 681 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 682 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 683 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 684 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 685 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 686 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 687 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 688 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 689 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 690 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 691 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 692 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 693 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 694 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 695 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 696 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 697 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 698 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 699 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_2
# 700 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 701 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 702 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 7, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 703 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 704 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 705 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 706 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 707 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 708 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 709 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 710 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 711 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 712 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 713 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 6, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 714 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 8, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 715 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 34, METATILE_LilycoveMuseum_Floor, FALSE
# 716 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 717 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 718 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 719 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 720 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 721 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 722 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 723 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 724 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 5, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 725 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 35, METATILE_LilycoveMuseum_Floor, FALSE
# 726 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 727 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 728 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 729 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 730 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 731 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 732 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 733 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 734 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 735 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 35, METATILE_LilycoveMuseum_DarkFloor, FALSE
# 736 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 737 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 738 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 739 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 740 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 741 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 742 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 743 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 744 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 9, 37, METATILE_LilycoveMuseum_WallLip, FALSE
# 745 "data/maps/MallowCastle_1F/scripts.pory"
	setmetatile 10, 36, METATILE_LilycoveMuseum_Floor, FALSE
# 746 "data/maps/MallowCastle_1F/scripts.pory"
	special DrawWholeMapView
# 747 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 748 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 749 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 750 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 751 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 752 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 753 "data/maps/MallowCastle_1F/scripts.pory"
	playse SE_M_DIG
# 754 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BOMB_MALLOW_CASTLE_1F_3
# 755 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_12
# 756 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8004, 1
# 757 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8005, 0
# 758 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 759 "data/maps/MallowCastle_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 760 "data/maps/MallowCastle_1F/scripts.pory"
	special ShakeCamera
# 761 "data/maps/MallowCastle_1F/scripts.pory"
	waitstate
# 762 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_Blockin::
# 767 "data/maps/MallowCastle_1F/scripts.pory"
	lockall
# 768 "data/maps/MallowCastle_1F/scripts.pory"
	setwildbattle SPECIES_BLOCKIN, 25
# 769 "data/maps/MallowCastle_1F/scripts.pory"
	playmoncry SPECIES_BLOCKIN, CRY_MODE_NORMAL
# 770 "data/maps/MallowCastle_1F/scripts.pory"
	waitmoncry
# 771 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_EventScript_Blockin_Text_0
# 773 "data/maps/MallowCastle_1F/scripts.pory"
	playmoncry SPECIES_BLOCKIN, CRY_MODE_ENCOUNTER
# 774 "data/maps/MallowCastle_1F/scripts.pory"
	waitmoncry
# 775 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 776 "data/maps/MallowCastle_1F/scripts.pory"
	dowildbattle
# 777 "data/maps/MallowCastle_1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 778 "data/maps/MallowCastle_1F/scripts.pory"
	removeobject LOCALID_BLOCKIN_MALLOW_CASTLE
# 779 "data/maps/MallowCastle_1F/scripts.pory"
	setflag FLAG_TEMP_18
# 780 "data/maps/MallowCastle_1F/scripts.pory"
	release
	return


MallowCastle_1F_EventScript_Trainer::
# 785 "data/maps/MallowCastle_1F/scripts.pory"
	trainerbattle_single TRAINER_PARKER, MallowCastle_1F_Text_TrainerIntro, MallowCastle_1F_Text_TrainerDefeated
# 786 "data/maps/MallowCastle_1F/scripts.pory"
	msgbox MallowCastle_1F_Text_TrainerPost, MSGBOX_AUTOCLOSE
	return


MallowCastle_1F_EventScript_WaddleDee_Text_0:
# 26 "data/maps/MallowCastle_1F/scripts.pory"
	.string "If you find a bomb block, you should\n"
	.string "give it a good hit!\p"
	.string "It'll blow up, and take out any other\n"
	.string "sturdy blocks in its path as well!\p"
	.string "Now… I'm afraid of explosives, so can\n"
	.string "you try it out yourself, please?$"

MallowCastle_1F_EventScript_WaddleDee_Text_1:
# 37 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Eep! I stood a little too close to those\n"
	.string "metal blocks for comfort…\p"
	.string "But now you know how bomb blocks work.\n"
	.string "And the path forward is open! Hooray!$"

MallowCastle_1F_EventScript_Blockin_Text_0:
# 771 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Uh oh! The Star Block was actually\n"
	.string "a Blockin in disguise!$"

MallowCastle_1F_Text_TrainerIntro::
# 789 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Do you think if I become Dream Land's\n"
	.string "king, I can change my title to queen?$"

MallowCastle_1F_Text_TrainerDefeated::
# 795 "data/maps/MallowCastle_1F/scripts.pory"
	.string "My queenly dreams are one step farther\n"
	.string "away now…$"

MallowCastle_1F_Text_TrainerPost::
# 801 "data/maps/MallowCastle_1F/scripts.pory"
	.string "Maybe we can all share Dream Land's\n"
	.string "crown, and form a royal court together?\l"
	.string "That way, we'll all be kings and queens!$"
