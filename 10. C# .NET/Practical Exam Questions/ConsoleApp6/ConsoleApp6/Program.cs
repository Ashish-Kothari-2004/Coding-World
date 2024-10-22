// Q.7 Write a program to display the table of a given number in a proper format.

using System;
class Program
{
    public static void Main() {
        Console.WriteLine("Enter any number: ");
        int number = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine($"Multiplication Table of {number}");
        for (int i = 1; i <= 10; i++)
        {
            int result = number * i;
            Console.WriteLine($"{number} x {i} = {result}" );
        }
    }
}