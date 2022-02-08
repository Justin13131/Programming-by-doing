//Challenges Challenge two 110pts Justin Hsu
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
unsigned long long calculate_sum(int M, int L){
    unsigned long long result = 0;
    unsigned long long modulo = 10000000000;
 
    for (int i = M; i <= L; i++) {
        unsigned long long temp = i;
        for (int j = 1; j < i; j++) {
            temp *= i;
            temp %= modulo;
        }
        result += temp;
        result %= modulo;
    }
    return result; 
}
int main(){
    int M = 0, L = 0;
    cout  << "Input Minimun Given Number: ";
    cin >> M;
    cout << endl << "Input Largest Given Number: ";
    cin >> L;
    cout << "Sum of the n^n from " << M << " to " << L << " = " << calculate_sum(M, L) << endl;
    return 0;
}