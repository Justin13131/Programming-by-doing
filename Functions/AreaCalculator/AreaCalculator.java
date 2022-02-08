//Functions AreaCalculator 110pts Justin Hsu

import java.util.*;

public class AreaCalculator {
    
    public static void main (String [] args) {
        System.out.println("Shape Area Calculator");
        Scanner keyboard = new Scanner(System.in);

        int count = 1;
        String choose;
        while (count == 1){
            System.out.println("=============================");
            System.out.println("1) Triangle");
            System.out.println("2) Rectangle");
            System.out.println("3) Square");
            System.out.println("4) Circle");
            System.out.println("5) Quit");
            choose = keyboard.next();

            //Which shape
            if (choose.equals("1")) {
                area_triangle(5, 6);
            }else if (choose.equals("2")) {
                area_rectangle(5, 6);
            }else if (choose.equals("3")) {
                area_square(5);
            }else if (choose.equals("4")) {
                area_circle(5);
            }else if (choose.equals("5")) {
                count++;
            }else {
                System.out.println("Please input numbers from 1 to 5.");
            }

        }
        System.out.println("Good bye");
    }
    //Triangle
    public static double area_triangle( int base, int height) {
        Scanner keyboard = new Scanner(System.in);
        //Define Area
        double area = 0;

        //Base input
        System.out.print("Base: ");
        base = keyboard.nextInt();

        //Height input  
        System.out.print("Height: ");
        height = keyboard.nextInt();

        //Area calculation
        area = base * height;
        area = area/2;
        //Output
        System.out.println("The area is: " + area + ".");
        return area;

    }
    //Rectangle
    public static int area_rectangle( int length, int width ) {
        Scanner keyboard = new Scanner(System.in);
        //Define Area
        int area = 0;

        //Length input
        System.out.print("Length: ");
        length = keyboard.nextInt();

        //Width input
        System.out.print("Width: ");
        width = keyboard.nextInt();

        //Area calculation
        area = length*width;
        //Output
        System.out.println("The area is: " + area + ".");
        return area;
    }
    //Square
    public static int area_square(int side) {
        Scanner keyboard = new Scanner(System.in);
        //Area define
        int area = 0;

        //Side input
        System.out.print("Side: ");
        side = keyboard.nextInt();

        //Area calculation
        area = side*side;
        //Output
        System.out.println("The area is: " + area + ".");
        return area; 
    }
    //Circle
    public static double area_circle(int radius) {
        Scanner keyboard = new Scanner(System.in);
        //Area
        double area = 0;
        //Radius power of 2
        double radiuspow;

        //Radius input
        System.out.print("Radius: ");
        radius = keyboard.nextInt();

        //Power the Radius
        radiuspow = Math.pow(radius, 2);
        //Area calculation
        area = 3.14*radiuspow;
        //Output
        System.out.println("The area is: " + area + ".");
        return area;


    }

}
