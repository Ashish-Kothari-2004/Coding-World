public class _07_2_Method_Overloading
{
    static void greet()
    {
        System.out.println("Good morning !");
    }

    static void greet(int a)
    {
        System.out.println(a + ".Good morning !");
    }

    static void greet(int a, int b)
    {
        System.out.println(a + ". Good morning !");
        System.out.println(b + ". Good morning !");
    }
    
    /*
     * static int greet(int a, int b)// Method overloading cannot be performed by
     * the changing the return type of methods. This will throw an error....
     * {
     *       System.out.println(a + ". Good morning !");
     *       System.out.println(b + ". Good morning !");
     * }
     * 
     */

    public static void main(String []args)
    {
        greet();
        greet(10);
        greet(20, 30);
    }



}
