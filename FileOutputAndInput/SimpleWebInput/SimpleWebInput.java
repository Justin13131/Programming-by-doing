//FileOutputAndInput SimpleWebInput 15pts Justin 
//It is completed but the URL does not exist at all, so the code is not working and will give connection timeout error 
import java.net.URL;
import java.util.Scanner;

public class SimpleWebInput
{
	public static void main(String[] args) throws Exception
	{
        //This website does not exist
		URL mcool = new URL("https://cs.leanderisd.org/mitchellis.txt");
		Scanner webIn = new Scanner( mcool.openStream() );
		
		while(webIn.hasNext()){
				String one = webIn.nextLine();
				System.out.println(one);
				
		}
		webIn.close();
		
		
	}
}