using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Threading;
using System.Threading.Tasks;
using System.Text;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {


        static void Main(string[] args)
        {
            string text = Console.ReadLine();
            char previousChart = text[0];
            Console.Write(previousChart);
            for (int i = 1; i < text.Length; i++)
            {
                char currentChar= text[i];
                if (previousChart != currentChar)
                {
                    previousChart = currentChar;
                    Console.Write(previousChart);
                }
            }
        }

    }
}