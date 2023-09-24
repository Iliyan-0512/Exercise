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









        //private static int GerStringSum(string stringOne, string stringTwo)
        //{
        //    int sum = 0;
        //    int minLenght = Math.Min(stringOne.Length,stringTwo.Length);
        //    for (int i = 0; i < minLenght; i++)
        //    {
        //        sum += stringOne[i] * stringTwo[i];

        //    }
        //    string longestLenghtString = stringTwo;
        //    if (longestLenghtString.Length<stringTwo.Length)
        //    {
        //        longestLenghtString = stringTwo;
        //    }
        //    for (int i = minLenght;i < longestLenghtString.Length;i++)
        //    {
        //        sum += longestLenghtString[i];
        //    }
        //    return sum;
        //}

        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string ecrypted = string.Empty;
            foreach (char currChar in input)
            {
                int currPosiotion = currChar;
                currPosiotion += 3;
                ecrypted += (char)currPosiotion;
            }
            Console.WriteLine(ecrypted);









            //string[] input = Console.ReadLine().Split("\\");
            //string file = input[input.Length - 1];
            //string[] splitLastWord = file.Split('.');
            //string fileName = splitLastWord[0];
            //string extencio = splitLastWord[splitLastWord.Length - 1];
            //Console.WriteLine($"File name: {fileName}");
            //Console.WriteLine($"File extension: {extencio}");

            //string[] input = Console.ReadLine().Split("\\");
            //string file = input[input.Length - 1];
            //string[] splitLastWord = file.Split('.');
            //string fileName = splitLastWord[0];
            //string extencio = splitLastWord[splitLastWord.Length - 1];
            //Console.WriteLine($"File name: {fileName}");
            //Console.WriteLine($"File extension: {extencio}");

            //    var input = Console.ReadLine().Split();
            //    int finalsum = GerStringSum(input[0], input[1]);
            //    Console.WriteLine(finalsum);

            //string[] input = Console.ReadLine().Split(", ");
            //foreach (string word in input)
            //{
            //    if (word.Length > 3 && word.Length <= 16)
            //    {
            //        bool isValid = true;
            //        foreach (char charLett in word)
            //        {
            //            if (!(charLett == '-' || charLett == '_' || char.IsLetterOrDigit(charLett)))
            //            {
            //               isValid = false;
            //                break;
            //            }

            //        }
            //        if (isValid)
            //        {
            //            Console.WriteLine(word);
            //        }
            //    }
            //}
        }


    }
}