#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int numCols, numRows, temp = 0;
    srand(time(NULL));
    cout << "Number of Columns: ";
    cin >> numCols;
    cout << "Number of Rows: ";
    cin >> numRows;
    int AR[numRows][numCols];

    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j < numCols; j++) {
            AR[i][j] = rand()%26+97;
            cout << char(AR[i][j]) << " ";
        }
        cout << endl;
    }

for(int m = 0; m < numRows*numCols; m++) {
        for(int k = 0; k < numRows; k++) {
            for(int l = 0; l < numCols-1; l++) {
                
                if(AR[k][l] > AR[k][l+1]) {
                    temp = AR[k][l];
                    AR[k][l] = AR[k][l+1];
                    AR[k][l+1] = temp;
                }
            }
        }
            
    for(int o = 0; o < numCols; o++) {
        for(int p = 0; p < numRows-1; p++) {
            if(o%2 == 0) {
                if(AR[p][o] > AR[p+1][o]) { 
                    temp = AR[p][o];
                    AR[p][o] = AR[p+1][o];
                    AR[p+1][o] = temp;
                }
            }else {
                if(AR[p][o] < AR[p+1][o]) {
                    temp = AR[p][o];
                    AR[p][o] = AR[p+1][o]; 
                    AR[p+1][o] = temp;
                }
            }
        }
    }
}

    cout << "Array after sorting" << endl;
    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j < numCols; j++) {
            cout << char(AR[i][j]) << " ";
        }
        cout << endl;
    }
}