//Write a C++ program to demonstrate overloading of both unary ('++') and binary ("+") operators using a class 'Counter'.

#include <iostream>
using namespace std;

class Counter{
    int real, imaginary;
    
    public:
    
    Counter(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }
    
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
    
    void operator++() {
        real++;
        imaginary++;
        cout << "The new complex is " << real << " + " << imaginary << "i" << endl;
    }
    
    Counter operator+(Counter &C) {
        Counter C1;
        
        C1.real = real + C.real;
        C1.imaginary = imaginary + C.imaginary;
        
        return C1;
    }
};

int main() {
    Counter C1(10,20), C2(20, 10), C3;
    
    ++C1;
    C3 = C1 + C2;
    C3.display();
    
    return 0;
}
