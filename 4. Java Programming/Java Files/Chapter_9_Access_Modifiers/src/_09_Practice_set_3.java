// Q. Overload a constructor used to initialize a rectangle of length 4 and breadth 5 for using custom parameters.
class Rectangle
{
    float length;
    float breadth;
    public Rectangle(int l, int b)
    {
        length  = l;
        breadth = b;
    }
    public Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    public void area()
    {
        System.out.println("The area of the rectangle: " + length * breadth);
    }
    
}
public class _09_Practice_set_3 {
    public static void main(String[] args) {
        Rectangle obj1 = new Rectangle(4.0f,5.0f);
        obj1.area();
        Rectangle obj2 = new Rectangle(2, 3);
        obj2.area();

    }
}
