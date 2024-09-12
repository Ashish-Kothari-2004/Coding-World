// Q. Calculate the average marks from an array containing marks of all students in physics using for-each loop.

public class _06_Practice_set_2
{
    public static void main(String[] args)
    {
        float [] marks = {98.2f, 78.2f, 73.2f, 90.8f};
        float sum = 0;
        for(float element: marks)
        {
            sum = sum + element;
           
        }
        System.out.println("Average marks is : " + sum/marks.length);
        
    }
}
