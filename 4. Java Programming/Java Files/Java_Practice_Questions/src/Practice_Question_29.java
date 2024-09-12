/*
Problem Statement 29: Assume a table in mysql/oracle database, Write a JDBC program to perform following operation in
                      database table.
a.	Insert
b.	Update
c.	Delete

*/

import java.sql.*;
public class Practice_Question_29 {
    static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
    static final String DB_URL = "jdbc:mysql://localhost:3306/sanath";
    static final String USER = "root";
    static final String PASS = "happy";

    public static void main(String[] args)
    {
        Connection conn = null;
        Statement stmt = null;
        try
        {
            Class.forName(JDBC_DRIVER);
            System.out.println("Connecting to database...");
            conn = DriverManager.getConnection(DB_URL, USER, PASS);
            conn.setAutoCommit(false);
            stmt = conn.createStatement();
            // Insert
            String insertSql = "INSERT INTO employee (id, name, salary) VALUES (104, 'John', 50000)";
            stmt.addBatch(insertSql);
            // Update
            String updateSql = "UPDATE employee SET salary = 55000 WHERE id = 101";
            stmt.addBatch(updateSql);

            // Delete
            String deleteSql = "DELETE FROM employee WHERE id = 102";
            stmt.addBatch(deleteSql);
            int[] result = stmt.executeBatch();
            conn.commit();
            System.out.println("Rows affected for insert: " + result[0]);
            System.out.println("Rows affected for update: " + result[1]);
            System.out.println("Rows affected for delete: " + result[2]);
        }
        catch (SQLException se)
        {
            se.printStackTrace();
            try
            {
                if (conn != null)
                {
                    conn.rollback();
                }
            }
            catch (SQLException e)
            {
                e.printStackTrace();
            }
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
        finally
        {
            try
            {
                if (stmt != null) stmt.close();
                if (conn != null) {
                    conn.setAutoCommit(true);
                    conn.close();
                }
            }
            catch (SQLException se)
            {
                se.printStackTrace();
            }
        }
    }
}



