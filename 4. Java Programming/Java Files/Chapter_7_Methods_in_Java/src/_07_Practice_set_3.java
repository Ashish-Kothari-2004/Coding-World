// Q. Write a function to convert celsius temperature in fahrenheit.
import java.util.Scanner;
public class _07_Practice_set_3
{
    static float convert(float cel)
    {
        float fehrenheit = (cel * 1.8F) + 32.0F;
        return fehrenheit;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter temperature in celsius: ");
        float celsius = sc.nextFloat();
        System.out.println("Temperature in fahrenheit is: " + convert(celsius));
        sc.close();
    }
}
