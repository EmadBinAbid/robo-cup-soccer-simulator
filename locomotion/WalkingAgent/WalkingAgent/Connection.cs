using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    /*
    @author: Emad Bin Abid
    @date: July 14, 2018
    */
    enum ConnectionType
    {
        CONNECTION_TCP,
        CONNECTION_UDP,
        CONNECTION_ILLEGAL
    }

    /*
    @author: Emad Bin Abid
    @date: July 14, 2018
    -----------------------------------------------------------------------------------------------------------------------------------
    TDataPorter is a class that encapsulates socket connection operations, such as, opening, reusing, closing, sending & receiving data
    across sockets.
    */
    class TDataPorter
    {
        //Default constructor
        private TDataPorter() { }

        protected ConnectionType m_ConnectionType;  //Type of the socket connection
        protected Socket m_Socket;                  //Socket of the connection

        //Overrided constructor -> Sets  m_ConnectionType & m_SocketFD
        public TDataPorter(ConnectionType connectionType, Socket socket = null)
        {
            this.setSocket(connectionType, socket);
        }

        //Returns the 'connection mode' -> TCP/UDP
        public ConnectionType getConnectionType()
        {
            return this.m_ConnectionType;
        }

        //Returns the 'socket pointer' of current socket connection
        public Socket getSocket()
        {
            return this.m_Socket;
        }

        //Sets the 'socket pointer' of current socket connection
        public bool setSocket(ConnectionType connectionType, Socket socket)
        {
            if(this.isActive())
            {
                return false;
            }
            this.m_ConnectionType = connectionType;
            this.m_Socket = socket;
            return true;
        }

        //Sends a message via the established socket connection. Returns number of bytes of message that is sent
        public int sendMessage(string message, int messageLength)
        {
            if(!this.isActive())
            {
                return -1;
            }
            int bytesSent = -1;
            if(this.getConnectionType() == ConnectionType.CONNECTION_TCP)
            {
                bytesSent = this.m_Socket.Send(System.Text.Encoding.UTF8.GetBytes(message));
            }
            else
            {
                Console.WriteLine("[-]ERROR: TDataPorter.sendMessage(): Attempt to send UDP packet via TCP socket.");
                return -1;
            }
            
            if(bytesSent == -1)
            {
                Console.WriteLine("[-]ERROR: TDataPorter.sendMessage(): Message not sent.");
            }

            return bytesSent;
        }

        //Receives the message from server or peers. Returns the number of bytes received from the server or peers
        public int receiveMessage()
        {
            byte[] serverMessage = new byte[64];

            int bytesReceived = 0;
            bytesReceived = this.m_Socket.Receive(serverMessage);
            return bytesReceived;
        }

        //Opens the socket for the first time & initializes the socket properties
        /*In this function socket is opened but not yet bound/bind to IPEndPoint*/
        public bool open()
        {
            if(this.isActive())
            { return false; }

            ProtocolType protocolType = ProtocolType.Tcp;       //Setting ProtocolType.Tcp by default
            if (this.getConnectionType() == ConnectionType.CONNECTION_TCP)
                protocolType = ProtocolType.Tcp;
            else if(this.getConnectionType() == ConnectionType.CONNECTION_UDP)
                protocolType = ProtocolType.Udp;

            this.m_Socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, protocolType);

            if (this.m_Socket == null)
                return false;
            return true;
        }
        
        //Closes the socket
        public bool close()
        {
            if (!this.isActive())
                return false;

            this.m_Socket.Close();
            this.m_Socket = null;
            return true;
        }

        //Reopens the socket & initializes the socket properties
        public bool reopen()
        {
            this.close();
            return this.open();
        }

        //Returns 'true' if m_Socket != null -> Socket is busy/not free
        public bool isActive()
        {
            return this.m_Socket != null;
        }
    }

    /*
    @author: Emad Bin Abid
    @date: July 15, 2018
    -----------------------------------------------------------------------------------------------------------------------------------
    TConnection is a class that provides methods to assign server's configuration variables, such as, PORT, IP, etc. on the client side.
    */
    class TConnection
    {
        protected TDataPorter tDataPorter = null;       //Socket description of 'this' connection

        //Default constructor
        private TConnection() { }

        //Overrided constructor -> Takes 'connection type', 'server's ip' & 'server's hosting port' and establishes a connection with server
        public TConnection(ConnectionType connectionType, string serverIP = "", int serverPort = -1)
        {
            this.tDataPorter = new TDataPorter(connectionType);

            if(serverIP != "" && serverPort != -1)
            {
                this.open(serverIP, serverPort);
            }
        }

        //Returns 'true' if the connection with server has been established successfully
        public bool isConnected()
        {
            return this.tDataPorter.isActive();
        }

        //Returns the 'connection mode' -> TCP/UDP
        public ConnectionType getConnectionType()
        {
            return this.tDataPorter.getConnectionType();
        }

        //Returns the 'socket pointer' of current socket connection
        public Socket getSocket()
        {
            return this.tDataPorter.getSocket();
        }

        //Opens a connection with server
        public bool open(string serverIP, int serverPort)
        {
            this.tDataPorter.reopen();

            //Binding the socket to IPEndPoint
            IPEndPoint ipEndPoint = new IPEndPoint(IPAddress.Parse(serverIP), serverPort);
            this.tDataPorter.getSocket().Connect(ipEndPoint);

            if (ipEndPoint == null)
                return false;
            return true;
        }

        //Closes the socket
        public bool close()
        {
            if (!this.isConnected())
                return false;
            return this.tDataPorter.close();
        }

        //Sends a message via the established socket connection. Returns number of bytes of message that is sent
        public int sendMessage(string message, int messageLength)
        {
            return this.tDataPorter.sendMessage(message, messageLength);
        }

        //Receives the message from server or peers. Returns the number of bytes received from the server or peers. Does not return 
        //the actual message
        public int receiveMessage()
        {
            return this.tDataPorter.receiveMessage();
        }
    }

    /*
    @author: Emad Bin Abid
    @date: July 15, 2018
    -----------------------------------------------------------------------------------------------------------------------------------
    TRoboCupConnection is a class that provides methods to assign server's configuration variables, such as, PORT, IP, etc. on the 
    client side in RoboCup Soccer Competition.
    */
    class TRoboCupConnection : TConnection
    {

        //private TRoboCupConnection() : base() { }

        public TRoboCupConnection(ConnectionType connectionType, string serverIP = "", int serverPort = -1) : 
            base(connectionType, serverIP, serverPort) { }

        public int sendMessage(string message, int messageLength) { }

        public int receiveMessage() { }
    }
}
