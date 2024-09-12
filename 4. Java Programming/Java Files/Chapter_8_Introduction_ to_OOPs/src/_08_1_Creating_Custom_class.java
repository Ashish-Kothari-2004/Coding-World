class Employee1
{
    int id;// These are attributes or instance variables
    String name;
    int salary;
    public void printDetails()
    {
        System.out.println("My name is : " + name);
        System.out.println("My id is : " + id);
    }
    public int inputSalary()
    {
        return salary;
    }
}

public class _08_1_Creating_Custom_class
{
    public static void main(String[] args)
    {
        Employee1 E1 = new Employee1();// Instantiating a new object
        
        // Setting attributes
        E1.id = 22041832;
        E1.name = "Ashish";

        // Printing the attributes
        System.out.println(E1.id);
        System.out.println(E1.name);
        System.out.println();

        Employee1 E2 = new Employee1();
        E2.name = "Kothari";
        E2.id = 17;
        E2.salary =  50000;
        E2.printDetails();

        int salary = E2.inputSalary();
        System.out.println("Salary of the employee is : " + salary);
    }
}