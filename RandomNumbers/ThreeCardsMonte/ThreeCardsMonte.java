//RandomNumbers ThreeCardsMonte 20pts Justin Hsu

import java.util.Random;
import java.util.Scanner;

public class ThreeCardsMonte{
	public static void main( String[] args ){   
        //Variables and create RNG
		Random r = new Random();
		Scanner keyboard = new Scanner(System.in);
		int guess;
		int secret_num = 1 + r.nextInt(3);
		
        //Output questions
		System.out.println( "You slide up to Fast Eddie's card table and plop down your cash." );
		System.out.println( "He glances at you out of the corner of his eye and starts shuffling." );
		System.out.println( "He lays down three cards.\n\nWhich one is the ace?\n" );
		System.out.println( "\t##  ##  ##\n\t##  ##  ##\n\t1   2   3\n" );
		System.out.print( "> ");
		guess = keyboard.nextInt();
		
        //If = You win else = You lose
		if ( guess == secret_num )
			System.out.println( "You nailed it! Fast Eddie reluctantly hands over your winnings, scowling." );
		else
			System.out.println( "Ha! Fast Eddie wins again! The ace was card number " + secret_num + "." );
		
		if ( secret_num == 1 ){
            System.out.println( "\nAA  ##  ##" );
            System.out.println( "\nAA  ##  ##" );
            System.out.println("\n 1   2   3");
        }
		else if ( secret_num == 2 ){
            System.out.println( "\n##  AA  ##" );
            System.out.println( "\n##  AA  ##" );
            System.out.println("\n 1   2   3");
        }
		else if ( secret_num == 3 ){
			System.out.println( "\n##  ##  AA" );
            System.out.println( "\n##  ##  AA" );
            System.out.println("\n 1   2   3");
        }
		else{
			System.out.println( "What is going on..." );
        }

	}
}