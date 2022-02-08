//Challenges Challenge one 110pts Justin Hsu
#include <iostream>
using namespace std;
 
int calculate_sum(int a, int B, int N){
    
    int m = N / (a*B); 
    int sum = m * (m + 1) / 2;
    int ans = a * sum;
 
    return ans;
}
 
//run
int main(){
    int a = 0, N = 0, B = 0;
    cout << "Input A: ";
    cin >> a;
    cout << endl << "Input B: ";
    cin >> B;

    cout << endl << "Input Given Number: ";
    cin >> N;
    cout << "Sum of multiples of "
         << a << " and " << B << " up to " << N << " = "
         << calculate_sum(a, B, N) << endl;
    return 0;
}