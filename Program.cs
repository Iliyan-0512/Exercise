using SwordDamage;
using System;

namespace MyApp
{
    internal class SwordDamage
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            SwordArt instance = new SwordArt();
            while (true)
            {
                Console.Write("0 for no magic/flaming, 1 for magic, 2 for flaming, " +
                    "3 for both, anything else to quit: ");
                char key = Console.ReadKey().KeyChar;
                if (key != '0' && key != '1' && key != '2' && key != '3')
                {
                    return;
                } 
                int roll=random.Next(1,7)+random.Next(1,7)+ random.Next(1,7);
            }

        }
    }
}
