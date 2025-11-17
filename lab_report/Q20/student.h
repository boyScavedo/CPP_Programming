
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float marks;

public:
    void readData() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;

        cin.ignore(); // Clear buffer after marks input
    }

    void displayData() const {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

#endif
