//ForLoop Adding Values With a ForLoops 30pts Justin Hsu

import java.util.*;

public class AddValueForLoop {
    
    public static void main (String[] args){
        Scanner keyboard = new Scanner(System.in);
        int in, count = 0;

        System.out.print("Count to: ");
        in = keyboard.nextInt();

        for (int n = 0; n <= in; n++ ){
            System.out.print(n + "\t");
            count = count + n;
        }
        System.out.println();
        System.out.println("The sum is: " + count + ".");
    }
}
