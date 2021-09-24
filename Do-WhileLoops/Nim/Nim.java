//Do-WhileLoop Nim 185pts Justin Hsu

public class Nim
{
	public static void main(String[] args){
		Scanner keyboard = new Scanner(System.in);
		String pile, name1, name2, name;
		int A, B, C, temp, i;
		A = 3;
		B = 4;
		C = 5;
		
		System.out.println("Here is an example game, with starting piles of 3, 4, and 5 counters.\n");
		System.out.print("Player 1, enter your name: ");
		name1 = keyboard.next();
		System.out.print("Player 2, enter your name: ");
		name2 = keyboard.next();

		if (name2.equals("computer")){
			Random r = new Random();
			name = name2;
			while ((A>0 || B>0 || C>0) && (A+B+C > 1)){	
				if (name.equals(name2)){		//player turn
					name = name1;
					System.out.print("\n\n"+name + ", choose a pile: ");
					pile = keyboard.next();
					
					//anti-cheat: pick from empty pile 
					while ((pile.equals("A") && A <=0)||(pile.equals("B") && B <=0)||(pile.equals("C") && C <=0)){
						System.out.print("Nice try, " + name + ". That pile is empty. Choose again: ");
						pile = keyboard.next();
					}
					System.out.print("How many to remove from pile "+pile+": ");
					temp = keyboard.nextInt();
					
					//anti-cheat: pick less than 1
					while ( temp <= 0 ){
						System.out.print("\nYou must choose at least 1. How many? ");
						temp = keyboard.nextInt();
					}
					
					//anti-cheat: pick too many
					while ((pile.equals("A") && temp>A)||(pile.equals("B") && temp>B)||(pile.equals("C") && temp>C)){
						System.out.print("Pile " + pile + " doesn't have that many. Try again: ");
						temp = keyboard.nextInt();
					}
					
					//pick
					if (pile.equals("A")){
						A -= temp;
					}
					else if (pile.equals("B")){
						B -= temp;
					}
					else if (pile.equals("C")){
						C -= temp;
					}
					System.out.println("");
					//graphic
					i = 0;
					if ( A > i )
						i = A;
					if ( B > i )
						i = B;
					if ( C > i )
						i = C;
					while ( i > 0){
						System.out.print("\t");
						if ( i <= A)
							System.out.print("* ");
						else System.out.print("  ");
						if ( i <= B)
							System.out.print("* ");
						else System.out.print("  ");
						if ( i <= C)
							System.out.print("* ");
						else System.out.print("  ");
						System.out.println("");
						 i -= 1;
					}
					System.out.println("\tA B C");
					// graphic end
				}	
				else if (name.equals(name1)){ //computer turn
					name = name2;
					int pcpile = 1;
					temp = 0;
					//choose a pile
					do {
						pcpile = 1 + r.nextInt(3);
					} while ((pcpile == 1 && A <=0)||(pcpile == 2 && B <=0)||(pcpile == 3 && C <=0));
					
					if (pcpile == 1){
						do{
							temp = 1 + r.nextInt(A);
						} while (A+B+C-temp == 0);
						A -= temp;
						System.out.println("Computer chose pile A");
					}
					else if (pcpile == 2){
						do {
							temp = 1 + r.nextInt(B);
						} while (A+B+C-temp == 0);
						B -= temp;
						System.out.println("Computer chose pile B");
					}
					else if (pcpile == 3){
						do {
							temp = 1 + r.nextInt(C);
						} while (A+B+C-temp == 0);
						C -= temp;
						System.out.println("Computer chose pile C");
					}
					System.out.println("Computer picked: "+ temp + "from the pile.");
					System.out.println("");
					//graphic
					i = 0;
					if ( A > i )
						i = A;
					if ( B > i )
						i = B;
					if ( C > i )
						i = C;
					while ( i > 0){
						System.out.print("\t");
						if ( i <= A)
							System.out.print("* ");
						else System.out.print("  ");
						if ( i <= B)
							System.out.print("* ");
						else System.out.print("  ");
						if ( i <= C)
							System.out.print("* ");
						else System.out.print("  ");
						System.out.println("");
						 i -= 1;
					}
					System.out.println("\tA B C");
					// graphic end
				}
				
			}
		}
		//vs computer loop  end
		
		if ((A+B+C == 1) && name.equals(name1)){
			System.out.println(name2 + ", you must take the last remaining counter, so you lose. "+name1+" wins!");
		}
		else if ((A+B+C == 1) && name.equals(name2)){
			System.out.println(name1 + ", you must take the last remaining counter, so you lose. "+name2+" wins!");
		}
		else if (name.equals(name1)){
			System.out.println(name2 + ", there are no counters left, so you WIN!");
		}
		else if (name.equals(name2)){
			System.out.println(name1 + ", there are no counters left, so you WIN!");
		}
			
	}
}