//IfStatements ModulusAnimation 20pts Justin Hsu

public class ModulusAnimation{
	public static void main( String[] args ){
        MAnimation();
        MAWorm();
        MASymbols();
	}
    public static void MAnimation(){
        for ( int i=0; i<80; i++ ) {
			if ( i%10 == 0 )
				System.out.print(" Mr. Mitchell is cool. \r");

			Thread.sleep(200);
		}
		
    }
    public static void MAWorm() {
        for ( int i=0; i<80; i++ ) {
			if ( i%16 == 0 )
				System.out.print(" ********                 \r");
			else if ( i%16 == 1 )
				System.out.print("   ********               \r");
			else if ( i%16 == 2 )
				System.out.print("     ********             \r");
			else if ( i%16 == 3 )
				System.out.print("       ********           \r");
			else if ( i%16 == 4 )
				System.out.print("         ********         \r");
			else if ( i%16 == 5 )
				System.out.print("           ********       \r");
			else if ( i%16 == 6 )
				System.out.print("             ********     \r");
			else if ( i%16 == 7 )
				System.out.print("               ********   \r");
			else if ( i%16 == 8 )
				System.out.print("                 ******** \r");
			else if ( i%16 == 9 )
				System.out.print("               ********   \r");
			else if ( i%16 == 10 )
				System.out.print("             ********     \r");
			else if ( i%16 == 11 )
				System.out.print("           ********       \r");
			else if ( i%16 == 12 )
				System.out.print("         ********         \r");
			else if ( i%16 == 13 )
				System.out.print("       ********           \r");
			else if ( i%16 == 14 )
				System.out.print("     ********             \r");
			else if ( i%16 == 15 )
				System.out.print("   ********               \r");

			Thread.sleep(200);
		}
    }
    public static void MASymbols(){
        int repeats = 5;
		int steps_per_second = 10;

		for ( int i=0; i<repeats*11 ; i++ )
		{
			if ( i%11 == 0 )
				System.out.print(" .oOo..... \r");
			else if ( i%11 == 1 )
				System.out.print(" ..oOo.... \r");
			else if ( i%11 == 2 )
				System.out.print(" ...oOo... \r");
			else if ( i%11 == 3 )
				System.out.print(" ....oOo.. \r");
			else if ( i%11 == 4 )
				System.out.print(" .....oOo. \r");
			else if ( i%11 == 5 )
				System.out.print(" ......oOo \r");
			else if ( i%11 == 6 )
				System.out.print(" .......oO \r");
			else if ( i%11 == 7 )
				System.out.print(" o.......o \r");
			else if ( i%11 == 8 )
				System.out.print(" Oo....... \r");
			else if ( i%11 == 9 )
				System.out.print(" oOo...... \r");
			else if ( i%11 == 10 )
				System.out.print(" .oOo..... \r");

			Thread.sleep(1000/steps_per_second);
		}
    }
}

