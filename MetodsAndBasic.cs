using System;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x = 3;
            sampleLoop();
            OperatorExamples();
            do
            {
                // Statements between these brackets will run
                // once, then keep looping as long as x > 5
                Console.WriteLine(x);
            } while (x > 5);
            int count = 0;
            while (count < 10)
            {
                count = count + 1;
            }
            for (int i = 0; i < 5; i++)
            {
                count = count - 1;
            }
            Console.WriteLine("The answer is " + count);

            int t = 5;
            if (t == 10)
            {
                Console.WriteLine("x must be 10");
            }
            else
            {
                Console.WriteLine("x isn’t 10");
            }
        }

        private static void sampleLoop()
        {
            // Loop #3
            int p = 2;
            for (int q = 2; q < 32;
             q = q * 2)
            {
                while (p < q)
                {
                    // How many times will
                    // the next statement
                    // be executed?
                    p = p * 2;
                }
                q = p - q;
                Console.WriteLine(q);
            }
            Console.WriteLine(p);
           
        }

        private static void OperatorExamples()
        {
            int width = 3;
            width++;
            int height = 2 + 4;
            int area = width * height;
            Console.WriteLine(area);
            string result = "The area";
            result = result + " is " + area;
            Console.WriteLine(result);
            bool truthValue = true;
            Console.WriteLine(truthValue);

        }
    }
}