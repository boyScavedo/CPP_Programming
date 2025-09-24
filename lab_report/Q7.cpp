// Create a class Student with members name and marks, display the use of default arguments with name as "Unknown" and marks as 0

#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
    public:
    
    Student() {
        name = "Unknown";
        marks = 0;
    }
    
    void display() {
        cout << name << endl << marks;
    }
};

int main() {
    Student S1;
    
    S1.display();
    
    return 0;
}

