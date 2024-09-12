// Q. Create a java class cylinder and use getter and setters to set its radius and height. Calculate the surface area and volume of the cylinder.

class Cylinder
{
    int radius;
    int height;
    public void setData(int r, int h)
    {
        radius = r;
        height = h;
    }
    public void getData()
    {
        System.out.println("radius of the cylinder: " + radius);
        System.out.println("Height of the cylinder: " + height);
    }
    public void volume()
    {
        System.out.println("Volume of the cylinder: "  + (3.14 * radius * radius * height));
    }
    public void surfaceArea()
    {
        System.out.println("Surface area of the cylinder: " + (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius));
    }

    
}

public class _09_Practice_set_2 {
    public static void main(String[] args) {
        Cylinder obj1 = new Cylinder();
        obj1.setData(2, 3);
        obj1.getData();
        obj1.surfaceArea();
        obj1.volume();
    }
}
