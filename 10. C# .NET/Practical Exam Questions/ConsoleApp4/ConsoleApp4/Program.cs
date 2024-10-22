// Q.4 Write a program to find minimum and maximum number in 3 given number using ternary operator. 
using System;
class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter first number: ");
        double num1 = Convert.ToDouble(Console.ReadLine()); 
        Console.WriteLine("Enter second number: ");
        double num2 = Convert.ToDouble(Console.ReadLine()); 
        Console.WriteLine("Enter third number: ");
        double num3 = Convert.ToDouble(Console.ReadLine());

        double min = (num1 < num2) ? ((num1 < num3) ? num1 : num3): ((num2 < num3) ? num2 : num3);
        double max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

        Console.WriteLine("Min no: " + min);
        Console.WriteLine("Max no: " + max);
    }
}