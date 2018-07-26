using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    class SexpT
    {
        EltT ty;
        char val;
        uint valAllocated;
        uint valUsed;
        Elt list;
        Elt next;
        AtomT aty;
        char binaryData;
        uint binaryLength;
    }

    //delegate 

    struct Elt
    {

    }

    struct ParseEventHandlers
    {

    }

    class SexpMemory
    {

    }
}
