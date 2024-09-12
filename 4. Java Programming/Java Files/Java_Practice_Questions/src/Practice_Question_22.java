/*
Problem Statement 22: Create two files named as file2.txt and file3.txt. Write character data in both files using
                      PrintWriter class. Now create one more file file4.txt, read the content of file2.txt and file3.txt
                      and merge the data of file2.txt and file3.txt into file4.txt.
*/

import java.io.*;
public class Practice_Question_22 {
    public static void main(String[] args) {
        writeToFile("D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file2.txt", "Hello how are you?");
        writeToFile("D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file3.txt", "What is your name?");
        mergeFiles("D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file2.txt", "D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file3.txt", "D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file4.txt");

    }

    private static void writeToFile(String fileName, String content) {
        try (PrintWriter writer = new PrintWriter(new FileWriter(fileName))) {
            writer.println(content);
        }
        catch (IOException e) {
            System.out.println(e);;
        }
    }
    private static void mergeFiles(String inputFile1, String inputFile2, String outputFile) {
        try (BufferedReader reader1 = new BufferedReader(new FileReader(inputFile1));
             BufferedReader reader2 = new BufferedReader(new FileReader(inputFile2));
             PrintWriter writer = new PrintWriter(new FileWriter(outputFile))) {

            String line;
            while ((line = reader1.readLine()) != null) {
                writer.println(line);
            }
            while ((line = reader2.readLine()) != null) {
                writer.println(line);
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("Files merged successfully.");
    }
}
