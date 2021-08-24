public class MoreVariablesAndPrinting 
{
    public static void main ( String[] args )
    {
        String myName, myEyes, myTeeth, myHair;
        int myAge, myHeight, myWeight;

        myName = "Justin Hsu";
        myAge = 15; //Not a lie
        myHeight = 182; //Centimeters 
        myWeight = 72; //I don't know what's my weight so I just made it up 
        myEyes = "Brown and black";
        myTeeth = "White";
        myHair = "Brown";

        System.out.println( "Let's talk about " + myName + ".");
        System.out.println("He's " + myHeight + " centimeters tall.");
        System.out.println("He's " + myWeight + " kilograms heavy.");
        System.out.println("Actually, he is not too heavy.");
        System.out.println("He's got " + myEyes + " eyes and " + myHair + " hair.");
        System.out.println("His teeth are usually " + myTeeth + " depending on the coffee.");

        // These are the messages and the next one is tricky, I need to get it right.
        
        System.out.println( "If I add " + myAge + ", " + myHeight + ", and " + myWeight + " I get " + (myAge + myHeight + myWeight) + "." );
    } 

}
