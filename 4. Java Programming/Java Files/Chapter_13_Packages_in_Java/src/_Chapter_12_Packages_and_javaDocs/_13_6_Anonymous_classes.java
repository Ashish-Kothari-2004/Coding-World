/*
Anonymous classes - It is an inner class without a name and for which only a single object is created. An anonymous inner
                    class can be useful when making an instance of an object with certain “extras” such as overriding methods of a class or interface, without having to actually subclass a class.

Difference between regular class(normal classes) and Anonymous Inner class: 
1. A normal class can implement any number of interfaces but the anonymous inner class can implement only one interface at a time.
2. A regular class can extend a class and implement any number of interfaces simultaneously. But anonymous Inner class can
   extend a class or can implement an interface but not both at a time.
3. For regular/normal class, we can write any number of constructors but we can’t write any constructor for anonymous Inner
   class because the anonymous class does not have any name and while defining constructor class name and constructor name
   must be same.

Based on declaration and behavior, there are 3 types of anonymous Inner classes:

1. Anonymous Inner class that extends a class
2. Anonymous Inner class that implements an interface
3. Anonymous Inner class that defines inside method/constructor argument

*/

package _Chapter_12_Packages_and_javaDocs;
class AnonyDemo {
    public void meth1()
    {
        System.out.println("Hi i am meth1 inside Normal class !!");
    }
}

abstract class Demo{
    abstract void demoMeth();
}

interface f2{
    void greeting();
}

public class _13_6_Anonymous_classes {
    public static void main(String[] args) {
        AnonyDemo obj = new AnonyDemo()
        {
            // Overriding of meth1 method
            public void meth1()
            {
                System.out.println("Hi i am meth1 inside Anonymous class !!");
            }
        };
        obj.meth1();


        // Anonymous class using abstract class
        Demo obj2 = new Demo() {
            @Override
            void demoMeth() {
                System.out.println("Hi i am demoMeth inside anonymous class");
            }
        };
        obj2.demoMeth();

        // Anonymous class using interface
        f2 obj3  = new f2() {
            @Override
            public void greeting() {
                System.out.println("Good Morning !!");
            }
        };
        obj3.greeting();

    }
}
