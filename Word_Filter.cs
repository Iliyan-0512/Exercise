﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(string.Join("\n", Console.ReadLine()
                .Split()
                .Where(w => w.Length % 2 == 0)
                .ToArray()));
        }
    }
}
