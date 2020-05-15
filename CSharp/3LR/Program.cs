using System;
using System.Globalization;
namespace _3labaratornaya
{
   
    class Program
    {
       
        static void Main(string[] args)
        {
            int number = 2;
            Random rnd = new Random();

            Vehicle.Id = rnd.Next(1, 99999);
            Motorcade numOfVehicle = new Motorcade(number);
            numOfVehicle[0] = new Vehicle("bmw",2000,"Germany");
            numOfVehicle[0].setValues("Green",12000 ,240);
            numOfVehicle[0].GetInfo();
            numOfVehicle[0].GetMaxSpeed();
            numOfVehicle[0].GetColor();
            Console.WriteLine("\n");
            Vehicle.Id = rnd.Next(1, 99999);
            Vehicle myCar = new Vehicle("Ford",1988,"UK");
            myCar.Price= 35000;
            myCar.Color = "Blue";
            myCar.MaxSpeed = 220;
            myCar.GetInfo();
            myCar.GetColor();
            myCar.GetMaxSpeed();
            
           
        }
    }
}
