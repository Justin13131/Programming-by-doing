//Sorting c++ Sorting an Array 100pts Justin Hsu
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    cout << "Before: 45, 87, 39, 32, 93, 86, 12, 44, 75, 50 " << endl;
    int arr[] = { 45, 87, 39, 32, 93, 86, 12, 44, 75, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, arr + n, greater<int>());
    reverse(arr, arr + n);


 
    cout << "After: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    return 0;
}