//RandomNummbers c++ RandomNumbersANumberGuessingGame 20pts Justin Hsu
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std; 
int main() {
    int input;
    srand(time(NULL));
    int result = rand() % 10+1;
    cout << "I am thinking of a number from 1 to 10\n";
    cout << "Your Guess: ";
    cin >> input;
    cout << "\n";
    if (input == result) {
        cout << "That's right! My secret number was " << result << "!";
    } else {
        cout << "Sorry, but I was really thinking of " << result << ".";
    }
    return 0;
}
