//FilsInputAndOutput LetterRevisited 40pts Justin Hsu
import java.io.*;
public class LetterRevisited{
	public static void main(String[] args)throws IOException{
	File letter = new File("letter.txt");
	FileWriter fw = new FileWriter(letter);
	PrintWriter pw = new PrintWriter(fw);
		pw.println("+--------------------------------------------------------------+");
		pw.println("|                                                         #### |");
		pw.println("|                                                         #### |");
		pw.println("|                                                         #### |");
		pw.println("|                                                              |");
		pw.println("|                             Bill Gates                       |");
		pw.println("|                             1 Microsoft Way                  |");
		pw.println("|                             Redmood, WA 98 502               |");
		pw.println("|                                                              |");
		pw.println("+--------------------------------------------------------------+");
		pw.close();
	}
}