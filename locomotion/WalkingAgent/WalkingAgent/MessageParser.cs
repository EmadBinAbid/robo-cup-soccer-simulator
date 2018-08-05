using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    class MessageParser
    {
        private WorldModel worldModel;

        private void parseSexp(SexpT sExpression)
        {
            string value;
            if (sExpression.ty == EltT.SEXP_LIST)
            {
                if (sExpression.list.ty == EltT.SEXP_VALUE)
                    value = sExpression.list.val;
                else
                {
                    Console.WriteLine("[!]INFO: \tMessageParser.parseSexp(SexpT): sExpression.list.ty != EltT.SEXP_VALUE.");
                    return;
                }
            }
            else
            {
                Console.WriteLine("[!]INFO: \tMessageParser.parseSexp(SexpT): sExpression.ty != EltT.SEXP_LIST.");
                return;
            }

            if (value == "time")
            {
                this.parseTime(sExpression);
            }
            else if (value == "GS")
            {
                this.parseGameState(sExpression);
            }
            else if (value == "GYR")
            {
                this.parseGyro(sExpression);
            }
            else if (value == "HJ")
            {
                this.parseHingeJoint(sExpression);
            }
            else if (value == "FRP")
            {
                this.parseFRP(sExpression);
            }
            else if (value == "See")
            {
                this.parseVision(sExpression);
            }
        }

        private Point parsePoint(SexpT sExpression)
        {
            float x = 0, y = 0, z = 0;

            x = (float)Convert.ToInt32(sExpression.val);
            y = (float)Convert.ToInt32(sExpression.next.val);
            z = (float)Convert.ToInt32(sExpression.next.next.val);

            return new Point(x, y, z);
        }

        private Point parsePolarCoordinates(SexpT sExpression)
        {
            // Polar coordinates are given as a list
            if (sExpression.ty != EltT.SEXP_LIST)
            {
                Console.WriteLine("[-]ERROR: \tMessageParser.parsePolarCoordinates(SexpT): Parsing polar coordinates: s-expression is not a list. Returning (0,0,0).");
                return new Point(0, 0, 0);
            }

            // The head of that list must be "pol"
            if (sExpression.list.val == "pol")
            {
                Console.WriteLine(String.Format("[-]ERROR: \tMessageParser.parsePolarCoordinates(SexpT): Parsing polar coordinates: \"pol\" " +
                    "identifier expected. Found {0}. Returning (0,0,0).", sExpression.list.val));
                return new Point(0, 0, 0);
            }

            return parsePoint(sExpression.list.next);
        }

        private void parseTime(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            float time = 0;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "now")
                        time = (float)Convert.ToInt32(pointer.list.next.val);
                }
                pointer = pointer.next;
            }
            this.worldModel.setTime(time);
        }

        private void parseGameState(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "t")
                    {
                        float t = (float)Convert.ToInt32(pointer.list.next.val);
                        this.worldModel.setGameStateTime(t);
                    }

                    if (pointer.list.val == "pm")
                    {
                        string pm = pointer.list.next.val;
                        this.worldModel.setPlayMode(pm);
                    }

                    if (pointer.list.val == "unum")
                    {
                        int unum = Convert.ToInt32(pointer.list.next.val);
                        this.worldModel.setSelfNumber(unum);
                    }

                    if (pointer.list.val == "team")
                    {
                        string team = pointer.list.next.val;
                        this.worldModel.setTeamName(team);
                    }
                }
                pointer = pointer.next;
            }
        }

        private void parseGyro(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            string name = "";
            float rx = 0, ry = 0, rz = 0;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "n")
                        name = pointer.list.next.val;

                    if (pointer.list.val == "rt")
                    {
                        rx = (float)Convert.ToInt32(pointer.list.next.val);
                        ry = (float)Convert.ToInt32(pointer.list.next.next.val);
                        rz = (float)Convert.ToInt32(pointer.list.next.next.next.val);
                    }
                }
                pointer = pointer.next;
            }

            Gyro gyro = new Gyro();
            gyro.setRate(new Point(rx, ry, rz));
            this.worldModel.setGyro(gyro);
        }

        private void parseFRP(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            string name = "";
            float cx = 0, cy = 0, cz = 0;
            float fx = 0, fy = 0, fz = 0;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "n")
                        name = pointer.list.next.val;

                    if (pointer.list.val == "c")
                    {
                        cx = (float)Convert.ToInt32(pointer.list.next.val);
                        cy = (float)Convert.ToInt32(pointer.list.next.next.val);
                        cz = (float)Convert.ToInt32(pointer.list.next.next.next.val);
                    }

                    if (pointer.list.val == "f")
                    {
                        fx = Convert.ToInt32(pointer.list.next.val);
                        fy = Convert.ToInt32(pointer.list.next.next.val);
                        fz = Convert.ToInt32(pointer.list.next.next.next.val);
                    }

                }
                pointer = pointer.next;
            }

            if (name == "lf")
            {
                this.worldModel.setFRPCenterL(new Point(cx, cy, cz));
                this.worldModel.setFRPForceL(new Point(cx, cy, cz));
            }
            else
            {
                this.worldModel.setFRPCenterR(new Point(cx, cy, cz));
                this.worldModel.setFRPForceR(new Point(fx, fy, fz));
            }
        }

        private void parseHingeJoint(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            string name = "";
            float angle = 0;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "n")
                        name = pointer.list.next.val;

                    if (pointer.list.val == "ax")
                        angle = (float)Convert.ToInt32(pointer.list.next.val);
                }
                pointer = pointer.next;
            }
            HingeJoint hJoint = new HingeJoint();

            hJoint.setAxis(angle);

            if (name == "hj1")
            {
                this.worldModel.setHingeJoint(hJoint, 0);
            }
            else if (name == "hj2")
            {
                this.worldModel.setHingeJoint(hJoint, 1);
            }
            else if (name == "raj1")
            {
                this.worldModel.setHingeJoint(hJoint, 2);
            }
            else if (name == "raj2")
            {
                this.worldModel.setHingeJoint(hJoint, 3);
            }
            else if (name == "raj3")
            {
                this.worldModel.setHingeJoint(hJoint, 4);
            }
            else if (name == "raj4")
            {
                this.worldModel.setHingeJoint(hJoint, 5);
            }
            else if (name == "laj1")
            {
                this.worldModel.setHingeJoint(hJoint, 6);
            }
            else if (name == "laj2")
            {
                this.worldModel.setHingeJoint(hJoint, 7);
            }
            else if (name == "laj3")
            {
                this.worldModel.setHingeJoint(hJoint, 8);
            }
            else if (name == "laj4")
            {
                this.worldModel.setHingeJoint(hJoint, 9);
            }
            else if (name == "rlj1")
            {
                this.worldModel.setHingeJoint(hJoint, 10);
            }
            else if (name == "rlj2")
            {
                this.worldModel.setHingeJoint(hJoint, 11);
            }
            else if (name == "rlj3")
            {
                this.worldModel.setHingeJoint(hJoint, 12);
            }
            else if (name == "rlj4")
            {
                this.worldModel.setHingeJoint(hJoint, 13);
            }
            else if (name == "rlj5")
            {
                this.worldModel.setHingeJoint(hJoint, 14);
            }
            else if (name == "rlj6")
            {
                this.worldModel.setHingeJoint(hJoint, 15);
            }
            else if (name == "llj1")
            {
                this.worldModel.setHingeJoint(hJoint, 16);
            }
            else if (name == "llj2")
            {
                this.worldModel.setHingeJoint(hJoint, 17);
            }
            else if (name == "llj3")
            {
                this.worldModel.setHingeJoint(hJoint, 18);
            }
            else if (name == "llj4")
            {
                this.worldModel.setHingeJoint(hJoint, 19);
            }
            else if (name == "llj5")
            {
                this.worldModel.setHingeJoint(hJoint, 20);
            }
            else if (name == "llj6")
            {
                this.worldModel.setHingeJoint(hJoint, 21);
            }
        }

        private void parseVision(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST && pointer.list.val != null)
                {
                    if (pointer.list.val == "G1L")
                        this.parseGoal(pointer);
                    if (pointer.list.val == "G2L")
                        this.parseGoal(pointer);
                    if (pointer.list.val == "G1R")
                        this.parseGoal(pointer);
                    if (pointer.list.val == "G2R")
                        this.parseGoal(pointer);

                    if (pointer.list.val == "F1L")
                        this.parseFlag(pointer);
                    if (pointer.list.val == "F2L")
                        this.parseFlag(pointer);
                    if (pointer.list.val == "F1R")
                        this.parseFlag(pointer);
                    if (pointer.list.val == "F2R")
                        this.parseFlag(pointer);

                    if (pointer.list.val == "B")
                        this.parseBall(pointer);
                }
                pointer = pointer.next;
            }
        }

        private void parseBall(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            float x = 0, y = 0, z = 0;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "pol")
                    {
                        x = (float)Convert.ToInt32(pointer.list.next.val);
                        y = (float)Convert.ToInt32(pointer.list.next.next.val);
                        z = (float)Convert.ToInt32(pointer.list.next.next.next.val);
                    }
                }
                pointer = pointer.next;
            }

            Ball ball = new Ball();
            ball.setPolarPosition(new Point(x, y, z));
            this.worldModel.setBall(ball);
        }

        private void parseFlag(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            string name = sExpression.list.val;

            float x = 0, y = 0, z = 0;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "pol")
                    {
                        x = (float)Convert.ToInt32(pointer.list.next.val);
                        y = (float)Convert.ToInt32(pointer.list.next.next.val);
                        z = (float)Convert.ToInt32(pointer.list.next.next.next.val);
                    }
                }
                pointer = pointer.next;
            }
            new Point(x, y, z);
        }

        private void parseGoal(SexpT sExpression)
        {
            SexpT pointer = sExpression.list.next;

            string name = sExpression.list.val;

            float x = 0, y = 0, z = 0;

            while (pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                {
                    if (pointer.list.val == "pol")
                    {
                        x = (float)Convert.ToInt32(pointer.list.next.val);
                        y = (float)Convert.ToInt32(pointer.list.next.next.val);
                        z = (float)Convert.ToInt32(pointer.list.next.next.next.val);
                    }
                }
                pointer = pointer.next;
            }
            new Point(x, y, z);
        }

        //Default constructor
        public MessageParser()
        {
            this.worldModel = WorldModel.getUniqueInstance();
        }

        public void parseMessage(string message)
        {
            SexpT sExpression = new SexpT();
            string sexpMessage = String.Format("(msg {0})", message);
            sExpression.val = sexpMessage;

            SexpT pointer = sExpression.list.next;

            while(pointer != null)
            {
                if (pointer.ty == EltT.SEXP_LIST)
                    this.parseSexp(pointer);
                pointer = pointer.next;
            }

            sExpression = null;
        }
    }
}
