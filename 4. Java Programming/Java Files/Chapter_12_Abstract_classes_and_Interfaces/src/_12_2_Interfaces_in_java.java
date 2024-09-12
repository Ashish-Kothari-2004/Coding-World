/*
Interfaces - The interface in Java is a mechanism to achieve abstraction. There can be only abstract methods in the Java interface, not the method body. It is used to achieve abstraction and multiple inheritance in Java. In other words, you can say that interfaces can have abstract methods and variables. It cannot have a method body. Java Interface also represents the IS-A relationship.

1. It is used to achieve total abstraction.
2. Since java does not support multiple inheritances in the case of class, by using an interface it can achieve multiple inheritances.
3. Any class can extend only 1 class but can any class implement infinite number of interface.
4. It is also used to achieve loose coupling.
5. Interfaces are used to implement abstraction.

So the question arises why use interfaces when we have abstract classes?
The reason is, abstract classes may contain non-final variables, whereas variables in the interface are final, public and static.

*/

interface bicycle
{
	int s = 232;
	void applyBreak(int decrement);// By default, public and abstract
	abstract void speedUp(int increament);
}

interface bike
{
	void bikeBreak();
	void bikeSpeed();
}

class AvonCycle implements bicycle, bike
{
	int s = 789;// Value of s will be override
	public void applyBreak(int decrement)
	{
		System.out.println("Value of s is: " + s);
		System.out.println("Applying break !!!!");
	}
	public void speedUp(int increament) {
		System.out.println("Speed Up !!!!!");
	}
	public void bikeBreak()
	{
		System.out.println("Appling break of bike ");
	}
	public void bikeSpeed()
	{
		System.out.println("Speed Up of bike");
	}
	public void horn()
	{
		System.out.println("Peeeeee ");
	}
}


public class _12_2_Interfaces_in_java {
	public static void main(String[] args) {
		AvonCycle obj1 = new AvonCycle();
		obj1.applyBreak(-23);
		obj1.speedUp(78);
		obj1.bikeBreak();
		obj1.bikeSpeed();
		obj1.horn();
		System.out.println(obj1.s);
//		obj1.s = 3334444;// You cannot modify the properties in interfaces as they are final.

				
//		We can create reference of interface but not the object.
		bicycle obj2 = new AvonCycle();
		obj2.applyBreak(-2);
		obj2.speedUp(23);
		
		
//		AvonCycle obj3 = new bicycle();// it is not allowed since reference must be interface.....
//		obj2.applyBreak(-2);
//		obj2.speedUp(23);
	}
}











