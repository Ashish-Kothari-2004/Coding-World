// Q. Prove that you cannot access default property but can access protected from the subclass.
package _Chapter_12_Packages_and_javaDocs;
class NewClass extends newJavaFile
{
    void display()
    {
        System.out.println(a);// public
        System.out.println(b);// default
        System.out.println(c);// protected
//        System.out.println(d);// private
    }
}

public class _13_Practice_set_4 {
    public static void main(String args[])
    {
           System.out.println("Creating class by importing user defined package");
           NewClass obj = new NewClass();
           obj.display();        
    }
}
