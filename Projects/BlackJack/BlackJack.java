//Projects BlackJack 200pts Justin Hsu
//BlackJack with Ace
//Import util library 
import java.util.*;

//Source path (?
import jdk.javadoc.doclet.DocletEnvironment;

public class BlackJack {
    
    public static void main(String[] args) {
        //Welcome
        // System.out.println("Welcome to Mitchell's blackjack program!");
        
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

        int restartloop = 0;
        //If get ace
        String chooseace = "";
        //Hit or stay
        String choose = "";
        //Dealer's total and your total
        int yournum = 0;
        int dealernum = 0;

        //End the while
        int out = 0;

        // //Your Card Right Now
        // System.out.println("You get a " + card1 + " and a " + card2 + ".");

        // //if card 1 is ace
        // if ( card1 == 11) {
        //     System.out.println("You get an ACE!");
        //     System.out.println("Your total is now" + (card1 + card2) + "(Ace counted as 11 now).");
        //     System.out.println("Don't worry if you get over 21 now, you can still choose if your ace is 1 or 11!");

        //     if(card1 + card2 <= 21) {
        //         System.out.print("You want your Ace to be \"1\" or \"11\"?");
        //         chooseace = keyboard.next();
        //             if (chooseace.equals("1")){
        //                 card1 = 1;
        //                 yournum = card3 + card2 + card1;
        //                 System.out.println("Your total is now " + yournum + ".");
        //             } else if (chooseace.equals("11")){
        //                 card1 = 11;
        //                 yournum = card3 + card2 + card1;
        //                 System.out.println("Your total is now " + yournum +".");
        //             } else {
        //                 System.out.println("Please choose 1 or 11.");
        //             }
        //     }
        // }
        // //if card 2 is ace
        // if ( card2 == 11) {
        //     yournum = card3 + card2 + card1;
        //     System.out.println("You get an ACE!");
        //     System.out.println("Your total is now" + yournum + "(Ace counted as 11 now).");
        //     System.out.println("Don't worry if you get over 21 now, you can still choose if your ace is 1 or 11!");


        //     if(card1 + card2 <= 21) {
        //         System.out.print("You want your Ace to be \"1\" or \"11\"?");
        //         chooseace = keyboard.next();
        //             if (chooseace.equals("1")){
        //                 card2 = 1;
        //                 yournum = card3 + card2 + card1;
        //                 System.out.println("Your total is now " + yournum + ".");
        //             } else if (chooseace.equals("11")){
        //                 card2 = 11;
        //                 yournum = card3 + card2 + card1;
        //                 System.out.println("Your total is now " + yournum + ".");
        //             } else {
        //                 System.out.println("Please choose 1 or 11.");
        //             }
        //     }else if (card1 == 11) {
        //         card2 = 1;
        //         yournum = card3 + card2 + card1;
        //         System.out.println("Sadly, you already got over 11, if your ace is 11 now, you lose instantly. Your ace is counted as one now.");
        //         System.out.println("Your total is now " + yournum + ".");
        //     }
        // }
        // yournum = card3 + card2 + card1;
        //System.out.println("Your total is " + yournum + ".");

        //Dealer cards
        int dcard1 = 2 + r.nextInt(10);
        int dcard2 = 2 + r.nextInt(10);

        // //Dealer card hidden
        // System.out.println("The dealer has a " + dcard1 + " showing, and a hidden card.");
        // System.out.println("His total is hitten, too.");

        //Setting up yournum
        yournum = card1 + card2;

        //Keep playing or no
        String yn = "";

        //Money
        int money = 500;
        int moneybet = 0;
        do {
            yournum = 0;
            dealernum = 0;
            out = 0;
            //Money now
            System.out.println("You now have " + money + ".");
            System.out.println("");

            System.out.println("How much do you want to bet? min 5, max 100.");
            moneybet = keyboard.nextInt();

            //Money spent
            money = money - moneybet;
            //Earn or lost value
            moneybet = moneybet*2;
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
            if (card1 != 11){
                if (card2 != 11) {
                    System.out.println("Your total is now " + yournum + ".");
                }
            }

                        //Dealer card hidden
                    System.out.println("The dealer has a " + dcard1 + " showing, and a hidden card.");
                    System.out.println("His total is hitten, too.");

                    //Player's turn
        if (card1 + card2 == 21){
            System.out.println("You can only stay because you already got a BLACK JACK!");
        } else {
            do {
                //Hit or stay
                restartloop = 0;
                System.out.print("Would you like to \"hit\" or \"stay?\"");
                choose = keyboard.next();
                
                if (choose.equals("hit")) {
                    //Pick a card
                    card3 = 2 + r.nextInt(10);
                    System.out.println("You got a " + card3);
                    yournum = yournum + card3;
                    if (card3 != 11) {
                        System.out.println("Your total is now " + yournum + ".");
                    }
                    yournum = yournum - card3;
    
                    //If card3 is ace
                    if ( card3 == 11) {
                        System.out.println("You get an ACE!");
                        yournum = yournum + card3;
                        System.out.println("Your total is now " + yournum + ".");
                        yournum = yournum - card3;
                        if (yournum >= 11) {
                            card3 = 1;
                            yournum = yournum + card3;
                            System.out.println("Sadly, you already got over 11, if your ace is 11 now, you will lose instantly. Your ace is counted as one now.");
                            System.out.println("Your total is now " + yournum + ".");
                            restartloop = 10;
                        if (restartloop < 10) {
                        //Choose 1 or 11
                            if(yournum <= 21) {
                                System.out.println("Don't worry if you get over 21 now, you can still choose if your ace is 1 or 11!");
                                System.out.println("You want your Ace to be \"1\" or \"11\"?");
                                chooseace = keyboard.next();
                                    //Choose 1
                                    if (chooseace.equals("1")){
                                        yournum = yournum - card3;
                                        card3 = 1;
                                        yournum = yournum + card3;
                                        System.out.println("Your total is now " + yournum + ".");
                                        //if over 21
                                        if (yournum > 21) {
                                            System.out.println("Your total is more than 21! ");
                                            System.out.println("The Dealer Wins!");
                                            System.out.println("You now have " + money + ".");
                                            out = out + 100;
                                        }
                                    //Choose 11
                                    } else if (chooseace.equals("11")){
                                        yournum = yournum - card3;
                                        card3 = 11;
                                        yournum = yournum + card3;
                                        System.out.println("Your total is now " + yournum + ".");
                                    //Unvalid input
                                    } else {
                                        System.out.println("Please choose 1 or 11.");
                                    }
                            // If card1 + 2 is bigger than 11
                            }
                        }

                            if (yournum > 21) {
                                System.out.println("Your total is more than 21! ");
                                System.out.println("The Dealer Wins!");
                                System.out.println("You now have " + money + ".");
                                out = out + 100;
                            }
                        }
                    } else {
                        //Put value back if not ace
                        yournum = yournum + card3;
                    }
    
                    //Stay 
                } else if (choose.equals("stay")){
                    System.out.println("Your total is  " + yournum + ".");
                    System.out.println("Okay, dealer's turn.");
                    System.out.println("His hidden card was a " + dcard2);
                    System.out.println("His total was " + (dcard2 + dcard1) + ".");
                    out = out + 100;
                } else {
                    System.out.println("Please input \"stay\" or \"hit\"");
                }
                // Not 21 yet
                if (yournum > 21) {
                    System.out.println("You got over 21!");
                    System.out.println("The dealer wins!");
                    System.out.println("You now have " + money + ".");
                }
            } while (yournum + out < 21);
        }
        dealernum = dcard1 + dcard2;
        if(yournum <= 21){
            //If Dealer pick card or no
            while (dealernum <= 16 ){
                System.out.println("Dealer chooses to hit.");
                dcard3 = 2 + r.nextInt(10);
                System.out.println("He drews a " + dcard3 + ".");
                dealernum = dealernum + dcard3;

                if (dcard3 == 11) {
                    System.out.println("The dealer got an ACE!");
                    if (dcard3 + dcard2 + dcard1 < 21) {
                        dcard3 = 1;
                        dealernum = dealernum + dcard3;
                        System.out.println("The dealer make the ACE into 1!");
                        System.out.println("His total is now  "+ dealernum + ".");
                    } 
                }
                if (dealernum >= 22) {
                    System.out.println("The dealer got more than 21! ");
                    System.out.println("You Win! ");
                    money = money + moneybet;
                    System.out.println("You now have " + money + ".");

                }
                System.out.println("His total is "+ dealernum + ".");

            }

            //Sum 
            if (dealernum <= 21) {
                if ( yournum <= 21) {
                    System.out.println("Dealer stays.");
                    //Who wins
                    if (yournum < dealernum) {
                        System.out.println("Dealer's total: " + dealernum + ".");
                        System.out.println("Your total: " + yournum + ".");
                        System.out.println("The Dealer Wins");
                        System.out.println("You now have " + money + ".");

                    } else if (yournum > dealernum) {
                        System.out.println("Dealer's total: " + dealernum + ".");
                        System.out.println("Your total: " + yournum + ".");
                        System.out.println("You Win!");
                        money = money + moneybet;
                        System.out.println("You now have " + money + ".");

                    }else if (yournum == dealernum) {
                        System.out.println("Dealer's total: " + dealernum + ".");
                        System.out.println("Your total: " + yournum + ".");
                        System.out.println("It's a tie, so the Dealer Wins!");
                        System.out.println("You now have " + money + ".");

                    }
                }
    
            }

        }
        System.out.println("Play again? \"y\" or \"n\"");
        yn = keyboard.next();
        } while (yn.equals("y") && money > 0);

    }
}  
