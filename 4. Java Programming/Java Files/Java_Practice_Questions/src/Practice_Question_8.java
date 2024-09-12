/* Q8. Write a program to create a class Electricity and calculate the bill based on the following conditions :
        If unit<100, bill=1.20*unit
        If unit<200, bill= (100*1.20)+(unit-100*2);
        If unit<300, bill=(100*1.20)+(unit-100*2)+(unit-200+3);
*/

import java.util.Scanner;
class Electricity
{
    double bill;
    void setUnit(int unit)
        {
            if(unit < 100)
            {
                this.bill = 1.20*unit;
            }
            else if (unit < 200)
            {
                this.bill  = (100 * 1.20)  + (unit - 100 * 2);
            }
            else if(unit < 300)
        {
            this.bill  = (100 * 1.20)  + (unit - 100 * 2) +( unit - 200 + 3);
        }
        else
        {
            System.out.println("Enter correct");
        }
    }
    void calculateBill()
    {
        System.out.println("Your electricity bill is : " + bill);
    }
}

public class Practice_Question_8
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter units: " );
        int unit = sc.nextInt();

        Electricity e1 =  new Electricity();
        e1.setUnit(unit);
        e1.calculateBill();

        System.out.println();
    }

}