// #include <iostream>
// #include <stdio.h>
// #include <math.h>
// #include <string>  

// using namespace std;
// int result = 0, x;

// int main() {
//     cout << "Power: ";
//     cin >> x;
//     for (long long i = 2; i < 355000000; i++) { 
//         int sumOfPowers = 0; int number = i; 
//         while (number > 0) {
//             int d = number % 10;
//             number /= 10;
 
//             int temp = d;
//             //power x (input)
//             for(int j = 1; j < x; j++){
//                 temp *= d;
//             }
//             sumOfPowers += temp;
//         }
 
//         if (sumOfPowers == i) {
//             result += i;
//         }
//     }
//     cout << result;
// }
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