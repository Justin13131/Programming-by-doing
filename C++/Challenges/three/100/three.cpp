#include <iostream>
#include <string>
using namespace std;

int input, result, sum, digit, temp = 0;

int main (){
    cout << "power: ";
    cin >> input;



    for (int i = 2; i < 35500000; i++){
        sum = 0;
        int num = 1;

        while (num > 0){
            digit = (i/num) % 10;
            num *= 10;
            temp = digit;

            for(int j = 1; j < input; j++){
                temp = temp*digit;
            }

            sum = sum + temp;
        }



        if (sum == i){
            result += i;
        }

    }
    cout << result;

}