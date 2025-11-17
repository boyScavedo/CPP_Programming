// Inline function to find the cube of a number.

#include <iostream>
#include <conio.h>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Cube = " << cube(n) << endl;
    getch();
    return 0;
}

