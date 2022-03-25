#include <iostream>
#include <vector>
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
    Quadrilateral squares[5];
    int k = 0;
    for(int i = 0; i<3;i++){
       squares[i]=Quadrilateral(i-k);
       k++;
    };

    for(int i = 0; i<5;i++){
       squares[i]=Quadrilateral(i+5);
    };
    squares[1].changeShape(6,6);
    cout << "Shapes: " << shapes[1].getArea()+shapes[2].getArea()+shapes[3].getArea();
    cout << endl << "Squares: " << squares[1].getArea() +  squares[2].getArea() +  squares[3].getArea() +  squares[4].getArea() +  squares[5].getArea();

    return 0;
}