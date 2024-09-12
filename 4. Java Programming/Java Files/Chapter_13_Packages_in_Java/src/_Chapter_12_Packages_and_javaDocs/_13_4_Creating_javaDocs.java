package _Chapter_12_Packages_and_javaDocs;
// Java documentation comment and Tags for documenting classes.
/**
    This class is to demonstrate what is java docs is and how it is used in the java industry.
    @author Ashish Kothari
    @since 2004
    @version 2.1
    @see <a href = "https://docs.oracle.com/en/java/javase/21/docs/api/index.html" target = "_blank" >Java 21 Documentation</a>

*/

// Note: javadoc comment is always write after the package name.
public class _13_4_Creating_javaDocs {
    int add(int a, int b)
    {
        return a + b;
    }

//   Tags for documenting methods
    /**
     This the main description of multiplication method
     @param a is the first number for multiplication
     @param b is the second number for multiplication
     @return Returns the multiplication of a and b
     @throws Exception if a or b is 0.
     @deprecated This method is deprecated use another method
     */

    static float multiply(float a, float b) throws Exception
    {
            if(a <= 0 || b <= 0)
            {
                throw new Exception();
            }
        return a * b;
    }

    public static void main(String[] args){
        _13_4_Creating_javaDocs obj = new _13_4_Creating_javaDocs();
        System.out.println("The sum of a and b is : " + obj.add(23, 2));
//        System.out.println("The result of multiplication of a and b is: " + multiply(3.23f, 2.23f));

    }
}
