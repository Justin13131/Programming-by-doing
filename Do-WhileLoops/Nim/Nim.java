//Do-WhileLoop Nim 100pts Justin Hsu

import java.util.*;

public class Nim{
	public static void main(String[] args){
		Scanner keyboard = new Scanner(System.in);String name1, name2;String name = "";
		int number;
		String guess = "";
		int win;
		int A = 3;
		int B = 4;
		int C = 5;

		//Name1 input
		System.out.print("Player 1, enter your name: ");
		name1 = keyboard.next();
		System.out.println("");
		
		//Name 2 input
		System.out.print("Player 2, enter your name: ");
		name2 = keyboard.next();
		System.out.println("");

		System.out.println("\t A: " + A + "\t B: " + B + "\t C: " + C); //ABC now

		//Stop if all of them is 0
		while ( A > 0 || B > 0 || C > 0) { 
			//Which pile
			System.out.print(name1 + ", choose a pile: ");
			guess = keyboard.next();

			while (!guess.equals("A") && !guess.equals("B") && !guess.equals("C")){
				System.out.println(name1 + "You can only choose A, B or C!");
				System.out.print("Please Choose another one: ");
				guess = keyboard.next();
			}

			//Anti Cheat
			if (guess.equals("A")){
				while ( A == 0 ) {
					System.out.print( "Nice try, " + name1 + ". That pile is empty. Choose again: ");
					guess = keyboard.next();
				}
			}
			if(guess.equals("B")){
				while ( B == 0 ) {
					System.out.print( "Nice try, " + name1 + ". That pile is empty. Choose again: ");
					guess = keyboard.next();
				}
			}
			if(guess.equals("C")){
				while ( C == 0 ) {
					System.out.print( "Nice try, " + name1 + ". That pile is empty. Choose again: ");
					guess = keyboard.next();
				}
			}
			

			//How many to remove
			System.out.print("How many to remove from this pile " + guess + ": ");
			number = keyboard.nextInt();

			//Anti Cheat
			while ( number <= 0 ) {
				System.out.print("You must choose at least 1. How many? ");
				number = keyboard.nextInt();
			}
			if (guess.equals("A")){
				while ( A < number) {
					System.out.print("Pile " + guess + " doesn't have that many. Try again: ");
					number = keyboard.nextInt();
				}
			}
			if(guess.equals("B")){
				while ( B < number) {
					System.out.print("Pile " + guess + " doesn't have that many. Try again: ");
					number = keyboard.nextInt();
				}
			}
			if(guess.equals("C")){
				while ( C < number) {
					System.out.print("Pile " + guess + " doesn't have that many. Try again: ");
					number = keyboard.nextInt();
				}
			}
			//Player 1 run
			if ( guess.equalsIgnoreCase("A") ){
				System.out.println("\t A: " + (A - number) + "\t B: " + B + "\t C: " + C);
				A = A - number;
			} else if (guess.equalsIgnoreCase("B")){
				System.out.println("\t A: " + A + "\t B: " + ( B - number ) + "\t C: " + C);
				B = B - number;
			} else if ( guess.equalsIgnoreCase("C") ){
				System.out.println("\t A: " + A + "\t B: " + B + "\t C: " + ( C - number ));
				C = C - number;
			}
		}
		
		System.out.println( name2 + ", there are no counters left, so you Win!");

	}

	class anticheat {

	}
}