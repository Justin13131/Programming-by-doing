// KeyboardInput TheForgetfulMachine 12pts Justin Hsu

import java.util.Scanner;

public class TheForgetfulMachine 
{
    public static void main (String[] args)
    {
        Scanner keyboard = new Scanner(System.in);

        String giveMeAWord, secondWord; 
        int favNumber, secFavNumber;

        System.out.println("Give me a word!");
        giveMeAWord = keyboard.next();

        System.out.println("Give me a second word");
        secondWord = keyboard.next();


        System.out.println("Great, now your favorite number?");
        favNumber = keyboard.nextInt();

        System.out.println("And your second favorite number?");
        secFavNumber = keyboard.nextInt();

        System.out.println("Whew! Wasn't that fun?");
        
    }
}
