#pragma once

enum class PacketID : int
{
    KeepAlive                         = 0,
    Login                             = 1,
    PlayStatus                        = 2,
    ServerToClientHandshake           = 3,
    ClientToServerHandshake           = 4,
    Disconnect                        = 5,
    ResourcePacksInfo                 = 6,
    ResourcePackStack                 = 7,
    ResourcePackClientResponse        = 8,
    Text                              = 9,
    SetTime                           = 10,
    StartGame                         = 11,
    AddPlayer                         = 12,
    AddActor                          = 13,
    RemoveActor                       = 14,
    AddItemActor                      = 15,
    UNUSED                            = 16,
    TakeItemActor                     = 17,
    MoveActorAbsolute                 = 18,
    MovePlayer                        = 19,
    PassengerJump                     = 20,
    UpdateBlock                       = 21,
    AddPainting                       = 22,
    TickSync_Deprecated               = 23,
    LevelSoundEventV1                 = 24,
    LevelEvent                        = 25,
    BlockEvent                        = 26,
    ActorEvent                        = 27,
    MobEffect                         = 28,
    UpdateAttributes                  = 29,
    InventoryTransaction              = 30,
    MobEquipment                      = 31,
    MobArmorEquipment                 = 32,
    Interact                          = 33,
    BlockPickRequest                  = 34,
    ActorPickRequest                  = 35,
    PlayerAction                      = 36,
    ActorFall_Deprecated              = 37,
    HurtArmor                         = 38,
    SetActorData                      = 39,
    SetActorMotion                    = 40,
    SetActorLink                      = 41,
    SetHealth                         = 42,
    SetSpawnPosition                  = 43,
    Animate                           = 44,
    Respawn                           = 45,
    ContainerOpen                     = 46,
    ContainerClose                    = 47,
    PlayerHotbar                      = 48,
    InventoryContent                  = 49,
    InventorySlot                     = 50,
    ContainerSetData                  = 51,
    CraftingData                      = 52,
    CraftingEvent_Deprecated          = 53,
    GuiDataPickItem                   = 54,
    AdventureSettings_Deprecated      = 55,
    BlockActorData                    = 56,
    PlayerInput                       = 57,
    LevelChunk                        = 58, // FullChunkData
    SetCommandsEnabled                = 59,
    SetDifficulty                     = 60,
    ChangeDimension                   = 61,
    SetPlayerGameType                 = 62,
    PlayerList                        = 63,
    SimpleEvent                       = 64,
    LegacyTelemetryEvent              = 65,
    SpawnExperienceOrb                = 66,
    ClientboundMapItemData            = 67,
    MapInfoRequest                    = 68,
    RequestChunkRadius                = 69,
    ChunkRadiusUpdated                = 70,
    ItemFrameDropItem_Deprecated      = 71,
    GameRulesChanged                  = 72,
    Camera                            = 73,
    BossEvent                         = 74,
    ShowCredits                       = 75,
    AvailableCommands                 = 76,
    CommandRequest                    = 77,
    CommandBlockUpdate                = 78,
    CommandOutput                     = 79,
    UpdateTrade                       = 80,
    UpdateEquip                       = 81,
    ResourcePackDataInfo              = 82,
    ResourcePackChunkData             = 83,
    ResourcePackChunkRequest          = 84,
    Transfer                          = 85,
    PlaySound                         = 86,
    StopSound                         = 87,
    SetTitle                          = 88,
    AddBehaviorTree                   = 89,
    StructureBlockUpdate              = 90,
    ShowStoreOffer                    = 91,
    PurchaseReceipt                   = 92,
    PlayerSkin                        = 93,
    SubClientLogin                    = 94,
    AutomationClientConnect           = 95,
    SetLastHurtBy                     = 96,
    BookEdit                          = 97,
    NpcRequest                        = 98,
    PhotoTransfer                     = 99,
    ModalFormRequest                  = 100,
    ModalFormResponse                 = 101,
    ServerSettingsRequest             = 102,
    ServerSettingsResponse            = 103,
    ShowProfile                       = 104,
    SetDefaultGameType                = 105,
    RemoveObjective                   = 106,
    SetDisplayObjective               = 107,
    SetScore                          = 108,
    LabTable                          = 109,
    UpdateBlockSynced                 = 110,
    MoveActorDelta                    = 111,
    SetScoreboardIdentity             = 112,
    SetLocalPlayerAsInit              = 113,
    UpdateSoftEnum                    = 114,
    NetworkStackLatency               = 115, // Ping
    BlockPalette                      = 116,
    ScriptCustomEvent                 = 117,
    SpawnParticleEffect               = 118,
    AvailableActorIdentifiers         = 119,
    LevelSoundEventV2                 = 120,
    NetworkChunkPublisherUpdate       = 121,
    BiomeDefinitionList               = 122,
    LevelSoundEvent                   = 123,
    LevelEventGeneric                 = 124,
    LecternUpdate                     = 125,
    VideoStreamConnect_Deprecated     = 126,
    AddEntity_Deprecated              = 127,
    RemoveEntity_Deprecated           = 128,
    ClientCacheStatus                 = 129,
    OnScreenTextureAnimation          = 130,
    MapCreateLockedCopy               = 131,
    StructureTemplateDataRequest      = 132,
    StructureTemplateDataResponse     = 133,
    UNUSED_PLS_USE_ME2                = 134,
    ClientCacheBlobStatus             = 135,
    ClientCacheMissResponse           = 136,
    EducationSettings                 = 137,
    Emote                             = 138,
    MultiplayerSettings               = 139,
    SettingsCommand                   = 140,
    AnvilDamage                       = 141,
    CompletedUsingItem                = 142,
    NetworkSettings                   = 143,
    PlayerAuthInput                   = 144,
    CreativeContent                   = 145,
    PlayerEnchantOptions              = 146,
    ItemStackRequest                  = 147,
    ItemStackResponse                 = 148,
    PlayerArmorDamage                 = 149,
    CodeBuilder                       = 150,
    UpdatePlayerGameType              = 151,
    EmoteList                         = 152,
    PositionTrackingDBServerBroadcast = 153,
    PositionTrackingDBClientRequest   = 154,
    DebugInfo                         = 155,
    PacketViolationWarning            = 156,
    MotionPredictionHints             = 157,
    AnimateEntity                     = 158, // TriggerAnimation
    CameraShake                       = 159,
    PlayerFog                         = 160, // PlayerFogSetting
    CorrectPlayerMovePrediction       = 161,
    ItemComponent                     = 162,
    FilterText_Deprecated             = 163,
    ClientboundDebugRenderer          = 164,
    SyncActorProperty                 = 165,
    AddVolumeEntity                   = 166,
    RemoveVolumeEntity                = 167,
    SimulationType                    = 168,
    NpcDialogue                       = 169,
    EduUriResource                    = 170,
    CreatePhoto                       = 171,
    UpdateSubChunkBlocks              = 172,
    PhotoInfoRequest_Deprecated       = 173,
    SubChunk                          = 174,
    SubChunkRequest                   = 175,
    PlayerStartItemCooldown           = 176,
    ScriptMessage                     = 177,
    CodeBuilderSource                 = 178,
    TickingAreasLoadStatus            = 179,
    DimensionData                     = 180,
    AgentAction                       = 181,
    ChangeMobProperty                 = 182,
    LessonProgress                    = 183,
    RequestAbility                    = 184,
    RequestPermissions                = 185,
    ToastRequest                      = 186,
    UpdateAbilities                   = 187,
    UpdateAdventureSettings           = 188,
    DeathInfo                         = 189,
    EditorNetwork                     = 190,
    FeatureRegistry                   = 191,
    ServerStats                       = 192,
    RequestNetworkSettings            = 193,
    GameTestRequest                   = 194,
    GameTestResults                   = 195,
    UpdateClientInputLocks            = 196, // PlayerClientInputPermissions
    ClientCheatAbility_Deprecated     = 197,
    CameraPresets                     = 198,
    UnlockedRecipes                   = 199,
    CameraInstruction                 = 300,
    CompressedBiomeDefinitionList     = 301,
    TrimData                          = 302,
    OpenSign                          = 303,
    AgentAnimation                    = 304,
    RefreshEntitlements               = 305,
    PlayerToggleCrafterSlotRequest    = 306,
    SetPlayerInventoryOptions         = 307,
    SetHud                            = 308,
    AwardAchievementPacket            = 309,
    EndId                             = 310
};
