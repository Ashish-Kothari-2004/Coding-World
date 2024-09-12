// 2. By implementing Runnable interface
class MyThread3 implements Runnable
{
    public void run()
    {
        int i = 1;
        while(i < 1000)
        {
            System.out.println("Running Thread1.....");
            i++;
        }
    }
}

class MyThread4 implements Runnable
{
    public void run()
    {
        int i = 1;
        while(i < 1000)
        {
            System.out.println("Running Thread2......");
            i++;
        }
    }
}

class _14_2_Implementing_Runnable_interface {
            public static void main(String args[])
            {
                 MyThread1 obj1 = new MyThread1();
                 Thread thread_obj1 = new Thread(obj1);// Passing MyThread class object to Thread class constructor
                 thread_obj1.start();// Start method will automatically call run method
                 
                 MyThread2 obj2 = new MyThread2();
                 Thread thread_obj2 = new Thread(obj2);
                 thread_obj2.run();
            }
}
