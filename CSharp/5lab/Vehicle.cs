using System;

namespace _5labaratornaya
{
    class Vehicle
    {
        
        
        private float price;
        public static int Id;
        public string Name { get; set; }
        public float MaxSpeed { get; set; }
        public string Color { get; set; }
        public string CountryOfManufacture { get; set; }
        public int Year {get;set;}   
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
        public Vehicle(string name,int year,string country) 
        {
            Name = name;
            Year = year;
            CountryOfManufacture = country;    
        }


        // function 

        public void setValues(string name,string myCountryOfManufacture)
        {
            Name = name;        
            CountryOfManufacture = myCountryOfManufacture;
        }
        public void setValues(string mycolor,float price,float mymaxspeed)
        {
            this.price = price;
            Color = mycolor;
            MaxSpeed = mymaxspeed;
        }
        public virtual void GetInfo()
        {
           
            Console.WriteLine("Vehicle name: {0}\nYear of manufacture : {1} \nCountryOfManufacture : {2} \nPrice : {3} $\nId : {4}",Name,Year,CountryOfManufacture,Price,Id);
        }
        public void GetMaxSpeed()
        {
            Console.WriteLine("MaxSpeed : {0} km/h", MaxSpeed);
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
