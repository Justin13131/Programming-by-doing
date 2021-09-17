//WhileLoop DiceDoubles 45pts Justin Hsu

import java.util.*;

public class DiceDoubles {
    
    public static void main (String[] args) {
        Random r = new Random();

        int choice1 = 1 + r.nextInt(6);
        int choice2 = 1 + r.nextInt(6);

        System.out.println("HERE COMES THE DICE!");
        System.out.println("Roll #1: " + choice1);
        System.out.println("Roll #2: " + choice2);
        System.out.println("The total is " + choice1 + choice2 + "!");

        while ( choice1 != choice2 ) {
            System.out.println("Roll #1: " + choice1);
            System.out.println("Roll #2: " + choice2);
            System.out.println("The total is " + choice1 + choice2 + "!");
        }
        //Don't run it, you laptop will explode if you have bad luck :(
    }
}
