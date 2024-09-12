/*
Lambda Expressions: 
 Lambda expression is a new and important feature of Java which was included in Java SE 8. It provides a clear and concise way to represent one method interface (Functional interface) using an expression. It is very useful in collection library. It helps to iterate, filter and extract data from collection. The Lambda expression is used to provide the implementation of an interface which has functional interface. It saves a lot of code. In case of lambda expression, we don't need to define the method again for providing the implementation. Here, we just write the implementation code.
Java lambda expression is treated as a function, so compiler does not create .class file.

Why use Lambda Expression ?
1. To provide the implementation of Functional interface.
2. Less coding.

Functional Interface - Lambda expression provides implementation of functional interface. An interface which has only one
                       abstract method is called functional interface. Java provides an annotation @FunctionalInterface,
                       which is used to declare an interface as functional interface.
*/

package _Chapter_12_Packages_and_javaDocs;
@FunctionalInterface
interface f3{
    void funcMethod(int value);
}
public class _13_7_Lambda_Expressions {
    public static void main(String []args)
    {
        f3 obj = (value) ->
            {
                System.out.println("I am funcMethod in functional interface with value: " + value);
            };
        obj.funcMethod(23);
    }
}
