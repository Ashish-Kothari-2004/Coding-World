/*
Get File Information -> The operation is performed to get the file information. We use several methods to get the
                        information about the file like name, absolute path, is readable, is writable and length.
*/

import java.io.File;
import java.io.FileNotFoundException;

public class _16_4_Getting_file_information {
    public static void main(String[] args)
    {
            File f4 = new File("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo4.txt");
            if(f4.exists())
            {
                System.out.println("File exists..............");
                System.out.println("File name is : " + f4.getName());
                System.out.println("File absolute location is: " + f4.getAbsoluteFile());
                System.out.println("File is writable : " + f4.canWrite());
                System.out.println("File is readable : " + f4.canRead());
                System.out.println("Size of the file in bytes is : " + f4.length());
            }
            else
            {
                System.out.println("File doesn't exist..!");
            }
    }
}

