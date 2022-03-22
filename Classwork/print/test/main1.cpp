#include <vector>
#include <iostream>
using namespace std;
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
int array[] = {1,3,5,7,9,11,13,15,17};
void type() {

    cout << array[0] << " " << array[1]<< " " << array[2] << endl << array[3]<< " " << array[4]<< " " << array[5] << endl << array[6]<< " " << array[7]<< " " << array[8];
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
 
 int i2 = 3;
int i3 = 5;
void type2() {
    for(int i = 1; i < 18; i += 6){
        cout << i << " " << i2 << " " << i3 << endl;
        i2 += 6;
        i3 += 6;
    }
}
void type3() {
    cout << "1 3 5" << endl << "7 9 11" << endl << "13 15 17";
}


int main() {
    //printing it with vector 1
    vector<int> a = {1,3,5,7,9,11,13,15,17};
    print2(a);
    cout << endl << endl;

    //Printing with array 2
    type();
    cout << endl << endl;
    
    //Printing with class using string 3
    print prt(" 1 3 5 \n 7 9 11 \n 13 15 17");
    cout << prt.getNum();
    cout << endl << endl;

    //Printing with loop 4
    type2();
    cout << endl << endl;

    //Printing with function 5
    type3();
    cout << endl << endl;

    //Printing with matrix 6
    int m = 3, n = 3;
    int matrix[m][n] = {
        {1,3,5},
        {7,9,11},
        {13,15,17}
    };

    
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

    //Printing Matrix with forloop 7
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl << "";
    }
    cout << endl << endl;

    //Printing Array with Forloop 8
    for(int k = 0; k < 3; k++) {
        cout << array[k];
        cout << " ";
    }
    cout << endl;
    for(int y = 3; y < 6; y++) {
        cout << array[y];
        cout << " ";
    }
    cout << endl;
    for(int z = 6; z < 9; z++) {
        cout << array[z];
        cout << " ";
    }
    cout << endl << endl;

    //Printing Vector without Forloop 9
    print4(a);
    cout << endl << endl;

    //Printing by vector and matrix 10
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

    return 0;

}