//WAP in CPP to demonstrate single inheritance. Create a base class Person with attributes like name and age.Derive a class Student that adds
//attributes like rollNo and marks. Display the details of the student.

#include <iostream>
using namespace std;

class Person{
    string name;
    int age;
    
    public:
    void setDetails() {
        cout << "Enter the name: ";
        cin >> name;
        
        cout << "Enter the age: ";
        cin >> age;
    }
    
    void displayPerson() {
        cout << name << endl << age << endl;
    }
};

class Student : public Person {
    int rollno, marks;
    
    public:
    void setStudentDetails() {
        setDetails();
        
        cout << "Enter the roll number of the student: ";
        cin >> rollno;
        
        cout << "Enter the marks: ";
        cin >> marks;
    }
    
    void display() {
        displayPerson();
        cout << rollno << endl << marks << endl;
    }
};

int main() {
    Student S1;
    
    S1.setStudentDetails();
    S1.display();
    
    return 0;
}
