/* Random number generator in java using the Random Class.
1. First, import the class java.lang.Random.
2. Create an object of the Random class.
3. Invoke any of the following methods:
4. nextInt(int bound)
5. nextInt()
6. nextFloat()
7. nextDouble()
8. nextLong()
9. nextBoolean()

Note - The nextInt(int bound) method accepts a parameter bound (upper) that must be positive. It generates a random number in the range 0 to bound-1.

*/

// Rock paper scissor Game
import java.util.Scanner;
import java.util.Random;

public class Rock_paper_scissors {
    public static void main(String[] args) {
        // In Java, instance variables (member variables of a class) are automatically
        // assigned default values. For instance variables, the default value for int is
        // indeed 0. However, local variables, which are variables declared inside a
        // method or a block, do not receive default values automatically. They must be
        // explicitly initialized by the programmer before they are used.
        int result2 = 0;
        int result1 = 0;// Must be initialized in case of local variable(variable inside a method)
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            System.out.print("0. Rock\n1. Paper\n2. Scissor\nEnter your choice:");
            int choice = sc.nextInt();
            System.out.println("\n");
            switch (choice) {
                case 0 -> System.out.println("You: Rock");
                case 1 -> System.out.println("You: Paper");
                case 2 -> System.out.println("You: Scissorrs");
            }

            Random obj = new Random();
            int mychoice = obj.nextInt(3);
            switch (mychoice) {
                case 0 -> System.out.println("Me: Rock");
                case 1 -> System.out.println("Me: Paper");
                case 2 -> System.out.println("Me: Scissorrs");
            }
            System.out.println("\n");
            if (choice > mychoice) {
                result1++;
            } else {
                result2++;
            }
        }

        if (result1 > result2) {
            System.out.println("You are the winner of this Game !");
        } else {
            System.out.println("I am the winner of this Game !");
        }
        sc.close();
    }
}