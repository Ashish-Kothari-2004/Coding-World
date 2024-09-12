/*
Stack - Stack class models and implements the Stack data structure. The class is based on the basic principle of
        last-in-first-out. In addition to the basic push and pop operations, the class provides three more functions empty,
        search, and peek. The class can also be referred to as the subclass of Vector.
Methods of Stack class:
push(Object element)-> Pushes an element on the top of the stack.
pop()  -> Removes and returns the top element of the stack. An ‘EmptyStackException’
peek() -> Returns the element on the top of the stack, but does not remove it.
empty()-> It returns true if nothing is on the top of the stack. Else, returns false.
          An exception is thrown if we call pop() when the invoking stack is empty.
search(Object element)-> The method searches the specified object and returns the position of the object.

Note: Stack is a subclass of Vector and a legacy class. It is thread-safe which might be overhead in an environment
      where thread safety is not needed. An alternate to Stack is to use ArrayDequeue which is not thread-safe and has
      faster array implementation.
*/

import java.util.Iterator;
import java.util.Stack;
public class _16_6_Stack {
    public static void main(String[] args) {
        Stack<String> st = new Stack<>();
        st.push("Ashish");
        st.push("Karan");
        st.push("Rohit");

        System.out.println(st);// Print all the string in the stack
        Iterator<String> itr = st.iterator();
        while(itr.hasNext())
        {
            System.out.println(itr.next());
        }
        System.out.println();
        System.out.println(st.empty());
        System.out.println(st.peek());
        st.pop();
        System.out.println(st);
    }
}
