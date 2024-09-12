// Q. Create a Monkey class with jump() and bite() methods. Create a class Human which inherits this Monkey class and implements BasicAnimal interface with eat() and sleep() method. Demonstrate polymorphism using Monkey class.

class Monkey
{
	void jump()
	{
		System.out.println("Monkey jumping.......");
	}
	void bite()
	{
		System.out.println("Monkey biting.......");
	}
}
interface BasicAnimal
{
	void eat();// By default interface methods are public and abstract.
	void sleep();
}
class Human extends Monkey implements BasicAnimal
{
	public void eat()
	{
		System.out.println("Eating........");
	}
	public void sleep()
	{
		System.out.println("Sleeping........");
	}
	void speak()
	{
		System.out.println("Hello Sir !!!");
	}
	
}
public class _12_Practice_set_2 {

	public static void main(String[] args) {
		Human obj1 = new Human();
		obj1.jump();
		obj1.bite();
		obj1.eat();
		obj1.sleep();
		obj1.speak();
		
		Monkey obj2 = new Human();
		obj2.jump();
		obj2.bite();
		
	}

}
