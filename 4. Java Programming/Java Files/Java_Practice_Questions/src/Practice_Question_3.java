// Q3. Write a java program to calculate factorial of a number entered through command prompt.
class Factorial
{
    int fact(int n)
    {
        int f = 1;
        int i = 1;
        while(i <= n)
        {
          f = f * i;
          i++;
        }
    return f;
    }
}
class Practice_Question_3
{
    public static void main(String[] args)
    {
        int n = Integer.parseInt(args[0]);
        Factorial obj = new Factorial();
        System.out.println(obj.fact(n));
    }
}

