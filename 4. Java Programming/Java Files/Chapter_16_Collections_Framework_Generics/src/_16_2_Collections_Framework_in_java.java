/*
Collection - Any group of individual objects which are represented as a single unit is known as a collection of objects.
             In Java, a separate framework named the “Collection Framework” has been defined in JDK 1.2 which holds
             all the collection classes and interface in it. In Java, Collection interface (java.util.Collection)
             and Map interface (java.util.Map) are the two main “root” interfaces of Java collection classes.

Note: Collection is a interface in java. java.util package (utility package) contains.

Some commonly used collections in java:
1. ArrayList - For variable size collection
2. Set - For distinct collection
3. Stack - LIFO(Last in first out) data structure.
4. HashMap - For storing key-value pairs.

Framework - A framework is a set of classes and interfaces which provide a ready-made architecture. In order to implement a new feature or a class,
            there is no need to define a framework. However, an optimal object-oriented design always includes a framework with a collection of
            classes such that all the classes perform the same kind of task.

Hierarchy of collections framework:
                            Iterable (Interface)
                                     |
                            Collection (Interface)
1. List (Interface)                 2.A Queue(Interface)             3.A Set(Interface)
    1.1 ArrayList(class)              2.A.1 PriorityQueue(class)    3.1 HashSet(class)
    1.2 LinkedList(class) ____      2.B Deque(Interface)             3.2 LinkedHashSet(class)
    1.3 Vector(class)         |--->   2.B.1 ArrayDeque(class)            3.B SortedSet(Interface)
            |                                                           3.B.1 TreeSet(class)
        1.3.1 Stack(class)

Advantages of the Collection Framework -
1. Consistent API: The API has a basic set of interfaces like Collection, Set, List, or Map, all the classes
   (ArrayList, LinkedList, Vector, etc).
   that implement these interfaces have some common set of methods.
2. Reduces programming effort: A programmer doesn’t have to worry about the design of the Collection but rather he
   can focus on its best use in his program.
   Therefore, the basic concept of Object-oriented programming (i.e.) abstraction has been successfully implemented.
3. Increases program speed and quality:

Methods of the Collection Interface:
This interface contains various methods which can be directly used by all the collections which implement this interface.
Some of these methods are:
1. add(Object): This method is used to add an object to the collection.
2. addAll(Collection c): This method adds all the elements in the given collection to this collection.
3. clear(): This method removes all of the elements from this collection.
4. contains(Object o): This method returns true if the collection contains the specified element.
5. containsAll(Collection c): This method returns true if the collection contains all of the elements in the given
   collection.
6. equals(Object o): This method compares the specified object with this collection for equality.
7. hashCode(): This method is used to return the hash code value for this collection.
8. isEmpty(): This method returns true if this collection contains no elements.
9. iterator():	This method returns an iterator over the elements in this collection.
10. max(): This method is used to return the maximum value present in the collection.
11. remove(Object o): This method is used to remove the given object from the collection. If there are duplicate values,
                      then this method removes the first occurrence of the object.
12. removeAll(Collection c): This method is used to remove all the objects mentioned in the given collection from the collection.
13. retainAll(Collection c): This method is used to retain only the elements in this collection that are contained in the specified collection.
14. size(): This method is used to return the number of elements in the collection.
15. toArray(): This method is used to return an array containing all of the elements in this collection.


NOTE: Iterable is the root interface for the entire collection framework. The collection interface extends the iterable
      interface. Therefore, inherently, all the interfaces and classes implement Iterable interface. The main functionality
      of Iterable interface is to provide an iterator for the collections. Therefore, this interface contains only one
      abstract method which is the iterator. It returns the

      Iterator iterator();
*/
