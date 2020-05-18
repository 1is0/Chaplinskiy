using System;

using System.Runtime.InteropServices;

namespace _4._2lab
{
    class Program
    {

        [DllImport(@"D:\1isp\4main\4.2\Mydll\Debug\Mydll.dll", CallingConvention = CallingConvention.StdCall)]
        static extern int Sum(int a, int b);

        [DllImport(@"D:\1isp\4main\4.2\Mydll\Debug\Mydll.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Sub(int a, int b);
        [DllImport(@"D:\1isp\4main\4.2\Mydll\Debug\Mydll.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Multiply(int a, int b);
        [DllImport(@"D:\1isp\4main\4.2\Mydll\Debug\Mydll.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern float Div(int a, int b);
        [DllImport(@"D:\1isp\4main\4.2\Mydll\Debug\Mydll.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Power(int a, int b);

        static void Main(string[] args)
        {
            int a = 2, b = 8;
            int c = Sum(a, b);//10
            int s = Sub(c, a);//8
            int f = Multiply(s, c);//80
            int g = Power(f, a);//6400
            Console.WriteLine($"result : {Div(g, a)}");//3200

        }
    }
}
