using System;
using System.Collections.Generic;
using System.Text;

namespace _5labaratornaya
{
  
    class CarBrand : Car
    {
        public struct Brand {
           public string  modelname;
            public string body;
           }

        public Brand exemple;
        
        public CarBrand()
        {

        }
        public CarBrand(string nameValue,int yearValue,string countryValue,int rang,string modelnameValue,string bodyValue)
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
    }
}
