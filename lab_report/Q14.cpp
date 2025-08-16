//Implement multiple inheritance with classes 'Person', 'Academic', and derived class 'Student'. Include appropriate constructors and member functions.

#include <iostream>
using namespace std;

class Person{
    string name;
    int age;
    
    public:
    
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }
    
    void displayPerson() {
        cout << "name = " << name << endl;
        cout << "age = " << age << endl;
    }
};

class Academics{
    string subject;
    int marks;
    
    public:
    Academics(string s = "", int m = 0) {
        subject = s;
        marks = m;
    }
    
    void displayAcademics() {
        cout << "subject = " << subject << endl;
        cout << "marks = " << marks << endl;
    }
};

class Student : public Person, public Academics {
    public:
    
    Student(string n, int a, string s, int m) : Person(n, a), Academics(s, m) {}
    
    void display() {
        displayPerson();
        displayAcademics();
    }
};

int main() {
    Student S1("Jeevan", 19, "OOP", 86);

    S1.display();
    
    return 0;
}
