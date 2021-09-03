//IfStatementsP2 AlphabeticalOrder 30pts Justin Hsu

import java.util.Scanner;

public class AlphabeticalOrder {
    public static void main (String[] args){
        Scanner keyboard = new Scanner(System.in);
        String lName; //Create lName

        System.out.print("What is your last name? ");
        lName = keyboard.next();//Define lName

        if (lName.compareTo("Carswell")<=0){
            System.out.println( "You don't have to wait long, "+ lName + ".");
        }else if(lName.compareTo("Jones")<=0){
			System.out.println("That\'s not bad, "+ lName + ".");
		}else if(lName.compareTo("Smith")<=0){
			System.out.println("Looks like a bit of wait, "+ lName + ".");
		}else if(lName.compareTo("Young")<=0){
			System.out.println("It\'s gonna be a while, "+ lName + ".");
		}else if(lName.compareTo("Young")>=0){
			System.out.println("Not going anywhere for a while? "+ lName + ".");
		}
		else{
			System.out.println("error");
		}
    }
}
