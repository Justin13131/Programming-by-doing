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
    int ans = v*h;
    vector <char> hori = {};
    for(int i = 0; i < ans; i++){
        r = rand() % 26;   
        c = 'a' + r;
        hori.push_back(c);
    }
    int pri = 0;
    cout << "Before: " << endl;
    for(int i = 0; i < v; i++){
        for(int j = 0; j < h; j++){
            cout << hori.at(pri) << " ";
            pri++;
        }
        cout << endl;
    }
    sort(hori.begin(), hori.end());

    pri = 0;
    cout << endl;
    char mat[v][h];
    cout << "sort" << endl;
    for(int i = 0; i < ans; i++){
        cout << hori.at(pri) << " ";
        pri++;
    }
    cout << endl;
    pri = 0;
    int count = v;
    int size = hori.size();
    int i;
    int ch;
    cout << "After: " << endl;
    for(i = 0; i < h+1; i++){
        for(int j = 0; j < v; j++){
            if(size == 0){
                for(int k = 0; k <= ch; k++){
                    mat[j][i] = hori.at(pri);
                }
                break;
            }else{
                mat[j][i] = hori.at(pri);
                pri++; 
                size--;
            }
        }
        pri--;
        ch++;
        i++;
        for(int j = 0; j <= v; j++){
            if(size == 0){
                for(int k = 0; k <= ch; k++){
                    mat[count][i] = hori.at(pri);
                    
                }
                break;
            }else{
                mat[count][i] = hori.at(pri);
                pri++;
                count--; 
                size--;
            }
            
        }
        count = v;
    }

    
    for(int i = 0; i < v; i++){
        for(int j = 0; j < h; j++){
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }
    
   
	cout << endl;

	return 0;
    

}