/*
Loops in java - The Java for loop is used to iterate a part of the program several times.
If the number of iteration is fixed, it is recommended to use for loop.

Types of loops in java:
1. for loop
2. for each loop(enhance for loop)
3. while loop
4. do while loop

*/

/*
for each loop or enhance for loop in java..............
     The Java for-each loop or enhanced for loop is introduced since J2SE 5.0.
     It provides an alternative approach to traverse the array or collection in Java.
     It is mainly used to traverse the array or collection elements.
     The advantage of the for-each loop is that it eliminates the possibility of bugs and makes the code more readable.
     It is known as the for-each loop because it traverses each element one by one.

Drawback of for each loop...............
    The drawback of the enhanced for loop is that it cannot traverse the elements in reverse order.
    Here, you do not have the option to skip any element because it does not work on an index basis.
    Moreover, you cannot traverse the odd or even elements only.
 */


 public class _05_1_Loops_in_java
{
    public static void main(String []args)
    {
        int []arr = new int[5];
         arr[0] = 1;
         arr[1] = 2;
         arr[2] = 3;
         arr[3] = 4;
         arr[4] = 5;
         for (int e: arr)// enhance for loop in java
         {
               System.out.println(e);
         }
    }
}

