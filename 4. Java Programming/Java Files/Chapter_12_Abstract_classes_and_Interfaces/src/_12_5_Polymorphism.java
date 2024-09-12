/* 
Polymorphism - Polymorphism is considered one of the important features of Object-Oriented Programming.
				Polymorphism allows us to perform a single action in different ways. In other words, polymorphism
				allows you to define one interface and have multiple implementations. The word “poly” means many
				and “morphs” means forms, So it means many forms.

1. Compile-time Polymorphism - It is also known as static polymorphism. This type of polymorphism is achieved by
	function overloading or operator overloading.
NOTE - But Java doesn't support operator overloading.

2. Runtime Polymorphism - It is also known as Dynamic Method Dispatch. It is a process in which a function call to
the overridden method is resolved at Runtime. This type of polymorphism is achieved by Method Overriding.
Method overriding, on the other hand, occurs when a derived class has a definition for one of the member functions
of the base class.

*/

interface camera1
{
	void method1();
	void method3();

}
class MyClass1 implements camera1
{
	public void method1()
	{
		System.out.println("Hello i am method1");
	}
	public void method3()
	{
		System.out.println("Hello i am method3");
	}
	void method2()
	{
		System.out.println("Hello i am method2");
	}
}

public class _12_5_Polymorphism {
	public static void main(String[] args){
		camera1 obj = new MyClass1();// MyClass() is a default constructor.
		obj.method1();
		obj.method3();
//		obj.method2();// Not allowed 
	}
}
