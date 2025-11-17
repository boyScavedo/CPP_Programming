// Create a base class pointer to point to derived class objects. Show how virtual functions ensure correct method invocation

#include <iostream>
#include <conio.h>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* ptr;        
    Derived d;       

    ptr = &d;       

    cout << "Calling show() using base class pointer:" << endl;
    ptr->show();   

    getch();
    return 0;
}

