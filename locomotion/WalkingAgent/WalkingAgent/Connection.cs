using System;
using System.Collections.Generic;
using System.Linq;
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
        
        //
        public bool close()
        {
            if (!this.isActive())
                return false;

            this.m_Socket.Close();
            this.m_Socket = null;
            return true;
        }

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

    class Connection
    {
    }
}
