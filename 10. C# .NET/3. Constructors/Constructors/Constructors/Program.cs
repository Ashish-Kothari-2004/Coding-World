// Types of Constructor
// 1. Default Constructor
// 2. Parameterized Constructor
// 3. Copy Constructor
// 4. Private Constructor
// 5. Static Constructor


// 1. Default Constructor
//using System;
//class Geek
//{
//    int num;
//    string name;
//    Geek()
//    {
//        Console.WriteLine("Constructor Called");
//        num = 1;
//        name = "Ashish";
//    }
//    public static void Main()
//    {
//        Geek geek1 = new Geek();

//        Console.WriteLine(geek1.name);
//        Console.WriteLine(geek1.num);
//    }
//}


// 2. Parameterized Constructor
//using System;
//class Geek
//{
//    String name;
//    int id;
//    Geek(String name, int id)
//    {
//        this.name = name;
//        this.id = id;
//    }
//    public static void Main()
//    {
//        Geek geek1 = new Geek("GFG", 1);
//        Console.WriteLine("GeekName = " + geek1.name + " and GeekId = " + geek1.id);
//    }
//}


// 3. Copy constructor
//using System;
//class Geeks
//{
//    private string month;
//    private int year;
//    public Geeks(string month, int year)
//    {
//        this.month = month;
//        this.year = year;
//    }
//    public Geeks(Geeks s)
//    {
//        month = s.month;
//        year = s.year;
//    }
//    public string Details
//    {
//        get
//        {
//            return "Month: " + month.ToString() +
//                    "\nYear: " + year.ToString();
//        }
//    }
//    public static void Main()
//    {
//        Geeks g1 = new Geeks("June", 2018);
//        Geeks g2 = new Geeks(g1);
//        Console.WriteLine(g2.Details);
//    }
//}


// 4. Private constructor
//using System;
//public class Geeks {
//	private Geeks()
//	{
//	}
//	public static int count_geeks;
//	public static int geeks_Count()
//	{
//		return ++count_geeks;
//	}
//	public static void Main()
//	{
//		Geeks.count_geeks = 99;
//		Geeks.geeks_Count();
//		Console.WriteLine(Geeks.count_geeks);
//		Geeks.geeks_Count();
//		Console.WriteLine(Geeks.count_geeks);
//	}
//}



// 5. Static constructor
// a. It can’t be called directly.
// b. When it is executing then the user has no control.
// c. It does not take access modifiers or any parameters.
// d. It is called automatically to initialize the class before the first instance created.
// e. It is called only once, No matter how many object we have created.

using System;
class geeks
{
    static geeks()
    {
        Console.WriteLine("Static Constructor");
    }
    public geeks(int i)
    {
        Console.WriteLine("Instance Constructor " + i);
    }
    public string geeks_detail(string name, int id)
    {
        return "Name:" + name + " id:" + id;
    }
    public static void Main()
    {
        geeks obj = new geeks(1);
        Console.WriteLine(obj.geeks_detail("GFG", 1));

        geeks obj1 = new geeks(2);
        Console.WriteLine(obj1.geeks_detail("GeeksforGeeks", 2));
    }
}