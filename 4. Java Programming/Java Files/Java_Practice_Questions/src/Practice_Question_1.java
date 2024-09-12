// Q1. Write a java program to demonstrate parameterized constructor.
class Product
{
    int id ;
    String name;
    Product (int id , String name)
    {
        this.id = id;
        this.name = name;
    }
    void show()
    {
        System.out.println("ID of the product is : " + this.id);
        System.out.println("Name of the product is : " + this.name);
    }
}
public class Practice_Question_1
{
    public static void main(String [] args)
    {
            Product obj1 = new Product (23 , "Mouse");
            obj1.show();
    }
}