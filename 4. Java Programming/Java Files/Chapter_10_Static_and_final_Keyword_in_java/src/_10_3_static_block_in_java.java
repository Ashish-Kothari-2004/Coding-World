/*
Static Block: Java supports a special block, called a static block (also called static clause) that can be
              used for static initialization of a class. This code inside the static block is executed only once,
              the first time the class is loaded into memory by the (JVM). Static block is defined within a class using
              the static keyword followed by an open and close curly brace.

Some important points about static block in java.
1. Static block executes automatically when the class is loaded in memory.
2. Static block is executed only once.
3. Static blocks are executed in the order they appear in the class, from top to bottom. If there are multiple static blocks
   in a class, they will be executed in the order of declaration.
4. Static blocks are executed when the class is loaded, which might not necessarily coincide with the instantiation of the
   the class. It's important to understand the difference between class loading and object instantiation.
5. Static blocks is executed before constructors.

Can we print something on the console without creating main() method ?
        It is very important question from the interview’s perceptive point.
        The answer is yes we can print if we are using JDK version 1.6 or previous and if after that
        it will throw an. error.
*/ 

class Test {
    int a = 23;
    static int b = 11;
    Test()
    {
        System.out.println("Constructor is called!!");
    }
    static
    {
        System.out.println("Static block is called!!");
    }
}
public class _10_3_static_block_in_java {
    public static void main(String[] args) {

        System.out.println("main method is called !!");// This will execute before static block.

        System.out.println(Test.b);
        Test obj = new Test();
        System.out.println(obj.b);
      /*  static block will execute before these statements. Static block is executed only once when a class loaded
          into the memory. If the main method does not call Test.b or does not create object of Test class then static block
          will not execute since the Test class is not loaded into the memory.
      */


    }
}
