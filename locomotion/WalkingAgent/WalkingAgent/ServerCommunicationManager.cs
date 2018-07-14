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
    ServerCommunicationManager is a class that provides the tools and interface to agent to communicate with the server via sockets.
    */
    class ServerCommunicationManager
    {
        private static int BUFFER_SIZE = 4096;
        private static ServerCommunicationManager uniqueInstance = null;
        private char[] buffer;
        private int bufferSize;
        private string hostName;
        private int port;
        private bool connected;
        //private TRoboCupConnection tRoboCupConnection;

        //Default constructor
        private ServerCommunicationManager()
        {
            this.connected = false;
            this.bufferSize = BUFFER_SIZE;
            this.buffer = new char[this.bufferSize];
            tRoboCupConnection = 0;
            this.hostName = "testAgent";
            this.port = 3100;
        }

        //Returns the same server instance every time.
        public ServerCommunicationManager getUniqueInstance()
        {
            if(uniqueInstance == null)
            {
                uniqueInstance = new ServerCommunicationManager();
            }
            return uniqueInstance;
        }
        
    }
}
