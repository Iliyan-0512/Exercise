using System;
using System.Linq;

class MatrixShuffling
{
    static void Main()
    {
        // Read matrix dimensions
        int[] dimensions = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int rows = dimensions[0];
        int cols = dimensions[1];

        // Create and fill the matrix
        string[,] matrix = new string[rows, cols];
        for (int row = 0; row < rows; row++)
        {
            string[] rowData = Console.ReadLine().Split();
            for (int col = 0; col < cols; col++)
            {
                matrix[row, col] = rowData[col];
            }
        }

        // Process commands
        string command= Console.ReadLine();
        while ((command  != "END"))
        {
            string[] parts = command.Split();

            // Validate command
            if (parts.Length == 5 && parts[0] == "swap" && int.TryParse(parts[1], out int row1) && int.TryParse(parts[2], out int col1) &&
                int.TryParse(parts[3], out int row2) && int.TryParse(parts[4], out int col2) &&
                row1 >= 0 && row1 < rows && col1 >= 0 && col1 < cols && row2 >= 0 && row2 < rows && col2 >= 0 && col2 < cols)
            {
                // Perform swap
                string temp = matrix[row1, col1];
                matrix[row1, col1] = matrix[row2, col2];
                matrix[row2, col2] = temp;

                // Print the matrix
                PrintMatrix(matrix);
            }
            else
            {
                Console.WriteLine("Invalid input!");
            }
        }
    }

    // Helper method to print the matrix
    static void PrintMatrix(string[,] matrix)
    {
        for (int row = 0; row < matrix.GetLength(0); row++)
        {
            for (int col = 0; col < matrix.GetLength(1); col++)
            {
                Console.Write(matrix[row, col] + " ");
            }
            Console.WriteLine();
        }
    }
}
