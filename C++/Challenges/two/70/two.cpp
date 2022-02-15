#include <iostream>  
#include <math.h>
#include <stdio.h>


using namespace std;
 
int* GetBigInteger(string str);

int main() {
    cout<<"test";
    string str = "0";

    for (int i = 1; i <= 1000; i++) {
        string str1 = "0";
        for (int j = 1; j < i; j++) {
            str1 = i;
        }
        str += str1;
    }
    int* arr = GetBigInteger(str);
    for (int i = 0; i < str.size(); i++) {
        cout <<arr[i];
    }
    return 0;
}

// array consisting integers individually
int* GetBigInteger(string str)
{
    int x = str.size(), a = 0;
 
    // Create an array to store the big
    // integer into it.
 
    // Make the array size same as the
    // size of string str
    int* arr = new int[str.size()];
 
    // Loop to extract string elements
    // into the array one by one
    while (a != x) {
 
        // Subtracting '0' to convert
        // each character into digit
 
        // str[a] - '0'
        // = ASCII(str[a]) - ASCII('0')
        // = ASCII(str[a] - 48
        arr[a] = str[a] - '0';
        a++;
    }
 
    // Return the reference of the array
    return arr;
}