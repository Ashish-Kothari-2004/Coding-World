/*
Q.11. Create a class person with a member variable name. Save it in a file called person.java.
 Create a class employee that will inherit the person class.
 The other data member of the employee class are annual salary(double),
 the year in which employee started to work, and the national insurance number.
 Employee class method : void updateSalary(int current_year). Your class should have the necessary constructors.
 Create another class TestEmployee containing a main method to fully test your class definition.
*/

import java.util.Scanner;
class person
{
    String name;
    person(String name)
    {
        this.name=name;
    }
}
class employee extends person
{
    double salary;
    int year;
    int nin;
    employee(String name,double salary,int year,int nin)
    {
        super(name);
        this.salary=salary;
        this.year=year;
        this.nin=nin;
    }
    void show()
    {
        System.out.println("Employee Name : "+name); System.out.println("Employee current salary : "+salary);
        System.out.println("Employee year of joining : "+year);
        System.out.println("Employee national insurance number : "+nin);
    }
    void updatesalary(int y)
    {
        int total=y-year;
        System.out.println("Total Experience : "+total);
        if(total>=10 && total<10)
        {
            salary=salary+500;
        }
        else if(total>=5 && total<10)
        {
            salary=salary+250;
        }
        else {
            salary=salary+100;
        }
        System.out.println("Salary according to experience : "+ salary);
    }
}
class TestEmployee
{
    public static void main(String[] args)
    {
        employee e1=new employee("Ashish",30000,2013,89230);
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter curent year : ");
        int YYYY=sc.nextInt(); e1.updatesalary(YYYY);
    }
}

