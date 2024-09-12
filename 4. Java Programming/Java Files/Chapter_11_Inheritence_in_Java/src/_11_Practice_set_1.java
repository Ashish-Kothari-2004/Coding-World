// Q. Create a class Circle and use inheritance to create another class Cylinder from it.

class Circle 
{
	float radius;
	Circle(int r)
	{
		this.radius = r;
	}
	public void area()
	{
		System.out.println("The are of circle is : " + Math.PI * radius * radius);
	}
	public void circumference()
	{
		System.out.println("The circumference of the circle is: " + 2 * Math.PI * radius);
	}
}


class Cylinder extends Circle
{
	float height;
	Cylinder(int r, int h)
	{
		super(r);
		this.height = h;
	}
	public void surfaceArea()
	{
		System.out.println("The surfaceArea of Cylinder is : " + ((2 * Math.PI * radius * radius) + (2 * Math.PI * radius) * height));
	}
	public void volume()
	{
		System.out.println("The volume of the Cylinder is: " + Math.PI * radius * radius * height);
	}
}
class _10_Practice_set_1 {

	public static void main(String[] args)
	{
		Cylinder cy = new Cylinder(3, 4);
		cy.area();
		cy.circumference();
		cy.surfaceArea();
		cy.volume();
	}

}
















