/*
Jagged Array in java - If we are creating odd number of columns in a 2D array, it is known as a jagged array.
                       In other words, it is an array of arrays with different number of columns.
*/

// Jagged Array in java
public class _06_4_Jagged_Array
{
    public static void main(String[] args)
    {
        int[][] arr = new int[3][];
        arr[0] = new int[4];
        arr[1] = new int[2];
        arr[2] = new int[1];
        int count = 1;
        for (int i = 0; i < arr.length; i++)
        {
            for (int j = 0; j < arr[i].length; j++)
            {
                arr[i][j] = count++;
            }
        }
        for(int[] e: arr )// Printing the 2D array using a for each loop (enhanced for loop)
        {
            for (int i: e)
            {
                System.out.println(i);
            }
        }

    }
}
