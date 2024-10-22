// Q.10 Write a program to input any number and display in words. 

using System;
class Program
{
    static void Main()
    {
        Console.Write("Enter a number (0-9999): ");
        int number = Convert.ToInt32(Console.ReadLine());
        if (number >= 0 && number <= 9999)
        {
            Console.WriteLine("Number in words: " + NumberToWords(number));
        }
        else
        {
            Console.WriteLine("Please enter a number between 0 and 9999.");
        }
    }

    // Method to convert number to words
    static string NumberToWords(int num)
    {
        if (num == 0)
            return "Zero";

        if (num < 0)
            return "Minus " + NumberToWords(Math.Abs(num));

        string words = "";

        if ((num / 1000) > 0)
        {
            words += NumberToWords(num / 1000) + " Thousand ";
            num %= 1000;
        }

        if ((num / 100) > 0)
        {
            words += NumberToWords(num / 100) + " Hundred ";
            num %= 100;
        }

        if (num > 0)
        {
            if (words != "")
                words += "and ";

            var unitsMap = new[] { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
            var tensMap = new[] { "Zero", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

            if (num < 20)
                words += unitsMap[num];
            else
            {
                words += tensMap[num / 10];
                if ((num % 10) > 0)
                    words += "-" + unitsMap[num % 10];
            }
        }
        return words.Trim();
    }
}
