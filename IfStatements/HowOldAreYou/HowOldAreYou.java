// IfStatements HowOldAreYou 25pts Justin Hsu

import java.util.Scanner;
//Scanner

public class HowOldAreYou {
    
    public static void main (String[] args) {
        
        Scanner keyboard = new Scanner(System.in);
        int drive = 16; //Age to drive
        int vote = 18; //Age to vote
        int rentCar = 25; //Age to rent a car
        int age;
        String name;
        //Variables

        System.out.println ("Hey, what's your name?");
        name = keyboard.next();
        //Define Name

        System.out.println ("How old are you " + name + "?");
        age = keyboard.nextInt();
        //Define age

        if (age < drive) {
            System.out.println ("You can't drive, " + name + ".");
        } //Can't drive

        if (age > drive) {
            System.out.println ("You can drive, " + name + ".");
        } //Can drive

        if (age < vote) {
            System.out.println ("You can't vote, " + name + ".");
        } //Can't vote

        if (age > vote) {
            System.out.println ("You can vote, " + name + ".");
        } //Can vote

        if (age < rentCar) {
            System.out.println( " You can't rent a car, " + name + ".");
        } //can't rent

        if (age > rentCar) {
            System.out.println("You can rent the car, " + name + ".");
        } //can rent
    }
}