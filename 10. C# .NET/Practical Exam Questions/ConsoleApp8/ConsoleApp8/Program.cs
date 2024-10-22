// Q.8 Write a program to print series of prime number upto given limit.
using System;
class Program
{
    static void Main()
    {
        Console.WriteLine("Enter limit: ");
        int limit = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Series of prime numbers up to the given limit:");
        for (int i = 2; i <= limit; i++) // Start from 2 as it's the first prime number
        {
            if (IsPrime(i))
            {
                Console.WriteLine(i);
            }
        }

        // Add this line to prevent the console window from closing immediately
        Console.WriteLine("Press any key to exit...");
        Console.ReadKey(); // Waits for a key press before closing the window
    }

    public static bool IsPrime(int number)
    {
        if (number <= 1)
        {
            return false; // Numbers less than or equal to 1 are not prime
        }
        // Check divisibility from 2 to the square root of the number
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                return false; // If divisible by any number other than 1 and itself, it's not prime
            }
        }
        return true; // It's prime if no divisors were found
    }
}
