// Write a Program to perform string comparison using operator overloading '=='

#include <iostream>
#include <cstring>   
#include <conio.h>

using namespace std;

class MyString {
    char str[50];

public:
    MyString() {
        str[0] = '\0';
    }

    void read() {
        cin.getline(str, 50);
    }

    bool operator == (MyString &s) {
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    MyString s1, s2;

    cout << "Enter first string: ";
    s1.read();

    cout << "Enter second string: ";
    s2.read();

    if (s1 == s2)
        cout << "Strings are equal.\n";
    else
        cout << "Strings are NOT equal.\n";

    getch();
    return 0;
}
