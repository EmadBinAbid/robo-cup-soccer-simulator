using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    class GameConfiguration
    {
        private static GameConfiguration uniqueInstance = null;
        private WorldModel worldModel;
        private static string rsgPath;

        public GameConfiguration()
        {
            worldModel = WorldModel.getUniqueInstance();
            rsgPath = "(scene rsg/agent/nao/nao.rsg)";
        }

        public static GameConfiguration getUniqueInstance()
        {
            if (uniqueInstance == null)
                uniqueInstance = new GameConfiguration();
            return uniqueInstance;
        }

        public void init()
        {
            setRSGPath(rsgPath);
        }

        public static string getRSGPath()
        {
            return rsgPath;
        }

        public static void setRSGPath(string filePath)
        {
            rsgPath = filePath;
        }
    }
}
