// Q7. Write a java program to create account with the instance variables accno, name, balance. Define four methods setdata(accno, name, balance),display(), withdraw(amt), deposit(amt).
import java.util.Scanner;
class Account
{
    int accountNo;
    String name;
    double balance;
    void setData(int accountNo, String name, double balance)
    {
        this.accountNo = accountNo;
        this.name = name;
        this.balance  = balance;

    }
    void display()
    {
        System.out.println("Account No: " + accountNo);
        System.out.println("Name : " + name);
        System.out.println("Balance: " + balance);
    }
    void withdraw()
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the ammount to want to withdraw: ");
        int am = sc.nextInt();
        if(am < 500)
        {
            System.out.println("Insufficient balance !!!!!!!!!");
        }
        else
        {
            balance  = balance - am;
            System.out.println("Cash withdrawed !!!");
            System.out.println("Current balance is: " + balance);
        }

    }
    void deposite ()
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the ammount to want to deposite: ");
        int am = sc.nextInt();
        balance  = balance + am;
        System.out.println("Cash deposited !!!");
        System.out.println("Current balance is: " + balance);

    }

}

public class Practice_Question_7
{
    public static void main(String []args)
    {
        Scanner sc  =new Scanner(System.in);
        Account ac = new Account();

        System.out.println("Enter account No: " );
        int aco = sc.nextInt();
        ac.accountNo = aco;

        System.out.println("Enter your name: ");
        String name = sc.next();
        ac.name = name;

        System.out.println("Enter your balance: ");
        double balance = sc.nextDouble();
        ac.balance = balance;

        ac.display();
        ac.deposite();
        ac.withdraw();
        ac.display();

    }


}