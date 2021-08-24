// KeyboardInput NameAgeAndSalary 15pts Justin Hsu

import java.util.Scanner;

public class NameAgeAndSalary
{
    public static void main (String[] args)
    {
    Scanner keyboard = new Scanner(System.in);

    String name;
    int age, salary;

    System.out.println("Hello. What's your name");
    name = keyboard.next();

    System.out.println("Hi " + name + " How old are you.");
    age = keyboard.nextInt();

    System.out.println("So you're " + age + " eh? That's not old at all!");
    System.out.println("How much do you make, " + name + ".");
    salary = keyboard.nextInt();
    
    System.out.println(salary + " I hope that's per hour not per year! LOL!");
    }
    
}