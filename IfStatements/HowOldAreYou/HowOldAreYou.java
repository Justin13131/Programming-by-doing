// IfStatements HowOldAreYou 25pts Justin Hsu

import java.util.Scanner;

public class HowOldAreYou {
    
    public static void main (String[] args) {
        
        Scanner keyboard = new Scanner(System.in);
        int drive = 16;
        int vote = 18;
        int rentCar = 25;
        int age;
        String name;

        System.out.println ("Hey, what's your name?");
        name = keyboard.next();

        System.out.println ("How old are you " + name + "?");
        age = keyboard.nextInt();

        if (age < drive) {
            System.out.println ("You can't drive, " + name + ".");
        }

        if (age > drive) {
            System.out.println ("You can drive, " + name + ".");
        }

        if (age < vote) {
            System.out.println ("You can't vote, " + name + ".");
        }

        if (age > vote) {
            System.out.println ("You can vote, " + name + ".");
        }

        if (age < rentCar) {
            System.out.println( " You can't rent a car, " + name + ".");
        } 

        if (age > rentCar) {
            System.out.println("You can rent the car, " + name + ".");
        }
    }
}