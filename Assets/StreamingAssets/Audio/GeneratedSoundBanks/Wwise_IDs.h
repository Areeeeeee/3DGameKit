/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID PAUSE = 3092587493U;
        static const AkUniqueID PLAY_MUSIC = 2932040671U;
        static const AkUniqueID PLAY_STARTSFX = 4243229219U;
        static const AkUniqueID SET_STATE_LAYER_01 = 2850775519U;
        static const AkUniqueID SET_STATE_LAYER_02 = 2850775516U;
        static const AkUniqueID SET_STATE_LAYER_03 = 2850775517U;
        static const AkUniqueID SETSTATEBOSS = 1817020445U;
        static const AkUniqueID SETSTATEEXPLORE = 3612438723U;
        static const AkUniqueID SETSTATEEXPLOREREDUCED = 3922700271U;
        static const AkUniqueID STOP_ALL = 452547817U;
        static const AkUniqueID STOPMUSIC = 1917263390U;
        static const AkUniqueID UNPAUSE = 3412868374U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace EXPLORE_STATES
        {
            static const AkUniqueID GROUP = 3776881979U;

            namespace STATE
            {
                static const AkUniqueID LAYER1 = 3298531297U;
                static const AkUniqueID LAYER2 = 3298531298U;
                static const AkUniqueID LAYER3 = 3298531299U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace EXPLORE_STATES

        namespace GAME_STATE
        {
            static const AkUniqueID GROUP = 766723505U;

            namespace STATE
            {
                static const AkUniqueID BOSS = 1560169506U;
                static const AkUniqueID EXPLORE = 579523862U;
                static const AkUniqueID EXPLOREINTRO = 161092836U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace GAME_STATE

        namespace PAUSE
        {
            static const AkUniqueID GROUP = 3092587493U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID OFF = 930712164U;
                static const AkUniqueID ON = 1651971902U;
            } // namespace STATE
        } // namespace PAUSE

    } // namespace STATES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID NUMBEROFENEMIES = 321019979U;
        static const AkUniqueID PLAYERHEALTH = 151362964U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID NEW_SOUNDBANK = 4072029455U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID SFX = 393239870U;
        static const AkUniqueID UI = 1551306167U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID REVERB_ARENA = 1569207989U;
        static const AkUniqueID REVERB_OUTDOOR = 1578973140U;
        static const AkUniqueID REVERB_SMALLCAVE = 2430239478U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
