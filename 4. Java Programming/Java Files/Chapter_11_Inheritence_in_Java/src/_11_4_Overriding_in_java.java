/*
In Java, Overriding is a feature that allows a subclass or child class to provide a specific implementation
of a method that is already provided by one of its super-classes or parent classes.
When a method in a subclass has the same name, the same parameters or signature,
and the same return type(or sub-type) as a method in its super-class,
then the method in the subclass is said to override the method in the super-class.

*/

// # Rules for method overriding: 
// 1. The access modifier for an overriding method can allow more, but not less, access than the overridden method
// For example, a protected instance method in the superclass can be made public, but not private, in the subclass.
// 2. Final methods, static methods and Private methods can not be overridden.
// 3. The overriding method must have the same return type (or subtype).

class A
{
	int a = 45;
	public void function()
	{
		System.out.println("Value of a is : " + a);
	}
}

class B extends A
{
	int b = 89;
	@Override// Override notation for function
	public void function()
	{
		System.out.println("Value of b is: " + b);
	}
}
class _10_4_Overriding_in_java
{
	public static void main(String[] args)
	{
		B obj = new B();
		obj.function();
	}
}
