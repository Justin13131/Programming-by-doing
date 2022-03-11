#include <iostream>
using namespace std;
int i2 = 2;
int i3 = 3;
void type() {
    for(int i = 1; i < 10; i += 3){
        cout << i << " " << i2 << " " << i3 << endl;
        i2 += 3;
        i3 += 3;
    }
}

int main() {
    type();
}