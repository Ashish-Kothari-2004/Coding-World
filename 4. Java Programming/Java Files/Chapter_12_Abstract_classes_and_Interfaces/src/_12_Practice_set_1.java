// Q. Write an abstract class Pen with method write() and refill() as abstract method. Use the Pen class to create a concrete class FountainPen with additional method changeNib();

abstract class Pen
{
	abstract void write();
	abstract void refill();
	void method()
	{
		System.out.println("I am abstract class method");
	}
}
class FountainPen extends Pen
{
	void write()
	{
		System.out.println("Writing with pen");
	}
	void refill()
	{
		System.out.println("Refilling the pen");
	}
	void changeNib()
	{
		System.out.println("Changing pen nib");
	}
}
public class _12_Practice_set_1 {

	public static void main(String[] args) {
		FountainPen obj1 = new FountainPen();
		obj1.write();
		obj1.refill();
		obj1.changeNib();
		
		System.out.println();
		
		Pen obj2 = new FountainPen();
		obj2.write();
		obj2.refill();
//		obj2.changeNib();// Not Allowed
		obj2.method();
	}

}
