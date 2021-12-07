// Records ALittleDataBaseIsShorterWithALoop 100pts Justin Hsu
import java.util.*;
class Student
{
	String name;
	int grade;
	double avg;
}
public class ALittleDataBaseIsShorterWithALoop {
    
    public static void main (String[] args) {
        Scanner keyboard = new Scanner(System.in);

        int count = 1;
        Student test[] = new Student[3];

        for (int i = 0; i <= 2; i++) {

            test[i] = new Student();
            System.out.print("Enter Student " + count + "'s name: ");
            test[i].name = keyboard.next();
            System.out.print("Enter Student " + count + "'s grade: ");
            test[i].grade = keyboard.nextInt();
            System.out.print("Enter Student " + count + "'s average: ");
            test[i].avg = keyboard.nextDouble();
            System.out.println("");
            count++;
        }

        System.out.println("The names are: " + test[0].name + ", " + test[1].name + ", " + test[2].name);
        System.out.println("The grades are: " + test[0].grade + ", " + test[1].grade + ", " + test[2].grade);
        System.out.println("The averages are: " + test[0].avg + ", " + test[1].avg + ", " + test[2].avg);


    }
    
}
