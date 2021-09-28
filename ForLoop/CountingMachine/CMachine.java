//ForLoop CountingMachine 20pts Justin Hsu

import java.util.*;

public class CMachine {
    
    public static void main(String[] args){
        Scanner keyboard = new Scanner(System.in);
        int in;

        System.out.print("Count to: ");
        in = keyboard.nextInt();

        for (int n = 0; n <= in; n++ ){
            System.out.print(n + "\t");
        }
    }
}
