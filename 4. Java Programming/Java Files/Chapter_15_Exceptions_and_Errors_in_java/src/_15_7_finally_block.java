/*
Java finally block - Java finally block is always executed whether an exception is handled or not.
          Therefore, it contains all the necessary statements that need to be printed regardless
          of the exception occurs or not.


*/

public class _15_7_finally_block {
    public static int divide()
    {
        try {
            int a = 2;
            int b = 0;
            return a/b;// finally block will execute before return statement....
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
//      finally block is always executed whether an exception is handled or not.
        finally{
            System.out.println("End of divide method");
        }
        return -1;

    }
    public static void main(String [] args)
    {
        divide();
    }
}
