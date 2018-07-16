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
    Ball is a class that contains data structures and accessor methods for representing the Ball object.
    */

    class Ball
    {
        private Point polarPostion;

        public Ball()
        {

        }

        public void setPolarPosition(Point point)
        {
            this.polarPostion = point;
        }

        public Point getPolarPosition()
        {
            return this.polarPostion;
        }
    }
}
