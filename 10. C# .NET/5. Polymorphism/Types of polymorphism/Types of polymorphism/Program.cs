// Types of Polymorphism
// 1. Static / Compile Time Polymorphism
// a. Method Overloading
// b. Operator Overloading
//    i) Unary Operator Overloading
//    ii) Binary Operator Overloading

// 2. Dynamic / Runtime Polymorphism
// a. Virtual/ Overriding Method


// // 1. Static / Compile Time Polymorphism
// a. Method Overloading
//public class TestData
//{
//    public int Add(int a, int b, int c)
//    {
//        return a + b + c;
//    }
//    public int Add(int a, int b)
//    {
//        return a + b;
//    }
//}
//class Program
//{
//    static void Main(string[] args)
//    {
//        TestData dataClass = new TestData();
//        int add2 = dataClass.Add(45, 34, 67);
//        int add1 = dataClass.Add(23, 34);
//    }
//}


// b. Operator Overloading
//    i) Unary Operator Overloading

// C# program to illustrate the
// unary operator overloading
//using System;
//class Calculator
//{

//    public int number1, number2;
//    public Calculator(int num1, int num2)
//    {
//        number1 = num1;
//        number2 = num2;
//    }
//    public static Calculator operator -(Calculator c1)
//    {
//        c1.number1 = -c1.number1;
//        c1.number2 = -c1.number2;
//        return c1;
//    }
//    public void Print()
//    {
//        Console.WriteLine("Number1 = " + number1);
//        Console.WriteLine("Number2 = " + number2);
//    }
//}
//class EntryPoint
//{
//    static void Main(String[] args)
//    {
//        Calculator calc = new Calculator(15, -25);
//        calc = -calc;
//        calc.Print();
//    }
//}


// b. Operator Overloading
//    ii) Binary Operator Overloading
//using System;
//class Calculator
//{
//    public int number = 0;
//    public Calculator() { }
//    public Calculator(int n)
//    {
//        number = n;
//    }
//    public static Calculator operator +(Calculator Calc1, Calculator Calc2)
//    {
//        Calculator Calc3 = new Calculator(0);
//        Calc3.number = Calc2.number + Calc1.number;
//        return Calc3;
//    }
//    public void display()
//    {
//        Console.WriteLine("{0}", number);
//    }
//}

//class CalNum
//{
//    static void Main(string[] args)
//    {
//        Calculator num1 = new Calculator(200);
//        Calculator num2 = new Calculator(40);
//        Calculator num3 = new Calculator();
//        num3 = num1 + num2;
//        num1.display(); // Displays 200
//        num2.display(); // Displays 40
//        num3.display(); // Displays 240
//    }
//}



// 2. Dynamic / Runtime Polymorphism
// a. Virtual/ Overriding Method
//    i) Without using 'virtual' and 'override' modifiers
//using System;
//class baseClass

//{
//    public void show()
//    {
//        Console.WriteLine("Base class");
//    }
//}
//class derived : baseClass
//{

//    new public void show()
//    {
//        Console.WriteLine("Derived class");
//    }
//}
//class GFG
//{
//    public static void Main()
//    {
//        baseClass obj = new baseClass();
//        obj.show();
//        obj = new derived();
//        obj.show();
//    }
//}

//// Output: 
//// Base class
//// Base class


// i) Method overriding using virtual and override modifiers.
using System;
using System.Runtime.Intrinsics.X86;
class baseClass
{
    public virtual void show()
    {
        Console.WriteLine("Base class");
    }
}
class derived : baseClass
{
    public override void show()
    {
        base.show();
        Console.WriteLine("Derived class");
    }
}

class GFG
{
    public static void Main()
    {
        baseClass obj;
        obj = new baseClass();
        obj.show();
        obj = new derived();
        obj.show();
    }
}

// Output: 
// Base class
// Derived class

// In C# we can use 3 types of keywords for Method Overriding:

// 1. virtual keyword: This modifier or keyword use within base class method. It is used to modify a method in base class for overridden that particular method in the derived class.
// 2. override keyword: This modifier or keyword use with derived class method. It is used to modify a virtual or abstract method into derived class which presents in base class.
// 3. base keyword: 
// a. Call methods or functions of base class from derived class.
// b. Call constructor internally of base class at the time of inheritance.