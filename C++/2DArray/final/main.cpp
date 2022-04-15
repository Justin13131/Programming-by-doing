#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
int h, v;
int test = 0;
vector<char> h2 = {};

vector <char> hori = {};

void After(){
    int pri = 0;
    int ans = v*h;
        cout << endl;
        char mat[v][h];
        cout << endl;
        sort(hori.begin(), hori.end(), greater<>());
        cout << "After: " << endl;
        for(int i = 0 ; i < v ; i++)  {  
            if(i%2==0)  {  
                for(int j = h-1 ; j>=0 ; j--){
                    mat[i][j] = hori.at(pri);
                    pri++; 
                }
            }  else  {   
                for(int j = 0 ; j < h ; j++){
                    mat[i][j] = hori.at(pri); 
                    pri++;
                }      
            }  
        }  
        pri = 0;
        for (int i = 0; i < h / 2; i++) {
            for (int j = i; j < h - i - 1; j++) {
                // Swap elements of each cycle
                // in clockwise direction
                char temp = mat[i][j];
                mat[i][j] = mat[h - 1 - j][i];
                mat[h - 1 - j][i] = mat[h - 1 - i][h - 1 - j];
                mat[h - 1 - i][h - 1 - j] = mat[j][h - 1 - i];
                mat[j][h - 1 - i] = temp;
            }
        }
        
        
        
        for(int i = 0; i < v; i++){
            for(int j = 0; j < h; j++){
                cout << mat[i][j] << " ";
            }
            cout<<endl;
        }
}
int main(){
    do{
        srand(time(NULL));
        cout << "Size(Horizontal): "; 
        cin >> h;
        cout << endl << "Size(Vertical): ";
        cin >> v;
        char c;
        int r;
        int ans = v*h;
        if(h == 0){
            if(v==0){
                break;
            }
        }
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
        for(int i = 0; i < v; i++){
            for(int j = 0; j < h; j++){
                mat[i][j] = hori.at(pri);
                pri++;
            }
        }
        for(int i = 0 ; i < v ; i++)  {  
            if(i%2!=0)  {  
                for(int j = 0 ; j < h ; j++){
                    h2.push_back(mat[i][j]);
                }
            }  else  {   
                for(int j = h-1 ; j>=0 ; j--) {
                    h2.push_back(mat[i][j]);
                }      
            }  
        }
        
        pri = 0;
        for(int i = 0; i < v; i++){
            for(int j = 0; j < h; j++){
                mat[i][j] = h2.at(pri);
                pri++;
            }
        }
        After();
        cout << endl << "Reverse: " << endl;
        pri = 0;
        for (int i = 0; i < h / 2; i++) {
            for (int j = i; j < h - i - 1; j++) {
                // Swap elements of each cycle
                // in clockwise direction
                char temp = mat[i][j];
                mat[i][j] = mat[h - 1 - j][i];
                mat[h - 1 - j][i] = mat[h - 1 - i][h - 1 - j];
                mat[h - 1 - i][h - 1 - j] = mat[j][h - 1 - i];
                mat[j][h - 1 - i] = temp;
            }
        }
        
        for(int i = 0; i < v; i++){
            for(int j = 0; j < h; j++){
                cout << mat[i][j] << " ";
            }
            cout<<endl;
        }
        
        hori.clear();
        cout << endl;

        
    }while(test == 0);
    cout << endl << "Bye";
	return 0;
    

}

 