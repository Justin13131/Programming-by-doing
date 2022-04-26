#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
};
void scout(int *one, int *two, int *three, int *four, int *five, int *six, int *seven, int *eight, int *nine){
    cout << *one << " " << *two << " " << *three << endl << *four << " " << *five << " " << *six << " " << endl << *seven << " " << *eight << " " << *nine;
}
void svout8(int *one, int *two, int *three, int *four, int *five, int *six, int *seven, int *eight, int *nine){
    vector<int> otn = {*one, *two, *three, *four, *five, *six, *seven, *eight, *nine};
    for(int i = 0; i < 3; i++){
        cout << otn.at(i) << " ";
    }
    cout << endl;
    for(int i = 3; i < 6; i++){
        cout << otn.at(i) << " ";
    }
    cout << endl;
    for(int i = 6; i < 9; i++){
        cout << otn.at(i) << " ";
    }
}
void scout7(int *one, int *two, int *three, int *four, int *five, int *six, int *seven, int *eight, int *nine){
    vector<int> otn = {*one, *two, *three, *four, *five, *six, *seven, *eight, *nine};
    int k = 0;
    for(int i = 0; i < 3; i++){
        for(int b = 0; b < 3; b++){
            cout << otn.at(k) << " ";
            k++;
        }
        cout << endl;
    }
}
void scout4(int *one, int *four, int *seven){
    for(int i = 0; i < 3; i++){
        cout << *one + i << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << *four + i << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << *seven + i << " ";
    }
}
void scout6(int *nine){
    cout <<*nine-8 << " ";
    cout << *nine - 7 << " ";
    cout << *nine - 6 << " ";
    cout << endl;
    cout << *nine - 5 << " ";
    cout << *nine - 4 << " ";
    cout << *nine - 3 << " ";
    cout << endl;
    cout << *nine - 2 << " ";
    cout << *nine - 1 <<  " ";
    cout << *nine << " ";
}
void scout5(int *one, int *two, int *three, int *four, int *five, int *six, int *seven, int *eight, int *nine){
    cout <<*nine-*eight << " ";
    cout << *nine - *seven << " ";
    cout << *nine - *six << " ";
    cout << endl;
    cout << *nine - *five << " ";
    cout << *nine - *four << " ";
    cout << *nine - *three << " ";
    cout << endl;
    cout << *nine - *two << " ";
    cout << *nine - *one <<  " ";
    cout << *nine << " ";
}
void scout3(int *one){
    for(int i = 0; i < 3; i++){
        cout << *one + i << " ";
    }
    cout << endl;
    for(int i = 3; i < 6; i++){
        cout << *one + i << " ";
    }
    cout << endl;
    for(int i = 6; i < 9; i++){
        cout << *one + i << " ";
    }
}
void scout2(int *one, int *two, int *three, int *four, int *five, int *six, int *seven, int *eight, int *nine){
    cout << *one;
    cout << " ";
    cout << *two;
    cout << " ";
    cout << *three;
    cout << endl;
    cout << *four; 
    cout << " ";
    cout << *five;
    cout << " ";
    cout << *six;
    cout << endl;
    cout << *seven;
    cout << " ";
    cout << *eight;
    cout << " ";
    cout << *nine;
}
void sortvec2(){
    vector<int> one = {1,3,7,8,2,4,9,6,5};
    sort(one.begin(), one.end());
    int k = 0;
    for(int i = 0; i < 3; i++){
        for(int b = 0; b < 3; b++){
            cout << one.at(k) << " ";
            k++;
        }
        cout << endl;
    }
}
void sortvec(){
    vector<int> one = {1,3,7,8,2,4,9,6,5};
    sort(one.begin(), one.end());
    for(int i = 0; i < 3; i++){
        cout << one.at(i) << " ";
    }
    cout << endl;
    for(int i = 3; i < 6; i++){
        cout << one.at(i) << " ";
    }
    cout << endl;
    for(int i = 6; i < 9; i++){
        cout << one.at(i) << " ";
    }
}
void printma2(int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl << "";
    }
    cout << endl << endl;
}

