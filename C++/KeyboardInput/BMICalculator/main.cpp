// KeyboardInput c++ BMICalculator 28pts Justin Hsu
#include <iostream>
using namespace std;
int main(){
    int height = 0;
    int weight = 0;
    int BMI = 0;

    cout << "Enter your height in inches: ";
    cin >> height;
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    BMI = (weight*703)/(height*height);

    cout << "Your BMI is: " << BMI << endl << endl;

    system("pause"); 
    return 0;
}