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
        static StreamWriter logMessage;
        static ServerCommunicationManager serverCommunicationManager = null;

        static string hostName = "127.0.0.1";
        static int port = 3100;

        static string teamName = "testAgent";
        static int unum = 0;
        static Point homePosition = new Point(-4, 0.0, 0.0);

        static CommandCreater commandCreater;
        static WorldModel worldModel;
        static RunningZMP runSkill;

        static bool replayMode = false;
        static bool enableLog = false;
        static string logPath;

        static int MAX = 12000;
        static string message;

        /*serverCommunicationManager = new ServerCommunicationManager();
        serverCommunicationManager.connect("127.0.0.1", 8080);*/

        // \define Read the message that is sent by the simulator to the agent's socket
        static string readMessage()
        {
            message = serverCommunicationManager.receiveMessage();
            return message;
        }

        // \define Getter of the message
        static string getMessage()
        {
            return message;
        }

        // \define Send the effector message of the agent to the simulator socket
        static void sendMessage(string command)
        {
            serverCommunicationManager.sendMessage(command, command.Length);
        }

        // \define Initial the agent functionalities -------------------- MessageParser not implemented ...
        static bool init()
        {
            logMessage = new StreamWriter("message.txt");
            //logMessage.Close();

            // Initialize the agent's connection
            Console.WriteLine("'" + teamName + "' connecting to " + hostName + ":" + port + "...");
            serverCommunicationManager = ServerCommunicationManager.getUniqueInstance();

            if (!serverCommunicationManager.connect(hostName, port))
            {
                return false;
            }

            Console.WriteLine("Done.\n");

            // Initialize the command's creator
            commandCreater = CommandCreater.getUniqueInstance();

            // Initialize the world model
            worldModel = WorldModel.getUniqueInstance();

            GameConfiguration.getUniqueInstance().init();

            sendMessage(GameConfiguration.getRSGPath());
            worldModel.setSelfNumber(unum);
            worldModel.setTeamName(teamName);

            // Receive the first messages from the simulator and extract the the primary information
            // to update the world model
            string strMessage = "";
            string firstChar = strMessage;
            strMessage = readMessage();
            MessageParser parser = new MessageParser();
            parser.parseMessage(strMessage);
            //GameConfiguration.getUniqueInstance().init();

            // Send the first messages to the simulator to spawn the agent in simulator
            commandCreater.init(unum, teamName);
            sendMessage(commandCreater.getPreparedCommand());
            commandCreater.reset();
            strMessage = firstChar;
            strMessage = readMessage();
            parser.parseMessage(strMessage);
            commandCreater.beam(-8, 0, 0);
            sendMessage(commandCreater.getPreparedCommand());

            return true;
        }

        /* \define An interface and to execute walking. This is rather slow walking how ever it can perform walking in both Gazebo and 
            Simspark simulator.
            The parameters of the walk is set in this function. To understand the parameters for tuning them, check RunningZMP.h. 
        */
        static void behaveWalking()
        {

            // Start the behavior only in play_on mode
            if (worldModel.getGameStateTime() == 0)
            {
                commandCreater.stopAllJoints();
            }
            else
            {
                bool initialized = false;

                if (!initialized)
                {
                    initialized = true;
                    runSkill = new RunningZMP();
                    runSkill.init();

                    // The walk engine parameters
                    runSkill.stepSizeX = 0.04;
                    runSkill.stepTime = 0.4;
                    runSkill.amplitude = 0;
                    runSkill.amplitude2 = 0;
                    runSkill.offset = 0.24;
                    runSkill.swingHeight = 0.06;
                    runSkill.constantInclination = 1;
                    runSkill.isStopped = true;
                    runSkill.initPos = false;
                }

                runSkill.offset = 0.23;

                // Prepare to be in walking posture in the first 6 seconds
                double getReady = 5;
                if (worldModel.getGameStateTime() < getReady)
                {
                    runSkill.offset = (((0.21 - 0.24) / getReady) * (worldModel.getGameStateTime())) + 0.24;
                }
                else
                {
                    runSkill.offset = 0.21;
                }
                if (worldModel.getGameStateTime() > 6)
                {
                    // Start walking
                    runSkill.isStopped= false;
                }

                runSkill.execute();

            }

        }

        /* \define The main loop of the agent, including sense, think, act.
            First, the agent receives the sense messages, and extracts the information from it.
            Second, the agent decides to execute the walking behavior.
            Finally, the agent sends to the simulator its effector messages, and wait to receive the next cycle of the sense messages.
        */
        static void run()
        {

            string strMessage = "";
            string firstChar = strMessage;
            string message;
            string command;

            /*while (readMessage())
            {
                commandCreater.reset();
                strMessage = firstChar;

                // Receive the sense message
                strMessage = getMessage();
                logMessage.WriteLine(strMessage);

                // Extract the information from the s-expression sense messages
                MessageParser parser;
                parser.parseMessage(std::string(strMessage));

                // Execute the decision making system and walking behavior
                behaveWalking();

                // send effector messages to the simulator
                sendMessage(commandCreater.getPreparedCommand());
                worldModel.resetForUpdate();
            }*/

            commandCreater.reset();
            strMessage = firstChar;

            // Receive the sense message
            strMessage = getMessage();
            logMessage.WriteLine(strMessage);

            // Extract the information from the s-expression sense messages
            MessageParser parser = new MessageParser();
            parser.parseMessage(strMessage);

            // Execute the decision making system and walking behavior
            behaveWalking();

            // send effector messages to the simulator
            sendMessage(commandCreater.getPreparedCommand());
            worldModel.resetForUpdate();
        }

        static void Main(string[] args)
        {
            Console.WriteLine(" ********************* WALKING AGENT ********************* ");

            Console.Write("Team Name: ");
            string commandLineArgument = Console.ReadLine();
            if (commandLineArgument.Length != 0)
                teamName = commandLineArgument;

            Console.Write("Player Number: ");
            commandLineArgument = Console.ReadLine();
            if (commandLineArgument.Length != 0)
                unum = Convert.ToInt32(commandLineArgument);

            Console.Write("Host Name: ");
            commandLineArgument = Console.ReadLine();
            if (commandLineArgument.Length != 0)
                hostName = commandLineArgument;


            Console.WriteLine("Team Name: \t" + teamName);
            Console.WriteLine("Player Number: \t" + unum);
            Console.WriteLine("Host Name: \t" + hostName);

            if (!init())
            {
                Console.WriteLine("[-]ERROR: \t:Program.Main(string[]): Unable to initialize Walking Agent.");
            }
            run();

            Console.WriteLine("[+]SUCCESS: \t:Program.Main(string[]): Walking Agent exited successfully.");

            Console.ReadKey();
        }
    }
}
