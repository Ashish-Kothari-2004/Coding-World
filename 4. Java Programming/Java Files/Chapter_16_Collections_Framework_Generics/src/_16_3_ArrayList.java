/*
ArrayList: ArrayList provides us with dynamic arrays in Java. Though, it may be slower than standard arrays but
           can be helpful in programs where lots of manipulation in the array is needed. The size of an ArrayList
           is increased automatically if the collection grows or shrinks if the objects are removed from the collection.
           Java ArrayList allows us to randomly access the list. ArrayList can not be used for primitive types, like int,
           char, etc. We will need a wrapper class for such cases.

*/

import java.util.*;
public class _16_3_ArrayList {
    public static void main(String[] args) {

        ArrayList<Integer> l1 = new ArrayList<Integer>();
        l1.add(23);// It will add element from starting in
        l1.add(43);
        l1.add(89);
        for (int i = 0; i< l1.size(); i++)
        {
            System.out.print(l1.get(i));
            System.out.print(", ");
        }
        System.out.println();


        ArrayList<Integer> l2 = new ArrayList<>(3);
        l2.add(2);
        l2.add(7);
        l2.add(7);
        l2.add(1, 16);// (index, element) -> It will add element at specified position
        l2.add(3, 81);
        for (int i = 0; i < l2.size(); i++)
        {
            System.out.print(l2.get(i));
            System.out.print(", ");
        }
        System.out.println();

        System.out.println(l2.contains(2));// true
        System.out.println("Index of 2 is: " + l2.indexOf(2));
        System.out.println("Index of 7 is: " + l2.indexOf(7));
        System.out.println("Last Index of 7 is: " + l2.lastIndexOf(7));
        l2.remove(2);
        System.out.println("After removing 2");
        System.out.println(l2);// Print whole Array list
        l2.set(2, 232);// It will delete the element at index 2 and set new value 232.
        System.out.println(l2);// Print whole Array list

        l2.clear();

    }
}
