#include <iostream>
#include <list>
using namespace std; 
class doggo {
    public:
        int a;
        double w;
        string name;
        string ownerName;
        list<string>favoriteFoods;

        doggo(string cName, string cOwner, int cAge, double cW){
            name = cName;
            ownerName = cOwner;
            a = cAge;
            w = cW;

        }

        void GetInfo(){
            cout << "Name:= " << name << endl;
            cout << "Age:= " << a << endl;
            cout << "ownerName:= " << ownerName << endl;
            cout << "weight:= " << w << endl;
        }
};
int main() {
    doggo doggo1("Nico", "pp",2,3);
    
    doggo1.GetInfo();

}