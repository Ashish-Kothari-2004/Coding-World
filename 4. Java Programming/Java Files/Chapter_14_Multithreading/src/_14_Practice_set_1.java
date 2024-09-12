// Q. Demonstrate getPriority(), setPriority(), getState() methods in java.
class Thread14A extends Thread
{
    public void run()
    {
        int i = 1;
        while(i <= 200)
        {
            System.out.println("Thread14A is running");
            i++;
        }
    }
}

class Thread14B extends Thread
{
    public void run()
    {
        int i = 1;
        while(i <= 200)
        {
            System.out.println("Thread14B is running");
            i++;
        }
    }
}

public class _14_Practice_set_1 {
    public static void main(String [] args)
    {
        Thread14A th1 = new Thread14A();
        Thread14B th2 = new Thread14B();

      /*
        System.out.println(th1.getPriority());
        System.out.println(th2.getPriority());
        th1.setPriority(1);
        th2.setPriority(8);
        System.out.println(th1.getPriority());
        System.out.println(th2.getPriority());

      */
        System.out.println("State of th1 is : " + th1.getState());// NEW
        System.out.println("State of th2 is : " + th2.getState());// NEW

        th1.start();
        th2.start();

        System.out.println("State of th1 is : " + th1.getState());// RUNNABLE
        System.out.println("State os th2 is : " + th2.getState());// RUNNABLE
    }
}
