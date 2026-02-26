#include "constants/abilities.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
    .affineAnims = gDummySpriteAffineAnimTable,                                                                                         \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    /* You may add any custom species below this point based on the following structure: */

    [SPECIES_LOVELY] =
    {
        .baseHP        = 67,
        .baseAttack    = 54,
        .baseDefense   = 42,
        .baseSpeed     = 31,
        .baseSpAttack  = 54,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_NONE, ABILITY_OVERGROW, ABILITY_FLOWER_VEIL},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Lovely"),
        .cryId = CRY_CHERUBI,
        .natDexNum = NATIONAL_DEX_LOVELY,
        .categoryName = _("Dandelion"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "Lovely sways back and forth with a cute\n"
            "face to beguile onlookers. If that doesn't\n"
            "work, it will stretch its stem out far\n"
            "and grab them forcefully instead."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lovely,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_FIGURE_8,
        .backPic = gMonBackPic_Lovely,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Lovely,
        .shinyPalette = gMonShinyPalette_Lovely,
        .iconSprite = gMonIcon_Cherubi,
        .iconPalIndex = 0,
        FOOTPRINT(Lovely)
        .levelUpLearnset = sLovelyLevelUpLearnset,
        .teachableLearnset = sCherubiTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_ROSELY}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_ROSELY] =
    {
        .baseHP        = 82,
        .baseAttack    = 79,
        .baseDefense   = 64,
        .baseSpeed     = 41,
        .baseSpAttack  = 76,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 145,
        .evYield_Attack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_NONE, ABILITY_OVERGROW, ABILITY_FLOWER_VEIL},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rosely"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_ROSELY,
        .categoryName = _("Rose Thorn"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "Rosely's head is covered in a veil of\n"
            "vivid rose petals. Anyone who tries to\n"
            "peek inside at its true appearance is\n"
            "greeted with a painfully thorny lunge."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rosely,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Rosely,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Rosely,
        .shinyPalette = gMonShinyPalette_Rosely,
        .iconSprite = gMonIcon_CherrimOvercast,
        .iconPalIndex = 1,
        FOOTPRINT(Rosely)
        .levelUpLearnset = sRoselyLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SECTONIA_VINE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_SECTONIA_VINE] =
    {
        .baseHP        = 93,
        .baseAttack    = 102,
        .baseDefense   = 76,
        .baseSpeed     = 58,
        .baseSpAttack  = 104,
        .baseSpDefense = 97,
        .types = MON_TYPES(TYPE_GRASS, TYPE_BUG),
        .catchRate = 45,
        .expYield = 266,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_BUG),
        .abilities = { ABILITY_NONE, ABILITY_OVERGROW, ABILITY_QUEENLY_MAJESTY},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("SectoniaVine"),
        .cryId = CRY_SERPERIOR,
        .natDexNum = NATIONAL_DEX_ROSELY,
        .categoryName = _("Dreamstalk"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "A parasitic influence on the flowers of\n"
            "a Floralian tree brought these helpers to\n"
            "life. The blossoms can survive while\n"
            "detached from the stalks temporarily."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SectoniaVine,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_SectoniaVine,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_SectoniaVine,
        .shinyPalette = gMonShinyPalette_SectoniaVine,
        .iconSprite = gMonIcon_CherrimSunshine,
        .iconPalIndex = 2,
        FOOTPRINT(SectoniaVine)
        .levelUpLearnset = sSectoniaVineLevelUpLearnset,
        .teachableLearnset = sTsareenaTeachableLearnset,
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    
    [SPECIES_BURNING_LEO] =
    {
        .baseHP        = 53,
        .baseAttack    = 43,
        .baseDefense   = 48,
        .baseSpeed     = 62,
        .baseSpAttack  = 63,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_NONE, ABILITY_BLAZE, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Burning Leo"),
        .cryId = CRY_LITLEO,
        .natDexNum = NATIONAL_DEX_BURNING_LEO,
        .categoryName = _("Fire Mane"),
        .height = 6, //temp
        .weight = 16, //temp
        .description = COMPOUND_STRING(
            "Proud and kind-hearted, it shares its\n"
            "warmth with others in need. It takes\n"
            "great care of its mane and becomes\n"
            "disheartened if it ever ends up dirty."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BurningLeo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SPIN,
        .backPic = gMonBackPic_BurningLeo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_BurningLeo,
        .shinyPalette = gMonShinyPalette_BurningLeo,
        .iconSprite = gMonIcon_Cyndaquil,
        .iconPalIndex = 0,
        FOOTPRINT(BurningLeo)
        .levelUpLearnset = sBurningLeoLevelUpLearnset,
        .teachableLearnset = sLitleoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_ACCHI}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_ACCHI] =
    {
        .baseHP        = 88,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 52,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 145,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_NONE, ABILITY_BLAZE, ABILITY_STALWART},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Acchi"),
        .cryId = CRY_HEATMOR,
        .natDexNum = NATIONAL_DEX_ACCHI,
        .categoryName = _("Flame"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "A reclusive helper that makes its home\n"
            "around active volcanoes. It belches\n"
            "flames indiscriminately without paying\n"
            "much attention to its surroundings."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Acchi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_SHAKE_GLOW_RED_SLOW,
        .backPic = gMonBackPic_Acchi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Acchi,
        .shinyPalette = gMonShinyPalette_Acchi,
        .iconSprite = gMonIcon_Magmar,
        .iconPalIndex = 1,
        FOOTPRINT(Rosely)
        .levelUpLearnset = sAcchiLevelUpLearnset,
        .teachableLearnset = sMagmarTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_PYRIBBIT}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_PYRIBBIT] =
    {
        .baseHP        = 124,
        .baseAttack    = 71,
        .baseDefense   = 60,
        .baseSpeed     = 102,
        .baseSpAttack  = 123,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 45,
        .expYield = 266,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_NONE, ABILITY_BLAZE, ABILITY_STALL},
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pyribbit"),
        .cryId = CRY_SEISMITOAD,
        .natDexNum = NATIONAL_DEX_PYRIBBIT,
        .categoryName = _("Eruption"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "A hot-tempered toad that derives comfort\n"
            "from harsh environmental conditions. It\n"
            "bellows with the force of volcanic eruptions,\n"
            "driving others to similarly hot tempers."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pyribbit,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        .backPic = gMonBackPic_Pyribbit,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pyribbit,
        .shinyPalette = gMonShinyPalette_Pyribbit,
        .iconSprite = gMonIcon_Heatran,
        .iconPalIndex = 2,
        FOOTPRINT(Pyribbit)
        .levelUpLearnset = sPyribbitLevelUpLearnset,
        .teachableLearnset = sHeatranTeachableLearnset,
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_SQUISHY] =
    {
        .baseHP        = 47,
        .baseAttack    = 60,
        .baseDefense   = 48,
        .baseSpeed     = 53,
        .baseSpAttack  = 50,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 64,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_NONE, ABILITY_TORRENT, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Squishy"),
        .cryId = CRY_CLOBBOPUS,
        .natDexNum = NATIONAL_DEX_SQUISHY,
        .categoryName = _("Sea Squid"),
        .height = 6, //temp
        .weight = 16, //temp
        .description = COMPOUND_STRING(
            "Usually seen underwater, it can also\n"
            "occasionally be seen surfacing or even\n"
            "swimming through the air. How Squishy\n"
            "manages this is an enduring mystery."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squishy,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE_TWICE,
        .backPic = gMonBackPic_Squishy,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Squishy,
        .shinyPalette = gMonShinyPalette_Squishy,
        .iconSprite = gMonIcon_Tentacool,
        .iconPalIndex = 0,
        FOOTPRINT(Squishy)
        .levelUpLearnset = sSquishyLevelUpLearnset,
        .teachableLearnset = sTentacoolTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_SQUISTER}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_SQUISTER] =
    {
        .baseHP        = 63,
        .baseAttack    = 86,
        .baseDefense   = 57,
        .baseSpeed     = 93,
        .baseSpAttack  = 59,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 145,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_NONE, ABILITY_TORRENT, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Squister"),
        .cryId = CRY_GRAPPLOCT,
        .natDexNum = NATIONAL_DEX_SQUISTER,
        .categoryName = _("Torpedo"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "By twisting and uncoiling its body,\n"
            "it rockets through the ocean at high\n"
            "speeds. Its main weakness is being\n"
            "unable to steer itself well."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squister,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_JOLT_RIGHT_SLOW,
        .backPic = gMonBackPic_Squister,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Squister,
        .shinyPalette = gMonShinyPalette_Squister,
        .iconSprite = gMonIcon_Tentacool,
        .iconPalIndex = 1,
        FOOTPRINT(Squister)
        .levelUpLearnset = sSquisterLevelUpLearnset,
        .teachableLearnset = sTentacruelTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CLAYKKEN}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_CLAYKKEN] =
    {
        .baseHP        = 75,
        .baseAttack    = 116,
        .baseDefense   = 82,
        .baseSpeed     = 111,
        .baseSpAttack  = 79,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .catchRate = 45,
        .expYield = 266,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_NONE, ABILITY_TORRENT, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Claykken"),
        .cryId = CRY_DHELMISE,
        .natDexNum = NATIONAL_DEX_CLAYKKEN,
        .categoryName = _("Pirate"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "This nefarious troublemaker of the sea\n"
            "attacks with spiked tentacles. The wooden\n"
            "pipe it likes to blow bubbles from is said\n"
            "to be the mark of a respected sailor."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Claykken,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_CONCAVE_ARC_LARGE_TWICE,
        .backPic = gMonBackPic_Claykken,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Claykken,
        .shinyPalette = gMonShinyPalette_Claykken,
        .iconSprite = gMonIcon_Tentacruel,
        .iconPalIndex = 2,
        FOOTPRINT(Claykken)
        .levelUpLearnset = sClaykkenLevelUpLearnset,
        .teachableLearnset = sTentacruelTeachableLearnset,
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_CAPILLER] =
    {
        .baseHP        = 30,
        .baseAttack    = 33,
        .baseDefense   = 42,
        .baseSpeed     = 40,
        .baseSpAttack  = 15,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = 38,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50.0),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Capiller"),
        .cryId = CRY_SCATTERBUG,
        .natDexNum = NATIONAL_DEX_CAPILLER,
        .categoryName = _("Caterpillar"),
        .height = 6, //temp
        .weight = 16, //temp
        .description = COMPOUND_STRING(
            "They have a habit of falling from\n"
            "trees or burrowing out of fruit when\n"
            "you least expect it. Certain sources\n"
            "claim they're very unappetizing."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Capiller,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE_TWICE,
        .backPic = gMonBackPic_Capiller,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Capiller,
        .shinyPalette = gMonShinyPalette_Capiller,
        .iconSprite = gMonIcon_Scatterbug,
        .iconPalIndex = 0,
        FOOTPRINT(Squishy)
        .levelUpLearnset = sCapillerLevelUpLearnset,
        .teachableLearnset = sScatterbugTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_PUPA}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_PUPA] =
    {
        .baseHP        = 35,
        .baseAttack    = 33,
        .baseDefense   = 72,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
        .expYield = 73,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50.0),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pupa"),
        .cryId = CRY_SPEWPA,
        .natDexNum = NATIONAL_DEX_PUPA,
        .categoryName = _("Chrysalis"),
        .height = 6, //temp
        .weight = 16, //temp
        .description = COMPOUND_STRING(
            "Pupa's body is immobile, so it\n"
            "spews string from its rear end\n"
            "to dangle from heights and uses\n"
            "swinging momentum to move around."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pupa,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE_TWICE,
        .backPic = gMonBackPic_Pupa,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pupa,
        .shinyPalette = gMonShinyPalette_Pupa,
        .iconSprite = gMonIcon_Spewpa,
        .iconPalIndex = 0,
        FOOTPRINT(Squishy)
        .levelUpLearnset = sPupaLevelUpLearnset,
        .teachableLearnset = sSpewpaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 13, SPECIES_BUTTERFLY_SOLO}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_BUTTERFLY_SOLO] =
    {
        .baseHP        = 55,
        .baseAttack    = 27,
        .baseDefense   = 32,
        .baseSpeed     = 75,
        .baseSpAttack  = 71,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 20,
        .expYield = 108,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50.0),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SCHOOLING, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Butterfly"),
        .cryId = CRY_CLOBBOPUS,
        .natDexNum = NATIONAL_DEX_BUTTERFLY,
        .categoryName = _("Papillon"),
        .height = 6, //temp
        .weight = 16, //temp
        .description = COMPOUND_STRING(
            "The sight of butterflies is often\n"
            "viewed as a symbol of peace in\n"
            "Dream Land. Under most circumstances,\n"
            "they are harmless creatures."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ButterflySolo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE_TWICE,
        .backPic = gMonBackPic_ButterflySolo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_ButterflySolo,
        .shinyPalette = gMonShinyPalette_ButterflySolo,
        .iconSprite = gMonIcon_Beautifly,
        .iconPalIndex = 0,
        FOOTPRINT(Butterfly)
        .levelUpLearnset = sButterflyLevelUpLearnset,
        .teachableLearnset = sTentacoolTeachableLearnset,
        .formSpeciesIdTable = sButterflyFormSpeciesIdTable,
        .formChangeTable = sButterflyFormChangeTable,
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    [SPECIES_BUTTERFLY_SWARM] =
    {
        .baseHP        = 55,
        .baseAttack    = 100,
        .baseDefense   = 108,
        .baseSpeed     = 126,
        .baseSpAttack  = 144,
        .baseSpDefense = 111,
        .types = MON_TYPES(TYPE_BUG, TYPE_GHOST),
        .catchRate = 20,
        .expYield = 247,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50.0),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SCHOOLING, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Butterfly"),
        .cryId = CRY_CLOBBOPUS,
        .natDexNum = NATIONAL_DEX_BUTTERFLY,
        .categoryName = _("Papillon"),
        .height = 6, //temp
        .weight = 16, //temp
        .description = COMPOUND_STRING(
            "The sight of a butterfly was once\n"
            "believed to be an omen of approaching\n"
            "death. They flutter silently, chasing\n"
            "the screams of dying souls to feast on."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ButterflySwarm,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE_TWICE,
        .backPic = gMonBackPic_ButterflySwarm,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_ButterflySwarm,
        .shinyPalette = gMonShinyPalette_ButterflySwarm,
        .iconSprite = gMonIcon_Dustox,
        .iconPalIndex = 0,
        FOOTPRINT(Butterfly)
        .levelUpLearnset = sButterflyLevelUpLearnset,
        .teachableLearnset = sTentacoolTeachableLearnset,
        .formSpeciesIdTable = sButterflyFormSpeciesIdTable,
        .formChangeTable = sButterflyFormChangeTable,
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CircledQuestionMark,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CircledQuestionMarkF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSpriteFemale = gMonIcon_QuestionMarkF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    */
};