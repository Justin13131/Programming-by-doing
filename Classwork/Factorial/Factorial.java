
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
        System.out.print("Import number: ");
        int value = r.nextInt();

        System.out.println(factorial(value));

    }
}

