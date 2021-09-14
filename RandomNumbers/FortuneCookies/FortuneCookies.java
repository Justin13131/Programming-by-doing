//Random Numbers Fortune Cookies 25pts Justin Hsu

import java.util.Random;

public class FortuneCookies {
    
    public static void main (String [] args) {
        Random r = new Random();

        int choice = 1 + r.nextInt(6);
        String response = "";

        //Define Response
        if(choice == 1){
            response = "You will find happiness with a new love";           
        } else if (choice == 2) {
            response = "Stay at home today or else somethings bad will happen";
        }else if (choice == 3) {
            response = "Somethings good will happen today";
        }else if (choice == 4) {
            response = "Somethings bad will happen today";
        }else if (choice == 5){
            response = "Don't believe in others today";
        }else if (choice == 6) {
            response = "Believe in your friends";
        }

        //Output
        System.out.println("The Fortune Cookies says: " + response + ".");

        //Lotto 1-6
        int lotto1 = 1 + r.nextInt(54);
		int lotto2 = 1 + r.nextInt(54);
		int lotto3 = 1 + r.nextInt(54);
		int lotto4 = 1 + r.nextInt(54);
		int lotto5 = 1 + r.nextInt(54);
		int lotto6 = 1 + r.nextInt(54);
        
        //Output
        System.out.println( lotto1 + " - " + lotto2 + " - " + lotto3 + " - " + lotto4 + " - " + lotto5 + " - " + lotto6 );
    }
}
