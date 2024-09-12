/*
Array in java - Java array is an object which contains elements of a similar data type. Additionally,
                The elements of an array are stored in a contiguous memory location.
                It is a data structure where we store similar elements.
                We can store only a fixed set of elements in a Java array.

Types of arrays in java
1. Single dimensional array
2. Multidimensional array

Three ways to declare arrays
 1. int [] marks; // Declaration
    marks = new int[5]; // Memory allocation 

 2. int [] marks = new int[5];// Declaration + Memory allocation

 3. int [] marks = {23, 34, 45, 67, 12}; // Declaration + initialization 

*/
public class _06_1_Arrays
{
    public static void main(String[] args)
    {
        // int [] marks = {23, 45, 56, 213 ,12};
        // System.out.println(marks.length);

        // float [] marks = {23.2f, 45.34f, 56.34f, 213.56f ,12.23f, 45.23f};
        // System.out.println(marks.length);

        String []students = {"Ashish", "Aditya", "Anuj", "Dhruv"};
        System.out.println(students.length);
        for(int i = 0; i < students.length; i++)
        {
            System.out.println(students[i]);
        }
        // Traversing array using  for-each loop
        for(String element: students)
        {
            System.out.println(element);
        }
    }
}