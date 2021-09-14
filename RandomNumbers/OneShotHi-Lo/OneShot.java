//Random Numbers OneShotHiLo 35pts Justin Hsu

import java.util.Scanner;
import java.util.Random;

public class OneShot {

    public static void main(String[] args){
        Random r = new Random();
        Scanner keyboard = new Scanner(System.in);
        //Generate Number
        int rng = 1 + r.nextInt(100);
        int guess;

        //Guess numbers
        System.out.println("I\'m thinking of a number between 1 - 100. Try to guess it.");
        System.out.print("> ");
        guess = keyboard.nextInt();
        System.out.println("");

        //Numbers output
        if( guess == rng ) {
            System.out.println("You guessed it! What are the odds?!?");
        } else if ( guess < rng ) {
            System.out.println("Sorry, but you are too low. I was thinking of " + rng + ".");
        } else {
            System.out.println("Sorry, but you are too high. I was thinking of " + rng + ".");
        }
    }
}
