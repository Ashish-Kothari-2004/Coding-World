/* Q. Write a java program to fill a letter template which looks like below:
    letter "Dear <|name|>", Thanks a lot     // <| this is noting but a pipe and less than symbol
    Replace <|name|> with string (someName)
*/

public class _03_Practice_set_3
{
    public static void main(String[] args) 
    {
        String name = "Hello <|name|> is learning java";
        name = name.replace("<|name|>", "Ashish");
        System.out.println(name);
    }
}
