/*
Generics in java - The Java Generics programming is introduced in J2SE 5 to deal with type-safe objects.
                   It makes the code stable by detecting the bugs at compile time.  Before generics,
                   we can store any type of objects in the collection, i.e., non-generic. Now generic
                   force the java programmer to store a specific type of objects.

Advantage of Java Generics:
1. Type-safety - We can hold only a single type of objects in generics. It doesn't allow to store other objects.
2. Type casting is not required -  There is no need to typecast the object.
3. Compile-Time Checking - It is checked at compile time so problem will not occur at runtime. The good programming
   strategy says it is far better to handle the problem at compile time than runtime.

Types of Generics:
1. Generic Classes - A generic class is implemented exactly like a non-generic class. The only difference is that it
   contains a type parameter section. There can be more than one type of parameter, separated by a comma. The classes,
   which accept one or more parameters, are known as parameterized classes or parameterized types.

2. Generic Functions - We can also write generic functions that can be called with different types of arguments based
   on the type of arguments passed to the generic method. The compiler handles each method.

Type Parameters:
The type parameters naming conventions are important to learn generics thoroughly. The common type parameters are as follows:
T - Type
E - Element
K - Key
N - Number
V - Value

*/

class DemoGenerics <T>{
    T obj;// T is a String type which is a class type
    void setObject(T obj)
    {
        this.obj = obj;
    }
    T getObject(){
        return obj;
    }
}
public class _16_11_Generics_in_Java {
    public static void main(String[] args) {
        DemoGenerics <String> obj1 = new DemoGenerics<>();
        obj1.setObject("ashish");
        System.out.println(obj1.getObject());

        DemoGenerics <Integer> obj2 = new DemoGenerics<>();
        obj2.setObject(2333);
        System.out.println(obj2.getObject());

    }
}





