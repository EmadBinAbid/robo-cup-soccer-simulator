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
        private bool isConnected;
        private TRoboCupConnection tRoboCupConnection;

        //Default constructor
        public ServerCommunicationManager()
        {
            this.isConnected = false;
            this.bufferSize = BUFFER_SIZE;
            this.buffer = new char[this.bufferSize];
            tRoboCupConnection = null;
            this.hostName = "";
            this.port = 0;
        }

        //Returns the same server instance every time
        public static ServerCommunicationManager getUniqueInstance()
        {
            if(uniqueInstance == null)
            {
                uniqueInstance = new ServerCommunicationManager();
            }
            return uniqueInstance;
        }

        //Returns 'true' if agent succesfully connects to server
        public bool connect(string serverIP, int serverPort)
        {
            if(this.isConnected == true)
            {
                Console.WriteLine("[!]INFO:\t ServerCommunicationManager.connect(string, int): Already connected to server.");
                return true;
            }
            this.tRoboCupConnection = new TRoboCupConnection(ConnectionType.CONNECTION_TCP, serverIP, serverPort);
            if(this.tRoboCupConnection != null)
            {
                this.isConnected = true;
                Console.WriteLine("[+]SUCCESS:\t ServerCommunicationManager.connect(string, int): Connection with server established.");
                return true;
            }
            Console.WriteLine("[-]ERROR:\t ServerCommunicationManager.connect(string, int): Cannot connect to server.");
            return false;
        }

        //Returns 'true' if agent succesfully disconnects with server
        public bool disconnect()
        {
            bool isDisconnected = this.tRoboCupConnection.close();
            if(isDisconnected == true)
            {
                Console.WriteLine("[+]SUCCESS:\t ServerCommunicationManager.disconnect(): Connection with server terminated.");
                this.isConnected = false;
                return true;
            }
            Console.WriteLine("[-]ERROR:\t ServerCommunicationManager.disconnect(): Not able to terminate server connection.");
            return false;
        }

        //Returns the number of bytes sent as the message
        public int sendMessage(string message, int messageLength)
        {
            int bytesSent = this.tRoboCupConnection.sendMessage(message, messageLength);
            if(bytesSent == -1)
            {
                Console.WriteLine("[-]ERROR:\t ServerCommunicationManager.sendMessage(string, int): Not able to send message.");
                return -1;
            }
            Console.WriteLine("[+]SUCCESS:\t ServerCommunicationManager.sendMessage(string, int): Message sent successfully.");
            return bytesSent;
        }

        //Returns the number of bytes read of the incoming message
        public string receiveMessage()
        {
            string serverMessage = this.tRoboCupConnection.receiveMessage();
            if(serverMessage == "")
            {
                Console.WriteLine("[-]ERROR:\t ServerCommunicationManager.receiveMessage(): Not able to receive message.");
                return "";
            }
            Console.WriteLine("[+]SUCCESS:\t ServerCommunicationManager.receiveMessage(): Message received successfully.");
            return serverMessage;
        }
    }
}
