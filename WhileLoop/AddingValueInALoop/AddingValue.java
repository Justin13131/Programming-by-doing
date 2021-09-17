//WhileLoop AddingValueInALoop 30pts Justin Hsu

import java.util.*;

public class AddingValue {
    
    public static void main (String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int number = 0;
        int cal = 0;

        System.out.println("I will add up the numbers you give me");
        System.out.print("Number: ");
        number = keyboard.nextInt();
        cal = cal + number;

        while ( number != 0 ) {
            System.out.println("The total so far is " + cal );
            System.out.print("Number: ");
            number = keyboard.nextInt();
            cal = cal + number;
        }

        System.out.println("The total is " + cal + ".");
    }
}
