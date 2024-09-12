package java_practice_sets;
/*
Q. Create an abstract class shape having following abstract methods.
i). abstract void drawTriangle(int n); .This function will print the following pattern.
        *
      * * *
    * * * * *
  * * * * * * *

ii). abstract void drawInvertedTriangle(int n); .This will print the following pattern.
 * * * * * * *
   * * * * *
    * * *
      *

Now create a child DrawPattern which will provide the definition for its parent class.
Create a TestPattern class and test the functionality of your program.

*/

import java.util.Scanner;
abstract class shape
{
    abstract void drawtriangle(int n);
    abstract void drawinvertedtriangle(int n);
}

class drawpattern extends shape
{
    void drawtriangle(int n)
    {
        for(int i = 1;i <= n; i++)
        {
            for(int j = 1; j <= n - i; j++)
            {
                System.out.print(" ");
            }
            for(int k = 1; k <= 2 * i - 1; k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println();
    }

    void drawinvertedtriangle(int n)
    {
        for(int i = n; i >= 1; i--)
        {
            for(int j = 1; j <= n - i; j++)
            {
                System.out.print(" ");
            }
            for(int k = 1; k <= 2 * i - 1; k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println();
    }
}

class TestPattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        drawpattern d = new drawpattern();
        System.out.print("Enter size for triangle: ");
        int s = sc.nextInt();
        System.out.println("Triangle : ");
        d.drawtriangle(s);

        System.out.println("Inverted Triangle: ");
        System.out.println();
        d.drawinvertedtriangle(s);
    }
}

