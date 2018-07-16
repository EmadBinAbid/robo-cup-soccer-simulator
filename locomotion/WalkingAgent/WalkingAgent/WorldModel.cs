using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    class WorldModel
    {
        private int MAX_HINGE = 21;
        private FileStream logWorldModel;
        private static WorldModel uniqueInstance = null;
        private float time;
        private float gameStateTime;
        private bool hasFallen;
        private HingeJoint[] hingeJointArray;
        private Ball ball;
        private Gyro gyro;
        private Point[] pointArray;
        private Point myCartesianPosition;
        private Point direction;
        private PlayMode playMode;
        private int myNumber;
        private Side selfSide;
        private string teamName;
        private Point lastPositionOfBall;
        private Point lastGlobalPositionOfBall;
        private Point globalPositionOfBall;
        private Point lastVelocityOfBall;
        private Point velocityOfBall;
        private Point accelerationOfBall;
        private double lastTime;
        private double deltaTime;
        private string messageReceived;
        private int numOfZero;


    }
}
