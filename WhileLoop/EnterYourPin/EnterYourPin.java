//WhileLoop EnterYourPin 15pts Justin Hsu

import java.util.Scanner; 

public class EnterYourPin {
    
    public static void main (String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int pin = 12345;
        int entry;

        System.out.println("WELCOME TO THE BANK OF MITCHELL.");
		System.out.print("ENTER YOUR PIN: ");
		entry = keyboard.nextInt();

        while ( entry != pin ){
            System.out.println("\nINCORRECT PIN. TRY AGAIN");
            System.out.print("ENTER YOUR PIN: ");
            entry = keyboard.nextInt();
        }
        System.out.println("\nPIN ACCEPTED. YOU NOW HAVE ACCESS TO YOUR ACCOUNT.");

    }
}
