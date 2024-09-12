/*
Problem Statement 21:  Write a java program to read content from file1.txt using BufferedReader class. Use Integer.parseInt()
method to convert character data into integer number and check that number is palindrome or not.
*/

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Practice_Question_21 {
    public static void main(String[] args)
    {
        String content = readFileContent();
        if (content != null) {
            try {
                int number = Integer.parseInt(content);
                if (isPalindrome(number)) {
                    System.out.println("The number " + number + " is a palindrome.");
                }
                else {
                    System.out.println("The number " + number + " is not a palindrome.");
                }
            }
            catch (NumberFormatException e) {
                System.out.println("Error: The content of file1.txt is not a valid integer.");
            }
        }
    }

    private static String readFileContent() {
        try {
            BufferedReader reader = new BufferedReader(new FileReader("D:\\Coding World\\Java Programming\\Java Files\\Java_Practice_Set\\src\\file1.txt"));
            String content = reader.readLine();
            reader.close();
            return content;
        }
        catch (IOException e) {
            System.out.println("Error reading file1.txt: " + e.getMessage());
            return null;
        }
    }

    private static boolean isPalindrome(int number) {
        int originalNumber = number;
        int reversedNumber = 0;

        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }
        return originalNumber == reversedNumber;
    }
}
