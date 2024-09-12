/*
Join() - The join() method in Java is provided by the java.lang.
       Thread class that permits one thread to wait until the other thread to finish its execution.
       Suppose th be the object the class Thread whose thread is doing its execution currently, then the th.join();
       statement ensures that th is finished before the program does the execution of the next statement.
       When there are more than one thread invoking the join() method, then it leads to overloading on the join()
       method that permits the developer or programmer to mention the waiting period. However,
       similar to the sleep() method in Java, the join() method is also dependent on the operating system for the timing,
       so we should not assume that the join() method waits equal to the time we mention in the parameters.

*/


/*
class MyThread7 extends Thread
{
    public void run()
    {
        for (int i = 1; i <= 10; i++)
        {
            try
            {
                Thread.sleep(1000);
            }
            catch(InterruptedException e)// InterruptedException is a checked exception
            {
                System.out.println(e);
            }
            System.out.println("MyThread7 is running");
        }
    }
}
class _14_4_Join_method {
    public static void main(String[] args) throws InterruptedException
    {
            MyThread7 th7 = new MyThread7();
            th7.start();
            th7.join();// It will Stop execution of current thread (main thread) and execute th7 thread until the execution of th7 is finished.
            for (int i = 1; i< 10; i++)
            {
                System.out.println("Main Thread");
            }
    }
}
*/



// Opposite........................
class MyThread8 extends Thread
{
    static Thread mt = null;
    public void run()
    {
            for (int i = 1; i <= 10; i++)
            {
                try
                {
                    mt.join();
                }
                catch (InterruptedException e)// InterruptedException is a checked exception
                {
                    System.out.println(e);
                }
                System.out.println("Thread8 is running");
            }

    }
}
class _14_4_Join_method {
    public static void main(String[] args) throws Exception
    {
        MyThread8 th8 = new MyThread8();
        MyThread8.mt = Thread.currentThread();
        th8.start();
        for (int i = 1; i< 10; i++)
        {
            try
            {
                Thread.sleep(1000);
            }
            catch (InterruptedException e)
            {
                System.out.println(e);
            }
            System.out.println("Main Thread");
        }
    }
}


