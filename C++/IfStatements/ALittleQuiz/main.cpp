//c++ ifstatement ALittleQuiz 40pts Justin Hsu
#include <iostream>
using namespace std; 

int main(){
    int q2;
    int q3;
    cout << "Are you ready for a quiz?\n";
    string yesorno;
    int q1;
    cin >> yesorno;
    int correct;
    cout << "Okay. here it comes\n";
    cout << "Q1) What is the Capital of Alaska?\n";
    cout << "\t 1)Melbourne\n \t 2)Anchorage\n \t 3)Juneau\n";
    cout << "\n>";
    cin >> q1;
    switch (q1){
        case 1 :
            cout << "\nThat's wrong";
            break;
        case 2 : 
            cout << "\nThat's wrong";
            break;
        case 3 :
            cout << "\nThat's right!";
            correct++;
            break;
        default : 
            cout << "\nInvalid input";
    }

    cout << "\n\n Q2) Can you store the value \"cat\" in a variable of type int? \n";
    cout << "\t 1)yes \n \t 2)no \n";
    cout << "\n >";
    cin >> q2;
    switch (q2) {
        case 1: 
            cout << "\nSorry, \"cat\" is a string. Int can only store numbers.";
            break;
        case 2:
            cout << "\nYes, \"cat\" is a string. Int can only store numbers";
            correct++;
            break;
        default : 
            cout << "\nPlease input \"1\" or \"2\"";
    }

    cout << "\n\nQ3) What is the result of 9+6-3";
    cout << "\n \t 1) 5 \n \t 2) 11 \n \t 3) 15/3";
    cout << "\n\n>";
    cin >> q3;
    switch (q3){
        case 1 : 
            cout << "\n That's wrong";
            break;
        case 2 :
            cout << "\n That's correct!";
            correct++;
            break;
        case 3 : 
            cout << "\n That's wrong";
        default : 
            cout << "Please input \"1\", \"2\", or \"3\"";
    }
    cout << "Overall, you got " << correct << "out of 3 correct.\nThanks for playing!\n";
    system("pause"); 

    return 0;
}