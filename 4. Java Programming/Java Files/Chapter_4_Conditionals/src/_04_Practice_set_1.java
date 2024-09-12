/* Q. What will be the output of the program:
   int a = 10;
   if(a = 11)
   {
       System.out.println("I am 11");
   }
   else
   {
      System.out.println("I am not 11");
   }
   Answer - Error
*/

public class _04_Practice_set_1 {
    public static void main(String[] args) {
        int a = 10;
        if(a == 11)
        {
            System.out.println("I am 11");
        }
        else
        {
            System.out.println("I am not 11");
        }
    }
}
