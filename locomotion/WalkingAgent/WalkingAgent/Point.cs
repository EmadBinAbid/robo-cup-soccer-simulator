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
    Point is a class which provides interface to deal and manipulate with the agent's position in the soccer field.
    */
    class Point
    {
        //Global variables
        private double x;
        private double y;
        private double z;

        //Default constructor
        public Point()
        { }

        //Overrided constructor -> Sets the global variables
        public Point(double x, double y, double z = 0.0)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }
        
        //Sets the global variable 'x'
        public void SetX(double x)
        {
            this.x = x;
        }

        //Sets the global variable 'y'
        public void SetY(double y)
        {
            this.y = y;
        }

        //Sets the global variable 'z'
        public void SetZ(double z)
        {
            this.z = z;
        }

        //Returns the global variable 'x'
        public double GetX()
        {
            return this.x;
        }

        //Returns the global variable 'y'
        public double GetY()
        {
            return this.y;
        }

        //Returns the global variable 'z'
        public double GetZ()
        {
            return this.z;
        }

        //Takes two point objects and returns a third point object after addition of passed point objects
        public static Point operator +(Point point1, Point point2)
        {
            Point point = new Point(point1.x + point2.x, point1.y + point2.y, point1.z + point2.z);
            return point;
        }

        //Takes two point objects and returns a third point object after subtraction of passed point objects
        public static Point operator -(Point point1, Point point2)
        {
            Point point = new Point(point1.x - point2.x, point1.y - point2.y, point1.z - point2.z);
            return point;
        }

        //Takes two point objects and returns a third point object after subtraction of passed point objects
        public static Point operator /(Point point1, double number)
        {
            Point point = new Point(point1.x / number, point1.y / number, point1.z / number);
            return point;
        }

        //Takes two point objects and returns true if passed point objects are equal
        public static bool operator ==(Point point1, Point point2)
        {
            if(point1.x == point2.x && point1.y == point2.y && point1.z == point2.z)
            {
                return true;
            }
            return false;
        }

        //Takes two point objects and returns true if passed point objects are not equal
        public static bool operator !=(Point point1, Point point2)
        {
            if (!(point1 == point2))
            {
                return true;
            }
            return false;
        }

        //Returns the magnitude of 'this' point object
        public double getMagnitude()
        {
            return Math.Sqrt( Math.Pow(this.x, 2) + Math.Pow(this.y, 2) + Math.Pow(this.z, 2));
        }

        //Returns the distance between 'this' point object and passed point object
        public double getDistanceTo(Point point)
        {
            return (this - point).getMagnitude();
        }

        //Prints the current state of 'this' point object to the console
        public void print()
        {
            Console.WriteLine( String.Format("({0}, {1}, {2})", this.x, this.y, this.z) );
        }

        //Returns the direction of 'this' point object
        public double getDirection()
        {
            return Geometry.ArcTan(this.x, this.y);
        }

        //Returns a new rotated point object after rotating 'this' point object
        public Point rotate(double angle)
        {
            double thisMagnitude = this.getMagnitude();
            //Adding rotation angle
            double newDirection = this.getDirection() + angle;

            Point point = new Point(thisMagnitude * Geometry.Cos(newDirection), thisMagnitude * Geometry.Cos(newDirection));
            return point;
        }
    }
}
