/*
Thread - A thread is a lightweight subprocess, the smallest unit of processing. It is a separate path of execution.
Threads are independent. If there occurs exception in one thread, it doesn't affect other threads.
It uses a shared memory area.


Multithreading in java - Multithreading in Java is a process of executing multiple threads simultaneously.
A thread is a lightweight sub-process, the smallest unit of processing. Multiprocessing and multithreading,
both are used to achieve multitasking. Context-switching between the threads takes less time than process.
Java provides Thread class to achieve thread programming. Thread class provides constructors and methods to create
and perform operations on a thread. Thread class extends Object class and implements Runnable interface.

Advantages of Java Multithreading:
1) It doesn't block the user because threads are independent and you can perform multiple operations at the same time.
2) You can perform many operations together, so it saves time.
3) Threads are independent, so it doesn't affect other threads if an exception occurs in a single thread.

Creating a thread:
1. By extending the Thread class
2. By implementing the runnable interface.

*/


// 1. By extending the Thread class.
class MyThread1 extends Thread  {
@Override
public void run()
{
        int i = 0;
        while(i< 1000)
        {
               System.out.println("Thread 1 is running");
               System.out.println("I am happy");
               i++;
        }
}
}
class MyThread2 extends Thread
{
    @Override
    public void run()
    {
        int i = 0;
        while(i < 1000)
        {
            System.out.println("Thread 2 is running ");
            System.out.println("I am sad");
            i++;
        }
    }
}

class _14_Implementing_Thread_class
{
    public static void main(String[] args) {
        MyThread1 obj1 = new MyThread1();
        MyThread2 obj2 = new MyThread2();
        obj1.start();// Start method will automatically call run method
        obj2.start();// Start method will automatically call run method
        
    }
}
