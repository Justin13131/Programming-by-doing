
#include <iostream>
using namespace std;
#include <ctime>


void swap( int a [], int i, int j )
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

void selection_sort( int arr [])
	{
	    int i, j, minIndex, tmp;    
        for (i = 0; i < 10; i++) {

            minIndex = i;

            for (j = i + 1; j < 10; j++)

                if (arr[j] < arr[minIndex])
                    minIndex = j;

            if (minIndex != i) {
                swap(arr, i, minIndex);
            }

      }
	}



int main () {
		int arr [10] = {};
		int i;

		for ( i=0; i<10; i++ )
			arr[i] = rand()%100 + 1;

		cout << "before: ";
		for ( i=0; i<10; i++ )
			cout <<  arr[i] << " " ;
		cout << endl;

		selection_sort( arr);

		cout << "after : ";
		for ( i=0; i<10; i++ )
			cout << arr[i] << " " ;
		cout << endl;
}