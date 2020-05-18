using System;
using System.Globalization;
namespace _5labaratornaya
{
   
    class Program
    {
       
        static void Main(string[] args)
        {
           
            
            Random rnd = new Random();
            CarBrand my = new CarBrand("Jaguar", 1983, "India", 6,"XJ8","sedan");
            my.Price = 38500;
            Vehicle.Id = rnd.Next(0, 100000);
            my.GetInfo();
           
        }
    }
}
