// Variables MoreVariablesAndPrinting 7pts Justin Hsu
public class MoreVariablesAndPrinting 
{
    public static void main ( String[] args )
    {
        String myName, myEyes, myTeeth, myHair;
        int myAge, myHeight, myWeight;

        myName = "Zed A. Shaw";
        myAge = 35; //Not a lie
        myHeight = 74; //Inches 
        myWeight = 180; //lbs
        myEyes = "Brown and black";
        myTeeth = "White";
        myHair = "Brown";

        System.out.println( "Let's talk about " + myName + ".");
        System.out.println("He's " + myHeight + " inches tall.");
        System.out.println("He's " + myWeight + " pounds heavy.");
        System.out.println("Actually, that's not too heavy.");
        System.out.println("He's got " + myEyes + " eyes and " + myHair + " hair.");
        System.out.println("His teeth are usually " + myTeeth + " depending on the coffee.");

        // These are the messages and the next one is tricky, I need to get it right.
        
        System.out.println( "If I add " + myAge + ", " + myHeight + ", and " + myWeight + " I get " + (myAge + myHeight + myWeight) + "." );
    } 

}
