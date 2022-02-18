#include <iostream>
#include <ctime>
using namespace std;

void swap( int a [], int i, int j )
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

void exchange_sort( int a [])
	{
		for ( int i = 0; i < sizeof(a)/sizeof(a[0]); i++ ) {
			for ( int j = i + 1; j < sizeof(a)/sizeof(a[0]); j++ ){
				if ( a[i] > a[j] )
					swap( a, i, j );
			}
		}
	}




int main (){
    int r = rand()% 100 + 1;
	int arr [10]= {};
	int i;

    for ( i=0; i<sizeof(arr)/sizeof(arr[0]); i++ )
		arr[i] = rand()% 100 + 1;

    cout << "before: ";
	for ( i=0; i<sizeof(arr)/sizeof(arr[0]); i++ )
		cout << arr[i] << " " ;
	cout << endl;

    exchange_sort(arr);

	cout << "after: ";
	for ( i=0; i<sizeof(arr)/sizeof(arr[0]); i++ )
		cout <<  arr[i] << " " ;
	cout << endl;
}