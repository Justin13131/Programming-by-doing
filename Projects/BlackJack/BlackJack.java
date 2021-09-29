//Projects BlackJack 200pts Justin Hsu
import java.util.*;

public class BlackJack {
    
    public static void main(String[] args) {
        //Welcome
        System.out.println("Welcome to Mitchell's blackjack program!");
        
        //Keyboard input
        Scanner keyboard = new Scanner(System.in);

        //Random Number
        Random r = new Random();
        int card1 = 2 + r.nextInt(10); 
        int card2 = 2 + r.nextInt(10);
        //card 3
        int card3 = 0; 
        //dealer card 3
        int dcard3 = 0;

        //If get ace
        String chooseace = "";
        //Hit or stay
        String choose = "";
        //Dealer's total and your total
        int yournum = 0;
        int dealernum = 0;

        //End the while
        int out = 0;

        //Your Card Right Now
        System.out.println("You get a " + card1 + " and a " + card2 + ".");

        //if card 1 is ace
        if ( card1 == 11) {
            System.out.println("You get an ACE!");
            System.out.println("Your total is now" + (card1 + card2) + "(Ace counted as 11 now).");
            System.out.println("Don't worry if you get over 21 now, you can still choose if your ace is 1 or 11!");

            if(card1 + card2 <= 21) {
                System.out.print("You want your Ace to be \"1\" or \"11\"?");
                chooseace = keyboard.next();
                    if (chooseace.equals("1")){
                        card1 = 1;
                        yournum = card3 + card2 + card1;
                        System.out.println("Your total is now " + yournum + ".");
                    } else if (chooseace.equals("11")){
                        card1 = 11;
                        yournum = card3 + card2 + card1;
                        System.out.println("Your total is now " + yournum +".");
                    } else {
                        System.out.println("Please choose 1 or 11.");
                    }
            }
        }
        //if card 2 is ace
        if ( card2 == 11) {
            yournum = card3 + card2 + card1;
            System.out.println("You get an ACE!");
            System.out.println("Your total is now" + yournum + "(Ace counted as 11 now).");
            System.out.println("Don't worry if you get over 21 now, you can still choose if your ace is 1 or 11!");


            if(card1 + card2 <= 21) {
                System.out.print("You want your Ace to be \"1\" or \"11\"?");
                chooseace = keyboard.next();
                    if (chooseace.equals("1")){
                        card2 = 1;
                        yournum = card3 + card2 + card1;
                        System.out.println("Your total is now " + yournum + ".");
                    } else if (chooseace.equals("11")){
                        card2 = 11;
                        yournum = card3 + card2 + card1;
                        System.out.println("Your total is now " + yournum + ".");
                    } else {
                        System.out.println("Please choose 1 or 11.");
                    }
            }else if (card1 == 11) {
                card2 = 1;
                yournum = card3 + card2 + card1;
                System.out.println("Sadly, you already got over 11, if your ace is 11 now, you lose instantly. Your ace is counted as one now.");
                System.out.println("Your total is now " + yournum + ".");
            }
        }
        yournum = card3 + card2 + card1;
        System.out.println("Your total is " + yournum + ".");

        //Dealer cards
        int dcard1 = 2 + r.nextInt(10);
        int dcard2 = 2 + r.nextInt(10);

        //Dealer card hidden
        System.out.println("The dealer has a " + dcard1 + " showing, and a hidden card.");
        System.out.println("His total is hitten, too.");

        //Player's turn
        if (card1 + card2 == 21){
            System.out.println("You can only stay because you already got a BLACK JACK!");
        } else {
            do {
                //Hit or stay
                System.out.print("Would you like to \"hit\" or \"stay?\"");
                choose = keyboard.next();
                
                if (choose.equals("hit")) {
                    //Pick a card
                    card3 = 2 + r.nextInt(10);
                    System.out.println("You got a " + card3);
                    System.out.println("Your total is now " + (card1 + card2 + card3) + ".");
    
                    //If card3 is ace
                    if ( card3 == 11) {
                        System.out.println("You get an ACE!");
                        System.out.println("Your total is now" + (card1 + card2 + card3) + "(Ace counted as 11 now).");
                        System.out.println("Don't worry if you get over 21 now, you can still choose if your ace is 1 or 11!");
            
                        //Choose 1 or 11
                        if(card1 + card2 + card3 <= 21) {
                            System.out.println("You want your Ace to be \"1\" or \"11\"?");
                            chooseace = keyboard.next();
                                //Choose 1
                                if (chooseace.equals("1")){
                                    card3 = 1;
                                    System.out.println("Your total is now " + (card1 + card2 + card3) + ".");
                                    //if over 21
                                    if (card1 + card2 + card3 > 21) {
                                        System.out.println("Your total is more than 21! ");
                                        System.out.println("The Dealer Wins!");
                                    }
                                //Choose 11
                                } else if (chooseace.equals("11")){
                                    card3 = 11;
                                    System.out.println("Your total is now " + (card1 + card2 + card3) + ".");
                                //Unvalid input
                                } else {
                                    System.out.println("Please choose 1 or 11.");
                                }
                        // If card1 + 2 is bigger than 11
                        }else if (card1 + card2 >= 11) {
                            card3 = 1;
                            System.out.println("Sadly, you already got over 11, if your ace is 11 now, you lose instantly. Your ace is counted as one now.");
                            System.out.println("Your total is now " + (card1 + card2 + card3) + ".");
                            if (card1 + card2 + card3 > 21) {
                                System.out.println("Your total is more than 21! ");
                                System.out.println("The Dealer Wins!");
                            }
                        }
                    }
    
                    //Stay 
                } else if (choose.equals("stay")){
                    System.out.println("Your total is  " + (card1 + card2 + card3) + ".");
                    System.out.println("Okay, dealer's turn.");
                    System.out.println("His hidden card was a " + dcard2);
                    System.out.println("His total was " + (dcard2 + dcard1) + ".");
                    out = out + 100;
                } else {
                    System.out.println("Please input \"stay\" or \"hit\"");
                }
                // Not 21 yet
            } while (card1 + card2 + card3 + out < 21);
        }
        //If Dealer go or no
        while (dcard1 + dcard2 + dcard3 < 16 ){
            System.out.println("Dealer chooses to hit.");
            dcard3 = 2 + r.nextInt(10);
            System.out.println("He drews a " + dcard3 + ".");

            if (dcard3 == 11) {
                System.out.println("The dealer got an ACE!");
                if (dcard3 + dcard2 + dcard1 < 21) {
                    dcard3 = 1;
                    System.out.println("The dealer make the ACE into 1!");
                    System.out.println("His total is now  "+ (dcard2 + dcard1 + dcard3) + ".");
                } 
            }
            System.out.println("His total is now  "+ (dcard2 + dcard1 + dcard3) + ".");
            if (dcard1 + dcard2 + dcard3 >= 22) {
                System.out.println("The dealer got more than 21! ");
                System.out.println("You Win! ");
            }
            System.out.println("His total is "+ (dcard2 + dcard1 + dcard3) + ".");

        }

        //Sum 
        if (dcard3 + dcard2 + dcard1 < 21) {
            if ( card3 + card2 + card1 < 21) {
                System.out.println("Dealer stays.");
                dealernum = dcard3 + dcard2 + dcard1;
                yournum = card3 + card2 + card1;
            }
            
        }
        //Who wins
        if (yournum < dealernum) {
            System.out.println("Dealer's total: " + (dcard3 + dcard2 + dcard1) + ".");
            System.out.println("Your total: " + (card3 + card2 + card1) + ".");
            System.out.println("The Dealer Wins");
        } else if (yournum > dealernum) {
            System.out.println("Dealer's total: " + (dcard3 + dcard2 + dcard1) + ".");
            System.out.println("Your total: " + (card3 + card2 + card1) + ".");
            System.out.println("You Win!");
        }else if (yournum == dealernum) {
            System.out.println("Dealer's total: " + (dcard3 + dcard2 + dcard1) + ".");
            System.out.println("Your total: " + (card3 + card2 + card1) + ".");
            System.out.println("It's a tie, so the Dealer Wins!");
        }

    }
}  
