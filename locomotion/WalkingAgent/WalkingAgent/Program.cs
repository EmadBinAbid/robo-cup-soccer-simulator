using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    class Program
    {
        static void Main(string[] args)
        {
            StreamWriter logMessage;
            ServerCommunicationManager serverCommunicationManager;
            string hostName = "127.0.0.1";
            int port = 3100;
            string teamName;
            int unum = 0;
            Point homePosition;

            serverCommunicationManager = new ServerCommunicationManager();
            serverCommunicationManager.connect("127.0.0.1", 8080);

            Console.Write("Team Name: ");
            teamName = Console.ReadLine();


            Console.WriteLine(teamName);
            Console.ReadKey();
        }
    }
}
