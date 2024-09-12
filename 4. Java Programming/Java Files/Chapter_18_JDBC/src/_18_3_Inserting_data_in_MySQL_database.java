import java.sql.*;
public class _18_3_Inserting_data_in_MySQL_database {
    private static final String url = "jdbc:mysql://localhost:3306/ashish";
    private static final String username = "root";
    private static final String psw = "root";

    public static void main(String[] args) {
        try {
//            Register all drivers
            Class.forName("com.mysql.cj.jdbc.Driver");

//            Creating connection
            Connection con = DriverManager.getConnection(url, username, psw);

//          Creating statement
            Statement stmt = con.createStatement();

            String query = String.format("insert into student values(22041832, 'ashish', 19)");
            int rowAffected = stmt.executeUpdate(query);
            if(rowAffected > 0)
            {
                System.out.println("Data successfully inserted........!!!!");
            }
            stmt.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }

    }
}
