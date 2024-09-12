/*
Anonymous Array in java: An array in Java without any name is known as an anonymous array.
                         It is an array just for creating and using instantly. Using an anonymous array,
                         we can pass an array with user values without the referenced variable.
*/

public class _06_3_Anonymous_Array {
    static void printArray(int[] arr)
    {
        for(int i: arr)
        {
            System.out.println(i);
        }
    }
    public static void main(String [] args)
    {
        printArray(new int[]{2, 3, 54, 34 ,23});// Passing anonymous array to method.
    }
}
