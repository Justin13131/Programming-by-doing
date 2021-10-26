//FileOutputAndInput VowelCapitalization 80pts Justin Hsu
import java.util.*;
import java.io.*;

public class VowelCapitalization{
	public static void main(String[] args) throws Exception{
		Scanner keyboard = new Scanner(System.in);
        //Ask
		System.out.print("Open which file: ");
        //Input
		String file = keyboard.next();
		System.out.println();
		
        //File
		File in = new File(file);
		Scanner input = new Scanner(in);
		//While File Exists
		while ( input.hasNext() )
		{
			String line = input.nextLine();
			//How Many Lines
			for ( int i = 0; i < line.length(); i++ )
			{
                //Characters
				char c = line.charAt(i);
				
				if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
				{
                    //Make it upperCase
					System.out.print( Character.toUpperCase(c) );
				}
				else
                    //Print C
					System.out.print( c );
			}	
			System.out.println();
		}
	}
}