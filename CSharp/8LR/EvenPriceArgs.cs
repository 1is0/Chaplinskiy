using System;
using System.Collections.Generic;
using System.Text;

namespace _8LR
{
    class EvenPriceArgs
    {
        public string Message { get; }
        public int Delta { get; }

        public EvenPriceArgs(string mes, int delta)
        {
            Message = mes;
            Delta = delta;
        }
    }
}
