/*
Thread Priorities in java - Each thread has a priority. Priorities are represented by a number between 1 and 10.
In most cases, the thread scheduler schedules the threads according to their priority (known as preemptive scheduling).
But it is not guaranteed because it depends on JVM specification that which scheduling it chooses.
Note that not only JVM a Java programmer can also assign the priorities of a thread explicitly in a Java program.

Constants defined in Thread class:
public static int MIN_PRIORITY;
public static int NORM_PRIORITY;
public static int MAX_PRIORITY;

Min priority - 1
Normal priority - 5
Max priority - 10

NOTE: Priority is represented by a number between 1 and 10
*/

class MyThread9 extends Thread{
    MyThread9(String name){
        super(name);
    }
    @Override
    public void run() {
        for (int i = 1; i <= 10; i++)
        {
            System.out.println("Running method is " + this.getName());
        }
    }
}
public class _14_6_Thread_Priorities {
    public static void main(String []args)
    {
        MyThread9 th1 = new MyThread9("th1");
        MyThread9 th2 = new MyThread9("th2(With priority 8)");
        MyThread9 th3 = new MyThread9("th3(Most Important)");
        MyThread9 th4 = new MyThread9("th4");
        MyThread9 th5 = new MyThread9("th5(Least Important)");

        th3.start();
        th3.setPriority(Thread.MAX_PRIORITY);// Highest priority

        th1.start();
        th1.setPriority(Thread.NORM_PRIORITY);// It is equivalent to priotiry 5
        th2.start();
        th2.setPriority(8);
        th4.start();

        th5.start();
        th5.setPriority(Thread.MIN_PRIORITY);// Lowest priority

//        NOTE: Which Thread gets executed is highly dependent on the OS !!!!!!!!
    }
}
