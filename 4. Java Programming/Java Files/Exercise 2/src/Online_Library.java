/* Problem Statement - Implement a library using java class Library.
   Methods: addBook, issueBook, returnBook, showAvailableBook.
   properties: Array to store the available books, Array to store the issued book.
*/

package online_Library;
import java.util.Scanner;// importing built in package
class Library {
	String [] Books;
	int noOfBooks = 0;
	Library(){
		this.Books = new String[100];// Creating array same as int []Books = new int[size];
	}
	void addBooks(String book)
	{
		Books[noOfBooks] = book;
		++noOfBooks;
		System.out.println(book + " has been added");
	}
	void issueBook ()
	{
                                            Scanner sc = new Scanner(System.in);
		System.out.println("Enter book name to be issued: ");
		String book = sc.nextLine();
                                            int count = 0;
		for(int i = 0; i < noOfBooks; i++)
		{
			if(this.Books[i].equals(book))
			{
				System.out.println("The book has been issued!!");
				Books[i] = null;
                                                                                         count++;
			}
		}
                                            if(count == 0)
                                            {
                                                System.out.println("Sorry book is not available !");
                                            }
                       }
	void returnBook()
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter book name for return: ");
		String book = scan.nextLine();
                                            int count = 0;
                                            for(int i = 0; i < noOfBooks; i++)
                                            {
                                                    if(Books[i] == null){
                                                        Books[i] = book;
                                                        System.out.println("Book has been returned");
                                                        count++;
                                                    }
                                            }
                                            if(count == 0)
                                            {
                                                System.out.println("This book was not issued, you can't return ");
                                            }
	}
	void showAvailableBooks()
	{
		System.out.println("The available books are: ");
		for(int i = 0; i < noOfBooks ; i++)
		{
			System.out.println("* " + Books[i]);
		}
	}
}
	
public class Online_Library {   
            public static void main(String []args )
            {
                    Library centralLibrary = new Library();
                    centralLibrary.addBooks("Rich dad poor dad");
                    centralLibrary.addBooks("Think and grow rich");
                    centralLibrary.addBooks("Can't hurt me");
                    centralLibrary.addBooks("Never Finished");
                    centralLibrary.addBooks("Think like a monk");
                    centralLibrary.showAvailableBooks();

                    centralLibrary.issueBook();

                    centralLibrary.returnBook();

            }
}