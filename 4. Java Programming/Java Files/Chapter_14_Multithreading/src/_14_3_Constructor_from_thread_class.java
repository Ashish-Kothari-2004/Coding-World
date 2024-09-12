/*
Life cycle of a Thread:
New
Runnable <- Non-Runnable (Blocked)
Running -> Non-Runnable (Blocked)
Terminated

Below is the commonly used constructor of Thread class....................
1) Thread() // Previously used
2) Thread(String name)
3) Thread(Runnable r) // Previously used
4) Thread(Runnable r, String r)

*/

class MyThread5 extends Thread
{
    MyThread5 (String name)
    {
         super(name);
    }
    public void run () 
   {
       int i = 0;
        while(i < 1000)
        {
            System.out.println("Thread is running");
            i++;
        }
    }
}

class MyThread6 implements Runnable{
    public void run()
   {
       int i = 1;
       while(i < 100)
       {
           System.out.println("Thread 2 is running");
           i++;
       }
   }
}

class _14_3_Constructor_from_thread_class
{
    public static void main(String[] args)
    {
//          2) Thread(String name)
//          Thread thr_obj1 = new Thread("Ashish Kothari");// Passing argument as name to Thread class constructor
//          System.out.println("The name of the thr_obj1 is : " + thr_obj1.getName());// Getting name of thread
//          System.out.println("The Id of the thr_obj1 is : " + thr_obj1.getId());// Getting id of thread

//        4) Thread(Runnable r)
           MyThread6 thr  = new MyThread6();
           Thread thr_obj2 = new Thread(thr, "Thread name is Thread6 ");
           System.out.println("The ID of the thr_obj2 is : " + thr_obj2.getId());
           System.out.println("The name of the thr_obj2 is : " + thr_obj2.getName());
    }
}








