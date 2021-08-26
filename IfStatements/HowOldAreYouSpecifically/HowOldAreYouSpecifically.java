// IfStatements HowOldAreYouSpecifically 20pts Justin Hsu

import java.util.Scanner;

public class HowOldAreYouSpecifically {
    public static void main (String[] args){
        
        Scanner keyboard = new Scanner(System.in);
        int drive = 16;
        int vote = 18;
        int rentCar = 25;
        int age;
        String name;

        System.out.println ("Hey, what's your name? (Sorry I keep forgetting.)");
        name = keyboard.next();

        System.out.println ("How old are you, " + name + "?");
        age = keyboard.nextInt();

        if (age < drive) {
            System.out.println ("You can't drive, " + name + ".");
        } 
        else{
            if ( age < vote ){
                System.out.println ("You can drive but you can't vote, " + name + ".");
            } 
            else {
                if (age < rentCar) {
                    System.out.println("You can vote but not rent a car, " + name + "."); 
                }
                else {
                    System.out.println("You can pretty much do everythings, " + name + ".");
                }
                
            }
        }
    }
}


    

