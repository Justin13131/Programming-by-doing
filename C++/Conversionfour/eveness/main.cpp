#include <iostream>
using namespace std;

bool isEven(int n){
    int *n1 = &n;
    if(*n1%2 ==0)
        return true;
    else
        return false;    
}
bool isDivisibleBy3(int n){
    int *n1 = &n;
    if(*n1 %3==0)
        return true;
    else
        return false;
}
int main(){
    for(int i=1; i<21; i++){
        int p = i;
        int *p1 = &p;

        cout<<*p1;
        if(isEven(*p1)==true){
            cout<<" <";
        }
        if(isDivisibleBy3(*p1)==true){
            cout<<" =";
        }
        cout<<endl;
    }
    return 0;
}