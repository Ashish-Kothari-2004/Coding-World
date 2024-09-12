/*
File class -> An abstract representation of file and directory pathnames. A pathname can be either absolute or relative.
              The File class have several methods for working with directories and files such as creating new directories or files,
              deleting and renaming directories or files, listing the contents of a directory etc.

Java File class methods:
1.	exists() -> Returns Boolean, The exists() method is used to check whether the specified file is present or not.
2.	mkdir()	-> Returns Boolean, The mkdir() method is used for creating a new directory.
3.  canRead() -> Returns Boolean, The canRead() method is used to check whether we can read the data of the file or not.
4.	canWrite() -> Returns Boolean, The canWrite() method is used to check whether we can write the data into the file or not.
5.	createNewFile()	-> Returns Boolean, The createNewFile() method is used to create a new empty file.
6.	getName() -> Returns String, The getName() method is used to find the file name.
7.	getAbsolutePath() -> Returns String, The getAbsolutePath() method is used to get the absolute pathname of the file.
8.	length -> Returns Long, The length() method is used to get the size of the file in bytes.
9.	list() -> Returns String[], The list() method is used to get an array of the files available in the directory.
10.	delete() -> Returns Boolean, The delete() method is used to delete a file.
11. renameTo() -> Returns Boolean, The renameTo method is used to rename a file.

*/

import java.io.File;
import java.io.IOException;

public class _16_1_Creating_a_file {
    public static void main(String[] args) {
        try
        {
            File f1 = new File("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo1.txt");
            if(f1.createNewFile())
            {
                System.out.println("File successfully created ..!");
            }
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}
