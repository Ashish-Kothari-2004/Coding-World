// Q.10 Write a java program to count the number of objects using static variable.
class A3
{
    static int c = 0;
    A3()
    {
        c++;
    }
    A3(int x)
    {
        c++;
    }
    A3(int x, int y)
    {
        c++;
    }
}
public class Practice_Question_10
{
    public static void main(String[] args)
    {
        A3 ob1=new A3();
        A3 ob2=new A3(2);
        A3 ob3 =new A3(2,3);
        System.out.println("Number of objects : "+ A3.c);
    }
}
