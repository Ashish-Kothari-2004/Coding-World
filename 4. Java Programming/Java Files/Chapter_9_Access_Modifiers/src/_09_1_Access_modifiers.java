/* 
Access modifiers - In Java, Access modifiers help to restrict the scope of a class, constructor, variable, method,
or data member. It provides security, accessibility, ect to the user depending upon the access modifier used
with the element.

There are four types of access modifiers available in Java:
1. Private
2. Default – No keyword required
3. Protected
4. Public

1. Private: The access level of a private modifier is only within the class. It cannot be accessed from outside the class.
2. Default: The access level of a default modifier is only within the package. It cannot be accessed from outside the package. If you do not specify any access level, it will be the default.
3. Protected: The access level of a protected modifier is within the package and outside the package through
              child class. If you do not make the child class, it cannot be accessed from outside the package.
4. Public: The access level of a public modifier is everywhere. It can be accessed from within the class,
           outside the class, within the package and outside the package.

*/

class MyEmployee1
{
    private int id;
    private String name;
    public void setId(int i)
    {
        id = i;
    }

    public void setName(String n)
    {
        name = n;
    }

    public void getId()
    {
        System.out.println("ID : " + id);
    }

    public void getName()
    {
        System.out.println("Name : " + name);
    }

}

public class _09_1_Access_modifiers {
    public static void main(String[] args) {
        MyEmployee1 e1 = new MyEmployee1();
        e1.setId(17);
        e1.setName("ashish");
        e1.getId();
        e1.getName();
    }
}
