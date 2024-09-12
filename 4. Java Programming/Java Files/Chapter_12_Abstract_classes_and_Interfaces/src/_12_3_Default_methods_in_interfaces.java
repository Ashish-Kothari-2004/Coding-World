// Static methods: A static method is a method that belongs to a class rather than an instance of a class. This means you can call a static method without creating an object of the class.

// Default Methods In Java 8:  Before Java 8, interfaces could have only abstract methods. The implementation of these methods has to be provided in a separate class. So, if a new method is to be added in an interface, then its implementation code has to be provided in the class implementing the same interface. To overcome this issue, Java 8 has introduced the concept of default methods which allow the interfaces to have methods with implementation without affecting the classes that implement the interface.

// Important Points:
// 1. Interfaces can have default methods with implementation in Java 8 on later.
// 2. Interfaces can have static methods as well, similar to static methods in classes.
// 3. Default methods were introduced to provide backward compatibility for old interfaces so that they can have new methods without affecting existing code.



interface Gps
{
	void tracking();
	void location();
	default void addNewMethod()
	{
		System.out.println("Adding New Method in interface");
		privateMethod();
	}
	static void isStatic()
	{
		System.out.println("I am a static method inside Gps");
	}
	private void privateMethod()
	{
		System.out.println("I am a private method inside Gps interface");
	}	
}

interface camera
{
	void takingPhoto();
	void recordingVideo();
}

interface media
{
	void playingVideo();
	void pause();
}

class CellPhone
{	
	void cellPhoneFerture()
	{
		System.out.println("Calling !!!!!!");
	}
}

class SmartPhone extends CellPhone implements Gps, camera, media
{
	void smartFunction()
	{
		System.out.println("Smart Function");
	}
	
	public void tracking()
	{
		System.out.println("Tracking !!!");
	}
	public void location()
	{
		System.out.println("Corrent location");
	}
	
	public void takingPhoto()
	{
		System.out.println("Taking photo");
	}
	public void recordingVideo()
	{
		System.out.println("Recording video");
	}
	
	public void playingVideo()
	{
		System.out.println("Playing video!!");
	}
	public void pause()
	{
		System.out.println("Pausing video!!");
	}
}

public class _12_3_Default_methods_in_interfaces {

	public static void main(String[] args) {
		SmartPhone NewPhone = new SmartPhone();
		NewPhone.addNewMethod();
		Gps.isStatic();// We can call static method using interface name.
		NewPhone.takingPhoto();
	}
}

