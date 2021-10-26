import java.util.*;
public class PythagoreanClac {
    public static void main (String[] args){
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Pythagorean Claculator");

        String hL;
        
        double sol = 0;
        double a, b, c;
        String solve;
        do {
            System.out.println("a^2 + b^2 = c^2");
            System.out.println("Solving for Hypotenius (H) or Leg (L)?");
            hL = keyboard.next();
            if(hL.equalsIgnoreCase("h")){
                System.out.println("Enter side A");
                a = keyboard.nextDouble();
                System.out.println("Enter Side B");
                b = keyboard.nextDouble();
                b = Math.pow(b, 2);
                a = Math.pow(a, 2);
                sol = a+b;
                sol = Math.sqrt(sol);
                sol = Math.round(sol*100.0)/100.0;
                System.out.println("Side C is: " + sol);
            }else if(hL.equalsIgnoreCase("l")){
                System.out.println("Enter side A");
                a = keyboard.nextDouble();
                System.out.println("Enter Side C");
                c = keyboard.nextDouble();
                c = Math.pow(c, 2);
                a = Math.pow(a, 2);
                sol = c-a;
                sol = Math.sqrt(sol);
                sol = Math.round(sol*100.0)/100.0;
                System.out.println("Side B is: " + sol);
            }
            System.out.println("Solve Another Triangle? (y/n)");
            solve = keyboard.next();

        }while(solve.equalsIgnoreCase("y"));
        

        System.out.println("Thank you for using this program!");
    }
}
