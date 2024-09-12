// Q9. Write a java program to implement method overriding.

class parent
{
    void m()
    {
        System.out.println("Parent class");
    }
}
class child extends parent
{
    void m()
    {
         System.out.println("child class");
    }
}

public class Practice_Question_9
{
    public static void main(String[] args)
    {
        parent ob1 = new parent();
        ob1.m();
        child ob2 = new child();
        ob2.m();
        parent ob3 = new child();
        ob3.m();
    }
}
