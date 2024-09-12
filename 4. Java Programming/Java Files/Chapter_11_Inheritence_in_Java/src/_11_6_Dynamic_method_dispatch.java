/*
Runtime polymorphism or dynamic method dispatch - Runtime polymorphism or Dynamic Method Dispatch is a process in
which a call to an overridden method is resolved at runtime rather than compile-time.

*/

class Phone
{
	int a = 120;
	public void name()
	{
		System.out.println("I am a phone");
	}
	public void greet()
	{
		System.out.println("Good morning");
	}
}
class SmartPhone extends Phone
{
	int b = 789;
	public void name()
	{
		System.out.println("I am a smartphone");
	}
	public void music()
	{
		System.out.println("Playing music.......");
	}
}
class _10_5_Dynamic_method_dispatch
{
	public static void main(String[] args)
	{
//		Phone obj1 = new Phone();// Allowed
//		obj1.name();
//		SmartPhone obj2 = new SmartPhone();// Allowed
//		obj2.name();
		
//		SmartPhone obj3 = new Phone();// It is invalid 
		
		Phone obj3 = new SmartPhone();// Reference - Phone , Object of - SmartPhone.
		obj3.name();// Sub class name() will be called.
		obj3.greet();// greet() will be called in the base class.
//		obj3.music();// Not allowed
	}
}



















