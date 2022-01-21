//Whileloop c++ whileloopsaddingvaluesinaloop 30pts Justin Hsu
#include <iostream>
using namespace std; 

int main() {
    int number;
    int input = 1;
    cout << "I will add up the numbers you give me." << endl;
    
    while(input != 0){
        cout << "Number: ";
        cin >> input;
        number = number + input;
        cout << "\nThe total so far is " << number << endl;;
    }

    cout << "The total is " << number << endl;

}