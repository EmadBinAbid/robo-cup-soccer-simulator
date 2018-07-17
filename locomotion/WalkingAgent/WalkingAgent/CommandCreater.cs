using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    /*
    @author: Emad Bin Abid
    @date: July 17, 2018
    ------------------------------------------------------------------------------------------------------------------------------------
    CommandCreater is a class that exposes methods by which a user can generate a command for robot at runtime.
    */
    class CommandCreater
    {
        private int COMMAND_STRING_SIZE = 2048;
        private int COMMAND_SIZE = 25;

        private static CommandCreater uniqueInstance = null;
        private string commandString;
        private string command;
        private WorldModel worldModel;

        //Default constructor
        public CommandCreater()
        {
            this.commandString = "";
            this.command = "";
            this.worldModel = WorldModel.getUniqueInstance();
        }

        public static CommandCreater getUniqueInstance()
        {
            if (uniqueInstance == null)
                uniqueInstance = new CommandCreater();
            return uniqueInstance;
        }

        /*--------------- NAO COMMANDS ---------------*/
        
        /*Commands for Head*/
        public void moveHeadAxis1(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(he1 {0})", this.command);
        }

        public void moveHeadAxis2(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(he2 {0})", this.command);
        }

        /*Commands for Hands*/
        public void moveLeftShoulderAxis1(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lae1 {0})", this.command);
        }

        public void moveRightShoulderAxis1(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rae1 {0})", this.command);
        }

        public void moveLeftShoulderAxis2(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lae2 {0})", this.command);
        }

        public void moveRightShoulderAxis2(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rae2 {0})", this.command);
        }

        public void rotateLeftShoulder(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lae3 {0})", this.command);
        }

        public void rotateRightShoulder(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rae3 {0})", this.command);
        }

        public void moveLeftElbow(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lae4 {0})", this.command);
        }

        public void moveRightElbow(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rae4 {0})", this.command);
        }

        /*Commands for Legs*/
        public void rotateLeftLeg(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lle1 {0})", this.command);
        }

        public void rotateRightLeg(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rle1 {0})", this.command);
        }

        public void moveLeftLegAxis1(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lle2 {0})", this.command);
        }

        public void moveRightLegAxis1(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lle2 {0})", this.command);
        }

        public void moveLeftLegAxis2(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lle3 {0})", this.command);
        }

        public void moveRightLegAxis2(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rle3 {0})", this.command);
        }

        public void moveLeftKnee(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lle4 {0})", this.command);
        }

        public void moveRightKnee(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rle4 {0})", this.command);
        }

        public void moveLeftAnkleAxis1(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lle5 {0})", this.command);
        }

        public void moveRightAnkleAxis1(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rle5 {0})", this.command);
        }

        public void moveLeftAnkleAxis2(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(lle6 {0})", this.command);
        }

        public void moveRightAnkleAxis2(double angle)
        {
            this.command = String.Format("{0}", angle);
            this.commandString = String.Format("(rle6 {0})", this.command);
        }

        public void moveHingeJoint(int index, double angle)
        {
            if (index == 0)
                this.moveHeadAxis1(angle);
            else if (index == 1)
                this.moveHeadAxis2(angle);
            else if (index == 2)
                this.moveRightShoulderAxis1(angle);
            else if (index == 3)
                this.moveRightShoulderAxis2(angle);
            else if (index == 4)
                this.rotateRightShoulder(angle);
            else if (index == 5)
                this.moveRightElbow(angle);
            else if (index == 6)
                this.moveLeftShoulderAxis1(angle);
            else if (index == 7)
                this.moveLeftShoulderAxis2(angle);
            else if (index == 8)
                this.rotateLeftShoulder(angle);
            else if (index == 9)
                this.moveLeftElbow(angle);
            else if (index == 10)
                this.rotateRightLeg(angle);
            else if (index == 11)
                this.moveRightLegAxis1(angle);
            else if (index == 12)
                this.moveRightLegAxis2(angle);
            else if (index == 13)
                this.moveRightKnee(angle);
            else if (index == 14)
                this.moveRightAnkleAxis1(angle);
            else if (index == 15)
                this.moveRightAnkleAxis2(angle);
            else if (index == 16)
                this.rotateLeftLeg(angle);
            else if (index == 17)
                this.moveLeftLegAxis1(angle);
            else if (index == 18)
                this.moveLeftLegAxis2(angle);
            else if (index == 19)
                this.moveLeftKnee(angle);
            else if (index == 20)
                this.moveLeftAnkleAxis1(angle);
            else if (index == 21)
                this.moveLeftAnkleAxis2(angle);
            else
                Console.WriteLine("[-]ERROR:\t CommandCreater.moveHingeJoint(int, double): The given index number is not available as " +
                    "Hinge Joint number. Please give an integer greater than -1 and less than 22.");
        }

        public void stopAllJoints()
        {
            this.commandString = "(he1 0.0)(he2 0.0)(rae1 0.0)(rae2 0.0)(rae3 0.0)(rae4 0.0)(lae1 0.0)(lae2 0.0)(lae3 0.0)" +
                "(lae4 0.0)(rle1 0.0)(rle2 0.0)(rle3 0.0)(rle4 0.0)(rle5 0.0)(rle6 0.0)(lle1 0.0)(lle2 0.0)(lle3 0.0)(lle4 0.0)" +
                "(lle5 0.0)(lle6 0.0)";
        }

        public string getPreparedCommand()
        {
            return this.commandString;
        }

        public void reset()
        {
            this.commandString = "";
        }

        public void beam(double x, double y, double z)
        {
            this.commandString = String.Format("beam {0} {1} {2}", x, y, z);
        }

        public void beam(Point point)
        {
            this.commandString = String.Format("beam {0} {1} {2}", point.GetX(), point.GetY(), point.GetZ());
        }

        public void init(int i, string str)
        {
            this.commandString = String.Format("(init (unum {0})(teamname {1}))", i, str);
        }

        public void pushCommand(string command)
        {
            this.commandString += command;
        }
    }
}
