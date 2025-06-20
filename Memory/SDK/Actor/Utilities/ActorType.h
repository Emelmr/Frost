#pragma once

enum class ActorType : int {
    Undefined       = 1,
    TypeMask        = 0b11111111,
    None            = 0,
    Mob             = 1 << 8,
    PathfinderMob   = 1 << 9 | Mob,
    UnknownType     = 1 << 10,
    Monster         = 1 << 11 | PathfinderMob,
    Animal          = 1 << 12 | PathfinderMob,
    WaterAnimal     = 1 << 13 | PathfinderMob,
    TamableAnimal   = 1 << 14 | Animal,
    Ambient         = 1 << 15 | Mob,
    UndeadMob       = 1 << 16 | Monster,
    ZombieMonster   = 1 << 17 | UndeadMob,
    Arthropod       = 1 << 18 | Monster,
    Minecart        = 1 << 19,
    SkeletonMonster = 1 << 20 | UndeadMob,
    EquineAnimal    = 1 << 21 | TamableAnimal,
    Projectile      = 1 << 22,
    AbstractArrow   = 1 << 23,
    VillagerBase    = 1 << 24 | PathfinderMob,

    Chicken                    = 10 | Animal,
    Cow                        = 11 | Animal,
    Pig                        = 12 | Animal,
    Sheep                      = 13 | Animal,
    Wolf                       = 14 | TamableAnimal,
    Villager                   = 15 | VillagerBase,
    MushroomCow                = 16 | Animal,
    Squid                      = 17 | WaterAnimal,
    Rabbit                     = 18 | Animal,
    Bat                        = 19 | Ambient,
    IronGolem                  = 20 | PathfinderMob,
    SnowGolem                  = 21 | PathfinderMob,
    Ocelot                     = 22 | TamableAnimal,
    Horse                      = 23 | EquineAnimal,
    Donkey                     = 24 | EquineAnimal,
    Mule                       = 25 | EquineAnimal,
    SkeletonHorse              = 26 | EquineAnimal | UndeadMob,
    ZombieHorse                = 27 | EquineAnimal | UndeadMob,
    PolarBear                  = 28 | Animal,
    Llama                      = 29 | Animal,
    Parrot                     = 30 | TamableAnimal,
    Dolphin                    = 31 | WaterAnimal,
    Zombie                     = 32 | ZombieMonster,
    Creeper                    = 33 | Monster,
    Skeleton                   = 34 | SkeletonMonster,
    Spider                     = 35 | Arthropod,
    PigZombie                  = 36 | UndeadMob,
    Slime                      = 37 | Monster,
    EnderMan                   = 38 | Monster,
    Silverfish                 = 39 | Arthropod,
    CaveSpider                 = 40 | Arthropod,
    Ghast                      = 41 | Monster,
    LavaSlime                  = 42 | Monster,
    Blaze                      = 43 | Monster,
    ZombieVillager             = 44 | ZombieMonster,
    Witch                      = 45 | Monster,
    Stray                      = 46 | SkeletonMonster,
    Husk                       = 47 | ZombieMonster,
    WitherSkeleton             = 48 | SkeletonMonster,
    Guardian                   = 49 | Monster,
    ElderGuardian              = 50 | Monster,
    Npc                        = 51 | Mob,
    WitherBoss                 = 52 | UndeadMob,
    Dragon                     = 53 | Monster,
    Shulker                    = 54 | Monster,
    Endermite                  = 55 | Arthropod,
    Agent                      = 56 | Mob,
    Vindicator                 = 57 | Monster,
    Phantom                    = 58 | UndeadMob,
    IllagerBeast               = 59 | Monster,
    UNUSED60                   = 60,
    ArmorStand                 = 61 | Mob,
    TripodCamera               = 62 | Mob,
    Player                     = 63 | Mob,
    ItemEntity                 = 64 | None,
    PrimedTnt                  = 65 | None,
    FallingBlock               = 66 | None,
    MovingBlock                = 67 | None,
    ExperiencePotion           = 68 | Projectile,
    Experience                 = 69 | None,
    EyeOfEnder                 = 70 | None,
    EnderCrystal               = 71 | None,
    FireworksRocket            = 72 | None,
    Trident                    = 73 | Projectile | AbstractArrow,
    Turtle                     = 74 | Animal,
    Cat                        = 75 | TamableAnimal,
    ShulkerBullet              = 76 | Projectile,
    FishingHook                = 77 | None,
    Chalkboard                 = 78 | None,
    DragonFireball             = 79 | Projectile,
    Arrow                      = 80 | Projectile | AbstractArrow,
    Snowball                   = 81 | Projectile,
    ThrownEgg                  = 82 | Projectile,
    Painting                   = 83 | None,
    MinecartRideable           = 84 | Minecart,
    LargeFireball              = 85 | Projectile,
    ThrownPotion               = 86 | Projectile,
    Enderpearl                 = 87 | Projectile,
    LeashKnot                  = 88 | None,
    WitherSkull                = 89 | Projectile,
    BoatRideable               = 90 | None,
    WitherSkullDangerous       = 91 | Projectile,
    UNUSED92                   = 92,
    LightningBolt              = 93 | None,
    SmallFireball              = 94 | Projectile,
    AreaEffectCloud            = 95 | None,
    MinecartHopper             = 96 | Minecart,
    MinecartTNT                = 97 | Minecart,
    MinecartChest              = 98 | Minecart,
    MinecartFurnace            = 99 | Minecart,
    MinecartCommandBlock       = 100 | Minecart,
    LingeringPotion            = 101 | Projectile,
    LlamaSpit                  = 102 | Projectile,
    EvocationFang              = 103 | Projectile,
    EvocationIllager           = 104 | Monster,
    Vex                        = 105 | Monster,
    IceBomb                    = 106 | Projectile,
    Balloon                    = 107 | None,
    Pufferfish                 = 108 | WaterAnimal,
    Salmon                     = 109 | WaterAnimal,
    Drowned                    = 110 | ZombieMonster,
    Tropicalfish               = 111 | WaterAnimal,
    Fish                       = 112 | WaterAnimal,
    Panda                      = 113 | Animal,
    Pillager                   = 114 | Monster,
    VillagerV2                 = 115 | VillagerBase,
    ZombieVillagerV2           = 116 | ZombieMonster,
    Shield                     = 117 | None,
    WanderingTrader            = 118 | PathfinderMob,
    Lectern                    = 119 | None,
    ElderGuardianGhost         = 120 | Monster,
    Fox                        = 121 | Animal,
    Bee                        = 122 | Mob,
    Piglin                     = 123 | Mob,
    Hoglin                     = 124 | Animal,
    Strider                    = 125 | Animal,
    Zoglin                     = 126 | UndeadMob,
    PiglinBrute                = 127 | Mob,
    Goat                       = 128 | Animal,
    GlowSquid                  = 129 | WaterAnimal,
    Axolotl                    = 130 | Animal,
    Warden                     = 131 | Monster,
    Frog                       = 132 | Animal,
    Tadpole                    = 133 | WaterAnimal,
    Allay                      = 134 | Mob,
    ChestBoatRideable          = 136 | BoatRideable,
    TraderLlama                = 137 | Llama,
    Camel                      = 138 | Animal,
    Sniffer                    = 139 | Animal,
    Breeze                     = 140 | Monster,
    BreezeWindChargeProjectile = 141 | Projectile,
    Armadillo                  = 142 | Animal,
    WindChargeProjectile       = 143 | Projectile,
    Bogged                     = 144 | SkeletonMonster,
    OminousItemSpawner         = 145,
    HiveEntity                 = 256,
};