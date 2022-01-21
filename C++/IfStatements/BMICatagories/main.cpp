//IfStatements c++ BMICatagories 45pts Justin Hsu
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
    if (BMI < 15) {
        cout << "very severely underweight";
    } else if (15 <= BMI <= 16){
        cout << "severely underweight";
    } else if (16 < BMI <= 18.4){
        cout << "underweight";
    } else if (18.5 <= BMI <=24.9) {
        cout << "normal weight";
    } else if (25.0 <= BMI <= 29.9){
        cout << "overweight";
    } else if (20.0 <= BMI <= 34.9) {
        cout << "severely obese";
    } else {
        cout << "very severely (or \"morbidly\") obese";
    }
    cout << "\n";
    system("pause"); 
    return 0;
}