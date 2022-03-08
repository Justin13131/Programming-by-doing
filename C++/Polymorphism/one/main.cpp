#include <iostream>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;
double findAreaSqu(int x) {
    double area = pow(x, 2);

    return area;
}
double findAreaRec(int w, int h) {
    double area;
    area = w*h;

    return area;
}
double findAreatra(double b1, double b2, double h) { 
    return (b1+b2)*1/2*h;
}


int main() {
    int which;
    double side1;
    double side2;
    double h;
    int i = 0;
    int d;
        cout << "Which shape? ( 1. Square, 2. Rectangle, 3. trapezoid ): ";
            cin >> which;

            if (which == 1) {
                cout << endl << "Side: ";
                cin >> side1;
                
                cout << endl << "Area: " << findAreaSqu(side1);
            }else if(which == 2) {
                cout << endl << "Width: ";
                cin >> side1;
                cout << endl << "Height: ";
                cin >> side2;
                cout << endl << "Area:" << findAreaRec(side1, side2);
            }else if (which == 3) {
                cout << endl << "Side A: ";
                cin >> side1;
                cout << endl << "Side B: ";
                cin >> side2;
                cout << endl << "Height: ";
                cin >> h;
                cout << endl << "Area: " << findAreatra(side1, side2, h);
                
            } else {
                cout << endl << "Please enter 1, 2 or 3";
            }

    return 0;
}