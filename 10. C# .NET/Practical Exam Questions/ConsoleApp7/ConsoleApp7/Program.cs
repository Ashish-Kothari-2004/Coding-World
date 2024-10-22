// Q.7 Write a program to display the table of a given number in a proper format. 
using System;
class Program
{
    static void Main(string[] args) {
        Console.WriteLine("Enter Number: ");
        int number = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine($"Multiplication table of {number}");
        for (int i = 1; i <= 10; i++) {
            int result = number * i;
            Console.WriteLine($"{number} x {i} = {result}");
        }
    }
}