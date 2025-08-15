//Write a CPP program to define a class Rectangle with a parameterized constructore that takes length and breadth as arguments. Add a member function to compute area and display it

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

