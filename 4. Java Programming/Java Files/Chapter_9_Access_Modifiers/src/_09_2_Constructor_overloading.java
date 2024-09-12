class MyEmployee2
{
    int id;
    String name;
    public MyEmployee2()
    {
        id = 17;
        name = "Ashish";
    }
    public MyEmployee2(int ID, String n)// constructor overloading
    {
        id = ID;
        name = n;
    }
    public void getData()
    {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
    }
}

public class _09_2_Constructor_overloading
{
    public static void main(String[] args) {
        MyEmployee2 obj1 = new MyEmployee2();
        obj1.getData();

        MyEmployee2 obj2 = new MyEmployee2(45, "Kothari");
        obj2.getData();

    }
}