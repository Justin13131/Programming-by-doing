#include <iostream>
using namespace std; 
class Dog {
    public:
        int a;
        double w;
};

int main() {
    Dog doggo;

    doggo.a = 3;
    doggo.w = 4.5;

    cout << "Doggo's age: " << doggo.a << endl;

    cout << "Doggo's weight: " << doggo.w << endl;
}