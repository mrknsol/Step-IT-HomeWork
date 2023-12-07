using System;
using ProductAbstractFactory.Fabrics.Classes;
using ProductAbstractFactory.Fabrics.Intefaces;
using ProductAbstractFactory.Entity.Intefaces;

class Program
{
    static void Main()
    {
        IProductFactory electronicsFactory = new ElectronicsFactory();
        IProductFactory clothingFactory = new ClothesFactory();

        IElectronics smartphone = electronicsFactory.CreateElectronics();
        IClothes tShirt = clothingFactory.CreateClothing();

        Console.WriteLine(smartphone.GetProductDetails());
        Console.WriteLine(tShirt.GetProductDetails());
    }
}