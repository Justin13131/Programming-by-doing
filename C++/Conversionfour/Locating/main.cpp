#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
    vector <int> ten = {};
    vector <int> *pten = &ten;
    srand(time(NULL));
    int r;
    int *pr = &r;
    for(int i = 0; i < 10; i++){
        *pr = rand() % 100;   
        (*pten).push_back(*pr);
    }
    cout << endl;    
    for(int i = 0; i <10; i++){
        cout << (*pten).at(i) << " ";
    }
    cout << endl;
    vector<int> p = {};
    for(int i = 0; i <10; i++){
        p.push_back(ten.at(i));
    }
    sort(ten.begin(), ten.end(),greater<int>());
    int count = 0;
    for(int k = 0; k < ten.size(); k++){
        if(p.at(k) != ten.at(0)){
            count++;
        }else{
            break;
        }
    }
    int *pcount = &count;
    cout << "Location: slot " << *pcount;   
}