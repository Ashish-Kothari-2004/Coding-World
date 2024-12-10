// Exception handling of above code
// using try catch blocks

//using System;
//Keyword: 
// 1. try: Used to define a try block. This block holds the code that may throw an exception.
// 2. catch: Used to define a catch block. This block catches the exception thrown by the try block.
// 3. finally: Used to define the finally block. This block holds the default code.
// 4. throw: Used to throw an exception manually.


//using System;
//class Program : System.Exception
//{
//    static void Main(string[] args)
//    {
//        int[] arr = { 1, 2, 3, 4, 5 };
//        for (int i = 0; i < arr.Length; i++)
//        {
//            Console.WriteLine(arr[i]);
//        }
//        try
//        {
//            Console.WriteLine(arr[7]);
//        }
//        catch (IndexOutOfRangeException e)
//        {
//            Console.WriteLine("An Exception has occurred : " + e.Message);
//        }
//        finally
//        {
//            Console.Write("Last index of array is: " + (arr.Length - 1));
//        }
//    }
//}




// C# program to show the user defined exceptions
using System;
class DivByZero : Exception
{

    // Constructor
    public DivByZero()
    {
        Console.Write("Exception has occurred : ");
    }
}

class Program
{
    public double DivisionOperation(double numerator, double denominator)
    {
        if (denominator == 0)
        throw new DivByZero();

        return numerator / denominator;
    }

    static void Main(string[] args)
    {
        Program obj = new Program();
        double num = 9, den = 0, quotient;
        try
        {
            quotient = obj.DivisionOperation(num, den);
            Console.WriteLine("Quotient = {0}", quotient);
        }
        catch (Exception e)
        {
            Console.Write(e.Message);
        }
    }
}
