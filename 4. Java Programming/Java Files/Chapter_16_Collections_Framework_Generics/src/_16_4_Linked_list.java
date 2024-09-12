/*
LinkedList - The LinkedList class is an implementation of the LinkedList data structure which is a linear
             data structure where the elements are not stored in contiguous locations and every element is a
             separate object with a data part and address part. The elements are linked using pointers and addresses.
             Each element is known as a node.
*/

import java.util.ArrayList;

public class _16_4_Linked_list {
    public static void main(String[] args) {
        ArrayList<Integer> l2 = new ArrayList<>();
        l2.add(23);
        l2.add(11);
        l2.add(1, 16);// (index, element) -> It will add element at specified position
        l2.add(3, 81);
        for (int i = 0; i < l2.size(); i++)
        {
            System.out.print(l2.get(i));
            System.out.print(", ");
        }
        System.out.println();


        // addAll() method in java
        ArrayList<Integer> l3 = new ArrayList<>();
        l3.add(5);
        l3.add(2);
        l3.add(3);
        l2.addAll(l3);
        for (int i = 0; i < l2.size(); i++)
        {
            System.out.print(l2.get(i));
            System.out.print(", ");
        }
        System.out.println();


        System.out.println(l3.contains(2));// true
        System.out.println("Index of 2 is: " + l3.indexOf(2));
        System.out.println("Index of 19 is: " + l2.indexOf(19));
        System.out.println("Last Index of 19 is: " + l2.lastIndexOf(19));
        l2.remove(5);
        l2.set(2, 232);
        for (int i = 0; i < l2.size();i++)
        {
            System.out.print(l2.get(i));
            System.out.print(", ");
        }
        l2.clear();

    }
}
