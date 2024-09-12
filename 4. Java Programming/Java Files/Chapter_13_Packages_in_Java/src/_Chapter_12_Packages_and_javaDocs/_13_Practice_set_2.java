// Q. Use a built-in package in java to wirite a class which displays a message(by using sout) after taking input from the user.
package _Chapter_12_Packages_and_javaDocs;
import java.util.Scanner;
class Greeting {
    void greet() {
        Scanner input = new Scanner(System.in);
        String name = new String();
        System.out.println("Enter your name: ");
        name = input.nextLine();
        System.out.println("Hi ! " + name + " How are you ?");
    }
}
public class _13_Practice_set_2
{
    public static void main(String []args)
    {
        Greeting obj1 = new Greeting();
        obj1.greet();
    }
}
