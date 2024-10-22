// Q.2 Write a program to swap 2 number without using the third variable.

using System;
namespace SwapNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter first number: ");
            double num1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter second number: ");
            double num2 = Convert.ToDouble(Console.ReadLine());

            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
            Console.WriteLine("After swapping: ");
            Console.WriteLine("First No: " + num1);
            Console.WriteLine("Second No: " + num2);
        }
    }
}