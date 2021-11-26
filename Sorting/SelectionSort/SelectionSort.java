//Sorting SelectionSort 130pts Justin Hsu
import java.util.Random;

public class SelectionSort
{
	public static void selection_sort( int[] a )
	{
		// Your code goes here
		int min;
		int n = a.length;
		
		for ( int i = 0; i < n - 1; i++ )
		{
			min = i;
			for ( int j = i + 1; j < n; j++ )
			{
				if ( a[j] < a[min] )
					min = j;
			}
			if ( min != i )
				swap(a, i, min);
		}
	}


	public static void swap( int[] a , int i, int j )
	{
		// Your code goes here
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}


	public static void main( String[] args )
	{
		Random r = new Random();
		int[] arr = new int[10];
		int i;

		// Fill up the array with random numbers
		for ( i=0; i<arr.length; i++ )
			arr[i] = 1 + r.nextInt(100);

		// Display
		System.out.print("before: ");
		for ( i=0; i<arr.length; i++ )
			System.out.print( arr[i] + " " );
		System.out.println();

		// Sort
		selection_sort( arr );

		// Display it again
		System.out.print("after : ");
		for ( i=0; i<arr.length; i++ )
			System.out.print( arr[i] + " " );
		System.out.println();
	}
}