/*
Problem Statement 17: Write a java program to print the names of all files and sub directory of specified directory.
Topic: File Handling

*/

import java.io.File;
public class Practice_Question_17 {
    public static void main(String[] args)
    {
        try{
            File directory = new File("D:\\Coding World\\Java Programming\\Java Files");
            if (directory.isDirectory())
            {
                File[] files = directory.listFiles();
                if (files != null)
                {
                    for (File file : files)
                    {
                        System.out.println(file.getName());
                    }
                }
                else
                {
                    System.out.println("The directory is empty.");
                }
            }
            else
            {
                System.out.println("Specified path is not a directory.");
            }
        }
        catch (Exception e)
        {
            System.out.println(e);
        }

    }
}