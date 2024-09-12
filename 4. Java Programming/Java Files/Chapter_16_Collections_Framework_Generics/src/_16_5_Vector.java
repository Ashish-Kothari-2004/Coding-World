/*
Vector: A vector provides us with dynamic arrays in Java. Though, it may be slower than standard arrays but can be helpful
        in programs where lots of manipulation in the array is needed. This is identical to ArrayList in terms of
        implementation. However, the primary difference between a vector and an ArrayList is that a Vector is synchronized
        and an ArrayList is non-synchronized.

*/

import java.util.*;
public class _16_5_Vector {
    public static void main(String[] args) {
                Vector<Float> v = new Vector<Float>();
                // Appending new elements at the end of the list
                for (int i = 1; i <= 5; i++)

                    v.add(i*0.5f);

                // Printing elements
                System.out.println(v);

                // Remove element at index 3
                v.remove(3);

                // Displaying the Vector after deletion
                System.out.println(v);// Print whole vector

                // Printing elements one by one
                for (int i = 0; i < v.size(); i++)
                    System.out.print(v.get(i) + " ");

    }

}
