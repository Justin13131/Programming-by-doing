#include <iostream>


using namespace std;


class print {
    private: 
        string num;
        

    public:
        print();
        print(string n) {
            num = n;
        }
        string getNum() {
            return num;
        }
};


int main() {
    print prt(" 1 2 3 \n 4 5 6 \n 7 8 9");
    cout << prt.getNum();
}