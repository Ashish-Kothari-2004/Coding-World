/*
Constructor in java - In Java, a constructor is a block of codes similar to the method.
					  It is called when an instance of the class is created. At the time of calling constructor,
					  memory for the object is allocated in the memory.
					  It is a special type of method which is used to initialize the object.
					  Every time an object is created using the new() keyword, at least one constructor is called.

Default Constructor - Like C++, Java automatically creates default constructor if there is no default
or parameterized constructor written by user, and (like C++) the default constructor automatically calls parent
default constructor. But unlike C++, default constructor in Java initializes member data variable to default values
(numeric values are initialized as 0, booleans are initialized as false and references are initialized as null).

Types of Java constructors....................................
	There are two types of constructors in Java:

	1. Default constructor (no-argument constructor)
	2. Parameterized constructor

*/

class Base1
{
	int x;
	Base1()
	{
		System.out.println("Base class constructor is called");
		 x = 23;
	}
	Base1(int a)
	{
		this.x = a;
		System.out.println("I am an overloaded constructor in base class");
	}
}

class Derived1 extends Base1
{
	int y;
	Derived1()
	{
		super(2);
		/* Parameterized constructor will be called in base class when super keyword is used inside
		 the derived class constructor */
		System.out.println("Derived class constructor is called");
		y = 45;
	}
	Derived1(int b)
	{
		super(78);
		this.y = b;
		System.out.println("I am an overloaded constructor in derived class");
	}
}

class ChildOfDerived extends Derived1
{
	int z;
	ChildOfDerived()
	{
		z = 78;
		System.out.println("I am a ChildOfDerived class constructor ");
	}
	public void getZ()
	{
		System.out.println("The value of z is: " + z);
	}
}
class _10_2_Constructor_in_inheritance
{
	public static void main(String[] args)
	{
//		Base1 obj1 = new Base1();
//		Derived1 obj2 = new Derived1();// First Base and then Derived class constructor will be called
//		Derived1 obj3 = new Derived1(23);
		
		ChildOfDerived ch = new ChildOfDerived();
		ch.getZ();
	}

}










