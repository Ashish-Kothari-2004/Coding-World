/*
PrintWriter class -> Java PrintWriter class is the implementation of Writer class. It is used to print the formatted
                    representation of objects to the text-output stream.

Methods of PrintWriter class........................
void println(boolean x)	-> It is used to print the boolean value.
void println(char[] x)	-> It is used to print an array of characters.
void println(int x)	-> It is used to print an integer.
PrintWriter append(char c) -> It is used to append the specified character to the writer.
PrintWriter append(CharSequence ch) ->	It is used to append the specified character sequence to the writer.
PrintWriter append(CharSequence ch, int start, int end) -> It is used to append a subsequence of specified character to the writer.
boolean checkError() -> It is used to flushes the stream and check its error state.
protected void setError() -> It is used to indicate that an error occurs.
protected void clearError()	-> It is used to clear the error state of a stream.
PrintWriter format(String format, Object... args) -> It is used to write a formatted string to the writer using specified arguments and format string.
void print(Object obj) -> It is used to print an object.
void flush() -> It is used to flushes the stream.
void close() ->	It is used to close the stream.

*/


import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
public class _16_6_PrintWriter_class {
    public static void main(String[] args)
    {
        try
        {
            File f = new File("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo6.txt");
            PrintWriter pw = new PrintWriter(f);

            pw.println(23);
            pw.println(true);
            pw.println(23.3f);
            pw.println("Ashish");// Prints a String and then terminates the line.
            pw.write("End of this Demo6.txt file");// Writes a string.
            pw.close();
            System.out.println("Content written successfully...!!");
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}
