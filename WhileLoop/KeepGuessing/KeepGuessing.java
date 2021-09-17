//WhileLoop KeepGuessing 50pts Justin Hsu
import java.util.*;

public class KeepGuessing {
    
    public static void main (String[] args) {
        Random r = new Random();
        Scanner keyboard = new Scanner(System.in);

        int choice = 1 + r.nextInt(10);
        int guess;

        System.out.println("I have chosen a number between 1 to 10. Try to guess it.");
        System.out.print("Your guess: ");
        guess = keyboard.nextInt();

        while ( guess != choice ) {
            System.out.println("That is incorrect. Guess again.");
            System.out.print("Your guess: ");
            guess = keyboard.nextInt();
        }
        System.out.println("That's right! You are a good guesser.");

    }
}
