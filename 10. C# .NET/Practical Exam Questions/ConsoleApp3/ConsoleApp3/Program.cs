// Q.3 Write a program to find maximum and minimum number in 3 given number.

using System;
class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter fist no: ");
        double n1 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Enter second no: ");
        double n2 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Enter third no: ");
        double n3 = Convert.ToDouble(Console.ReadLine());

        double min = Math.Min(n1, Math.Min(n2, n3));
        double max = Math.Max(n1, Math.Max(n2, n3));
        Console.WriteLine("Min number: " + min);
        Console.WriteLine("Max number: " + max);
    }
}
