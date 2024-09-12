/*
Problem Statement 18: Write a java program to print only files name of a given directory.
*/

import java.io.File;
public class Practice_Question_18 {
    public static void main(String[] args) {
        try {
            int count = 0;
            File directory = new File("D:\\Coding World\\Java Programming\\Java Files");
            if (directory.isDirectory()) {
                File[] files = directory.listFiles();
                if (files != null) {
                    for (File file : files) {
                        if (file.isFile()) {
                            System.out.println(file.getName());
                            count++;
                        }
                    }
                    if (count == 0) {
                        System.out.println("No file exist in the specified directory...!!");
                    }
                }
                else {
                    System.out.println("The directory is empty.");
                }
            }
            else {
                System.out.println("Specified path is not a directory.");
            }
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
}
