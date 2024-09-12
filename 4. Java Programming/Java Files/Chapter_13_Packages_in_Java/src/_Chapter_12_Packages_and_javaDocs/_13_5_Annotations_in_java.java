// Annotations are used to provide supplemental information about a program. 
// Annotations start with ‘@’.
// Annotations do not change the action of a compiled program.
// Annotations help to associate metadata (information) to the program elements i.e. instance variables, constructors, methods, classes, etc.
// Annotations are not pure comments as they can change the way a program is treated by the compiler. See below code for example.
// Annotations basically are used to provide additional information, so could be an alternative to XML and Java marker interfaces.




package _Chapter_12_Packages_and_javaDocs;
@FunctionalInterface
interface f1{
      void add(int a , int b);
//    void multiply(int a, int b);// Only one method is allowed since it is a Functional interface which contains only one method.
}

class A
{
    int addition;
    int multiplication;
    void sum(int a, int b)
    {
        this.addition = a + b;
        System.out.println("The sum of a + b in the base class is: " + this.addition);
    }

    void multiplication(int a, int b)
    {
        this.multiplication = a * b;
        System.out.println("The sum of a * b int the base class is: " + this.multiplication);
    }
}

class B extends A
{
    @Override
//    void sim(int a, int b)// Override notations prevents us from spelling mistakes
    void sum(int a, int b)
    {
        this.addition = a + b;
        System.out.println("The sum of a + b in the Derived class is: " + this.addition);
    }
    @Deprecated
    void multiplication(int a, int b)
    {
        this.multiplication = a * b;
        System.out.println("The sum of a * b  in the Derived class is: " + this.multiplication);

    }
}

public class _13_5_Annotations_in_java
{
    public static void main(String[] args) {
        @SuppressWarnings("Deprecation")
        A obj1 = new A();
        obj1.sum(2,3 );
        obj1.multiplication(2, 1);

        B obj2 = new B();
        obj2.sum(3, 3);
        obj2.multiplication(6, 3);
    }
}
