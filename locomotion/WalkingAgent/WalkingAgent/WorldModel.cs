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
        private int MAX_FRP = 4;
        private FileStream logWorldModel;
        private static WorldModel uniqueInstance = null;
        private float time;
        private float gameStateTime;
        private bool hasFallen;
        private HingeJoint[] hingeJointArray;
        private Ball ball;
        private Gyro gyro;
        private Point[] frpArray;
        private Point myCartesianPosition;
        private Point direction;
        private PlayMode playMode;
        private int selfNumber;
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

        //Default constructor
        public WorldModel()
        {
            this.logWorldModel = new FileStream("./logs/worldmodel.log.txt", FileMode.Create, FileAccess.Write);
            this.logWorldModel.Close();
            this.messageReceived = "";
            this.hasFallen = false;
            this.hingeJointArray = new HingeJoint[this.MAX_HINGE];
            this.frpArray = new Point[this.MAX_FRP];

            Console.WriteLine("[+]SUCESS:\t WorldModel.WorldModel(): Sucessfully initialized WorldModel.");
        }

        //Gives the same instance throughout the game
        public WorldModel getUniqueInstance()
        {
            if(uniqueInstance == null)
            {
                uniqueInstance = new WorldModel();
            }
            return uniqueInstance;
        }

        public void setTime(float time)
        {
            this.time = time;
        }

        public float getTime()
        {
            return this.time;
        }

        public void setGameStateTime(float gameStateTime)
        {
            this.gameStateTime = gameStateTime;
        }

        public float getGameStateTime()
        {
            return this.gameStateTime;
        }

        public void setHingeJoint(HingeJoint hingeJoint, int index)
        {
            this.hingeJointArray[index] = hingeJoint;
        }

        public HingeJoint getHingeJoint(int index)
        {
            return this.hingeJointArray[index];
        }

        public void setBall(Ball ball)
        {
            this.ball = ball;
        }

        public Ball getBall()
        {
            return this.ball;
        }

        public void setGyro(Gyro gyro)
        {
            this.gyro = gyro;
        }

        public Gyro getGyro()
        {
            return this.gyro;
        }

        /*public void setLog()
        {
            if(this.logWorldModel.CanWrite)
            {
                //Log string
                string logString = "";
                //Logging the time
                logString += String.Format("Time:\t {0}\n", this.getTime());
                //Logging the ball
                logString += String.Format("Ball:\t ({0}, {1}, {2})", this.getBall().getPolarPosition().GetX(), 
                    this.getBall().getPolarPosition().GetY(), this.getBall().getPolarPosition().GetZ());


                byte[] buffer = Encoding.ASCII.GetBytes(logString);
                this.logWorldModel.Write(buffer, 0, buffer.Length);
            }

            this.logWorldModel.Flush();
            this.logWorldModel.Close();
        }*/

        public PlayMode getPlayMode()
        {
            return this.playMode;
        }

        public void setPlayMode(string playMode)
        {
            if (playMode == "BeforeKickOff")
                this.playMode = PlayMode.PLAYMODE_BEFORE_KICK_OFF;
            else if (playMode == "PlayOn")
                this.playMode = PlayMode.PLAYMODE_PLAY_ON;
            else if (playMode == "KickOff_Left")
                this.playMode = PlayMode.PLAYMODE_KICKOFF_LEFT;
            else if (playMode == "KickOff_Right")
                this.playMode = PlayMode.PLAYMODE_KICKOFF_RIGHT;
            else if (playMode == "KickIn_Left")
                this.playMode = PlayMode.PLAYMODE_KICKIN_LEFT;
            else if (playMode == "KickIn_Right")
                this.playMode = PlayMode.PLAYMODE_KICKIN_RIGHT;
            else if (playMode == "FREE_KICK_LEFT")
                this.playMode = PlayMode.PLAYMODE_FREE_KICK_LEFT;
            else if (playMode == "FREE_KICK_RIGHT")
                this.playMode = PlayMode.PLAYMODE_FREE_KICK_RIGHT;
            else if (playMode == "Goal_Left")
                this.playMode = PlayMode.PLAYMODE_GOAL_LEFT;
            else if (playMode == "Goal_Right")
                this.playMode = PlayMode.PLAYMODE_GOAL_RIGHT;
            else if (playMode == "CORNER_KICK_LEFT")
                this.playMode = PlayMode.PLAYMODE_CORNER_KICK_LEFT;
            else if (playMode == "CORNER_KICK_RIGHT")
                this.playMode = PlayMode.PLAYMODE_CORNER_KICK_RIGHT;
            else if (playMode == "GameOver")
                this.playMode = PlayMode.PLAYMODE_GAME_OVER;
            else
                this.playMode = PlayMode.PLAYMODE_UNKNOWN;
        }

        public void setFRPCenterL(Point center)
        {
            this.frpArray[0] = center;
        }

        public void setFRPForceL(Point force)
        {
            this.frpArray[1] = force;
        }

        public void setFRPCenterR(Point center)
        {
            this.frpArray[2] = center;
        }

        public void setFRPForceR(Point force)
        {
            this.frpArray[3] = force;
        }

        public Point getFRPCenterL()
        {
            return this.frpArray[0];
        }

        public Point getFRPForceL()
        {
            return this.frpArray[1];
        }

        public Point getFRPCenterR()
        {
            return this.frpArray[2];
        }

        public Point getFRPForceR()
        {
            return this.frpArray[3];
        }

        public void printFRPs()
        {
            Console.WriteLine(String.Format("Left Center:\t {0}", this.getFRPCenterL()));
            Console.WriteLine(String.Format("Left Force:\t {0}", this.getFRPForceL()));
            Console.WriteLine(String.Format("Right Center:\t {0}", this.getFRPCenterR()));
            Console.WriteLine(String.Format("Right Force:\t {0}", this.getFRPForceR()));
        }
        
        public void setSelfNumber(int number)
        {
            this.selfNumber = number;
        }

        public int getSelfNumber()
        {
            return this.selfNumber;
        }

        public void setSelfSide(Side side)
        {
            this.selfSide = side;
        }

        public Side getSelfSide()
        {
            return this.selfSide;
        }

        public Side getOpponentSide()
        {
            if(this.getSelfSide() == Side.SIDE_LEFT)
                return Side.SIDE_RIGHT;
            return Side.SIDE_LEFT;
        }

        public void setTeamName(string teamName)
        {
            this.teamName = teamName;
        }

        public string getTeamName()
        {
            return this.teamName;
        }

        /*public void resetForUpdate()
        {

        }*/

        public void setLastTime()
        {
            this.lastTime = this.getTime();
        }

        public double getLastTime()
        {
            return this.lastTime;
        }

        public void setLastPostionOfBall()
        {
            this.lastPositionOfBall = this.getBall().getPolarPosition();
        }

        public Point getLastPostionOfBall()
        {
            return this.lastPositionOfBall;
        }

        public void setLastGlobalPositionOfBall()
        {
            this.lastGlobalPositionOfBall = this.getGlobalPositionOfBall();
        }

        public Point getLastGlobalPositionOfBall()
        {
            return this.lastGlobalPositionOfBall;
        }

        public void setGlobalPositionOfBall(Point position)
        {
            this.globalPositionOfBall = position;
        }

        public Point getGlobalPositionOfBall()
        {
            return this.globalPositionOfBall;
        }

        /*public void setVelocityOfBall()
        {

        }*/

        public Point getVelocityOfBall()
        {
            return this.velocityOfBall;
        }

        /*public void setAccelerationOfBall()
        {

        }*/

        public Point getAccelerationOfBall()
        {
            return this.accelerationOfBall;
        }

        public void setDeltaTime()
        {
            this.deltaTime = this.getTime() - this.getLastTime();
        }

        public double getDeltaTime()
        {
            return this.deltaTime;
        }

        public void setLastVelocityOfBall()
        {
            this.lastVelocityOfBall = this.getVelocityOfBall();
        }

        public Point getLastVelocityOfBall()
        {
            return this.lastVelocityOfBall;
        }

        public bool isPlayOn()
        {
            return this.playMode == PlayMode.PLAYMODE_PLAY_ON;
        }

        public bool isGameOver()
        {
            return this.playMode == PlayMode.PLAYMODE_GAME_OVER;
        }

        public bool isBeforeKickOff()
        {
            return this.playMode == PlayMode.PLAYMODE_BEFORE_KICK_OFF;
        }

        public bool isKickOffUs()
        {
            return (this.playMode == PlayMode.PLAYMODE_KICKOFF_LEFT && this.selfSide == Side.SIDE_LEFT)
                || (this.playMode == PlayMode.PLAYMODE_KICKOFF_RIGHT && this.selfSide == Side.SIDE_RIGHT);
        }

        public bool isKickOffThem()
        {
            return !this.isKickOffUs();
        }

        public bool isKickInUs()
        {
            return (this.playMode == PlayMode.PLAYMODE_KICKIN_LEFT && this.selfSide == Side.SIDE_LEFT)
                || (this.playMode == PlayMode.PLAYMODE_KICKIN_RIGHT && this.selfSide == Side.SIDE_RIGHT);
        }

        public bool isKickInThem()
        {
            return !this.isKickInUs();
        }

        public bool isCornerUs()
        {
            return (this.playMode == PlayMode.PLAYMODE_CORNER_KICK_LEFT && this.selfSide == Side.SIDE_LEFT)
                || (this.playMode == PlayMode.PLAYMODE_CORNER_KICK_RIGHT && this.selfSide == Side.SIDE_RIGHT);
        }

        public bool isCornerThem()
        {
            return !this.isCornerUs();
        }

        public bool isGoalKickUs()
        {
            return (this.playMode == PlayMode.PLAYMODE_GOAL_KICK_LEFT && this.selfSide == Side.SIDE_LEFT)
                || (this.playMode == PlayMode.PLAYMODE_GOAL_KICK_RIGHT && this.selfSide == Side.SIDE_RIGHT);
        }

        public bool isGoalKickThem()
        {
            return !this.isGoalKickUs();
        }

        public bool isGoalUs()
        {
            return (this.playMode == PlayMode.PLAYMODE_GOAL_LEFT && this.selfSide == Side.SIDE_LEFT)
                || (this.playMode == PlayMode.PLAYMODE_GOAL_RIGHT && this.selfSide == Side.SIDE_RIGHT);
        }

        public bool isGoalThem()
        {
            return !this.isGoalUs();
        }

        /*public double getDOF(DofId dofId)
        {

        }*/

        public void setMessage(string message)
        {
            this.messageReceived = message;
        }

        public string getMessage()
        {
            return this.messageReceived;
        }
    }
}
