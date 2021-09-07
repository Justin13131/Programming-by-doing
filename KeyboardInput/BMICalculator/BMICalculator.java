// KeyboardInput BMICalculator 28pts Justin Hsu

import java.util.Scanner;

public class BMICalculator {

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        double height, weight, BMI;
        System.out.print("Your height in m: ");
        height = keyboard.nextDouble();
        System.out.print("Your weight in kg: ");
        weight = keyboard.nextDouble();
        BMI = weight / (height * height);
        System.out.println();
        System.out.println("Your BMI is " + BMI);

        double height2, weight2, BMI2;
        System.out.print("Your height in inches: ");
        height2 = keyboard.nextDouble();
        System.out.print("Your weight in pounds: ");
        weight2 = keyboard.nextDouble();
        BMI2 = weight2 * (703 / (height2 * height2));
        System.out.println();
        System.out.println("Your BMI is " + BMI2);

        double height3, weight3, BMI3;
        System.out.print("Your height in inches: ");
        height3 = keyboard.nextDouble();
        System.out.print("Your weight in pounds: ");
        weight3 = keyboard.nextDouble();
        BMI3 = weight3 * (703 / (height3 * height3));
        System.out.println();
        System.out.println("Your BMI is " + BMI3);
    }
}