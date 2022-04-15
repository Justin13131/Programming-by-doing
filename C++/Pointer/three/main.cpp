//Pointer Array to Function

#include <iostream>
using namespace std;
const int M = 3;
const int N = 3;
//Print 1 array 1 value a line
void printArr(int *array, int sizeArr){
    for(int i=0;i<sizeArr;i++)
    cout<<*(array+i)<<endl;
}
//Print 2d Array
void print2D(int arr[M][N]){
    for (int i = 0; i < M; i++){
      for (int j = 0; j < N; j++){
        cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
//int *arr points to arr2[0][0], r = 3, c = 3 
void print2DP(int *arr, int r, int c){
    for (int i = 0; i < r; i++){
      for (int j = 0; j < c; j++){
        //arr [0][0] = 1
        //1+0+0 = 1, 1+0+1=2, i+0+2=3
        //1+1+0=2, 1+1+1 = 3, 1+1+2=4
        //1+2+0=3, 1+2+1=3, 1+2+2=5 
        cout<<*(arr+i+j)<<" ";
      }cout<<endl;
    }
}
int main()
{
    //put 6 values in arr
    int arr[6]={3,6,2,5,3,1};
    printArr(&arr[0],6);
    //put 9 value in 3*3 2D array
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print2D(arr2);
    cout<<endl;
    //(1,3,3)
    print2DP(&arr2[0][0],3,3);
    return 0;
}