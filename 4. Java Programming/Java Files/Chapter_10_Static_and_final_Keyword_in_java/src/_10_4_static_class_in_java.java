/*
static class: Java allows a class to be defined within another class. These are called Nested Classes.
              Classes can be static which most developers are aware of, henceforth some classes can be made static in Java.
              The class in which the nested class is defined is known as the Outer Class. Unlike top-level classes,
              Nested classes can be Static. Non-static nested classes are also known as Inner classes.
              An instance of an inner class cannot be created without an instance of the outer class.
              Therefore, an inner class instance can access all of the members of its outer class,
              without using a reference to the outer class instance. For this reason, inner classes can help make
              programs simple and concise.

Some important points about static class:
1. A static nested class may be instantiated without instantiating its outer class.
2. static class can access only the static members of the outer class.
3. static can be a inner class but not the Outer class.
4. Static inner classes can have their own static members, such as static fields and static methods.
5. Instance Members: While static inner classes do not have an implicit reference to an instance of the outer class,
   they can still access static and instance members of the outer class. However, to access instance members,
   they need an instance of the outer class.

*/

class OuterClass{
    int a = 12;
    static int b = 78;
    static class InnerClass{
        int c = 23;
        void display(OuterClass obj)
        {
            System.out.println("The value of static variable outside static inner class is: " + b);
            System.out.println("The value of non-static variable outside static inner class is: " + obj.a);
        }
    }
}

public class _10_4_static_class_in_java {
    public static void main(String [] args)
    {
        OuterClass obj1 = new OuterClass();
        OuterClass.InnerClass obj2 = new OuterClass.InnerClass();// We can create multiple object of static inner class.
        OuterClass.InnerClass obj3 = new OuterClass.InnerClass();//

//        Passing object of outer class to static inner class method.
        obj2.display(obj1);
    }
}
