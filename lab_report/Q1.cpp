//Create a class Student with:
//- Data members: name, rollno
//- A static variable nextRoll starting from 1001 to assign roll numbers automatically
//- A function to display student info.
//
//Test: Create 3 student objects and display their details.

#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    static int nextRoll;
    int rollno = Student::nextRoll++;
    
    void display() {
        cout << name << " " << rollno << endl;
    }
};

int Student::nextRoll = 1001;

int main() {
    Student S1, S2, S3;
    
    S1.name = "Ram";
    S2.name = "Krishna";
    S3.name = "Hari";
    
    S1.display();
    S2.display();
    S3.display();
    return 0;
}
