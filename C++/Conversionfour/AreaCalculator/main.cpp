//functions c++ AreaCalculator 110pts Justin Hsu
#include <iostream>
#include <cmath>

using namespace std; 
int choice = 0;
void triangle(int x, int y) {
    double area = 0;
    cout << "Base: ";
    cin >> x;
    cout << endl << "Height: ";
    cin >> y;
    int *x1 = &x;
    int *y1 = &y;
    area = *x1 * *y1;
    area = area/2;
    double *parea = &area;

    cout << endl << "The area is " << *parea << "." << endl;
}

void rect(int x, int y) {
    int area = 0;
    cout << "Length: ";
    cin >> x;
    cout << endl << "Width: ";
    cin >> y;
    int *x1 = &x;
    int *y1 = &y;
    area = *x1 * *y1;
    int *parea = &area;
    cout << endl << "The area is " << *parea << "." << endl;
}

void square(int x) {
    int area = 0;
    cout << "Side: ";
    cin >> x;
    int *x1 = &x;
    area = *x1**x1;
    int *parea = &area;
    cout << endl << "The area is " << *parea << "." << endl;
}

void circle(int x) {
    double area = 0;
    double powrad = 0;

    cout << "Radius: ";
    cin >> x;
    int *x1 = &x;
    powrad = pow(*x1, 2);
    double *ppowrad = &powrad;
    area = 3.14159**ppowrad;
    double *parea = &area;
    cout << endl << "The area is " << *parea << "." << endl;

}
int main(){
    
    cout << "Shape Area Calculator version 0.1 (c) 2005 Mitchell Sample Output, Inc." << endl;
    cout << "\n";
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
    do {
        cout << "1) Triangle" << endl << "2) Rectangle" << endl << "3) Square" << endl << "4) Circle" << endl << "5) Quit" << endl << "Which shape: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                triangle(5 , 6);
                break;
            case 2: 
                rect(5, 6);
                break;
            case 3:
                square(5);
                break;
            case 4:
                circle(5);
                break;
            case 5: 
                break;
        }
        cout << "\n";
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;
    } while (choice != 5);
    cout << "Goodbye.";

}