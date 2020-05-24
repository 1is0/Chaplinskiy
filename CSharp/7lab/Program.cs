using System;

namespace _7lab
{
    class Program
    {
        static void Main(string[] args)
        {

            RationalNumber fnum = new RationalNumber(10,25);//0.4
            RationalNumber snum = new RationalNumber(25, 10);//2.5
            // > 
            Console.WriteLine($"{fnum.Fraction()} > {snum.Fraction()} = " + (fnum > snum)); Console.WriteLine($"{fnum.Number()} > {snum.Number()} = " + (fnum > snum) + "\n");
            // !=
            Console.WriteLine($"{fnum.Fraction()} != {snum.Fraction()} = " + (fnum != snum)); Console.WriteLine($"{fnum.Number()} != {snum.Number()} = " + (fnum != snum) + "\n");
            // -
            Console.WriteLine($"{fnum.Fraction()} - {snum.Fraction()} = " + (fnum - snum).Fraction()); Console.WriteLine($"   {fnum.Number()} - {snum.Number()} = " + (fnum - snum).Number() + "\n");
            // *
            Console.WriteLine($"{fnum.Fraction()} * {snum.Fraction()} = " + (fnum * snum).Fraction()); Console.WriteLine($"   {fnum.Number()} * {snum.Number()} = " + (fnum * snum).Number() + "\n");
            // /
            if (snum != 0)
            {
                Console.WriteLine($"{fnum.Fraction()} / {snum.Fraction()} = " + (fnum / snum).Fraction());
                Console.WriteLine($"   {fnum.Number()} / {snum.Number()} = " + (fnum / snum).Number() + "\n");
            }
            Console.WriteLine();
        }
    }
    
}
