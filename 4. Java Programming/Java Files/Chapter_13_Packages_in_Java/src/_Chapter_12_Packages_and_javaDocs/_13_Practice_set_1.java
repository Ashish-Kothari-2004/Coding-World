// Q.  Create three classes Calculator, ScCalculator and HybridCalculator and group them into a package. 
package _Chapter_12_Packages_and_javaDocs;
import java.util.Scanner;
class Calculator
{
        int length;
        int breadth;
        Calculator(int x , int y)
                        {
                            length= x;
                            breadth = y;
                        }
        void Area()
        {
            System.out.println("The area of the rectangle is : " + length*breadth);
        }
}

class ScCalculator
{
    int length;
    int breadth;
    void input()
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter length of the rectangle:  ");
        length = in.nextInt();
        
        System.out.println("Enter breadth of the rectangle: ");
        breadth = in.nextInt();
       
    }
    void Area ()
    {
        System.out.println("The are of the rectangle is : " + length  * breadth);
    }
}

class HybridCalculator
{
         int length;
         int breadth;
        void input()            
        {
            Scanner input = new Scanner(System.in);
            System.out.println("Enter length of the rectangle: ");
            length = input.nextInt();
            System.out.println("Enter breadth of the reactangle: ");
            breadth  = input.nextInt();
            input.close();// do not close Scanner class object earlier, It means you are closing input source such as System.in, FileInputStream 
        
         System.out.println("The are of the rectangle is : " +  length * breadth);
    }
}

class _13_Practice_set_1
{
    public static void main(String []args)
    {
        Calculator cl = new Calculator(2, 3);
        cl.Area();
        ScCalculator cal  = new ScCalculator();
        cal.input();
        cal.Area();
       HybridCalculator obj1 = new HybridCalculator();
       obj1.input();
    }
}
