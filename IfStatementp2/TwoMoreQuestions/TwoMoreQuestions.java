//IfStatementsP2 TwoMoreQuestions 35pts Justin Hsu
import java.util.Scanner;

public class TwoMoreQuestions{
    public static void main (String[] args){
        Scanner keyboard = new Scanner(System.in);
        //Scanner
        String side, live;
        System.out.println("TWO MORE QUESTIONS, BABY!");
        System.out.println("Think of an object, and I'll try to guess it");
        //Questions

        System.out.println( "Question 1) Does it stand \"inside, outside, or both?\"" );
        System.out.print( "> " );
        side = keyboard.next();
        System.out.println(); //Input type

        System.out.println( "Question 2) Is it a living thing? \"yes or no\" ");
        System.out.print( "> " );
        live = keyboard.next();
        System.out.println(); //Input live or nonliving

        if (side.equalsIgnoreCase("inside") && live.equalsIgnoreCase("yes")) {
            System.out.println("Then what else could you be thinking of besides a houseplant?!?");
        }//Houseplant
        if (side.equalsIgnoreCase("inside") && live.equalsIgnoreCase("no")) {
            System.out.println("Then what else could you be thinking of besides a shower curtain?!?");
        }//Shower Curtain
        if (side.equalsIgnoreCase("outside") && live.equalsIgnoreCase("yes")){
            System.out.println("Then what else could you be thinking of besides a bison?!?");
        }//bison
        if (side.equalsIgnoreCase("outside") && live.equalsIgnoreCase("no")){
            System.out.println("Then What else could you be thinking of besides a billboard?!?");
        }//Billboard
        if (side.equalsIgnoreCase("both") && live.equalsIgnoreCase("yes")){
            System.out.println("The what else could you be thinking of beside a dog?!?");
        }//dog
        if (side.equalsIgnoreCase("both") && live.equalsIgnoreCase("no")){
            System.out.println("Then what else could you be thinking of beside a cell phone?!?");
        }//cell phone

    }
}