// Q.5 Write a program to display 10 natural number and square of the numbers
using System;
class Program
{
    public static void Main()
    {
        Console.WriteLine("Number and Square");
        for (int i = 1; i <= 10; i++)
        {
            int square = i * i;
            Console.Write(i + "            ");
            Console.Write(square);  
            Console.WriteLine();
        }
    }
}

