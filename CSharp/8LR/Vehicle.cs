using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _8LR
{
    class Vehicle
    {
        public void Move()
        {
            Console.WriteLine($"{Name} moves");
        }

        private float price;
        public static int Id;
        public string Name { get; set; }
        public string Color { get; set; }
        public string CountryOfManufacture { get; set; }
        public int Year { get; set; }
        public float Price
        {
            set
            {
                if (value > 0)
                {
                    try
                    {
                        price = value;
                    }
                    catch (FormatException e)
                    {
                        Console.WriteLine("Incorrect input : {0}", e.Message);
                    }
                }
            }
            get
            {
                return price;
            }
        }


        public Vehicle()
        {

        }
        public Vehicle(string name, int year, string country)
        {
            Name = name;
            Year = year;
            CountryOfManufacture = country;
        }


        public void setValues(string name, string myCountryOfManufacture)
        {
            Name = name;
            CountryOfManufacture = myCountryOfManufacture;
        }
        public void setValues(string mycolor, float price)
        {
            this.price = price;
            Color = mycolor;
        }
        public virtual void GetInfo()
        {

            Console.WriteLine("Vehicle name: {0}\nYear of manufacture : {1} \nCountryOfManufacture : {2} \nPrice : {3} $\nId : {4}", Name, Year, CountryOfManufacture, Price, Id);
        }

        public void GetColor()
        {
            Console.WriteLine("Color : {0}", Color);
        }

    }
    class Motorcade
    {
        Vehicle[] data;
        public Motorcade(int number)
        {
            data = new Vehicle[number];


        }
        public Vehicle this[int index]
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
