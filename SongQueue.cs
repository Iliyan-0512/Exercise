using System;
using System.Collections.Generic;
using System.Linq;

class fastfood
{
    static void Main()
    {
        string[] songs=Console.ReadLine().Split(",").ToArray();
        Queue<string> queue = new  Queue<string>();
        string command = Console.ReadLine();
        while (queue.Count>0) 
        {
            if (command=="Play")
            {
                queue.Dequeue();
            }
            else if (command=="Add")
            {
                if (!queue.Contains(songs[0]))
                {
                    queue.Enqueue(songs[0]);
                }
                else
                {
                    Console.WriteLine($"{songs[0]} is already contained!");
                }
            }
            else if(command=="Show")
            {
                foreach (string s in songs)
                {
                    Console.WriteLine(s + ", ");
                }
            }
        }
    }
}
