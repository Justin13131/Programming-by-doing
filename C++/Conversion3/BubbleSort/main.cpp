
#include <iostream>
using namespace std;
#include <ctime>

void bubble_sort( int a [])
{

}

void swap( int a [], int i, int j )
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

int main ()
	{
        int r = rand()% 100 + 1;
        int arr [10] = {};
		int i;

		for ( i=0; i<sizeof(arr)/sizeof(arr[0]); i++ )
			arr[i] = rand()% 100 + 1;

		cout << "before: ";
		for ( i=0; i<sizeof(arr)/sizeof(arr[0]); i++ )
			cout << arr[i] << " " ;
		cout << endl;

		int num = 0;
		
		while ( num == 0)
		{
			num = 1;
			for ( int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++ )
			{
				if ( arr[i] > arr[i + 1] )
				{
					swap( arr, i, i + 1 );
					num = 0;
				}

				

			}

			if (arr [i] < arr[i+1])
				num = 1;
		}

		cout << "after : ";
		for ( i=0; i<sizeof(arr)/sizeof(arr[0]); i++ )
			cout << arr[i] << " ";
		cout << endl;
	}