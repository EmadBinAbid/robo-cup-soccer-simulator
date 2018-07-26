using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    /*
    @author: Emad Bin Abid
    @date: July 14, 2018
    -----------------------------------------------------------------------------------------------------------------------------------
    Geometry is a class that provides some basic trigonometric ease to manipulate the behavior of agent's locomotion.
    */
    class Geometry
    {
        public static double PI = 3.141592653589793;

        //Converts the passed angle's unit from degree to radian
        public static double convertDegreeToRadian(double angle)
        {
            return angle * PI / 180;
        }

        //Converts the passed angle's unit from radian to degree
        public static double convertRadianToDegree(double angle)
        {
            return angle * 180 / PI;
        }

        //Returns 'pi'
        public static double getPi()
        {
            return PI;
        }

        //Returns the normalized 'angle'
        public static double normalizeAngle(double angle)
        {
            while(angle > 180)
            {
                angle -= 360;
            }
            while(angle < -180)
            {
                angle += 360;
            }
            return angle;
        }

        //Returns the Cosine of the passed 'angle'
        public static double Cos(double angle)
        {
            return Math.Cos(convertDegreeToRadian(angle));
        }

        //Returns the Sine of the passed 'angle'
        public static double Sin(double angle)
        {
            return Math.Sin(convertDegreeToRadian(angle));
        }

        //Returns the Tangent of the passed 'angle'
        public static double Tan(double angle)
        {
            return Math.Tan(convertDegreeToRadian(angle));
        }

        //Returns the Arc Tangent (angle in degrees) formed by the passed x and y
        public static double ArcTan(double x, double y)
        {
            if(Math.Abs(x) < 0.00001 && Math.Abs(y) < 0.00001)
            {
                return 0.0;
            }
            return convertRadianToDegree(Math.Atan2(y, x));
        }

        public static Point determineMidPoint(Point point1, Point point2)
        {
            return point1 + ((point2 - point1) / 2);
        }
    }
}
