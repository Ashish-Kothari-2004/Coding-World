/*
TreeSet - The TreeSet class uses a Tree for storage. The ordering of the elements is maintained by a set using their
          natural ordering whether or not an explicit comparator is provided. This must be consistent with equals if
          it is to correctly implement the Set interface. It can also be ordered by a Comparator provided at a set creation
          time, depending on which constructor is used.
*/

import java.util.HashSet;
import java.util.Iterator;
import java.util.TreeSet;

public class _16_10_TreeSet {
    public static void main(String[] args) {
        TreeSet<Float> ts = new TreeSet<>();
        ts.add(23.4f);
        ts.add(345.4f);
        ts.add(2322.4f);
        ts.add(99.4f);
        System.out.println(ts);
        Iterator <Float> itr = ts.iterator();
        while(itr.hasNext())
        {
            System.out.println(itr.next());
        }
    }
}
