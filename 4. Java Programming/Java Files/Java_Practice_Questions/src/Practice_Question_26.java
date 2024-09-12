/*
Problem Statement 26: Assume a table in mysql/oracle database, Write a JDBC program to insert multiple records in database
                      table using PreparedStatement interface.
*/

import java.sql.*;
import java.util.Scanner;
public class Practice_Question_26 {

    public static void main(String[] args)
    {
        try{
            String url = "jdbc:mysql://localhost:3306/ashish";
            String user = "root";
            String psw = "root";
            Class.forName("com.mysql.cj.jdbc.Driver");
            System.out.println("Driver Loaded");
            Connection con = DriverManager.getConnection(url, user, psw);
            String query = "insert into product values(?, ?, ?)";
            PreparedStatement pstmt = con.prepareStatement(query);
            String ch = null;
            int f = 0;
            Scanner sc = new Scanner(System.in);
            do
            {
                System.out.println("Enter product id ");
                int id = sc.nextInt();
                System.out.println("Enter product Name ");
                String name = sc.next();
                System.out.println("Enter product price ");
                double price = sc.nextDouble();

                pstmt.setInt(1, id);
                pstmt.setString(2, name);
                pstmt.setDouble(3, price);
                f = pstmt.executeUpdate();
                System.out.println("Do you want to continue press y: ");
                ch = sc.next();
            }
            while(ch.equalsIgnoreCase("y"));
            if(f > 0)
            {
                System.out.println("Insert operation done");
            }
            else
            {
                System.out.println("Not done");
            }
            sc.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        }


}
