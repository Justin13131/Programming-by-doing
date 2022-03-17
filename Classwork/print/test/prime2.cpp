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
	int sum = vec[0];
	long num = 0;
    long ans = 0; 
    int length=vec.size();
    int count = 0;
    int allcount = 0;
	for(int j = 0; j <= vec.size(); j++) {
		for(int i = j; i < vec.size(); i++) {
			num += vec.at(i);
			count++;
			if(ifPrime(num) == 1 && num <= n && count >= allcount) {
				ans = num;
				allcount = count;
			}
		}
		count = 0;
		num = 0;
	}
    cout << endl << ans;
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
