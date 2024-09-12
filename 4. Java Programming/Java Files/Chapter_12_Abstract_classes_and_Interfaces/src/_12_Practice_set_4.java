// Q. Create an interface TvRemote and use it to inherit another interface SmartTv. Create a class Tv which implements TvRemote interface.

interface SmartTv
{
	void price();
	void features();
}

interface TvRemote extends SmartTv
{
	void volume();
	void channels();
}
class Tv implements TvRemote
{
	public void price()
	{
		System.out.println("The price of the Tv is 20,000 Rs");
	}
	public void features()
	{
		System.out.println("Features : Smart Tv, Dolby sound, 2k display, 144FPS");
	}
	public void volume()
	{
		System.out.println("Volume change");
	}
	public void channels()
	{
		System.out.println("Channel change");
	}
}
public class _12_Practice_set_4 {

	public static void main(String[] args) {
		Tv obj1 = new Tv();
		obj1.price();
		obj1.features();
		obj1.volume();
		obj1.channels();

	}

}





