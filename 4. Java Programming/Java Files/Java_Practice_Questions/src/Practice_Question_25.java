/*
Problem Statement 25: Assume a table in mysql/oracle database, Write a JDBC program to insert data in database table using
                      Statement interface.
*/

import java.sql.*;
public class Practice_Question_25 {


    public static void main(String[] args)
    {
        try{
            String url = "jdbc:mysql://localhost:3306/ashish";
            String user = "root";
            String psw = "root";
            Class.forName ("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection(url,user,psw);
            String query = "insert into student values(102,'ashish',99)";
            Statement stmt = con.createStatement();
            stmt.executeUpdate(query);
            System.out.println("Data insert operation done");
            stmt.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }



    }
}
