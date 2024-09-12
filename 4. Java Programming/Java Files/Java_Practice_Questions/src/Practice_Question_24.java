/*
Problem Statement 24: Write a java program to demonstrate parameter passing in Applet.

*/
import java.applet.Applet;
import java.awt.Graphics;
import java.util.StringTokenizer;

public class Practice_Question_24 extends Applet{
    private String message;
    private int fontSize;
    public void init()
    {
        message = getParameter("message");
        if (message == null)
        {
            message = "Hello, World!";
        }
        String fontSizeParam = getParameter("fontSize");
        if (fontSizeParam == null)
        {
            fontSize = 20;
        }
        else
        {
            try {
                fontSize = Integer.parseInt(fontSizeParam);
            }
            catch (NumberFormatException e) {
                fontSize = 20; // Use default if parsing fails
            }
        }
    }
    public void paint(Graphics g)
    {
        g.setFont(g.getFont().deriveFont((float) fontSize));
        g.drawString(message, 20, 50);
    }
}