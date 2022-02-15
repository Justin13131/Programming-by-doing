#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>  

using namespace std;
int result = 0, x;

int main() {
    cout << "Power: ";
    cin >> x;
    for (int i = 2; i < 355000; i++) { 
        int sumOfPowers = 0; int number = i; 
        while (number > 0) {
            int d = number % 10;
            number /= 10;
 
            int temp = d;
            for(int j = 1; j < x; j++){
                temp *= d;
            }
            sumOfPowers += temp;
        }
 
        if (sumOfPowers == i) {
            result += i;
        }
    }
    cout << result;
}