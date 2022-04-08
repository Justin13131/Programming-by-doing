#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int h, v;

int main(){
    srand(time(NULL));
    cout << "Size: "; 
    cin >> h;

    char c;
    int r;
    vector <char> hori = {};
    for(int i = 0; i < h; i++){
        r = rand() % 26;   
        c = 'a' + r;
        hori.push_back(c);
    
    }

    cout << "Before: " << endl;
     for(int i = 0; i < h; i++){
        cout << hori.at(i) << " ";
    }
    cout << endl;
    sort(hori.begin(), hori.end());
    cout << "After: " << endl;
    for(int i = 0; i < h; i++){
        cout << hori.at(i) << " ";
    }


	cout << endl;

	return 0;
    

}