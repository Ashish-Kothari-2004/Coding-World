/*
Priority Queue - A PriorityQueue is used when the objects are supposed to be processed based on priority.
                 It is known that a queue follows the First-In-First-Out algorithm, but sometimes the elements of
                 the queue are needed to be processed according to the priority and this class is used in these cases.
                 The PriorityQueue is based on the priority heap. The elements of the priority queue are ordered according to
                 the natural ordering, or by a Comparator provided at queue construction time, depending on which constructor is used.
*/

import java.util.PriorityQueue;

public class _16_7_PriorityQueue {
    public static void main(String[] args) {
        PriorityQueue <Integer>pQueue = new PriorityQueue<>();// Default capacity is 11
        pQueue.add(23);
        pQueue.add(22);
        pQueue.add(21);
        System.out.println(pQueue);// Printing all the element of Priority Queue.
        System.out.println(pQueue.peek());// Printing the top element.
        System.out.println(pQueue.poll());// Printing the top element and removing it from the PriorityQueue container.
        System.out.println(pQueue.peek());
        System.out.println(pQueue);
    }
}
