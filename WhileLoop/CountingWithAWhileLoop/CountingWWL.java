//WhileLoop CountingWithAWhileLoop 30pts Justin Hsu

import java.util.*;

public class CountingWWL {
    
    public static void main (String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String message = "";
        System.out.println( "Type in a message, and I'll display it five times." );
		System.out.print( "Message: " );
        message = keyboard.nextLine();

        int n = 0;
        while ( n < 5 ) {
            System.out.println( (n+1) + "." + message );
            n++;
        }
    }
}
