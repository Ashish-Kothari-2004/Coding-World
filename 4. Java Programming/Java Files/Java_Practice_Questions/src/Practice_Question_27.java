/*
Problem Statement 27: Assume a table in mysql/oracle database, Write a JDBC program to fetch a specific data from
                      database table using ResultSet absolute() method.
*/
// Not solved

import java.sql.*;
public class Practice_Question_27 {
    public static void main(String[] args) {
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            System.out.println("Drivers loaded....!!");

            String url = "jdbc:mysql://localhost:3306/ashish";
            String username = "root";
            String psw = "root";

            Connection con = DriverManager.getConnection(url, username, psw);
            System.out.println("Connecting to database...!!");

            String query = "select * from employee where id = ?";
            PreparedStatement stmt = stmt = con.prepareStatement(query);
            stmt.setInt(1, 51);

            ResultSet rs = stmt.executeQuery();

            boolean found = rs.absolute(1);
//            stmt.setInt(1, 103);
            if (found)
            {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                int salary = rs.getInt("salary");
                System.out.println("ID: " + id);
                System.out.println("Name: " + name);
                System.out.println("Salary: " + salary);
            }
            else
            {
                System.out.println("Row not found.");
            }
            rs.close();
            stmt.close();
            con.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }

    }
}
