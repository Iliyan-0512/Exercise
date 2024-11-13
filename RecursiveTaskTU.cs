using System;
using System.Security.Cryptography;

namespace MyApp
{
    public class Program
    {
        static void Main(string[] args)
        {
            int elements = int.Parse(Console.ReadLine());

            Console.WriteLine(NFactorial(elements));
            Console.WriteLine(NFactorialRecursive(elements));
        }
        static int NFactorialRecursive(int elements)
        {
           
            return (3 * NFactorialRecursive(elements - 3)) +
          (4 * NFactorialRecursive(elements - 2)) -
          (7 * NFactorialRecursive(elements - 1));
        }
        static int NFactorial(int elements)
        {

            int A1 = 2;
            int A2 = 4;
            int A3 = 6;
            int An = 2;
            for (int i = 4; i <= elements; i++)
            {
                An = (3 * A1) + (4 * A2) - (7 * A3);
                A1 = A2;
                A2 = A3;
                A3 = An;
            }
            return An;
        }
    }
}
//Дадена е редицата A, която се образува по следния начин:

// A1 = 2, A2 = 4, A3 = 6, а всеки следващ елемент  Ai са намира по следната
// формула Ai = 3 * Ai-3 + 4 * Ai-2 - 7 * Ai-1

//Напишете две функции, които намират n-тия член на редицата:
//1.Итеративен вариант на тази функция
//2. Рекурсивен вариант на тази функция