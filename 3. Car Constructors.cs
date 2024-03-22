using System;

namespace CarManufacturer
{
    public class Car
    {
        private string make;
        private string model;
        private int year;
        private double fuelQuantity;
        private double fuelConsumption;

        public string Make
        {
            get => make; set => make = value;
        }
        public string Model
        {
            get => model; set => model = value;
        }
        public int Year
        {
            get => year; set => year = value;
        }
        public double FuelQuantity
        {
            get => FuelQuantity; set => FuelQuantity = value;
        }
        public double FuelConsumption
        {
            get => fuelConsumption; set => fuelConsumption = value;
        }
        public Car()
        {
            make = "VW";
            model = "Golf";
            year = 2005;
            fuelQuantity = 200;
            fuelConsumption = 10;
        }
        public Car(string make, string model, int year) : this()
        {
            this.make = make;
            this.model = model;
            this.year = year;
        }
        public Car(string make, string model, int year, double fuelQuantity, double fuelConsumption)
             : this(make, model, year)
        {
            this.fuelQuantity = fuelQuantity;
            this.fuelConsumption = fuelConsumption;
        }
        static void Main(string[] args)
        {
            Car car1=new Car();
            Car car2=new Car("Toyota","Corolla",2020);
            Car car3 = new Car("Ford", "Mustang", 2022, 150, 12);

            
        }

        
    }



}













