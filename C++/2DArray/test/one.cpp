#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
int h, v;

int main(){
    srand(time(NULL));
    cout << "Size(Horizontal): "; 
    cin >> h;
    cout << endl << "Size(Vertical): ";
    cin >> v;
    char c;
    int r;
    vector <char> hori = {};
    for(int i = 0; i < v; i++){
        for(int j = 0; j < h; j++){
            r = rand() % 26;   
            c = 'a' + r;
            hori.push_back(c);
        }
    }
    int num = 0;
    char matrix[v][h] = {};
    for(int i = 0; i < v; i++){
        for(int j = 0; j < h; j++){
            matrix[i][j] = hori.at(num);
            num++;
        }
    }

    cout << "Before: " << endl;
     for(int i = 0; i < v; i++){
        for(int j = 0; j < h; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl << "";
    }    
    char matrix2[v][h] = {};
    sort(hori.begin(), hori.end());
    for(int i = 0; i < v; i++){
        for(int j = 0; j < h; j++){
            matrix2[i][j] = hori.at(num);
            num++;
        }
    }
    cout << "After: " << endl;
     for(int i = 0; i < v; i++){
        for(int j = 0; j < h; j++){
            cout << matrix2[i][j] << " ";
        }
        cout<<endl << "";
    } 


	cout << endl;

	return 0;
    

}