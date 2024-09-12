/*
Inheritance in java:  Inheritance in Java is a mechanism in which one object acquires all the properties
and behaviors of a parent object. It is an important part of OOPs (Object-Oriented programming system).
The idea behind inheritance in Java is that you can create new classes that are built upon existing classes.
When you inherit from an existing class, you can reuse methods and fields of the parent class. Moreover,
you can add new methods and fields in your current class also.

NOTE:
	* Use extends keyword to inherit a base class
	* Java does not support multiple inheritance
*/


class Base
{
	int x;
	public void setX(int x)
	{
		this.x = x;
	}
	public int getX()
	{
		return x;
	}
	void commonMethod()
	{
		System.out.println("Common method in base class");
	}
}


class Derived extends Base
{
	int y;
	public void setY(int y)
	{
		this.y = y;
	}
	public int getY()
	{
		return y;
	}
	void commonMethod()
	{
		System.out.println("Common method in derived class");
	}
}


class _10_1_Inheritance
{

	public static void main(String[] args)
	{
//		Creating object of base class
		Base obj1 = new Base();
		obj1.setX(34);
		System.out.println(obj1.getX());
		
//		Creating object of derived class
		Derived obj2 = new Derived();
		obj2.setX(23);
		System.out.println(obj2.getX());
		obj2.setY(50);
		System.out.println(obj2.getY());

		Base obj3 = new Derived();
		obj3.commonMethod();//
	}

}

















