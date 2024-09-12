// Q5. Write a Java program to overload area method and calculate the area of following shapes. Dimensions should be entered through cmd.
//(i) Area of Circle.
//(ii) Area of Rectangle.
//(iii) Area of Triangle.
class Area
{
    void area(int r)
    {
        System.out.println("Area of Circle : "+(3.14*r*r));
    }
    void area(int l, int b)
    {
        System.out.println("Area of Rectangle : "+(l*b));
    }
    void area(float b, float h)
    {
        System.out.println("Area of Triangle : "+(0.5*b*h));
    }
}
class Test
{
    public static void main(String[] args)
    {
        Area obj = new Area();
        obj.area(Integer.parseInt(args[0]));
        obj.area(Integer.parseInt(args[0]),Integer.parseInt(args[1]));
        obj.area(Float.parseFloat(args[0]),Float.parseFloat(args[1]));
    }
}
