using System;

class SymbolInMatrix
{
    static void Main()
    {
        string[] sizes = Console.ReadLine().Split(new char[] { ' ', ',' });
        int rows = int.Parse(sizes[0]);
        int cols = int.Parse(sizes[1]);

        int[,] matrix = new int[rows, cols];

        for (int i = 0; i < rows; i++)
        {
            string[] rowsElement = Console.ReadLine().Split(new char[] { ' ', ',' });
            for (int j = 0; j < cols; j++)
            {
                matrix[i, j] = int.Parse(rowsElement[j]);
            }
        }
        int rowsCount=matrix.GetLength(0);
        int colsCount=matrix.GetLength(1);
        int sum = 0;

        foreach (int Element in matrix) 
        {
            sum += Element;
        }
        Console.WriteLine(rowsCount);
        Console.WriteLine(colsCount);
        Console.WriteLine(sum);

    }
}
