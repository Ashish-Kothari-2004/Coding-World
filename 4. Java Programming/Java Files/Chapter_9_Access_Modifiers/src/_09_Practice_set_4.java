// Q. Create a java class sphere and use getter and setters to set its radius. Calculate the surface area and volume of the cylinder.
class Sphere
{
    float radius;
    void setData(float r)
    {
        radius = r;
    }
    void getData()
    {
        System.out.println("The radius of sphere is: " + radius + " meter square");
    }
    void surfaceArea()
    {
        System.out.println("The surface area of sphere is: " + (4 * 3.14 * radius * radius) + " square meter");
    }
    void volume()
    {
        System.out.println("The volume of the sphere is: " + (4 / 3 * 3.14 * radius * radius) + " cubic meter");
    }
}

public class _09_Practice_set_4
{
    public static void main(String[] args)
    {
        Sphere obj1 = new Sphere();
        obj1.setData(2);
        obj1.getData();
        obj1.surfaceArea();
        obj1.volume();
    }
}
