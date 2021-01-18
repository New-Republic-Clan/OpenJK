/* Public Enums rejigged for MBII Relevence */

typedef enum {
	MB_STAT_HEALTH,
	MB_STAT_HOLDABLE_ITEM,
	MB_STAT_HOLDABLE_ITEMS,
	MB_STAT_PERSISTANT_POWERUP,
	MB_STAT_WEAPONS = 4,					// 16 bit fields
	MB_STAT_ARMOR,
	MB_STAT_DEAD_YAW,					// look this direction when dead (FIXME: get rid of?)
	MB_STAT_CLIENTS_READY,				// bit mask of clients wishing to exit the intermission (FIXME: configstring?)
	MB_STAT_MAX_HEALTH,					// health / armor limit, changable by handicap
	MB_STAT_UNKNOWN_1,
	MB_STAT_UNKNOWN_2,
	MB_STAT_UNKNOWN_3,
	MB_STAT_UNKNOWN_4,
	MB_STAT_UNKNOWN_5,
	MB_STAT_UNKNOWN_6,
	MB_STAT_BLOBS_DARTS

} stats_mbii_t;

typedef enum {
	MB_PW_NONE_0,
	MB_PW_FIRE,
	MB_PW_FREEZE,
	MB_PW_NONE_3,
	MB_PW_FLAG_RED,
	MB_PW_FLAG_BLUE,
	MB_PW_FLAG_WHITE,
	MB_PW_NONE_7,
	MB_PW_PHASING,
	MB_PW_NONE_9,
	MB_PW_NONE_10,
	MB_PW_CLOAKED,
	MB_PW_INVINSIBLE,
} powerups_mbii_t;


typedef enum {
	MB_SS_NONE,
	MB_SS_BLUE,
	MB_SS_YELLOW,
	MB_SS_RED,
	MB_SS_PURPLE,
	MB_SS_CYAN,
	MB_SS_DUEL,
	MB_SS_STAFF
} saber_style_mbii_t;

// MBII FORCE POWERS

typedef enum {
	MB_FORCE_HEAL,
	MB_FORCE_JUMP,
	MB_FORCE_SPEED,
	MB_FORCE_PUSH,
	MB_FORCE_PULL,
	MB_FORCE_MIND_TRICK,
	MB_FORCE_GRIP,
	MB_FORCE_LIGHTNING,
	MB_FORCE_DESTRUCTION,
	MB_FORCE_PROTECT,
	MB_FORCE_ABSORB,
	MB_FORCE_TEAM_HEAL,
	MB_FORCE_TEAM_ENERGISE,
	MB_FORCE_DRAIN,
	MB_FORCE_SENSE,
	MB_FORCE_SABER_OFFENCE,
	MB_FORCE_SABER_DEFENCE,
	MB_FORCE_SABER_THROW

} force_mbii_t;

// MBII Classes
typedef enum {
	MB_CLASS_NONE,
	MB_CLASS_STORMTROOPER,
	MB_CLASS_SOLDER,
	MB_CLASS_COMMANDER,
	MB_CLASS_ELITE_SOLDER,
	MB_CLASS_SITH,
	MB_CLASS_JEDI,
	MB_CLASS_BOUNTY_HUNTER,
	MB_CLASS_HERO,
	MB_CLASS_SBD,
	MB_CLASS_WOOKIE,
	MB_CLASS_DEKA,
	MB_CLASS_CLONE,
	MB_CLASS_MANDO,
	MB_CLASS_ARC
} class_mbii_t;

// MBII Weapons
typedef enum {
	MB_NOTHING,
	MB_PROJECTILE_RIFLE,
	MB_MELEE,
	MB_LIGHTSABER,
	MB_PISTOL,
	MB_E11,
	MB_DISRUPTOR,
	MB_BOWCASTER,
	MB_DC15,
	MB_DC17_PISTOL,
	MB_DLT,
	MB_ROCKET_LAUNCHER,
	MB_FRAG_GREN,
	MB_PULSE_GREN,
	MB_T21,
	MB_ARM_BLASTER,
	MB_WESTAR34
} weapon_mbii_t;

// MBII AMMO
typedef enum {
	MB_AMMO_BOWCASTER_DISRUPTOR,
	MB_AMMO_DC15_DLT20_ARM_BLASTER,
	MB_AMMO_ROCKETS,
	MB_AMMO_UNKNOWN_1,
	MB_AMMO_FRAG_GRENADES,
	MB_AMMO_PULSE_GRENADES,
	MB_AMMO_T21_AMMO,
	MB_AMMO_PISTOL,
	MB_AMMO_WELSTAR34,
	MB_AMMO_DC17_PISTOL,
	MB_AMMO_PROJECTILE_RIFLE,
	MB_AMMO_UNKNOWN_4,
	MB_AMMO_UNKNOWN_5,
	MB_AMMO_UNKNOWN_6,
	MB_AMMO_UNKNOWN_7,
	MB_AMMO_UNKNOWN_8,
	MB_AMMO_UNKNOWN_9
} ammo_mbii_t;


