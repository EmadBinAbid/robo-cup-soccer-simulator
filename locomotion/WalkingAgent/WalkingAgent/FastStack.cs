using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WalkingAgent
{
    /*
    @author: Emad Bin Abid
    @date: July 18, 2018
    -----------------------------------------------------------------------------------------------------------------------------------
    FastStack is a class that implements a stack with smart memory management and fast data retrieval.
    */
    class FastStack
    {
        LinkedList<double> fastStack;

        public FastStack(double value)
        {
            this.fastStack = new LinkedList<double>();
            this.fastStack.AddFirst(value);
        }

        public LinkedListNode<double> push(double value)
        {
            return this.fastStack.AddLast(value);
        }

        public LinkedListNode<double> pop()
        {
            LinkedListNode<double> lastNode = this.fastStack.Last;
            this.fastStack.RemoveLast();

            return lastNode;
        }

        public LinkedListNode<double> getLastElement()
        {
            return this.fastStack.Last;
        }

        public LinkedListNode<double> getFirstElement()
        {
            return this.fastStack.First;
        }

        public int Height()
        {
            return this.fastStack.Count;
        }
    }
}
