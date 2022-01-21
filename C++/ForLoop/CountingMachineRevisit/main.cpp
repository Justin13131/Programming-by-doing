//ForLoop c++ CountingMachineRevisited 25pts Justin Hsu
#include <iostream>
using namespace std;
    int from = 0;
    int to = 0;
    int by = 0;
    int i = 0;
    int addup = 0;

int main(){
    

    cout << "Count from: ";
    cin >> from;
    
    cout << "\nCount to: ";
    cin >> to;

    cout << "\nCount by: ";
    cin >> by;

    to = to - by;
    cout << from << " ";
    for(i = from; i <= to; i=i + by) {
        addup = from + by;
        from = addup;
        cout << addup << " ";

    }
}