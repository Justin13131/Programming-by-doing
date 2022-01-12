
import java.math.*;
import java.util.*;

public class Factorial {

    public static BigInteger factorial (int num) {
        if (num <= 1){
            return BigInteger.ONE;      
        }else{      
            return factorial(num-1).multiply(BigInteger.valueOf(num));  
        }
    }
    public static void main(String[] args){
        Scanner r = new Scanner(System.in);
        System.out.print("Welcome to the Factorial Calculator")
        System.out.println("Enter your number below or type 0 to exit the program.");
                int value = r.nextInt();
        while (true) {
            try {
                month = Integer.parseInt (value);
                break;
            }
            catch (NumberFormatException e) {
                // do nothing.
            }
                System.out.println("Enter your number below or type 0 to exit the program.");
                int value = r.nextInt();
                break;
        }

        System.out.println(factorial(value));

    }
}

