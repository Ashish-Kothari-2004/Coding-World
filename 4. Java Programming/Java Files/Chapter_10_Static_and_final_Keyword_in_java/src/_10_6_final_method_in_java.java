/*
final methods: When a method is declared with final keyword, it is called a final method.
               A final method cannot be overridden. The Object class does this—a number of its methods are final.
               We must declare methods with the final keyword for which we are required to follow the same
               implementation throughout all the derived classes.
*/

class FinalMethodClass{
    int a = 2;
    final void display()
    {
        System.out.println("The value of a is : " + a);
    }
}
class FinalDerive extends FinalMethodClass{
    int b = 3;
    // Throw error cannot override final method display()
//    void display()
//    {
//        System.out.println("The value of b is : " + b);
//    }

}
public class _10_6_final_method_in_java {
    public static void main(String[] args) {
        FinalClass obj1 = new FinalClass();
        obj1.display();
    }
}
