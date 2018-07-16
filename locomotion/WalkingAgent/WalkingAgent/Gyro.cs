using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    /*
    @author: Emad Bin Abid
    @date: July 16, 2018
    -----------------------------------------------------------------------------------------------------------------------------------
    Gyro is a class that contains data structures and accessor methods for representing the Gyro object. Gyro objects have names and rates.
    */
    class Gyro
    {
        private string name;
        private Point rate;

        public Gyro()
        { }

        public void setName(string name)
        {
            this.name = name;
        }

        public string getName()
        {
            return this.name;
        }

        public void setRate(Point point)
        {
            this.rate = point;
        }

        public Point getRate()
        {
            return this.rate;
        }
    }
}
