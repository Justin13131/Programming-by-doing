// IfStatements WhatIf 15pts Justin Hsu
public class WhatIf {
    public static void main(String[] args){
        int people = 20; //Amount of people
        int cats = 30; //Amount of cats
        int dogs = 30; //Amount of dogs
        //Variables
        if (people < cats) {
            System.out.println ("Too many cats! The world is doomed!");
        }

        if (people > cats) {
            System.out.println ("Not mant cats! The world is saved!");
        }

        if (people < dogs) {
            System.out.println ("The world is drooled on!");
        }

        if (people > dogs) {
            System.out.println ("The world is dry!");
        }

        dogs += 5; //Dog +5

        if (people >= dogs ) {
            System.out.println ("People are greater than or equal to dogs.");
        }

        if ( people <= dogs )
		{
			System.out.println( "People are less than or equal to dogs." );
		}

		if ( people == dogs )
		{
			System.out.println( "People are dogs." );
		}
    }
}