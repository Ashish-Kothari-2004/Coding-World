/*
Java Exception keywords - 1. try
                          2. catch
                          3. finally
                          4. throw
                          5. throws
                          6. assert
*/

public class _15_2_try_catch_in_java {
    public static void main(String [] args)
    {
        String str = null;
//        System.out.println(str.length());// Throw NullPointerException
        try{
            System.out.println(str.length());
        }
        catch(NullPointerException e)
        {
            System.out.println("Cannot invoke length method. Reason: ");
            System.out.println(e);
        }
        System.out.println("code executed successfully.............................");
    }
}
