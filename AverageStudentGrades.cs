using System;
using System.Collections.Generic;
using System.Globalization;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class StudentGrades
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var dictionary = new Dictionary<string, List<double>>();

            for (int i = 0; i < n; i++)
            {
                string[] nameAndValue = Console.ReadLine().Split();
                string name = nameAndValue[0];
                double value = double.Parse(nameAndValue[1], CultureInfo.InvariantCulture);

                if (!dictionary.ContainsKey(name))
                {
                    dictionary.Add(name, new List<double>());
                }
                dictionary[name].Add(value);
            }

            foreach (var entry in dictionary)
            {
                string name = entry.Key;
                List<double> grades = entry.Value;
                double average = grades.Count > 0 ? grades.Average() : 0;

                Console.WriteLine($"{name}-> Grades {string.Join(", ", grades)}" +
                    $", (Average: {average:F2})");
            }
        }
    }
}
