#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<long long> vec = {};

bool ifPrime(int n){
    if (n <= 1){
        return false;
    }
       
    if (n <= 3){
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

void prime(long long n, long long i){
    for (i; i <= n; i++) {
        if (ifPrime(i)){
            // cout << i << " ";
            vec.push_back(i);
        }
    }
}

int main() {
    long long n;

    long long min;
    long long ans;
    vector<int> oans = {};
    cout << "Max: ";
    cin >> n;

    cout << endl << "Min: ";
    cin >> min;

    cout << "\nThe Prime Numbers are : ";
    prime(n, min);

    ans += vec.at(0);
    long i = 1;
    if (vec.size()!=0){
        for(i; i < vec.size(); i++) {
            cout << vec.at(i) << " ";
            if (ifPrime(ans += vec.at(i))==1){
                ans = ans + vec.at(i);            
            }else{
            }
                
        }
        oans.push_back(ans);
    }
    long long rans;
    if (oans.at(1) > oans.at(2)){
            rans = oans.at(1);
    }else{
        rans = oans.at(2);
    }
    for(int i = 2; i < oans.size() - 2; i++){
        if (rans < oans.at(i+1)){
            rans = oans.at(i);
        }else{

        }
    }
    
    cout <<endl << rans;
    cout << endl;
}
