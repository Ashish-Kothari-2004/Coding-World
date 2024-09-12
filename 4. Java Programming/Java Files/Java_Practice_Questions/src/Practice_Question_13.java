/*
Q13. Write a program to create an interface “Circle_Functions” with
   the final instance variable as PI and radius. Declare two methods circumference() and
   area(). Now create a class “Circle” which implements interface “Circle_Functions”. Now
   create a Test class and test the functionality of “Circle”.
*/

interface circle_functions
{
    final double pi = 3.14;// Final variables are never inherited and never modified.
    final int radius = 4;
    void circumference();
    void area();
}
class Circle implements circle_functions
{
    public void circumference()
    {
        double cf = 2 * pi * radius;
        System.out.println("Circumference : "+ cf);
    }
    public void area()
    {
        double ar = pi * radius * radius;
        System.out.println("Area : "+ ar);
    }
}

public class Practice_Question_13
{
    public static void main(String[] args)
    {
        Circle obj = new Circle();
        obj.circumference();
        obj.area();
    }
}