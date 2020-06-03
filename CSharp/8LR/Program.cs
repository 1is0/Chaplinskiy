using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace _8LR
{
    // событие определено в классе CarBrand
    class Program
    {
        public static void DisplayMessage(object sender,EvenPriceArgs e)
        {
            Console.WriteLine($"Сумма {e.Delta}");
            Console.WriteLine(e.Message);
        }

        delegate bool CarBrandColor(CarBrand exemple,string color);
        // ковар.
        delegate Car CarName(string name);
        // контр.
        delegate void CBName(CarBrand model);
        
        private static CarBrand SetCarName(string name)
        {
            return new CarBrand { Name = name };
        }
        private static void GetCarName(Car model)
        {
            Console.WriteLine(model.Name);
        }
        static bool ColorCmp(CarBrand exemple, string color)
        {
            if (exemple.Color == color)
                return true;
            else return false;

        }

        static void Main(string[] args)
        {
            CarBrand model = new CarBrand();
            model = new CarBrand("Bmw", 2010, "Germany", 3, "x5", "hatchback");
            model.setValues("black", 15000);
           

            model.Notify += DisplayMessage;
            model.PriceIncrease(1000);
            model.PriceReduction(5000);
            model.PriceReduction(17000);

            Console.WriteLine("\n\n");

            CarBrandColor color1 = (CarBrand exemple, string color) => ColorCmp(model, "green");
            if (color1(model, "green")) Console.WriteLine("машина зеленого цвета");
            else
                Console.WriteLine("машина другого цвета");
            Console.WriteLine("\n\n");

            model.GetInfo();

            CarName carName;
            carName = SetCarName;
            // ковар.
            Car model2 = carName("Ford");
            Console.WriteLine(model2.Name);

            //контр.
            CBName cbname = GetCarName;
            CarBrand model3 = new CarBrand { Name = "Ferrari" };
            cbname(model3);

        }
    }
}
