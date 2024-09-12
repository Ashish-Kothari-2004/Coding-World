/*
Exception class - We can write our custom Exception using Exception class in java.
The Exception class has following important methods:
1. String toString() --> Executed when System.out.println() is run
2. void printStackTrace() --> Print stack trace
3. String getMessage()--> Prints the Exception message
*/
class MyException extends Exception {
    public String toString(){
        return "I am toString method";
    }
    public String getMessage()
    {
        return "I am getMessage method";
    }

}

public class _15_5_Exception_class_in_java {
    public static void main(String[] args) {
        int a = 23;
        if(a < 99)
        {
            try{
                throw new MyException();
            }
            catch(Exception e)
            {
                System.out.println(e);// invokes toString method in MyException class
                System.out.println(e.toString());// invokes toString method in MyException class
                System.out.println(e.getMessage());
                e.printStackTrace();
                System.out.println("Finished!!!!!!!!!!!!!!!!!!!!!!!!!!");
            }
        }
    }
}
