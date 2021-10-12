import java.util.*;
public class MoreNumberPuzzles{
	public static void main(String[] args){
        int choice;
        while(true){
            choice = choose();
            if(choice == 1){
                one();
                System.out.println();
            }else if(choice == 2){
                two();        
            }else if(choice ==3){
                break;
            }else{
            System.out.println( "Invalid option. Please try again." );
            }

        }	
    }
    //Choose 1
	public static void one(){
		for (int tens = 1; tens <= 5; tens++ )
		{
			for (int ones = 0; ones < 10; ones++ )
			{
				if ( (tens + ones) > 10 && ( (tens * 10) + ones) <= 56 ) 
					System.out.print( tens + "" + ones + "\t");
					
			}
		}
		
	}
	
	//Choose2
	public static void two()
	{	
		for ( int tens = 1; tens < 10; tens++)
		{
			for ( int ones = 0; ones < 10; ones++ )
			{
				if ( ((tens * 10) + ones) - ((ones * 10) + (tens)) == ((tens) + ones) )
					System.out.println( (tens * 10) + ones );
			}
		}
	}
	public static int choose()
	{
		Scanner kb = new Scanner(System.in);
		int choice;
		System.out.println();
		System.out.println( "1) Find two digit numbers <= 56 with sums of digits > 10" );
		System.out.println( "2) Find two digit number minus number reversed which equals sum of digits" );
		System.out.println( "3) Quit" );
		System.out.print( "\n> " );
		choice = kb.nextInt();
		return choice;
	}

}