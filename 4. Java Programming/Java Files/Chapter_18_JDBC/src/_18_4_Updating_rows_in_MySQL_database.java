import java.sql.*;
public class _18_4_Updating_rows_in_MySQL_database {
    private static final String url = "jdbc:mysql://localhost: 3306/ashish";
    private static final String username = "root";
    private static final String psw = "root";

    public static void main(String[] args) {
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection(url, username, psw);
            Statement stmt = con.createStatement();
            String query = "update student set name = 'ashish' where name = 'suraj'";
            int rowAffected = stmt.executeUpdate(query);
            if(rowAffected > 0)
            {
                System.out.println("Row updated successfully.......!!!");
            }
            stmt.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
