
#include <iostream>
#include <cmath>
using namespace std;


int main () {
    int arr [9] = {};
    int inp = 0;
    int num = 1;

    cout << "Array: ";
    for (int i = 0; i <= 9; i++){
        arr [i] = rand()%50 + 1;
        cout << arr[i] << " ";
    }
    cout << endl << "Value to find: ";
    cin >> inp;
    cout << endl; 
    
    for (int i = 0; i <= 9; i++){
        if (inp == arr[i]){ 
            cout << inp << " is in slot " << i + 1 << endl;
            num = 0;
        }
    }
    
    if (num == 1){
        cout << inp << " is not in the array.";
    }
    

}