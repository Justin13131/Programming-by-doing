#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<long> vec = {};

bool ifPrime(long n){
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
void prime2(long long n){
    int k = 1;
    int c = 0;
    long ans = 0;
    vector<long> ans2 = {};
    long anso = 0;
    while (k=1){

        for(int i = 0; i < vec.size()-c; i++){
            ans += vec.at(i);
            for(int z = 0; z < vec.size(); z++){

            }
        }
        for(int z = vec.size(); z = 0; z--){
            anso += vec.at(z);
        }
        
        if(ifPrime(anso) == true){
            ans2.push_back(anso);
        }
        if(ifPrime(ans) == true){
            if(ans < n){
                // cout << endl << "Answer: " << ans;
                // cout << endl << "Ends at: " << vec.at(num-1);
                ans2.push_back(ans);
            }else{
                c++;
            }
        }
        if(ifPrime(ans) == false){
            c++;
        }
        ans = 0;
    }
}
int main() {
    long long n;

    long long min;
    cout << "Max: ";
    cin >> n;

    cout << endl << "Min: ";
    cin >> min;

    cout << "\nThe Prime Numbers are : ";
    prime(n, min);

    for(int i = 0; i < vec.size(); i++) {
         cout << vec.at(i) << " ";
    }

    //part 2 & 3
    prime2(n);
    cout << endl;
}
