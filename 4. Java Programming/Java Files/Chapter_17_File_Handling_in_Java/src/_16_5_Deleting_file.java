/*
Delete a File -> The next operation which we can perform on a file is "deleting a file". In order to delete a file,
                 we will use the delete() method of the file. We don't need to close the stream using the close()
                 method because for deleting a file, we neither use the FileWriter class nor the Scanner class.
*/

import java.io.File;
public class _16_5_Deleting_file {
    public static void main(String[] args)
    {
        File f5 = new File("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo5.txt");
        if(f5.delete())
        {
            System.out.println("File has been deleted successfully");
        }
        else
        {
            System.out.println("Unexpected error found in deletion of the file");
        }
    }
}
