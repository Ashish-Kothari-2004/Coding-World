// Q. Create a class Telephone with right() and left() and disconnect() method as abstract methods. Create another class SmartTelephone and demonstrate pholymorphism.

abstract class Telephone
{
	abstract void right();
	abstract void left();
	abstract void disconnect();
}
class SmartTelephone extends Telephone
{
	void right()
	{
		System.out.println("Right side");
	}
	void left()
	{
		System.out.println("Left side");
	}
	void disconnect()
	{
		System.out.println("Disconnecting Phone");
	}
	void connnect()
	{
		System.out.println("Connecting Phone");
	}
}

public class _12_Practice_set_3 {
		public static void main(String [] args)
		{
			Telephone obj1 = new SmartTelephone();
			obj1.right();
			obj1.left();
			obj1.disconnect();
//			obj1.connect();// It is not allowed 
			
			
		}
}













