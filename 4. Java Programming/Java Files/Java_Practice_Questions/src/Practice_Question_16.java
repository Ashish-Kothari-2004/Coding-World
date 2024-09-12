// Q. Write a java program to delete an element from an array.
import java.util.Scanner;
public class Practice_Question_16
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[] array = {1, 2, 3, 4, 5};
        System.out.println("Enter element for deletion: ");
        int elementToDelete = sc.nextInt();

        // Find the index of the element to delete
        int index = 0;
        for (int i = 0; i < array.length; i++)
        {
            if (array[i] == elementToDelete)
            {
                index = i;
                break;
            }
        }

        // Delete the element at the index
        deleteElement(array, index);
        // Print the updated array
        System.out.println("Updated array: ");
        for (int element : array) {
            System.out.print(element + " ");
        }
        System.out.println();
    }

    private static void deleteElement(int[] array, int index) {
        for (int i = index; i < array.length - 1; i++) {
            array[i] = array[i + 1];
        }
        // Reduce the size of the array by one
        array[array.length - 1] = 0;
    }
}
