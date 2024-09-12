interface sampleInterface
{
	void method1();
	void method2();
}

// An interface can extends(inherit) an interface but do not implement the interface.
// Any class cannot extends an interface it can only implement that interface.
interface childInterface extends sampleInterface
{
	void method3();
	void method4();
}

class ImplemetingInterfaces implements childInterface
{
//	All the methods must be implemented including inherited interface's methods.  
	public void method1()
	{
		System.out.println("I am method1");
	}
	public void method2()
	{
		System.out.println("I am method2");
	}
	public void method3()
	{
		System.out.println("I am method1 ");
	}
	public void method4()
	{
		System.out.println("I am method2");
	}
}

public class _12_4_Inheritance_in_interfaces {
	public static void main(String[] args) {
		ImplemetingInterfaces obj1 = new ImplemetingInterfaces();
		obj1.method3();
		obj1.method4();
	}

}



