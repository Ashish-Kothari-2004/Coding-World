/*
FileWriter - Java FileWriter class is used to write character-oriented data to a file. It is character-oriented class
             which is used for file handling in java.

Constructors of FileWriter class:
FileWriter(String file) -> Creates a new file. It gets file name in string.
FileWriter(File file) -> Creates a new file. It gets file name in File object.

Methods of FileWriter class:
void write(String text)	-> It is used to write the string into FileWriter.
void write(char c) -> It is used to write the char into FileWriter.
void write(char[] c) -> It is used to write char array into FileWriter.
void flush() -> It is used to flushes the data of FileWriter.
void close() -> It is used to close the FileWriter.

*/

import java.io.IOException;
import java.io.FileWriter;
public class _16_2_FileWriter_class {
    public static void main(String[] args)
    {
        try {
//            File f1 = new File("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo2.txt");
//            FileWriter f2 = new FileWriter(f1);

            // or
            FileWriter f2 = new FileWriter("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo2.txt");
            f2.write("Hi i am learning java");// Create file and write the content into the file.
            f2.write(" My name is Ashish");// New content will write in the same line.
            System.out.println("Content is successfully written......!");
            f2.close();
        }
        catch(IOException e)
        {
            System.out.println("Cannot write into a file");
            System.out.println(e);
        }
    }
}
