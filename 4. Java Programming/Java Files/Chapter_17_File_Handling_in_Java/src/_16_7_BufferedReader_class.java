/*
BufferedReader -> Java BufferedReader class is used to read the text from a character-based input stream.
                  It can be used to read data line by line by readLine() method. It makes the performance fast.
                  It inherits Reader class.

Java BufferedReader class methods...........
1. int read() -> It is used for reading a single character.
2. String readLine() -> It is used for reading a line of text.
3. int read(char[] cbuf, int off, int len)	-> It is used for reading characters into a portion of an array.
4. boolean markSupported()	-> It is used to test the input stream support for the mark and reset method.
5. boolean ready()	-> It is used to test whether the input stream is ready to be read.
6. long skip(long n) -> It is used for skipping the characters.
7. void reset() -> It repositions the stream at a position the mark method was last called on this input stream.
8. void mark(int readAheadLimit) -> It is used for marking the present position in a stream.
9. void close() -> It closes the input stream and releases any of the system resources associated with the stream.



Constructor	Description.......................
BufferedReader(Reader rd) -> It is used to create a buffered character input stream that uses the default size
                             for an input buffer.
BufferedReader(Reader rd, int size) -> It is used to create a buffered character input stream that uses the specified
                                       size for an input buffer.

Class Hierarchy in File Handling
                Object
                  |
                File
                /  \
 FileInputStream    FileOutputStream
 FileReader         FileWriter
  |    |              |    |
BufferedReader      BufferWriter
PrintWriter



*/
import java.io.File;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class _16_7_BufferedReader_class {
    public static void main(String[] args)
    {
        try {
            File f = new File("D:\\Coding World\\Java Programming\\Java Files\\Chapter_17_File_Handling_in_Java\\src\\Demo7.txt");
            FileReader fr = new FileReader(f);

            BufferedReader f7 = new BufferedReader(fr);
            String str;
            while((str = f7.readLine()) != null)
            {
                System.out.println(str);
            }
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}






