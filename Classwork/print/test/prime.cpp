#include <iostream>
#include <vector>
using namespace std;

long long p;
long long inn, inm, ans = 0;

vector<long long> vec = {};


int ifPrime(int n) {
   // p = inm;
    for(int i=0;i<n;i++){
        if (n % i == 0) {
            return 0;
        }
        return 1;
    }


}
void primeSize(){
    p = inm;
    long long i = inn;
    for(int i =0; i < 10; i++){
        if (ifPrime(i) == 1) {
            vec.push_back(i);
        }
    }
}

int main() {
    cout << endl << "Enter Min: ";
    cin >> inn;

    cout << "Enter Max: ";
    cin >> inm;

    cout << endl << "Consectutive Prime: ";

    cout<<"size : = "<<vec.size()<<endl;

    ans += vec.at(0);
    while(ifPrime(ans) == 1) {
        for(int i = 1; i < vec.size(); i++) {
            if (ifPrime(ans += vec.at(i))==1){
                ans += vec.at(i);
            }
            
        }
    }
    cout <<endl<< ans;
    

    return 0;
}

