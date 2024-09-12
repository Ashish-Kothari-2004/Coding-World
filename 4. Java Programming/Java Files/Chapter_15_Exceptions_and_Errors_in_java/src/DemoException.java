public class DemoException {
    public static void main(String[] args) {
        try {
            int n = 20/0;
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }


    }
}
