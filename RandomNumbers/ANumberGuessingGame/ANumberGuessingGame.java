//RandomNumbers ANumberGuessingGame 20pts Justin Hsu
import java.util.Random;
import java.util.Scanner;

public class ANumberGuessingGame {
    public static void main (String [] args) {
        Random r = new Random();
        Scanner keyboard = new Scanner(System.in);
        int choice = 1 + r.nextInt(10); 
        int response = 0;
        int guess = 0;
        System.out.println("I'm thinking a number from 1 to 10.");
        System.out.print("Your guess:");
        guess = keyboard.nextInt(); //Guess

        if (choice == 1) {
            response = 1;
        }else if ( choice == 2) {
            response = 2;
        }else if (choice == 3) {
			response = 3;
        }else if(choice == 4) {
            response = 4;
        }else if (choice == 5) {
            response = 5;
        }else if(choice == 6) {
            response = 6;
        }else if(choice == 7) {
            response = 7;
        }else if(choice == 8) {
            response = 8;
        }else if(choice == 9) {
            response = 9;
        }else if(choice == 10) {
			response = 10;
        }

        if (response == guess ){
            System.out.println("That's right! My secret is " + response + "!");
        } 
        if (response != guess ){
            System.out.println("Sorry, but I was really thinking of " + response + ".");
        }
    }
    
}
