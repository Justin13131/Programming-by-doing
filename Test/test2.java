
import java.math.*;
import java.util.*;

public class test2 {

    public static BigInteger factorial (int num) {
        if (num <= 1){
            return BigInteger.ONE;      
        }else{      
            return factorial(num-1).multiply(BigInteger.valueOf(num));  
        }
    }
    public static void main(String[] args){
        Scanner r = new Scanner(System.in);
        System.out.println("Welcome to the Factorial Calculator");
        int tv;
            System.out.println("Enter your number below or type 0 to exit the program.");
            String value = r.next();
            // if (value = 0){
            //     System.exit();
            // }
            while (true) {
                
                try {
                    tv = Integer.parseInt (value);
                    break;
                }
                catch (NumberFormatException e) {
                    // do nothing.
                    System.out.println("invalid input");
                }
                    System.out.println("Enter your number below or type 0 to exit the program.");
                    tv = r.nextInt();
                    break;
            }
        do{
            while (true) {
                System.out.println("Factorial of "+ tv +" is: " +factorial(tv));
                System.out.println("Enter your number below or type 0 to exit the program.");
                value = r.next();
                try {
                    tv = Integer.parseInt (value);
                    break;
                }
                catch (NumberFormatException e) {
                    // do nothing.
                    System.out.println("invalid input");
                }
                    System.out.println("Enter your number below or type 0 to exit the program.");
                    tv = r.nextInt();
                    break;

            }
    
            
        }while (tv != 0);
        System.out.println("Goodbye!");
        
        
    }
}

