// FileOutputAndInput LittlePuzzle 75 Justin Hsu
import java.util.*;
import java.io.*;
public class ALittlePuzzle{
	public static void main(String[] args) throws Exception{
		//filename
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Open which file: ");
		
		//filename
		String file = keyboard.nextLine();
        System.out.println("");
		
		//File to be read
		File in = new File(file);
		Scanner input = new Scanner(in);
		
		//Display the string
		String skip = input.nextLine();
		input.close();

        
		//How Many Lines
			for ( int i = 0; i < skip.length(); i++ )
			{				
                // Third Letter
				if ( (i+1) % 3 == 0 ){
                    System.out.print( skip.charAt(i) );
                }
			}	
			System.out.println();
	}
}