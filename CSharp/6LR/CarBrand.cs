using System;
using System.Collections.Generic;
using System.Text;

namespace _6LR
{
    class CarBrand : Car,IMovable,IComparable
    {
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



        public override void GetInfo()
        {
            base.GetInfo();
            Console.WriteLine($"Model : {exemple.modelname}");
            Console.WriteLine($"type of body : {exemple.body}");
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
