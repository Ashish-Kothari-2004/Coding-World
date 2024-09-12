// Q. Write a java program to find whether an array is sorted or not.

public class _06_Practice_set_4
{
    public static void main(String[] args)
    {
        // int[] arr = {23, 45, 765, 7, 34, 213, 132};
        int[] arr = {2, 5, 6, 13};
        boolean isSorted = true;
        for (int i = 0; i < arr.length - 1; i++) {
            if(arr[i]> arr[i+1])
            {
                isSorted = false;
                System.out.println("Array is not sorted");
                break;
            }
        }
        if(isSorted == true)
        {
            System.out.println("Array is sorted");
        }
    }
}
