/*
Wrapper class - A Wrapper class in Java is a class whose object wraps or contains primitive data types.
                When we create an object to a wrapper class, it contains a field and in this field,
                we can store primitive data types. In other words, we can wrap a primitive value into
                a wrapper class object.

Need of Wrapper Classes: 
1. They convert primitive data types into objects. Objects are needed if we wish to modify the arguments passed
   into a method (because primitive types are passed by value).
2. The classes in java.util package handles only objects and hence wrapper classes help in this case also.
3. Data structures in the Collection framework, such as ArrayList and Vector, store only objects (reference types)
   and not primitive types.
4. An object is needed to support synchronization in multithreading.

Advantages of Wrapper Classes:
1. Collections allowed only object data.
2. On object data we can call multiple methods compareTo(), equals(), toString()
3. Cloning process only objects.
5. Object data allowed null values.
6. Serialization can allow only object data.

Primitive Data Types and their Corresponding Wrapper Class
Primitive Data Type                                 Wrapper Class
1. int      ->                                          Integer
2. char     ->                                          Character
3. float    ->                                          Float
4. double   ->                                          Double
5. boolean  ->                                          Boolean
6. byte     ->                                          Byte
7. long     ->                                          Long
8. short    ->                                          Short

*/

public class _12_7_Wrapper_class {
    public static void main(String[] args)
    {
            Float floatObj = 11.4f;
            float f = floatObj.floatValue();
            System.out.println("The value of f is : " + f);

            double d  = 23.55;
            Double doubleObj = d;
            double receiveValue = doubleObj.doubleValue();
            System.out.println(receiveValue);

            char ch = 'A';
            Character characterObj = Character.valueOf(ch);// It is also valid.
            System.out.println("The value of ch is : " + characterObj.charValue());

//            int i = 32;
//            Integer integerObj = new Integer(i);// it is deprecated now
//            System.out.println("The value of i is: " + integerObj.intValue());


            String str = "21";
             System.out.println("The value of 21+2 is: " +  (str + 2));// It will add 2 at the end of the string which is 212
            int num = Integer.parseInt(str);// Converting string to integer.
            System.out.println("The value of 21+2 is: "+   (num + 2));

    }
}







