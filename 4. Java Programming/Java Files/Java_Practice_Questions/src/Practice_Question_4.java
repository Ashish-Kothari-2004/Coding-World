// Q4. Write a java program to demonstrate method overloading.
class A1
{
    void sum(int x , int y )
    {
        System.out.println("Sum of two numbers is : "  + (x + y));
    }
      void sum(float x , float y )
    {
        System.out.println("Sum of two float numbers is : "+  (x + y));
    }
}
class PracticeSet4
{
    public static void main(String[] args) {
        A1 obj = new A1();
        obj.sum(2, 4);
        obj.sum(2.4f, 4.6f);
    }
}
