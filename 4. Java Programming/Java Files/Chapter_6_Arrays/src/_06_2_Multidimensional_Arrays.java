/*
Multidimensional Arrays - A multidimensional array is an array of arrays. Multidimensional arrays are useful when
                          you want to store data as a tabular form, like a table with rows and columns.
*/


// 2D Arrays in java:
public class _06_2_Multidimensional_Arrays
{
    public static void main(String[] args)
    {
        int [][] flats = new int[2][3];
        flats[0][0] = 101;
        flats[0][1] = 102;
        flats[0][2] = 103;

        flats[1][0] = 201;
        flats[1][1] = 202;
        flats[1][2] = 203;

        for(int i = 0; i < flats.length;i++)
        {
            for(int j = 0; j < flats[0].length; j++)
            {
                System.out.println(flats[i][j]);
            }
        }
    }
}
