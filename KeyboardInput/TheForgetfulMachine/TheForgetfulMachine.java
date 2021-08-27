// KeyboardInput TheForgetfulMachine 12pts Justin Hsu

import java.util.Scanner;

public class TheForgetfulMachine 
{
    public static void main (String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        //Keyboard input

        String giveMeAWord, secondWord; 
        int favNumber, secFavNumber;
        //define Variable

        System.out.println("Give me a word!");
        giveMeAWord = keyboard.next();
        //Define variable throught input

        System.out.println("Give me a second word");
        secondWord = keyboard.next();
        //Define variable throught input


        System.out.println("Great, now your favorite number?");
        favNumber = keyboard.nextInt();
        //Define variable throught input

        System.out.println("And your second favorite number?");
        secFavNumber = keyboard.nextInt();
        //Define variable throught input

        System.out.println("Whew! Wasn't that fun?");
        
    }
}
