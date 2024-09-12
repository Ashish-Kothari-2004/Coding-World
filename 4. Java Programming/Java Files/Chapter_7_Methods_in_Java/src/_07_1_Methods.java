public class _07_1_Methods
{
    // static int Logic(int x, int y) // can be call without creating an object.
    int Logic(int x, int y)// By creating an object the class.
    {
        int z;
        if(x > y)
        {
            z = (x + y)*2;
            return z;
        }
        else
        {
            z = (x + y);
            return z;
        }
    }
    public static void main(String[] args)
    {
        int a = 23;
        int b = 34;
        // int c = Logic(a, b);// Without creating an object 
        _07_1_Methods obj = new _07_1_Methods();// By creating an object of the class.
        int  c = obj.Logic(a, b);

        System.out.println(c);
    }
}
