using System;
using System.Collections.Generic;
using System.Text;

namespace _8LR
{
    interface IMovable
    {
        public void Move();
        static double GetTime(double distance, double speed) => distance / speed;

    }
}
