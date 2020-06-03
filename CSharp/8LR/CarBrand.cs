using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _8LR
{
    
    class CarBrand : Car, IMovable, IComparable
    {
        // new in 8 lab
        public delegate void PriceHandler(object sender, EvenPriceArgs e);
        public event PriceHandler Notify;
        
        
        public void PriceIncrease(int delta)
        {
            Price += delta;
            Notify?.Invoke(this,new EvenPriceArgs($"Цена на была поднята на {delta}",delta));
        }
        
        public void PriceReduction(int delta)
        {
            if (Price >= delta)
            {
                Price -= delta;
                Notify?.Invoke(this,new EvenPriceArgs( $"Цена  была понижена на {delta}", delta));
            }else

            {

                Console.ForegroundColor = ConsoleColor.Red;
                Notify?.Invoke(this, new EvenPriceArgs($"Невозможно понизить цену на {delta}",delta));
                Console.ForegroundColor = ConsoleColor.White;
            }
        }
       







       /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       





        public override void GetInfo()
        {
          

            Console.WriteLine($"Car name:{Name}");
            Console.WriteLine($"Year of manufacture : {Year}");
            Console.WriteLine($"CountryOfManufacture : {CountryOfManufacture}");
            Console.WriteLine($"Id : {Id}");
            Console.WriteLine($"Price : {Price} $");
            Console.WriteLine($"Car rang : {classification}");
            Console.WriteLine($"Model : {exemple.modelname}");
            Console.WriteLine($"type of body : {exemple.body}");
        }

        public void Move()
        {
            Console.WriteLine($"{Name} rides");
        }
        static double GetTime(double distance, double speed) => distance / speed;
        int IComparable.CompareTo(object obj)
        {
            if (this.Year > ((CarBrand)obj).Year)
            {
                return 1;
            }
            if (this.Year < ((CarBrand)obj).Year)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }

        public struct Brand
        {
            public string modelname;
            public string body;
        }

        public Brand exemple;

        public CarBrand()
        {

        }
        public CarBrand(string nameValue, int yearValue, string countryValue, int rang, string modelnameValue, string bodyValue)
        {
            Name = nameValue;
            Year = yearValue;
            CountryOfManufacture = countryValue;
            classification = (carclassification)rang;
            exemple.modelname = modelnameValue;
            exemple.body = bodyValue;
        }



        CarBrand[] data;
        public CarBrand(int number)
        {
            data = new CarBrand[number];


        }
        public CarBrand this[int index]
        {
            get
            {
                return data[index];
            }
            set
            {
                data[index] = value;
            }
        }
    }
}
