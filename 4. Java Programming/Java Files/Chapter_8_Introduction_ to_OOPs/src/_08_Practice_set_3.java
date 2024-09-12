/* 
Q. Create a class square with a method to initialize its side, calculating area, perimeter etc.

 */
class square
{
    int side;
    public void getSide(int s)
    {
        side = s;
    }
    public float area()
    {
        return side * side;
    }
    public float perimeter()
    {
        return 4 * side;
    }

}

public class _08_Practice_set_3
{
    public static void main(String[] args) {
        square s1 = new square();
        s1.side = 10;
        System.out.println("The area of the square is : " + s1.area());
        System.out.println("The perimeter of the square is: "  +  s1.perimeter());
    }
}
