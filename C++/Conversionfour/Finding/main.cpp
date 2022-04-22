#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
   
    vector <int> *pten;
    pten = new vector<int>();
    srand(time(NULL));
    int r;
    int *pr = &r;
    for(int i = 0; i < 10; i++){
        *pr = rand() % 26;   
        (*pten).push_back(*pr);
    }
    cout << endl;    
    for(int i = 0; i <10; i++){
        cout << (*pten).at(i) << " ";
    }
    cout << endl;
    sort((*pten).begin(), (*pten).end(),greater<int>());
    cout << "Largest Value: " << (*pten).at(0);
}