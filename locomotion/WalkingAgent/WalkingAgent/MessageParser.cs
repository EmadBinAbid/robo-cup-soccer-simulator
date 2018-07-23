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

        //Default constructor
        public MessageParser()
        {
            this.worldModel = WorldModel.getUniqueInstance();
        }

        public void parse(string message)
        {

        }
    }
}
