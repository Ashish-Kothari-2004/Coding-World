/*
1. Autoboxing: The automatic conversion of primitive types to the object of their corresponding wrapper classes is
            known as autoboxing. For example – conversion of int to Integer, long to Long, double to Double, etc.

2. Unboxing: It is just the reverse process of autoboxing. Automatically converting an object of a wrapper class to
             its corresponding primitive type is known as unboxing. For example – conversion of Integer to int,
             Long to long, Double to double, etc.

*/

public class _12_8_Autoboxing_and_Unboxing {
    public static void main(String[] args) {
        int a = 23;
        Integer intObj = a;// Autoboxing conversion of primitive types to the object of their corresponding wrapper class.
        System.out.println("After autoboxing the value of intObj is: " + intObj.intValue());

        Float floatObj = 45.34f;
        float b = floatObj.floatValue();
        System.out.println("After unboxing the value of b is: " + b);

    }
}
