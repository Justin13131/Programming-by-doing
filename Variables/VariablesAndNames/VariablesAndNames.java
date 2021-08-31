//Variables VariablesAndNames 7pts Justin Hsu
public class VariablesAndNames
{
  public static void main (String [] args)
  {
    int cars, drivers, passengers, cars_not_driven, cars_driven;
    double space_in_a_car, carpool_capacity, average_passengers_per_car;

    cars = 100; //Number of cars
    space_in_a_car = 4.0; //Space in car
    drivers = 30; //Number of drivers
    passengers = 90; //Passengers
    cars_not_driven = cars - drivers; //Cars not driven
    cars_driven = drivers; //Cars driven
    carpool_capacity = cars_driven * space_in_a_car;
    average_passengers_per_car = passengers/cars_driven;
    //These are the variables

    System.out.println ("There are " + cars + " cars available.");
    System.out.println ("There are only " + drivers + " drivers avaliable.");
    System.out.println ("There will be " + cars_not_driven + " empty cars today.");
    System.out.println ("We can transport "  + carpool_capacity + " people today.");
    System.out.println ("We have " + passengers + " to carpool today.");
    System.out.println ("We need to put about " + average_passengers_per_car + " in each car.");
    //Messages and Text
  }
}
