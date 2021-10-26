import java.util.*;

public class DataCheck {
    public static void main (String[] args){
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Enter the Year: ");
        int year = keyboard.nextInt();
        String digit;
        // String digit;
        while(year < 1921 || year > 2021){
            System.out.println("Enter the Year:");
            year = keyboard.nextInt();
        }
        System.out.println("Enter the Month: ");
        digit = keyboard.next();
        int month;

        while (true) {
                try {
                    month = Integer.parseInt (digit);
                    break;
                }
                catch (NumberFormatException e) {
                    // do nothing.
                }
                System.out.println("Enter the Month:");
                month = keyboard.nextInt();
                break;
        }
        while(month < 1 || month > 12){
            System.out.println("Enter the Month: ");
            month = keyboard.nextInt();
        }
        
        System.out.println("Enter the Day: ");
        int day = keyboard.nextInt();
        while(day < 0 || day > 31){
            System.out.println("Enter the Day");
            day = keyboard.nextInt();
        }

        System.out.println("Your Birthday is " + year + "/" + month + "/" + day);


    }
}
