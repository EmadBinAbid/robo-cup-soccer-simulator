using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    class ENUM
    {
        /*
        @author: Emad Bin Abid
        @date: July 14, 2018
        */
        enum ConnectionType
        {
            CONNECTION_TCP,
            CONNECTION_UDP,
            CONNECTION_ILLEGAL
        }

        enum Direction
        {
            BESIDE_LEFT,
            BESIDE_RIGHT
        }

        enum Bonedid
        {
            HEAD,
            RIGHT_LOWER_ARM,
            LEFT_LOWER_ARM,
            RIGHT_FOOT,
            LEFT_FOOT
        }

        enum PlayMode
        {
            PLAYMODE_UNKNOWN,
            PLAYMODE_BEFORE_KICK_OFF,
            PLAYMODE_PLAY_ON,
            PLAYMODE_KICKOFF_LEFT,
            PLAYMODE_KICKOFF_RIGHT,
            PLAYMODE_GOAL_KICK_LEFT,
            PLAYMODE_GOAL_KICK_RIGHT,
            PLAYMODE_KICKIN_LEFT,
            PLAYMODE_KICKIN_RIGHT,
            PLAYMODE_FREE_KICK_LEFT,
            PLAYMODE_FREE_KICK_RIGHT,
            PLAYMODE_GOAL_LEFT,
            PLAYMODE_GOAL_RIGHT,
            PLAYMODE_CORNER_KICK_LEFT,
            PLAYMODE_CORNER_KICK_RIGHT,
            PLAYMODE_GAME_OVER
        }

        enum Side
        {
            SIDE_UNKNOWN,
            SIDE_LEFT,
            SIDE_RIGHT,
            SIDE_CENTER,
            SIDE_SELF,
            SIDE_OPPONENT
        }

        enum DofId
        {
            //Head
            DOF_HEAD_PAN,
            DOF_HEAD_TILT,

            //Right Hand
            DOF_SHOULDER_RX,
            DOF_SHOULDER_RY,
            DOF_SHOULDER_RT,
            DOF_ELBOW_R,

            //Left Hand
            DOF_SHOULDER_LX,
            DOF_SHOULDER_LY,
            DOF_SHOULDER_LT,
            DOF_ELBOW_L,

            //Right Leg
            DOF_LEG_RT,
            DOF_LEG_RX,
            DOF_LEG_RY,
            DOF_KNEE_R,
            DOF_ANKLE_RX,
            DOF_ANKLE_RY,

            //Left Leg
            DOF_LEG_LT,
            DOF_LEG_LX,
            DOF_LEG_LY,
            DOF_KNEE_L,
            DOF_ANKLE_LX,
            DOF_ANKLE_LY,

            DOF_COUNT,
        }

        enum DofMap
        {
            hj1,
            hj2,
            raj1,
            raj2,
            raj3,
            raj4,
            laj1,
            laj2,
            laj3,
            laj4,
            rlj1,
            rlj2,
            rlj3,
            rlj4,
            rlj5,
            rlj6,
            llj1,
            llj2,
            llj3,
            llj4,
            llj5,
            llj6
        }
    }
}
