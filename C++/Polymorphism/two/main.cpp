#include <iostream>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <cmath>

using namespace std;

class Quadrilateral {
    private:
    double Area; 
    string Type;//rectangle, square, trapezoid
    double x1;
    double w1;
    double h1;
    double b11;
    double b22;
    double h11;
    public:
    Quadrilateral(); //initialize with nothing
    Quadrilateral(double x){ //create a square
        Area = pow(x, 2);
        Type ="square";
    }
    Quadrilateral(int w, int h){ //create a rectangle
        Area = w*h;
        Type = "Rectangle";
    }
    Quadrilateral(int b1, int b2, int h){ //create a trapezoid
        //b11 = b1;
        //b22 = b2;
        //h = h11;
        Area = (b1+b2)*1/2*h;
        Type = "Trapezoid";
    }

    double getArea() {
        return Area;
    }
    string getType(){
        return Type;
    }
    void findAreaSqu() {
         cout << "Shape 1: " << Area << endl;
    }
    void findAreaRec() {
        cout << "Shape 2: " << Area << endl;
    }
    void findAreatra() { 
        cout << "Shape 3: " << Area << endl;
    }

};
    

int main() {
    Quadrilateral shape1(5);
    Quadrilateral shape2(5, 4);
    Quadrilateral shape3(2, 6, 4);

    shape1.getType();
    shape1.findAreaSqu();
    shape2.findAreaRec();
    shape3.findAreatra();

    


}