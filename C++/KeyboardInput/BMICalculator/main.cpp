// KeyboardInput c++ BMICalculator 28pts Justin Hsu
#include <iostream>
using namespace std;
int main(){
    int height = 0;
    int weight = 0;
    int BMI = 0;

    cout << "Enter your height and inches: ";
    cin >> height;
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    BMI = (weight*703)/(height*height);

    cout << "Your BMI is: " << BMI << endl << endl;
    cout << "How to read your BMI: " << endl;
    cout << "Below 18.5 : Underweight" << endl;
    cout << "18.5 - 24.9 : Average " << endl;
    cout << "25.0 - 29.9 : Overweight" << endl;
    cout << "30 and above : Obese" << endl;

    system("pause"); 




}