/*
final class: When a class is declared with final keyword, it is called a final class.
             A final class cannot be extended(inherited).

There are two uses of a final class:
Usage 1: One is definitely to prevent inheritance, as final classes cannot be extended. For example,
         all Wrapper Classes like Integer, Float, etc. are final classes. We can not extend them.
Usage 2: The other use of final with classes is to create an immutable class like the predefined String class.
         One can not make a class immutable without making it final.
*/

final class FinalClass{
    int a = 123;
    static float n = 23;
    void display()
    {
        System.out.println("Final class method");
    }

}

// Throw error cannot inherit final class.
//class DerivedClass extends FinalClass{
//
//}

public class _10_7_final_class_in_java {
    public static void main(String[] args) {

    }
}

