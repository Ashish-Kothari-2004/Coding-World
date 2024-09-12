/*
this -> In Java, ‘this’ is a reference variable that refers to the current object, or can be said “this”
		in Java is a keyword that refers to the current object instance. It can be used to call current class
		methods and fields, to pass an instance of the current class as a parameter, and to differentiate
	 	between the local and instance variables. Using “this” reference can improve code readability and reduce
		naming conflicts.
 
super() -> The super() in Java is a reference variable that is used to refer parent class constructors.
1. super can be used to refer immediate parent class instance variable.
2. super can be used to invoke immediate parent class method.
3. super() can be used to invoke immediate parent class constructor.

*/

class FirstClass
{
	int a;
	FirstClass()
	{
		System.out.println("I am a default constructor");
	}
	FirstClass(int a)
	{
		this();// Default constructor is invoked 
		this.a = a;
	}
	public void get()
	{
		System.out.println("The value of a is: " + a);
	}
}

class SecondClass extends FirstClass 
{
	int b;
	int a = 99999;
	SecondClass(int b)
	{
		super(b);// Parent class parameterised constructor is invoked  
		this.b = b;
		System.out.println("I am a constructor in SecondClass");
	}
	public void get()
	{
		super.get();// Refers to the base class get method
		System.out.println("The value of a is: " + super.a);// super.a refers to the base class a 
		System.out.println("The value of b is: " + b);
	}
}

class _10_3_this_and_super_keyword
{
	public static void main(String[] args) {
//		FirstClass obj1 = new FirstClass(12);
//		obj1.get();
		
		SecondClass obj2 = new SecondClass(45);
		obj2.get();
	}
}