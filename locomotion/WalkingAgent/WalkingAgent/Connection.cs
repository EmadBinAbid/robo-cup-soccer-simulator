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
            bool isSocketSet = this.setSocket(connectionType, socket);
            if(isSocketSet == true)
                Console.WriteLine("[+]SUCESS: TDataPorter.TDataPorter(ConnectionType, Socket): Successfully initialized TDataPorter.");
            else
            {
                Console.WriteLine("[-]ERROR: TDataPorter.TDataPorter(ConnectionType, Socket): Not able to initialize TDataPorter.");
            }
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
                Console.WriteLine("[-]ERROR: TDataPorter.sendMessage(string, int): Attempt to send UDP packet via TCP socket.");
                return -1;
            }
            
            if(bytesSent == -1)
            {
                Console.WriteLine("[-]ERROR: TDataPorter.sendMessage(string, int): Not able to send message.");
                return -1;
            }
            Console.WriteLine("[+]SUCCESS: TDataPorter.sendMessage(string, int): Message sent successfully.");
            return bytesSent;
        }

        //Receives the message from server or peers. Returns the number of bytes received from the server or peers
        public int receiveMessage()
        {
            byte[] serverMessage = new byte[64];

            int bytesReceived = -1;
            bytesReceived = this.m_Socket.Receive(serverMessage);
            if(bytesReceived == -1)
            {
                Console.WriteLine("[-]ERROR: TDataPorter.receiveMessage(): Not able to receive message.");
                return -1;
            }
            Console.WriteLine("[+]SUCCESS: TDataPorter.receiveMessage(): Message sent successfully.");
            return bytesReceived;
        }

        //Opens the socket for the first time & initializes the socket properties
        /*In this function socket is opened but not yet bound/bind to IPEndPoint*/
        public bool open()
        {
            if(this.isActive())
            {
                Console.WriteLine("[!]INFO: TDataPorter.open(): Connection is already opened.");
                return false;
            }

            ProtocolType protocolType = ProtocolType.Tcp;       //Setting ProtocolType.Tcp by default
            if (this.getConnectionType() == ConnectionType.CONNECTION_TCP)
                protocolType = ProtocolType.Tcp;
            else if(this.getConnectionType() == ConnectionType.CONNECTION_UDP)
                protocolType = ProtocolType.Udp;

            this.m_Socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, protocolType);

            if (this.m_Socket == null)
            {
                Console.WriteLine("[-]ERROR: TDataPorter.open(): Not able to open connection.");
                return false;
            }
            Console.WriteLine("[+]SUCCESS: TDataPorter.open(): Connection opened successfully.");
            return true;
        }
        
        //Closes the socket
        public bool close()
        {
            if (!this.isActive())
            {
                Console.WriteLine("[!]INFO: TDataPorter.close(): Connection is already closed.");
                return false;
            }

            this.m_Socket.Close();
            this.m_Socket = null;
            Console.WriteLine("[+]SUCCESS: TDataPorter.close(): Connection closed successfully.");
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
                bool isOpen = this.open(serverIP, serverPort);
                if(isOpen == true)
                {
                    Console.WriteLine("[+]SUCCESS: TConnection.TConnection(ConnectionType, string, int): Successfully initialized TConnection.");
                }
                else
                {
                    Console.WriteLine("[-]ERROR: TConnection.TConnection(ConnectionType, string, int): Not able to initialize TConnection.");
                }
            }
            Console.WriteLine("[-]ERROR: TConnection.TConnection(ConnectionType, string, int): Invalid serverIP or serverPort.");
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
            {
                Console.WriteLine("[-]ERROR: TConnection.open(string, int): Not able to open connection.");
                return false;
            }
            Console.WriteLine("[+]SUCCESS: TConnection.open(string, int): Connection opened successfully.");
            return true;
        }

        //Closes the socket
        public bool close()
        {
            if (!this.isConnected())
            {
                Console.WriteLine("[!]INFO: TConnection.close(): Connection already closed.");
                return false;
            }

            bool isClose = this.tDataPorter.close();
            if(isClose == true)
            {
                Console.WriteLine("[+]SUCCESS: TConnection.close(): Connection closed successfully.");
                return true;
            }
            Console.WriteLine("[-]ERROR: TConnection.close(): Not able to close connection.");
            return false;


        }

        //Sends a message via the established socket connection. Returns number of bytes of message that is sent
        public int sendMessage(string message, int messageLength)
        {
            int bytesSent = this.tDataPorter.sendMessage(message, messageLength);
            if(bytesSent == -1)
            {
                Console.WriteLine("[-]ERROR: TConnection.sendMessage(string, int): Not able to send message.");
                return -1;
            }
            Console.WriteLine("[+]SUCCESS: TConnection.sendMessage(string, int): Message sent successfully.");
            return bytesSent;
        }

        //Receives the message from server or peers. Returns the number of bytes received from the server or peers. Does not return 
        //the actual message
        public int receiveMessage()
        {
            int bytesReceived = this.tDataPorter.receiveMessage();
            if (bytesReceived == -1)
            {
                Console.WriteLine("[-]ERROR: TConnection.receiveMessage(): Not able to receive message.");
                return -1;
            }
            Console.WriteLine("[+]SUCCESS: TConnection.receiveMessage(): Message received successfully.");
            return bytesReceived;
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

        //Overrided constructor -> Calls the overrided constructor of parent class
        public TRoboCupConnection(ConnectionType connectionType, string serverIP = "", int serverPort = -1) : 
            base(connectionType, serverIP, serverPort) { }

        //Sends a message via the established socket connection. Returns number of bytes of message that is sent
        public new int sendMessage(string message, int messageLength)
        {
            return base.sendMessage(message, messageLength);
        }

        //Receives the message from server or peers. Returns the number of bytes received from the server or peers. Does not return 
        //the actual message
        public new int receiveMessage()
        {
            return base.receiveMessage();
        }
    }
}
