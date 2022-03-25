#include <iostream>
using namespace std;
class Quadrilateral{
private:
    double Area;
    string Type;

public:
    Quadrilateral() {}

    Quadrilateral(int x){
        Area = x * x;
        Type = "Square";
    }

    Quadrilateral(int w, int h){
        Area = w * h;
        Type = "Rectangle";
    }

    Quadrilateral(int b1, int b2, int h){
        Area = (b1 + b2) * h / 2;
        Type = "Trapezoid";
    }

    int getArea(){
        return Area;
    }

    string getType(){
        return Type;
    }
    int changeShape(int x){
        Type = "Square";
        Area = x*x;
    } //change to a square with a side of x
    int changeShape(int w, int h){
        Type = "Rectangle";
        return w * h;
    } //change  to a rectangle with sides w and h
    int changeShape(int b1, int b2, int h){
        Type = "Trapezoid";
        return (b1 + b2) * h / 2;
    } //change  to a trapezoid 
};

int main(){
    Quadrilateral shapes[3] = {
        Quadrilateral(6),
        Quadrilateral(6, 5),
        Quadrilateral(3, 6, 5)
    };
    Quadrilateral squares[3];
    int i5;
    for(int i = 0; i<3;i++){
        i5 = i + 5;
       squares[i]=Quadrilateral(i5);
    };
    squares[1].changeShape(6,6);
    cout << endl << "Array Squares: ";
    cout << endl << squares[0].getType() << ", " << squares[0].getArea() << ", #1";
    cout << endl << squares[1].getType() << ", " << squares[1].getArea() << ", #2";
    cout << endl << squares[2].getType() << ", " << squares[2].getArea() << ", #3";
    cout << endl << "Array Shapes: ";

    cout << endl << shapes[0].getType() << ", " << shapes[0].getArea() << ", #4";
    cout << endl << shapes[1].getType() << ", " << shapes[1].getArea() << ", #5";
    cout << endl << shapes[2].getType() << ", " << shapes[2].getArea() << ", #6 ";

    cout << endl <<  "Array Shapes total: " << shapes[0].getArea()+shapes[1].getArea()+shapes[2].getArea();
    cout << endl << "Array Squares total: " << squares[0].getArea() +  squares[1].getArea() +  squares[2].getArea();
    int s = shapes[0].getArea()+shapes[1].getArea()+shapes[2].getArea() + squares[0].getArea() +  squares[1].getArea() +  squares[2].getArea();
    cout << endl << "Total: " << s;
    return 0;
}