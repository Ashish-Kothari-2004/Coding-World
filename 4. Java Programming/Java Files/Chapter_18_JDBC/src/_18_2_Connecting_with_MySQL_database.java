/*
The java.sql package contains classes and interfaces for JDBC API. A list of popular interfaces of JDBC API are given below:
1. Driver interface
3. Connection interface
4. Statement interface
5. PreparedStatement interface
6. CallableStatement interface
7. ResultSet interface
8. ResultSetMetaData interface
9. DatabaseMetaData interface
10. RowSet interface

A list of popular classes of JDBC API are given below:
1. DriverManager class
2. Blob class
3. Clob class
4. Types class

There are 5 steps to connect any java application with the database using JDBC. These steps are as follows:
1. Register the Driver class: The forName() method of Class class is used to register the driver class. This method is used to
   dynamically load the driver class.
   eg. Class.forName("com.mysql.cj.jdbc.Driver");

2. Create connection: The getConnection() method of DriverManager class is used to establish connection with the database.
   eg. Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/employee", "username", "root");
   --> Here employee is a database name and root is a password
   --> MySQL command to show port number is: show variables where variable_name = 'port';

3. Create statement: The createStatement() method of Connection interface is used to create statement. The object of statement
   is responsible to execute queries with the database.
   eg.Statement stmt = con.createStatement();

4. Execute queries: The executeQuery() method of Statement interface is used to execute queries to the database. This method
   returns the object of ResultSet that can be used to get all the records of a table.
   eg. ResultSet rs = stmt.executeQuery("select * from emp");
       while(rs.next())
       {
           System.out.println(rs.getInt(1)+" "+rs.getString(2));
       }
5. Close connection: By closing connection object statement and ResultSet will be closed automatically. The close() method of
   Connection interface is used to close the connection.
   eg. con.close();
*/

import java.sql.*;
public class _18_2_Connecting_with_MySQL_database {
    private static final String url = "jdbc:mysql://localhost: 3306/ashish";// -> ashish is the database name which has been created in MySQL database.
    private static final String username = "root";
    private static final String psw = "root";
    public static void main(String[] args) {
        try {
//                 Register all drivers
                Class.forName("com.mysql.cj.jdbc.Driver");

//                 Creating connection
                Connection con = DriverManager.getConnection(url, username, psw);// jdbc: sub-protocol: sub-name

//                 Executing query
//                 executeQuery -> executeQuery is used to retrieve data from database.
//                 executeUpdate -> executeUpdate is used to insert, update and delete data from database.
                Statement stmt = con.createStatement();
                String query = "select * from employee";
                ResultSet rs = stmt.executeQuery(query);// ResultSet instance holds table
                while(rs.next())// --> rs.next checks next row exists or not in the table
                {
                    System.out.println(rs.getInt(1) + " " + rs.getString(2) + " " + rs.getString(3));
                }
        }
        catch(Exception e) {
            System.out.println(e);
        }
    }
}
