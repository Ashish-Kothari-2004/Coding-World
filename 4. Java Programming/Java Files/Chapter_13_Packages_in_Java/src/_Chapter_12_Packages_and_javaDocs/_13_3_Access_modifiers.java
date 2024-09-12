/*
Access modifiers in java - 
Modifier	   Class        Package     Subclass     World
public  	      Y	          Y           Y	           Y
protected         Y	          Y	          Y	           N
no modifier       Y	          Y	          N	           N
private           Y	          N	          N	           N

*/
package _Chapter_12_Packages_and_javaDocs;
class _13_3_Access_modifiers
{
    public static void main(String[] args) 
    {
        Modifiers obj1 = new Modifiers();
        obj1.display();
        
        System.out.println(obj1.a);
        System.out.println(obj1.b);
//        System.out.println(obj1.c);// Can't access  c within the same package since it is private.
        System.out.println(obj1.d);
    }
}

class Modifiers
{
    public int a;
    protected int b;
    private int c;
    int d;
    void display()
    {
        a = 23;
        b = 2323;
        c = 89;
        d = 6767;
        // Can access within the same class
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
    }
}