typedef enum
{
	MB_ATT_INVALID = 0,
	MB_FP_HEAL,
	MB_FP_LEVITATION,
	MB_FP_SPEED,
	MB_FP_PUSH,
	MB_FP_PULL,
	MB_FP_TELEPATHY,
	MB_FP_GRIP,
	MB_FP_LIGHTNING,
	MB_FP_RAGE,
	MB_FP_PROTECT,
	MB_FP_ABSORB,
	MB_FP_TEAM_HEAL,
	MB_FP_TEAM_FORCE,
	MB_FP_DRAIN,
	MB_FP_SEE,
	MB_FP_SABER_OFFENSE,
	MB_FP_SABER_DEFENSE,
	MB_FP_SABERTHROW,
	MB_ATT_PISTOL,
	MB_ATT_BLASTER,
	MB_ATT_DISRUPTOR,
	MB_ATT_BOWCASTER,
	MB_ATT_SWORD,
	MB_ATT_DURABILITY,
	MB_ATT_SENTRY,
	MB_ATT_LASERCOVER,
	MB_ATT_ACROBACY,
	MB_ATT_DRONE,
	MB_ATT_WPFLAMETHROWER,
	MB_ATT_CLONERIFLE,
	MB_ATT_PROJECTILE_RIFLE,
	MB_ATT_A280,
	MB_ATT_THERMALS,
	MB_ATT_ARMOUR,
	MB_ATT_AMMO,
	MB_ATT_RESPAWNS,
	MB_ATT_SOLDIER_TDS,
	MB_ATT_DODGE,
	MB_ATT_HEALING,
	MB_ATT_FLAMETHROWER,
	MB_ATT_FUEL,
	MB_ATT_ROCKET,
	MB_ATT_WOOKIE_HEALTH,
	MB_ATT_WOOKIE_STRENGTH,
	MB_ATT_HULL_STRENGTH,
	MB_ATT_SHIELD_PROJ,
	MB_ATT_DEKA_SHIELD,
	MB_ATT_DEKA_HULL,
	MB_ATT_DEKA_DEPLOY,
	MB_ATT_DEKA_POWER,
	MB_ATT_TURN_RATE,
	MB_ATT_FIREPOWER,
	MB_ATT_FIRERATE,
	MB_ATT_QUICKTHROW,
	MB_ATT_RECHARGE,
	MB_ATT_LOGIC,
	MB_ATT_STAMINA,
	MB_ATT_DEXTERITY,
	MB_ATT_PULSE_GRENADES,
	MB_ATT_TRACKING_DART,
	MB_ATT_POISON_DART,
	MB_ATT_JETPACK,
	MB_ATT_PLX1,
	MB_ATT_T21,
	MB_ATT_CLONEBLOBS,
	MB_ATT_CORTOSIS,
	MB_ATT_BLAST_ARMOUR,
	MB_ATT_MAGNETIC_PLATING,
	MB_ATT_WOOKIE_BALANCE,
	MB_ATT_CCTRAINING,
	MB_ATT_ET_CCTRAINING,
	MB_ATT_SBD_CANNON,
	MB_ATT_WRISTLASER,
	MB_ATT_SHOCKWAVE,
	MB_ATT_SHIELD_RECHARGE,
	MB_ATT_SHIELD_RECHARGE2,
	MB_ATT_RALLY,
	MB_ATT_ASSEMBLE,
	MB_ATT_SPY_DISGUISE,
	MB_ATT_ARC_RIFLE_SCOPE,
	MB_ATT_ARC_RIFLE_GRENADELAUNCHER,
	MB_ATT_WOOKIEE_FURY,
	MB_ATT_WOOKIEE_AGILITY,
	MB_ATT_ANTI_MT,
	MB_ATT_ZOOM,
	MB_ATT_RADAR,
	MB_ATT_GRAPPLE_HOOK,
	MB_ATT_FIBERCORD_WHIP,
	MB_ATT_FIRE_GRENADES,
	MB_ATT_CRYOBAN_GRENADES,
	MB_ATT_SONIC_DETONATOR,
	MB_ATT_QUICKDRAW,
	MB_ATT_MICRO_GRENADES,
	MB_ATT_STRONGBLOBS,
	MB_ATT_STEALTH,
	MB_ATT_BACKSTAB,
	MB_ATT_DASH,
	MB_ATT_CLONE_PISTOL,
	MB_ATT_MANDA_PISTOL,
	MB_ATT_SPY_PISTOL,
	MB_ATT_IMP_PISTOL,
	MB_ATT_KNIFE,
	MB_ATT_ELECTRO_STAFF,
	MB_ATT_SHOTGUN,
	MB_ATT_WESTARM5,
	MB_ATT_DLT20A,
	MB_ATT_FRAGS,
	MB_ATT_EE3,
	MB_ATT_IONRIFLE,
	MB_ATT_MINIGUN,
	MB_ATT_HULL_REPAIR,
	MB_ATT_SECURITY_INTERFACE,
	MB_ATT_DEKA_FIREPOWER,
	MB_ATT_CLOAK,
	MB_ATT_FORCEFIELD,
	MB_ATT_MEDI_PACK,
	MB_ATT_AMMO_PACK,
	MB_ATT_DEFLECT,
	MB_ATT_FORCEBLOCK,
	MB_ATT_FORCEFOCUS,
	MB_ATT_SABER_FAST,
	MB_ATT_SABER_MEDIUM,
	MB_ATT_SABER_STRONG,
	MB_ATT_SABER_MASTERY,
	MB_ATT_FP_MIRALUKA,
	MB_ATT_GUNBASH,
	MB_ATT_ROSHTAUNT,
	MB_ATT_FP_REPULSE,
	MB_ATT_FLIPKICK,
	NO_OF_MB_ATTRIBUTES
} att_mbii_t;