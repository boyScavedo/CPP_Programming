// Create a header file named "student.h" containing a class "Student". Use it in a separate main program
// to read and display student details.

#include "student.h"
#include <iostream>
#include <conio.h>

int main() {
    Student s;

    cout << "Enter student details:\n";
    s.readData();

    s.displayData();

    getch();
    return 0;
}
