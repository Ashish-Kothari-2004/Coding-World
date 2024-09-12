/* Abstract method - The abstract Method is used for creating blueprints for classes or interfaces. Here methods are defined but these methods don’t provide the implementation. Abstract Methods can only be implemented using subclasses or classes that implement the interfaces.

Abstract class - Java abstract class is a class that can not be initiated by itself, it needs to be sub classed by another class to use its properties. An abstract class is declared using the “abstract” keyword in its class definition.

*/

abstract class Parent
{
	int a;
	public void sayHello()
	{
		System.out.println("Hello !!");
	}
	abstract public void greet();// Method don’t provide the implementation.
}
class Child1 extends Parent
{
	int b;
	public void sayBye()
	{
		System.out.println("Bye !!");
	}
	public void greet()
	{
		System.out.println("Good morning");
	}
}

// If sub class does not provide implementation for the abstract method, then sub class must be declare as abstract class.
abstract class Child2 extends Parent
{
	int c;
	public void sayNothing()
	{
		System.out.println("Nothing");
	}
}
public class _12_1_Abstract_class_and_method {
	public static void main(String[] args) {
//		Parent p = new Parent();// throw error, it is not possible to create an object of a abstract class.
		Child1 ch = new Child1();
		ch.greet();
//		Child2 p = new Child2();// it is also a abstract class so object of the abstract class will not be created.
		
		ch.sayBye();
	}
}

