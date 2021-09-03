//IfStatements2 GenderGame 50pts Justin Hsu

import java.util.Scanner;

public class GenderGame {
    
    public static void main (String[] args) {
        Scanner keyboard = new Scanner(System.in);
        String gender, fName, lName, married; //fName = first name lname = Last  Name
        int age; //age
    
        System.out.print("What is your gender (M or F): ");
        gender = keyboard.next();
        System.out.print("First Name: "); 
        fName = keyboard.next(); //Define First name
        System.out.print("Last Name: ");
        lName = keyboard.next(); //Define Last name
        System.out.print("age: ");
        age = keyboard.nextInt();//Define age

        if ( age < 18 ) {
            System.out.println("Then I shall call you " + fName + " " + lName + ".");
        }
        else if (age > 18) {
            if (gender.equalsIgnoreCase("M")) {
                System.out.println("Then I shall call you Mr. " + lName + ".");
            }
            if (gender.equalsIgnoreCase("F")) {
                System.out.print("Are you married, " + fName + "(y or n)? ");
                married = keyboard.next();
                if(married.equalsIgnoreCase("y")) {
                    System.out.println("Then I shall call you Mrs. " + lName + ".");
                }
                else if(married.equalsIgnoreCase("n")){
                    System.out.println("Then I shall call you Ms. " + lName + ".");
                }
            }
        }
    }
}
