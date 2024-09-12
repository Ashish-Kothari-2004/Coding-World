/*
ArrayDeque - ArrayDeque class which is implemented in the collection framework provides us with a way to apply
             resizable array. This is a special kind of array that grows and allows users to add or remove an element
             from both sides of the queue. Array deques have no capacity restrictions and they grow as necessary
             to support usage.
*/

import java.util.ArrayDeque;

public class _16_8_ArrayDeque {
    public static void main(String[] args) {
        ArrayDeque <Double> ad = new ArrayDeque<>();
        ad.add(23.32);
        ad.add(12.22);
        ad.add(90.11);
        System.out.println(ad);
        System.out.println(ad.getFirst());
        ad.offerFirst(11.11);// Inserts the specified element at the front of this deque.
        System.out.println(ad.peek());
        System.out.println(ad.poll());// Retrieves and removes the head of the queue represented by this deque.
        System.out.println(ad);
    }
}
