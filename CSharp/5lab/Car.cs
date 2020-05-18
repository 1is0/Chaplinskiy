using System;
using System.Collections.Generic;
using System.Text;

namespace _5labaratornaya
{
    enum carclassification
       {
        A = 1,
        B,
        C,
        D,
        E,
        F   
        }
    class Car : Vehicle
    {
        public carclassification classification;
        public Car()
        {

        }
        public Car(string nameValue,int yearValue,string countryValue,int rang)
        {
            Name = nameValue;
            Year = yearValue;
            CountryOfManufacture = countryValue;
            classification = (carclassification)rang;
        }
        public override void GetInfo()
        {
            Console.WriteLine($"Car name:{Name}");
            Console.WriteLine($"Year of manufacture : {Year}");
            Console.WriteLine($"CountryOfManufacture : {CountryOfManufacture}");
            Console.WriteLine($"Price : {Price} $");
            Console.WriteLine($"Id : {Id}");

            Console.WriteLine($"Car rang : {classification}");
        
        }

    }
}
