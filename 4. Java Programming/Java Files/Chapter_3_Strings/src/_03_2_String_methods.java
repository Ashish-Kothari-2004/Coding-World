/* String methods - 
* 1. name.length() - Returns length of the string name
* 2. name.toLowerCase() - Returns a new string which has all lowercase character.
* 3. name.toUpperCase() - Returns a new string which has all Uppercase character.
* 4. name.trim() -  Returns a new string after removing all the leading and trailing spaces from the original string.
* 5. name.substring(int start) - Returns a substring from the start to the end.
* 6. name.substring(int start, int end) - Returns a substring from the start index to the end index.
* 7. name.replace('Character', 'replaceWith' ) - Returns a new String after replacing 'character' with 'replaceWith'. 
* 8. name.startsWith("As") - Returns true if name starts with string "As".
* 9. endsWith("sh") - Returns true if name ends with string "sh".
* 10. name.charAt(index) - Returns a character at the index position.
* 11. name.indexOf(substring) - Returns the index of the first occurrence of the given string.
* 12. name.indexOf(substring, index) - Returns the index of the given string starting from the index 3(int)
* 13. name.lastIndexOf("character") - Returns the last index of the given string. 
* 14. name.lastIndexOf("character", 2) - Returns the last index of the given string before index 2.
* 15. name.equals("Ashish") - Returns true if the given string is equals to "Ashish" , false otherwise.[Case sensitive]
* 16. name.equalsIgnoreCase("Ashish") - Returns true if the given strings are equal ignoring the case of character.

*/

public class _03_2_String_methods
{
    public static void main(String[] args)
    {
        String name = "ashish";
        int len = name.length();
        System.out.println(len);

        name = name.toUpperCase();
        System.out.println(name);

        name = name.toLowerCase();
        System.out.println(name);

        name = "        Ashish Kothari        ";
        System.out.println(name);
        name = name.trim();
        System.out.println(name);

        name = "ashish";
        name = name.substring(2);
        System.out.println(name);

        name = "ASHISH";
        name = name.substring(2, 6);// Last index is excluded
        System.out.println(name);

        name = "ashish";
        name = name.replace('a', 'A');
        System.out.println(name);

        name = "Ashish";
        if (name.startsWith("As") == true)
        {
            System.out.println("String start with As");
        }
        else
        {
            System.out.println("String not start with As");
        }

        name = "Ashish";
        if (name.endsWith("sh") == true)
        {
            System.out.println("Ends with sh");
        }
        else
        {
            System.out.println("Not ends with sh");
        }

        name = "ashish";
        System.out.println(name.charAt(3));

        name = "Ashish";
        System.out.println(name.indexOf("sh"));
        // return the index of the first occurrence of the given substring, 1 in this case.

        name = "Ashish";
        System.out.println(name.indexOf("sh", 2));
        // return the index of the first occurrence of the given substring after the given index position.

        name = "Ashish";
        System.out.println(name.lastIndexOf('s'));
        // return the last occurrence of s which is 4 in this case.
        System.out.println(name.lastIndexOf('s', 2));
        // return the last occurrence of s before index 2 which is 1 in this case.


        name = "ASHISH";
        System.out.println(name.equals("ashish"));// return false
        System.out.println(name.equals("ASHISH"));// return true
        System.out.println(name.equalsIgnoreCase("ashish"));// return true
    }
}