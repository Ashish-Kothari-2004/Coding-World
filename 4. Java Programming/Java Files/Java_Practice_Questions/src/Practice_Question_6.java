// Q6. Write a Java program to implement single Inheritance.
class A2
{
    void f1()
    {
        System.out.println("Base Class.");
    }
}

class B extends A2
{
    void f2()
    {
        System.out.println("Derived Class.");
    }
}
public class Practice_Question_6
{
    public static void main(String[] args)
    {
        B obj = new B();
        obj.f1();
        obj.f2();
        A2 obj1 = new B();
    }
}
