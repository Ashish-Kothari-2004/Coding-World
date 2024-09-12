// Q. Create a package in class with three package levels folder, folderl1, folderl2.
// It is done by using cmd, it will create sub packages inside levels package.
package _Chapter_12_Packages_and_javaDocs;
import java.util.Scanner;
class Greeting1 {
    void greet() {
        Scanner input = new Scanner(System.in);
        String name = new String();
        System.out.println("Enter your name: ");
        name = input.nextLine();
        System.out.println("Hi ! " + name + " How are you ?");
    }
}
public class _13_Practice_set_3 {
    public static void main(String args[])
    {
               System.out.println("Creating packages!!!!!!!!!");
    }
}
