using System;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Read the size of the matrix from the console
            int n = int.Parse(Console.ReadLine());
            int sum = 0; // Initialize the sum of the diagonal elements

            // Iterate over each row of the matrix
            for (int i = 0; i < n; i++)
            {
                // Read the current row into an array of integers
                string[] row = Console.ReadLine().Split(' ');
                // Add the diagonal element to the sum
                // Diagonal elements have equal row and column indices
                sum += int.Parse(row[i]);
            }

            // Output the sum of the diagonal elements
            Console.WriteLine(sum);
        }
    }
}

