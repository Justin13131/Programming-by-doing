// KeyboardInput ADumbCalculator 20pts Justin Hsu

import java.util.Scanner; 


public class ADumbCalculator {

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        double firstNumber, secondNumber, thirdNumber, result;

        System.out.print("What is your first number? ");
        firstNumber = keyboard.nextDouble();
        System.out.print("What is your second number? ");
        secondNumber = keyboard.nextDouble();
        System.out.print("What is your third number? ");
        thirdNumber = keyboard.nextDouble();
        System.out.println();
        result = (firstNumber + secondNumber + thirdNumber) / 2;
        System.out.println("( " + firstNumber + " + " + secondNumber + " + " + thirdNumber + " ) / 2 is... " + result);
    }
}