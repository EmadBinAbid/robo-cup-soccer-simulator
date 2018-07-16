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
    HingePoint is a class that contains data structures and accessor methods for representing the HingeJoint object. NAO robots have 21
    hinge joints.
    */
    class HingeJoint
    {
        private string name;
        private float axis;
        private float rate;

        public HingeJoint()
        {

        }

        public void setName(string name)
        {
            this.name = name;
        }

        public void setAxis(float axis)
        {
            this.axis = axis;
        }

        public void setRate(float rate)
        {
            this.rate = rate;
        }

        public string getName()
        {
            return this.name;
        }

        public float getAxis()
        {
            return this.axis;
        }

        public float getRate()
        {
            return this.rate;
        }
    }
}
