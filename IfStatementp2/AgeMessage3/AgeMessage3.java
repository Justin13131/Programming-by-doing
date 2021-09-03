//IfStatementsP2 AgeMessage3 25pts Justin Hsu

import java.util.Scanner;

public class AgeMessage3{
    public static void main (String[] args) {
        
        Scanner keyboard = new Scanner(System.in); 
        String name; //Variable : name
        int age; //Variable : age and it should be realized as an integer 

        System.out.print("Your name: ");
        name = keyboard.next(); //Scan keyboard input and define name

        System.out.print("Your Age: ");
        age = keyboard.nextInt(); //Scan keyboard int input and define age

        System.out.println("");
        if (age < 16) {
            System.out.println("You can't drive.");
        } //Age < 16
        else if (age >= 16 && age <= 17) {
            System.out.println("You can drive but not vote.");
        } // Age between 16 and 17
        else if (age >=18 && age <= 24) {
            System.out.println("You can vote but not rent a car.");
        } //Age between 18 and 24
        else if (age >= 25) {
            System.out.println("You can do pretty much everythings");
        } //Above 25
    }
}