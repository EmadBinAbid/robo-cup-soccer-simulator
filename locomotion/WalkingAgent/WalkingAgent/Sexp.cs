using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    class SexpT
    {
        public EltT ty;
        public string val;
        public uint valAllocated;
        public uint valUsed;
        public SexpT list;
        public SexpT next;
        public AtomT aty;
        public char binaryData;
        public uint binaryLength;
    }

    //delegate 

    struct Elt
    {

    }

    struct ParseEventHandlers
    {

    }
}
