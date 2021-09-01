//IfStatementsP2 ChooseYourOwnAdventure 60pts Justin Hsu
import java.util.Scanner;

public class OwnAdventure {
    
    public static void main (String[] args) {
        
        Scanner keyboard = new Scanner(System.in);
        //Scanner
        String room1, room2, room3 = "";
        //Room 1 - 3
        System.out.println("WELCOME TO MITCHELL'S TINY ADVENTURE!");
        System.out.println("Make sure you don't capitalize anything in your answer because the owner of the house hate capitalized letters!");
        System.out.println("You are in a creepy house! Would you like to go \"upstair\" or into the \"kitchen\"?");
        System.out.print( "> " );
        room1 = keyboard.next();
        
        if (room1.equalsIgnoreCase("kitchen")) { //If statement after import room1
            System.out.println("There is a long countertop with dirty dishes everywhere. Off to one side there is, as you expect, a refrigerator. You may open the \"refrigerator\" or look in a \"cabinet\".");
            System.out.print( "> " );
            room2 = keyboard.next();

            if (room2.equalsIgnoreCase("refrigerator")) { //If statement after import room 2
                System.out.println("Inside the refrigerator you see food and stuff. It looks pretty nasty. Would you like to eat some of the food? \" yes or no \"?");
                System.out.print( "> " );
                room3 = keyboard.next();
                if (room3.equalsIgnoreCase("yes")){ //If statement after import room 3
                    System.out.println("You died of eating poisonous food... eventually.");
                }
                else if (room3.equalsIgnoreCase("no")){ //If statement afer import room 3
                    System.out.println("You died of starvation... eventually.");
                }
                else { //If statement if import unavaliable words 
                    System.out.println("You probably died out of giving a wrong answer or just got killed by the owner of the house because you capitalized somethings! LOL!");
                }
            }
            else if (room2.equalsIgnoreCase("cabinet")) { //If statement after import room 2
                System.out.println("Inside the cabinet you see cookies and bread. It looks pretty nice. Would you like to eat some of the food? \"yes or no\"?");
                System.out.print( "> " );
                room3 = keyboard.next();
                if (room3.equalsIgnoreCase("yes")) { //If Statement after import room 3
                    System.out.println("The owner of the house appears while you are eating his cookies, you are under arrested.");
                }
                else if (room3.equalsIgnoreCase("no")) { //If Statement after import room 3
                    System.out.println("You died of starvation... eventually.");
                }
                else { //If statement after import unavaliable words
                    System.out.println("You probably died out of giving a wrong answer or just got killed by the owner of the house because you capitalized somethings! LOL!");
                }
            }
            else { //If Statement after import unavaliable words
                System.out.println("You probably died out of giving a wrong answer or just got killed by the owner of the house because you capitalized somethings! LOL!");
            }
        }
        else if (room1.equalsIgnoreCase("upstair")){ //If Statement after import room 1
            System.out.println("Upstairs you see a hallway. At the end of the hallway is the master \" bedroom \". There is also a \" bathroom \" off the hallway. Where would you like to go?");
            System.out.print( "> " );
            room2 = keyboard.next();
            if (room2.equalsIgnoreCase("bedroom")){ //If Statement after import room 2
                System.out.println("You are in a plush bedroom, with a expensive-looking hardwood furniture. The bed is unmade. In the back of the room, the closest door is ajar. Would you like to open the door? \" yes or no \" ");
                System.out.println("> ");
                room3 = keyboard.next();
                if(room3.equalsIgnoreCase("yes")) { //If Statement after import room 3
                    System.out.println("You see alot of dead bodies, you tried to runaway but the house owner stabbed you with a knife and bring you back to the room.");
                }
                else if (room3.equalsIgnoreCase("no")) { //If statement after import room 3
                    System.out.println("Well, then I guess you will never know what was in there. Thanks for playing.");
                    System.out.println("I'm tired of making nested if statements.");
                }
                else { //If statement after import unavaliable words
                    System.out.println("You probably died out of giving a wrong answer or just got killed by the owner of the house because you capitalized somethings! LOL!");
                }
            }
            else if (room2.equalsIgnoreCase("bathroom")){ //If statement after import room 2
                System.out.println("Inside the bathroom you saw a dead body, do you want to runaway? \" yes or no \"");
                System.out.println("> ");
                room3 = keyboard.next();
                if (room3.equalsIgnoreCase("yes")) { //If statement after import room 3
                    System.out.println("The owner of the house is tracing you, when you finally reach the gate, the owner of the house stabbed you and grab you to a room with a lot of dead bodies.");
                }
                else if (room3.equalsIgnoreCase("no")) {//If statement after import room 3
                    System.out.println("The owner of the house stabbed you with a knife, thereore, you are dead.");
                }
                else { //If statement after import unavaliable words
                    System.out.println("You probably died out of giving a wrong answer or just got killed by the owner of the house because you capitalized somethings! LOL!");
                }
            }
            else {//If statement after import unavalible words
                System.out.println("You probably died out of giving a wrong answer or just got killed by the owner of the house because you capitalized somethings! LOL!");
            }
        }
        else{ //If Statement after import unvaliable words
            System.out.println("You went to other places and got killed by some kind of mysterious animal!");
        }
    }
}