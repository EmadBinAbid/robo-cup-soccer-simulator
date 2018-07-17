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
    Bezier is a class that presents the tools to create different types of Bezier curve (i.e. Linear, Quadric & Cubic Bezier curves). A
    Bezier curve is a parametric curve frequently used in Robotics to generate position trajectories.
    */
    class Bezier
    {
        private Point point0, point1, point2, point3;
        private string type;
        private float duration;

        //Default constructor
        public Bezier()
        {

        }

        //Overloaded constructor -> The constructor for creating Linear Bezier curve
        public Bezier(Point point0, Point point1, float duration=1)
        {
            this.point0 = point0;
            this.point1 = point1;
            this.point2 = new Point(0, 0, 0);
            this.point3 = new Point(0, 0, 0);
            this.duration = duration;
            this.type = "linear";
        }

        //Overloaded constructor -> The constructor for creating Quadric Bezier curve
        public Bezier(Point point0, Point point1, Point point2, float duration = 1)
        {
            this.point0 = point0;
            this.point1 = point1;
            this.point2 = point2;
            this.point3 = new Point(0, 0, 0);
            this.duration = duration;
            this.type = "quadratic";
        }

        //Overloaded constructor -> The constructor for creating Cubic Bezier curve
        public Bezier(Point point0, Point point1, Point point2, Point point3, float duration = 1)
        {
            this.point0 = point0;
            this.point1 = point1;
            this.point2 = point2;
            this.point3 = point3;
            this.duration = duration;
            this.type = "cubic";
        }

        public void setLinear(Point point0, Point point1, float duration = 1)
        {
            this.point0 = point0;
            this.point1 = point1;
            this.point2 = new Point(0, 0, 0);
            this.point3 = new Point(0, 0, 0);
            this.duration = duration;
            this.type = "linear";
        }

        public void setQuadric(Point point0, Point point1, Point point2, float duration = 1)
        {
            this.point0 = point0;
            this.point1 = point1;
            this.point2 = point2;
            this.point3 = new Point(0, 0, 0);
            this.duration = duration;
            this.type = "quadratic";
        }

        public void setCubic(Point point0, Point point1, Point point2, Point point3, float duration = 1)
        {
            this.point0 = point0;
            this.point1 = point1;
            this.point2 = point2;
            this.point3 = point3;
            this.duration = duration;
            this.type = "cubic";
        }
        
        public void setDuration(float duration)
        {
            this.duration = duration;
        }

        public float getDuration()
        {
            return this.duration;
        }

        public string getType()
        {
            return this.type;
        }

        //Calculates the position in the Linear bezier trajectory for the given time.
        public Point getLinearPosition(float time)
        {
            float t = time / duration;
            if (t > 1)
                t = 1;
            if (t < 0)
                t = 0;

            double x = (1 - t)*point0.GetX() + t*point1.GetX();
            double y = (1 - t)*point0.GetY() + t*point1.GetY();
            double z = (1 - t)*point0.GetZ() + t*point1.GetZ();

            return new Point(x, y, z);
        }

        //Calculates the position in the Quadratic bezier trajectory for the given time.
        public Point getQuadricPosition(float time)
        {
            float t = time / duration;
            if (t > 1)
                t = 1;
            if (t < 0)
                t = 0;

            double x = Math.Pow((1 - t), 2)*point0.GetX() + 2*(1 - t)*t*point1.GetX() + Math.Pow(t, 2)*point2.GetX();
            double y = Math.Pow((1 - t), 2)*point0.GetY() + 2*(1 - t)*t*point1.GetY() + Math.Pow(t, 2)*point2.GetY();
            double z = Math.Pow((1 - t), 2)*point0.GetZ() + 2*(1 - t)*t*point1.GetZ() + Math.Pow(t, 2)*point2.GetZ();

            return new Point(x, y, z);
        }

        //Calculates the position in the Cubic bezier trajectory for the given time.
        public Point getCubicPosition(float time)
        {
            float t = time / duration;
            if (t > 1)
                t = 1;
            if (t < 0)
                t = 0;

            double x = Math.Pow((1 - t), 3)*point0.GetX() + 3*Math.Pow((1 - t), 2)*t*point1.GetX() + 
                3*(1 - t)*Math.Pow(t, 2)*point2.GetX() + Math.Pow(t, 3)*point3.GetX();
            double y = Math.Pow((1 - t), 3)*point0.GetY() + 3*Math.Pow((1 - t), 2)*t*point1.GetY() +
                3*(1 - t)*Math.Pow(t, 2)*point2.GetY() + Math.Pow(t, 3)*point3.GetY();
            double z = Math.Pow((1 - t), 3)*point0.GetZ() + 3*Math.Pow((1 - t), 2)*t*point1.GetZ() +
                3*(1 - t)*Math.Pow(t, 2)*point2.GetZ() + Math.Pow(t, 3)*point3.GetZ();

            return new Point(x, y, z);
        }
    }
}
