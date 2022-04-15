#include <iostream>

#include <string>


using namespace std;
//Print" Hello" & string name -> (World)
void sayHello(string name){
    cout<<"Hello "<<name;
}
//Print "Hi" & string Pname -> (World)
void sayHi(string &name){
    cout<<"Hi "<<name;
}
//Compare 5 and 1, print larger one
int * larger(int *x, int *y){
    if(*x>*y) return x;
    else return y;
}

int main()
{
    //name = "World"
    string name = "World";
    //Print" Hello" & string name -> (World)
    sayHello(name);
    cout<<endl;
    //make pName "World"
    string *pName = &name;
    //Print "Hi" & string pName -> (World)
    sayHi(*pName);
    //Set a5 b1
    int a = 5;
    int b = 1;
    //Compare a and b, print larger one  
    int *pNum = larger(&a,&b);
    //cout larger number( 1 or 5) and "is larger"
    cout<<"\n"<<*pNum<<" is larger"<<endl;
    return 0;
}