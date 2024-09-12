/*
Q. Create a class Rectangle and use inheritance to create another class Cuboid. Create two methods area()
	and volume().
*/

class Rectangle
{
	int height;
	int width;
	Rectangle(int h, int w)
	{
		height = h;
		width = w;
	}
	public int area()
	{
		return height * width;
	}
}
class Cuboid extends Rectangle
{
	int length;
	Cuboid(int h, int w, int l)
	{
		super(2, 3);
		length = l;
	}
	public int surfaceArea()
	{
		return 2 * (length * height+ height * width + width * length);
	}
	public int volume()
	{
		return length * width * height;
	}
}
class _10_Practice_set_2
{
	public static void main(String[] args)
	{
		Cuboid Cub = new Cuboid(2, 3, 4);
		System.out.println("The area of rectangle is: " + Cub.area());
		System.out.println("The area of surfaceArea of Cuboid is: " + Cub.surfaceArea());
		System.out.println("The volume of the cuboid is: " + Cub.volume());
	}

	
	
	
	
	
	
	
	
	
	
	
}
