//RandomNumbers NumberGuessingWithACounter 40pts

import java.util.*;

public class NGWAC {
    
    public static void main (String[] args) {
        Random r = new Random();
        Scanner keyboard = new Scanner(System.in);
        int tries = 0;
        int entry;
        int guess = 1 + r.nextInt(10);

        System.out.println("I have chosen a number between 1 to 10. Try to guess it.");
        System.out.print("Your guess: ");
		entry = keyboard.nextInt();
		tries++;

        while ( entry != guess) {
            System.out.println("That is incorrect. Guess again.");
		    System.out.print("Your guess: ");
		    entry = keyboard.nextInt();
		    tries++;
        }
        System.out.println("That's right! You are a good guesser.");
        System.out.println("It only took you " + tries + " tries.");

    }
}
