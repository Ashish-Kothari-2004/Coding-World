/*
Problem Statement 20: Write a java program to create file named as file1.txt. Ask a user to enter three digit number.
                      Write this 3 digit number in file1.txt using Scanner class. Now read  the content from file1.txt
                      and check whether the number is palindrome or not. If the number is palindrome then display in console.
 */

import java.io.File;
import java.io.PrintWriter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.Scanner;
public class Practice_Question_20 {
    public static void main(String[] args)
    {
        WriteNumber();
        checkPalindrome();
    }
    private static void WriteNumber() {
        try {
            File file = new File("D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file1.txt");
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter a three-digit number: ");
            int number = scanner.nextInt();
            PrintWriter writer = new PrintWriter(file);
            writer.println(number);

            writer.close();
            System.out.println("Number written to file1.txt successfully.");
        }
        catch (IOException e)
        {
            e.printStackTrace();
        }
    }

    private static void checkPalindrome() {
        try {
            File file = new File("D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file1.txt");
            BufferedReader reader = new BufferedReader(new FileReader(file));
            String content = reader.readLine();
            reader.close();
            if (isPalindrome(content)) {
                System.out.println("The number " + content + " is a palindrome.");
            } else {
                System.out.println("The number " + content + " is not a palindrome.");
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static boolean isPalindrome(String str) {
        String reversed = new StringBuilder(str).reverse().toString();
        return str.equals(reversed);
    }

}

