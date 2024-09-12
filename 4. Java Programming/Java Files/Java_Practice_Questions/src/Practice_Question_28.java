/*
Problem Statement 28: Assume a table in mysql/oracle database, Write a JDBC program to fetch all the data from database
                      table using Statement interface.
*/
import java.sql.*;
public class Practice_Question_28 {
    static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
    static final String DB_URL = "jdbc:mysql://localhost:3306/sanath";
    static final String USER = "root";
    static final String PASS = "happy";

    public static void main(String[] args)
    {
        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;
        try
        {
            Class.forName(JDBC_DRIVER);
            System.out.println("Connecting to database...");
            conn = DriverManager.getConnection(DB_URL, USER, PASS);
            stmt = conn.createStatement();
            String sql = "SELECT * FROM employee";
            rs = stmt.executeQuery(sql);
            while (rs.next()) {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                int salary = rs.getInt("salary");
                System.out.println("ID: " + id);
                System.out.println("Name: " + name);
                System.out.println("Salary: " + salary);
                System.out.println("----------------------");
            }
        }
        catch (SQLException se)
        {
            se.printStackTrace();
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
        finally
        {
            try
            {
                if (rs != null) rs.close();
                if (stmt != null) stmt.close();
                if (conn != null) conn.close();
            }
            catch (SQLException se)
            {
                se.printStackTrace();
            }
        }
    }
}
