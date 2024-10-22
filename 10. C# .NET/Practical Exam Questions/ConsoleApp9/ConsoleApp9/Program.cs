// Q.9 Write to input a alphabet as character and print its predecessors & successor. 
using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter a character: ");
        string input = Console.ReadLine();

        // Ensure the input is a single character
        if (input.Length == 1)
        {
            char ch = input[0];

            if (ch >= 'A' && ch <= 'Z')  // Uppercase letters
            {
                Console.WriteLine("Predecessor: " + (char)(ch - 1));
                Console.WriteLine("Successor: " + (char)(ch + 1));
            }
            else if (ch >= 'a' && ch <= 'z')  // Lowercase letters
            {
                Console.WriteLine("Predecessor: " + (char)(ch - 1));
                Console.WriteLine("Successor: " + (char)(ch + 1));
            }
            else
            {
                Console.WriteLine("Please enter a valid letter.");
            }
        }
        else
        {
            Console.WriteLine("Please enter a single character.");
        }
    }
}

