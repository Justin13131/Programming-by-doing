#include <iostream>
using namespace std;

int main() {
    string a = "dog";
    string e = "axe";
    string c = "apple";
    string d = "applebee's";
    int i;
    int o;
    cout << "Compare \"axe\" with \"dog\" produces ";
    i = a.compare(e);
    cout << i << "\n";

    cout << "Comparing \"applebee's\" with \"apple\" produces ";
    o = c.compare(d);
    cout << o << "\n";
}