/*
FileReader class -> Java FileReader class is used to read data from the file. It returns data in byte format like
                      FileInputStream class. It is character-oriented class which is used for file handling in java.

Constructors of FileReader class:
FileReader(String file)	-> It gets filename in string. It opens the given file in read mode. If file doesn't exist,
                           it throws FileNotFoundException.
FileReader(File file) -> It gets filename in file instance. It opens the given file in read mode. If file doesn't exist,
                         it throws FileNotFoundException.
Methods of FileReader class
int read() -> It is used to return a character in ASCII form. It returns -1 at the end of file.
void close() -> It is used to close the FileReader class.

*/

import java.io.FileReader;
import java.io.FileNotFoundException;
import java.io.IOException;

public class _16_3_FileReader_class {
    public static void main(String[] args)
    {
        try
        {
//            File f = new File("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo3.txt");
//            FileReader f3 = new FileReader(f);

//          or
            FileReader f3 = new FileReader("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo3.txt");
            int i = 0;
            while((i = f3.read()) != -1)// read() method returns integer values
            {
                System.out.print((char)i);
            }
            f3.close();
        }

        //  FileNotFoundException is a subclass of IOException
        catch(FileNotFoundException e)
        {
            System.out.println("cannot read from a file");
            System.out.println(e);
        }
        catch (IOException e)
        {
            throw new RuntimeException(e);
        }

    }
}
