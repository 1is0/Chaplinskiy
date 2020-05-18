using System;
using System.Threading;
using System.Runtime.InteropServices;
using System.Windows.Forms;
namespace lab4
{
    static class Program
    {


        [DllImport("User32.dll")]
        public static extern int GetAsyncKeyState(Int32 i);

        static void Main()
        {
            Int32  vk_Escape = 27; 
            Console.WriteLine("Click \"Esc\" to finish");
            while (true)
            {
                Thread.Sleep(5);
                if (GetAsyncKeyState(vk_Escape) < 0)
                    {
                        break;
                    }
 
                
                for (Int32 i = 0; i < 255; i++)
                {
                    int temp = GetAsyncKeyState(i);
                    if (temp == 32769)
                    {

                        Console.WriteLine((Keys)i);

                    }
                }
            }

        }

    }
}
