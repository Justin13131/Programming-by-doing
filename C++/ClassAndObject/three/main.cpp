#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <numeric>

using namespace std;


class Student {
    private: 
        string Name;
        int age;
        int gradelevel;
        double GPA; //average % of grades * 5
        char gender; //M or F
        double grades[4]; //[0] is English, [1] is Math, [2] is Science, [3] is Social Studies]
        

    public:
        
        Student( string n, int a, int g, char gen){
            Name = n;
            age = a;
            gradelevel = g;
            gender = gen;
        }
        
        void setGrade(string course, double grade) {
            int courseIndex;

            if (course == "English") {
                grades[0] = grade;
            } else if (course == "Math") {
                grades[1] = grade;
            }else if (course == "Science") {
                grades[2] = grade;
            } else {
                grades[3] = grade;
            }
        }
        void calcGPA() {
            
            GPA = ((grades[0] + grades[1] + grades[2] + grades[3])*4)/5;
            
        }
        void printGrades() {
            cout << "English: " << grades[0] << endl;
            cout << "Math: " << grades[1] << endl;
            cout << "Science: " << grades[2] << endl;
            cout << "Social Study: " << grades[3] << endl;
            cout << "GPA: " << GPA;
        }
        double getGPA() {
            return GPA;
        }
};


int main() {
    srand(time(NULL));

    cout << "Student 1:" << endl;
   
    Student std1("Student 1: ", 16, 9, 'f');

    std1.setGrade("English", rand() % 100+1);
    std1.setGrade("Math", rand() % 100+1);
    std1.setGrade("Science", rand() % 100+1);
    std1.setGrade("Social Study", rand() % 100+1);

    
    std1.calcGPA();
    std1.printGrades();
    std1.getGPA();

    cout << endl << endl << "Student 2: " << endl;
        Student std2("Student 2: ", 16, 9, 'M');

        std2.setGrade("English", rand() % 100+1);
        std2.setGrade("Math", rand() % 100+1);
        std2.setGrade("Science", rand() % 100+1);
        std2.setGrade("Social Study", rand() % 100+1);
        std2.calcGPA();
        std2.printGrades();
        std2.getGPA();

        int bigger;
        if (std1.getGPA() > std2.getGPA()) {
            bigger = std1.getGPA() - std2.getGPA();
            cout << endl << "Student 1 has a better GPA, it is " << bigger << "points higher than Student 2." << endl;

        } else if(std2.getGPA() < std1.getGPA()) {
            bigger = std2.getGPA() - std1.getGPA();
            cout << endl << "Student 2 has a better GPA, it is " << bigger << " points higher than Student 1." << endl;
        } else {
            cout << endl << "They have the same GPA" << endl;
        }
}