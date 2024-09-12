// Q. Overload the Employee constructor to initialize the salary to Rs 20000.
class Employee3
{
    int salary;
    public Employee3()
    {
        salary = 20000;
    }
    public Employee3(int s)
    {
        salary = s;
    }
    public void getData()
    {
        System.out.println("Salary: " + salary);
    }
}

public class _09_Practice_set_1 {
    public static void main(String [] args)    
    {
        Employee3 E1 = new Employee3();
        E1.getData();

        Employee3 E2 = new Employee3(20000);
        E2.getData();
        
        
    }
}
