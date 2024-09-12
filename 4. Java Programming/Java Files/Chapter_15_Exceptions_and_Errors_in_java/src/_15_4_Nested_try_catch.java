/*
Nested try catch in java -
*/

public class _15_4_Nested_try_catch {
    public static void main(String[] args) {
        try{
            int[] arr = {2, 3, 5, 6, 2};
            try
            {
                arr[6] = 2;
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                System.out.println("Exception occur!!!!");
                System.out.println(e);
            }
            try
            {
                int num = arr[3]/0;
            }
            catch(ArithmeticException e)
            {
                System.out.println("Exception occur!!!!");
                System.out.println(e);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        System.out.println("Code is executed without interrupt");

    }
}
