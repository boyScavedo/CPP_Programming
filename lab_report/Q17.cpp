// WAP to show the use of constructor and destructor in dynamic memory allocation of an object array

#include <iostream>
#include <conio.h>
using namespace std;

class Demo {
    int value;

public:
    Demo(int v = 0) {
        value = v;
        cout << "Constructor called for object with value: " << value << endl;
    }

    ~Demo() {
        cout << "Destructor called for object with value: " << value << endl;
    }
};

int main() {
    int n;
    cout << "How many objects do you want to create? ";
    cin >> n;

    Demo *arr = new Demo[n];  

    cout << "\nObjects created dynamically.\n";

    delete[] arr;  
    cout << "\nObjects destroyed.\n";

    getch();
    return 0;
}

