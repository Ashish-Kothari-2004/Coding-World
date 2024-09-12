/*
Packages in java - A java package is a group of similar types of classes, interfaces and sub-packages.
Package in java can be categorized in two form, built-in package and user-defined package.
There are many built-in packages such as java, lang, awt, javax, swing, net, io, util, sql etc.
Advantage of Java Package:
1) Java package is used to categorize the classes and interfaces so that they can be easily maintained.
2) Java package provides access protection.
3) Java package removes naming collision.

# The following are the Java main packages which are mostly used, along with their sub-packages and most commonly
used classes:

1. java.lang - This package contains the fundamental classes of the Java language, such as Object, String, Math,
and System. It is default package in java.
Sub-packages: annotation, instrument, ref, reflect, spi
classes: Object, System, String, Math, System, Integer, Long, Float, Double, Boolean, Character, Short, Byte, Void, Class, Throwable, Exception, RuntimeException

2. java.util - This package contains a collection of utility classes, such as ArrayList, HashMap, Date, and Calendar.
Sub-packages: concurrent, function, logging, prefs, regex, stream
classes: Scanner, ArrayList, HashMap, Date, Calendar, List, Map, Set, Collection, Iterator, Comparator, Arrays,
Collections, Optional

3. java.io - This package contains classes for reading and writing data to and from files, streams, and other sources.
Sub-packages: channels, filter, nio, nio.channels, nio.charset, nio.file, pipes, print
classes: File, FileInputStream, FileOutputStream, FileReader, FileWriter, BufferedReader, BufferedWriter,
DataInputStream, DataOutputStream.

4. java.net - This package contains classes for network communication, such as Socket, ServerSocket, and URL.
Sub-packages: ftp, http, jar, ldap, mail, p2p, sdp, socks
classes: Socket, ServerSocket, URL, URLConnection, HttpURLConnection, ClientSocketFactory, ServerSocketFactory

5. java.time - This package was introduced in Java 8 and contains classes for representing and manipulating dates and times.
Sub-packages: chrono, format, temporal
Most commonly used classes: LocalDate, LocalTime, LocalDateTime, ZonedDateTime, Duration, Period, Instant

How to access package from another package ?
1. import package.*;
2. import package.classname;
3. fully qualified name.

Note: If you import a package, subpackages will not be imported.
*/



//import java.util.*;// All the classes and interfaces of this package will be accessible but not subpackages.
//import java.util.Scanner;// Here java is package, util is a sub package, and Scanner is a class.
package _Chapter_12_Packages_and_javaDocs;
class _13_1_Packages
{
	public static void main(String[] args)
	{
//		Scanner input = new Scanner(System.in);
//		System.out.println("Enter any number: ");
//		int number  = input.nextInt();
//		System.out.println("The entered number is: "  + number);
//		input.close();
		
//		or 
		java.util.Scanner input = new java.util.Scanner(System.in);
		System.out.println("Enter any number: ");
		int number  = input.nextInt();
		System.out.println("The entered number is: "  + number);
		input.close();

	}
}
