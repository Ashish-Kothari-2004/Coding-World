/* 
Q. Create a class Employee with the following properties and methods
1. salary(property)(int)
2. name (property)(String)
3. getSalary(method returning int)
4. getName (method returning string)
5. setName (method changing name)
*/

class Employee2
{
    int salary;
    String name;
    public int getSalary()
    {
        return salary;
    }
    public String getName()
    {
        return name;
    }
    public void setName(String n)
    {
        name = n;
    }
}

public class _08_Practice_set_1 {
    public static void main(String[] args)
    {
        Employee2 E1 = new Employee2();
        E1.salary = 23000;
        E1.name = "Ashish";

        System.out.println(E1.getSalary());
        System.out.println(E1.getName());

        E1.setName("Kothari");
        System.out.println(E1.getName());

    }
}
