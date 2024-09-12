// Q. Create a class a cellphone with method to print "ringing" , "vibration".....etc.
class CellPhone
{
    public void ringing()
    {
        System.out.println("Phone ringing !");
    }
    public void vibration()
    {
        System.out.println("Phone vibrating !");
    }
}

public class _08_Practice_set_2 {
    public static void main(String[] args) {
        CellPhone p1 = new CellPhone();
        p1.ringing();
        p1.vibration();
    }
}
