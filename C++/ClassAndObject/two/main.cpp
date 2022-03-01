#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <stdio.h>
    double cal;
    double cal2;
    double height = 0;
using namespace std;
class Triangle{
    public:
        int x1, y1, x2, y2, x3, y3 = 0;
        double side1, side2, side3, area = 0; 

        Triangle(int tx1, int ty1, int tx2, int ty2, int tx3, int ty3){
            x1 = tx1;
            x2 = tx2;
            x3 = tx3;
            y1 = ty1;
            y2 = ty2;
            y3 = ty3;
        }

        void run(int x1, int y1, int x2, int y2, int x3, int y3) {
            srand(time(NULL));

            cout << "Coordinate 1: (" << x1 << "," << y1 << ")" << endl;
            cout << "Coordinate 2: (" << x2 << "," << y2 << ")" << endl;
            cout << "Coordinate 3: (" << x3 << "," << y3 << ")" << endl;

            cal = x1 - x2;
            cal2 = y1 - y2; 
            cal = pow(cal, 2);
            cal2 = pow(cal2, 2);
            cal = cal + cal2;
            cal = sqrt(cal); 
            side1 = cal; 
            cout << "Side 1(C1 to C2): " << side1 << endl;

            cal = x2 - x3;
            cal2 = y2 - y3; 
            cal = pow(cal, 2);
            cal2 = pow(cal2, 2);
            cal = cal + cal2;
            cal = sqrt(cal); 
            side2 = cal; 
            cout << "Side 2(C2 to C3): " << side2 << endl;

            cal = x3 - x1;
            cal2 = y3 - y1; 
            cal = pow(cal, 2);
            cal2 = pow(cal2, 2);
            cal = cal + cal2;
            cal = sqrt(cal); 
            side3 = cal; 
            cout << "Side 3(C3 to C1): " << side3 << endl;

            height = side1 + side2 + side3;
            height /= 2;
            cal = height*(height-side1)*(height-side2)*(height-side3);
            cal = sqrt(cal);

    
            cout << "Area: " << cal << endl;
        }
};

int main() {
    srand(time(NULL));
    int xone, xtwo, xthree, yone, ytwo, ythree;
    xone = rand() % 100+1;
    xtwo = rand() % 100+1;
    xthree = rand() % 100+1;
    yone = rand() % 100+1;
    ytwo = rand() % 100+1;
    ythree = rand() % 100+1;
    Triangle Triangle1(xone, yone, xtwo, ytwo, xthree, ythree);
    
    
    
    
    Triangle1.run(xone, yone, xtwo, ytwo, xthree, ythree);
    return 0;
}