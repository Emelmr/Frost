#pragma once

class CrystalAura : public Module
{
public:
    CrystalAura() :
        Module("CrystalAura", "Combat", "Hits every entity around you")
    {
        EnumSetting("Logic", "Place/Break or Break/Place", { "Place/Break", "Break/Place" }, &mLogic);
        BoolSetting("Place", "Enable crystal placing", &mPlace);
        SliderSetting("Place Dist", "Distance at which crystals are placed", &mPlaceRange, 1.f, 12.f);
        SliderSetting("Place Speed", "Speed at which crystals are placed", &mPlaceSpeed, 0.f, 100.f);
        SliderSetting("Packets (Place)", "Packets sent per place", &mPpackets, 1.f, 10.f);
        SliderSetting("Proximity", "Minimum proximity to place", &mProximity, 1.f, 12.f);
        BoolSetting("Rotate", "Rotate to target when placing", &mRotate);
        SliderSetting("Waste Amount", "Max wasted crystals before stop", &mWasteAmount, 1.f, 10.f);

        BoolSetting("Break", "Enable crystal breaking", &mExplode);
        BoolSetting("Break All", "Break all crystals in range", &mBreakType);
        SliderSetting("Break Dist", "Distance at which crystals are broken", &mBreakRange, 1.f, 12.f);
        SliderSetting("Break Speed", "Speed at which crystals are broken", &mBreakSpeed, 0.f, 110.f);
        SliderSetting("Packets (Break)", "Packets sent per break", &mBpackets, 1.f, 10.f);

        SliderSetting("Target Dist", "Maximum distance to consider targets", &mTargetRange, 1.f, 20.f);
        BoolSetting("Self Test", "Test self damage before placing", &mSelfTest);
        SliderSetting("Min Enemy Dmg", "Minimum damage required to hit enemy", &mEnemyDamage, 0.f, 36.f);
        SliderSetting("Max Self Dmg", "Max damage allowed to self", &mLocalDamage, 0.f, 50.f);
        BoolSetting("Swap", "Automatically swap to crystals", &mSwap);
        BoolSetting("Switch Back", "Switch back after using crystal", &mSwitchBack);
        BoolSetting("Boost", "Enable prediction boost", &mPredict);
        SliderSetting("Boost Speed", "Speed of prediction boost", &mPredictSpeed, 0.f, 100.f);
        SliderSetting("Predict Packets", "Number of prediction packets", &mPredictPacket, 1.f, 20.f);
        SliderSetting("Boost Damage", "Damage threshold for boost", &mBoostDmg, 0.f, 20.f);
        EnumSetting("Render Mode", "How crystals should be rendered", { "None", "Box", "Flat" }, &mRenderType);
        BoolSetting("Multitask", "Allow multitasking while active", &mMultiTask);
        BoolSetting("Java Mode", "Use Java-style placement logic", &mJava);
        BoolSetting("Safety", "Avoid dangerous placements", &mSafety);
    }

private:
    // Place settings
    bool mPlace = true;
    float mPlaceRange = 4.5f;
    float mPlaceSpeed = 20.f;
    float mPpackets = 1.f;
    float mProximity = 1.5f;
    bool mRotate = true;
    float mWasteAmount = 3.f;

    // Break settings
    int mLogic = 0; // 0 = Place/Break, 1 = Break/Place
    bool mExplode = true;
    bool mBreakType = true;
    float mBreakRange = 6.f;
    float mBreakSpeed = 40.f;
    float mBpackets = 1.f;

    // Targeting
    float mTargetRange = 10.f;
    bool mSelfTest = false;
    float mEnemyDamage = 6.f;
    float mLocalDamage = 10.f;

    // Misc
    bool mSwap = true;
    bool mSwitchBack = true;
    bool mPredict = false;
    float mPredictSpeed = 50.f;
    float mPredictPacket = 1.f;
    float mBoostDmg = 5.f;
    int mRenderType = 0; // 0 = None, 1 = Box, 2 = Flat
    bool mMultiTask = true;
    bool mJava = false;
    bool mSafety = true;
};