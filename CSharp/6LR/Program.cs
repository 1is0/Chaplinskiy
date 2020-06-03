using System;
using System.Collections.Generic;

namespace _6LR
{
    class Program
    {
     
        static void Main(string[] args)
        {
            CarBrand[] models = new CarBrand[3];
            models[0] = new CarBrand("Bmw", 2010, "Germany", 3, "x5", "hatchback");
            models[0].setValues("black", 15000);
            models[1] = new CarBrand("mrds", 2012, "Germany", 5, "benz", "sedan"); 
            models[1].setValues("black", 20000);
            models[2] = new CarBrand("opel", 2002, "Germany", 1, "omega", "Station wagon"); 
            models[2].setValues("Red", 6000);

            models[0].Move();
            models[1].Move();
            models[2].Move();

           

            Console.WriteLine("\n\n");

            for(int i = 0; i < models.Length; i++)
            {
                models[i].GetInfo();
                Console.WriteLine();
            }
            Console.WriteLine("\n------------------------------------------------------------------------\n");
            Array.Sort(models);
            // after sorting by year 
            for (int i = 0; i < models.Length; i++)
            {
                models[i].GetInfo();
                Console.WriteLine();
            }
        }
    }
}
