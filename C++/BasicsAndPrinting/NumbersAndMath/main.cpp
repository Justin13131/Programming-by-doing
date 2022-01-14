// BasicsAndPrinting c++ NumberAndMath 7pts Justin Hsu
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int hensc = 0;
    int roosc = 0;
    int mix = 0;
    int boo1 = 0;
    int boo2 = 0;

    hensc = 25 + 30 / 6;
    roosc = 100-25 * 3 / 4;
    mix =  3 + 2 + 1 - 5 + 4 % 2 - 1 / 4 + 6;
    boo1 = 3 + 2;
    boo2 = 5 - 7;


    cout << "Now I will count the eggs \n";
    cout << "Hens" << hensc << "\n";
    cout << "Roosters" << roosc << "\n";
    cout << "Now I will count the eggs: \n";
    cout << mix << "\n";
    cout << "Is it true that 3 + 2 < 5 - 7? \n";
    cout << boolalpha << (boo1 < boo2);

    cout << "What is 3 + 2?" << boo1 << "\n";
    cout << "What is 5 - 7?" << boo2 << "\n";

    cout << "Oh, that's why it's false\n";
    cout << "How about some more.\n";
    cout << "Is it greater or equal? " << boolalpha << ( 5 >= -2 ) << "\n";
    cout << "Is it less or equal? " << boolalpha << ( 5 <= -2 );

}