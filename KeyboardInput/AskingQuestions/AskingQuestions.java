// KeyBoard Input AskingQuestions 10pts Justin Hsu

import java.util.Scanner;

public class AskingQuestions 
{
    public static void main (String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        //Keyboard input

        int age;
        String height;
        double weight;
        //Variable

        System.out.println("How old are you? ");
        age = keyboard.nextInt();
        //Define variable throught input
        System.out.println("How tall are you? ");
        height = keyboard.next();
        //Define variable throught input
        System.out.println("How much do you weigh? ");
        weight = keyboard.nextDouble();
        //Define variable throught input
        System.out.println( "So you're " + age + " old, " + height + " tall and " + weight + " heavy." );
    }
}
