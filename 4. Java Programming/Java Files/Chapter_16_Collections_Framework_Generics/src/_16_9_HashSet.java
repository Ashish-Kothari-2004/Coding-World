/*
HashSet - The HashSet class is an inherent implementation of the hash table data structure.
          The objects that we insert into the HashSet do not guarantee to be inserted in the same order.
          The objects are inserted based on their hashcode. This class also allows the insertion of NULL elements.

*/

import java.util.HashSet;
import java.util.Iterator;

public class _16_9_HashSet {
    public static void main(String[] args) {
        HashSet<String> hs = new HashSet<>();
        hs.add("ashish");
        hs.add("rohit");
        hs.add("akshay");
        hs.add("akshay");// Store only one akshay
        Iterator<String> itr = hs.iterator();
        while(itr.hasNext())
        {
            System.out.println(itr.next());
        }
        System.out.println(hs.contains("ashish"));
        System.out.println(hs.size());
        hs.remove("ashish");
        System.out.println(hs);
    }
}
