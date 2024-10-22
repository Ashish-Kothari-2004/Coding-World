// Q.1 Write a program to display addition, subtraction, division, multiplication of 2 numbers.
using System;
namespace ArithmeticOperator
{

    class Program
    {
        static void Main()
        {
            Console.WriteLine("Enter first number: ");
            double num1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter second number: ");
            double num2 = Convert.ToDouble(Console.ReadLine());

            double addition = num1 + num2;
            double subtraction = num1 - num2;
            double multiplication = num1 * num2;
            double division = 0;

            Console.WriteLine("Addition: " + addition);
            Console.WriteLine("Subtraction: " + subtraction);
            Console.WriteLine("Multiplication: " + multiplication);
            if (num2 != 0)
            {
                division = num1 / num2;
                Console.WriteLine("Division: " + division);
            }
            else
            {
                Console.WriteLine("Division by zero is not allowed");
            }
        }
    }
}