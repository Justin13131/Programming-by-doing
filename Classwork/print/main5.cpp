#include <vector>
#include <iostream>
using namespace std;
void print(vector <int> const &a) {
    for(int count = 0; count < 3; count++){
        cout << a.at(count) << ' ';
    }
    cout << endl;
    for(int count = 3; count < 6; count++){
           cout << a.at(count) << ' ';
    }
    cout << endl;
    for(int count = 6; count < 9; count++){
        cout << a.at(count) << ' ';
    }
}

int main() {
   vector<int> a = {1,2,3,4,5,6,7,8,9};
   print(a);
   return 0;
}

