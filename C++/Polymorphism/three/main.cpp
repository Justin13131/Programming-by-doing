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


};

int main(){
    Quadrilateral shapes[3] = {
        Quadrilateral(6),
        Quadrilateral(6, 5),
        Quadrilateral(3, 6, 5)
    };
    Quadrilateral squares[5];
    for(int i = 0; i<5;i++){
       squares[i]=Quadrilateral(i+5);
    }


    return 0;
}