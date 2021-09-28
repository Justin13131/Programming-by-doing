//ForLoop CountingWithAForLoop 1opts Justin Hsu
import java.util.Scanner;

public class CountingWithAForLoop{
    public static void main( String[] args ){
        Scanner keyboard = new Scanner(System.in);
        //Message
        System.out.println( "Type in a message, and I'll display it five times." );
        System.out.print( "Message: " );
        String message = keyboard.nextLine();

        //Output
        for ( int n = 1 ; n <= 5 ; n = n+1 ){
            System.out.println( n + ". " + message );
        }

    }
}