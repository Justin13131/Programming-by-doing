//IfStatementsP2 Twenty Questions... well, actually just Two 35pts Justin Hsu
import java.util.Scanner;
//Scanner
public class TwoQuestions {
    
    public static void main (String[] args) {

        Scanner keyboard = new Scanner(System.in);
        //Scanner
        String type, size, guess;
        //Variables

        System.out.println("TWO QUESTIONS!");
        System.out.println("Think of an object, and I'll try to guess it");
        //Questions
        
        System.out.println( "Question 1) Is it animal, vegetable, or mineral?" );
        System.out.print( "> " );
        type = keyboard.next();
        System.out.println(); //Input type

        System.out.println( "Question 2) Is it bigger than a breadbox?" );
        System.out.print( "> " );
        size = keyboard.next();
        System.out.println(); //Input size

        if (type.equalsIgnoreCase("animal")){
            if(size == "no"){
                guess = "squirrel";
            } else {
                guess = "moose";
            }
            System.out.println("My guess is that you think of a " + guess + ".");
            System.out.println("I would ask you if I'm right, but I don't actually care.");
        } //Guess, catagory: Animal
        else if (type.equalsIgnoreCase("vegetable")){
            if(size == "no"){
                guess = "carrot";
            } else {
                guess = "watermelon";
            }
            System.out.println("My guess is that you think of a " + guess + ".");
            System.out.println("I would ask you if I'm right, but I don't actually care.");
        } //Guess, catagory: vegetable
        else if (type.equalsIgnoreCase("mineral")){
            if(size == "no") {
                guess = "paper clip";
            } else {
                guess = "Camaro";
            }
            System.out.println("My guess is that you think of a " + guess + ".");
            System.out.println("I would ask you if I'm right, but I don't actually care.");
        }//Guess, catagory: Mineral
        else {
            System.out.println("I think you typed somethings wrong!");
            System.out.println("Try it again and type the right things!");
        }//Unavaliable input
    }
}
