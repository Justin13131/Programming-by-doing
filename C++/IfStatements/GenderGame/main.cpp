//ifstatements c++ GenderGame 50pts Justin Hsu
#include <iostream>
using namespace std; 

int main() {
    string morf;
    string fname, lname;
    string married;
    int age;
    cout << "What is your gender(M or F): ";
    cin >> morf;
    cout << "\nFirst Name: ";
    cin >> fname;
    cout << "\nLast Name: ";
    cin >> lname;

    cout << "\nAge: ";
    cin >> age;

    if (morf == "F"){
        if (age > 16) {
            cout << "Are you married, " << fname << "(y or n)?";
            cin >> married;
            if(married == "y") {
                cout << "Then I shall call you Ms. " << lname << ".";
            }else {
                cout << "Then I shall call you Mrs." << lname << ".";

            }
        }
        if (age <= 16) {
            cout << "Then I shall call you " << fname << lname << ".";

        }

    }

    if (morf == "M") {
        if (age <= 16) {
            cout << "Then I shall call you " << fname << " " << lname << ".";

        }else {
            cout << "Then I shall call you Mr. " << lname << ".";

        }
    }
}

