//ForLoop c++ AddingValueswithaForLoop 30pts Justin Hsu
#include <iostream>
using namespace std;
    int to = 0;
    int i = 1;
    int addup = 0;
int main() {
    cout << "Number: ";
    cin >> to;
    cout << "\n";
    for(i = 1; i <= to; i++){
        addup = addup + i;
        cout << i << " ";

    }

    cout << "\n The sum is " << addup;
}