/*
Thread synchronization - Synchronization in Java is the capability to control the access of multiple threads
                         to any shared resource. Java Synchronization is better option where we want to
                         allow only one thread to access the shared resource.
*/

class Pattern
{
//    public void draw(char ch)// Without synchronized keyword
    synchronized public void draw(char ch) //Synchronized method is used to lock an object for any shared resource.
    {
    for (int i = 1; i <= 5; i++)
    {
        for(int j = i; j <= 5; j++)
        {
            System.out.print(ch);
        }
        System.out.println();
    }
}
}

class A extends Thread
{
        Pattern p;
        A(Pattern p)
        {
            this.p = p;
        }
        public void run()
        {
            p.draw('*');
        }
}

class B extends Thread
{
    Pattern p;
    B(Pattern p)
    {
        this.p = p;
    }
    public void run()
    {
        p.draw('#');
    }
}

public class _14_7_Thread_synchronization {
    public static void main(String []args)
    {
        Pattern p = new Pattern();
        A th1 = new A(p);
        B th2 = new B(p);

        th1.start();
        th2.start();

    }
}
