using r_PickRandomCards;
using System;
using System.Numerics;
using System.Security.Cryptography.X509Certificates;
using System.Xml;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {


        static void Main(string[] args)
        {
            Clown oneClown = new Clown();
            oneClown.Name = "Boffo";
            oneClown.Height = 14;
            oneClown.TalkAboutYourself(); // My name is _______ and I'm ____ inches tall."
            Clown anotherClown = new Clown();
            anotherClown.Name = "Biff";
            anotherClown.Height = 16;
            anotherClown.TalkAboutYourself(); // My name is _______ and I'm ____ inches tall."
            Clown clown3 = new Clown();
            clown3.Name = anotherClown.Name;
            clown3.Height = oneClown.Height - 3;
            clown3.TalkAboutYourself(); // My name is _______ and I'm ____ inches tall."
            anotherClown.Height *= 2;
            anotherClown.TalkAboutYourself();
            Console.ReadKey();
        }
       
        class Clown
        {
            public string Name;
            public int Height;
            public void TalkAboutYourself()
            {
                Console.WriteLine("My name is " + Name +
                " and I'm " + Height + " inches tall.");
            }
        }

    }
}

//Console.Write("Enter the number of cards to pick: ");
//string line = Console.ReadLine();
//if (int.TryParse(line, out int numberOfCards))
//{
//    foreach (string card in CardPicker.PickSomeCards(numberOfCards))
//    {
//        Console.WriteLine(card);
//    }
//}
//else
//{
//    Console.WriteLine("Please enter a valid number.");
//}