void printama(){
    for(int k = 0; k < 3; k++) {
        cout << k+1;
        cout << " ";
    }
    cout << endl;
    for(int y = 3; y < 6; y++) {
        cout << y+1;
        cout << " ";
    }
    cout << endl;
    for(int z = 6; z < 9; z++) {
        cout << z+1;
        cout << " ";
    }
    cout << endl << endl;
}
void print2(vector <int> const &a) {
    for(int count = 0; count < 3; count++){
        cout << a.at(count) << ' ';
    }
    cout << endl;
    for(int count = 3; count < 6; count++){
           cout << a.at(count) << ' ';
    }
    cout << endl;
    for(int count = 6; count < 9; count++){
        cout << a.at(count) << ' ';
    }
}
void print4(vector<int> const &a) {
    cout << a.at(0) << " " << a.at(1) << " " << a.at(2) << endl << a.at(3) << " " << a.at(4) << " " << a.at(5) << endl << a.at(6) << " " << a.at(7) << " " << a.at(8);
}
void type() {
int array2[] = {1,2,3,4,5,6,7,8,9};

    cout << array2[0] << " " << array2[1]<< " " << array2[2] << endl << array2[3]<< " " << array2[4]<< " " << array2[5] << endl << array2[6]<< " " << array2[7]<< " " << array2[8];
}
void printvma(){
    vector<int> a2 = {0,1,2,3,4,5,6,7,8};
    cout << matrix[a2.at(0)][a2.at(0)] << " ";
    cout << matrix[a2.at(0)][a2.at(1)] << " ";
    cout << matrix[a2.at(0)][a2.at(2)] << endl;
    cout << matrix[a2.at(1)][a2.at(0)] << " ";
    cout << matrix[a2.at(1)][a2.at(1)]  << " ";
    cout << matrix[a2.at(1)][a2.at(2)] << endl;
    cout << matrix[a2.at(2)][a2.at(0)] << " ";
    cout << matrix[a2.at(2)][a2.at(1)]  << " ";
    cout << matrix[a2.at(2)][a2.at(2)] << " ";
    cout << endl << endl;
}
void printma(){
    cout << matrix[0][0] << " ";
    cout << matrix[0][1] << " ";
    cout << matrix[0][2] << endl;
    cout << matrix[1][0] << " ";
    cout << matrix[1][1] << " ";
    cout << matrix[1][2] << endl;
    cout << matrix[2][0] << " ";
    cout << matrix[2][1] << " ";
    cout << matrix[2][2] << " ";
    cout << endl << endl;
}
class print {
    private: 
        string num;
        

    public:
        print();
        print(string n) {
            num = n;
        }
        string getNum() {
            return num;
        }
};

 int i2 = 2;
int i3 = 3;
void type2() {
    for(int i = 1; i < 9; i+=3){
        cout << i << " " << i2 << " " << i3 << endl;
        i2 += 3;
        i3 += 3;
    }
}
void type3() {
    cout << "1 2 3" << endl << "4 5 6" << endl << "7 8 9";
}


int main() {
    //printing it with vector 1
    cout << endl << "one" << endl;
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    print2(a);
    cout << endl << endl;

    //Printing with array 2
    cout << endl << "two" << endl;
    type();
    cout << endl << endl;
    
    //Printing with class using string 3
    cout << endl << "three" << endl;
    print prt(" 1 2 3 \n 4 5 6 \n 7 8 9");
    cout << prt.getNum();
    cout << endl << endl;

    //Printing with loop 4
    cout << endl << "four" << endl;
    type2();
    cout << endl << endl;

    //Printing with function 5
    cout << endl << "five" << endl;
    type3();
    cout << endl << endl;

    //Printing with matrix 6
    cout << endl << "six" << endl;
    
    printma();

    //Printing Matrix with forloop 7
    cout << endl << "seven" << endl;
    int m1, n1 = 3;
    int *pm1 = &m1;
    int *pn1 = &n1;
    printma2(3, 3);

    //Printing Array with Forloop 8
    cout << endl << "eight" << endl;
    printama();

    //Printing Vector without Forloop 9
    cout << endl << "nine" << endl;
    print4(a);
    cout << endl << endl;

    //Printing by vector and matrix 10
    cout << endl << "ten" << endl;
    printvma();
    //sort
    cout << endl << "eleven" << endl;
    sortvec();
    //sort, print with nested
    cout << endl << "Twelve" << endl;
    sortvec2();
    //unique printing by using cout and pointer
    cout << endl << "thirteen" << endl;
    int one = 1;
    int t = 2;
    int th = 3;
    int f = 4;
    int fi = 5;
    int s = 6;
    int se = 7;
    int e = 8;
    int n = 9;
    int te = 10;
    scout(&one, &t, &th, &f, &fi, &s, &se, &e,&n);
    //unique printing by using cout and pointer in different ways
    cout << endl << "fourteen" << endl;
    scout2(&one, &t, &th, &f, &fi, &s, &se, &e,&n);
    //unique printing by using cout and pointer in different ways
    cout << endl << "fifteen" << endl;
    scout3(&one);
    //unique printing by using cout and pointer in differeny ways
    cout << endl << "sixteen" << endl;
    scout4(&one, &f, &se);
    //unique printing by using cout and pointer in differeny ways
    cout << endl << "seventeen" << endl;
    scout5(&one, &t, &th, &f, &fi, &s, &se, &e,&n);
    //unique printing by using cout and pointer in differeny ways
    cout << endl << "eighteen" << endl;
    scout6(&n);
    //unique printing by using cout and pointer and vector in differeny ways
    cout << endl << "nineteen" << endl;
    scout7(&one, &t, &th, &f, &fi, &s, &se, &e,&n);
    //unique printing by using cout and pointer and vector in differeny ways
    cout << endl << "twenty" << endl;
    svout8(&one, &t, &th, &f, &fi, &s, &se, &e,&n);
    return 0;

}