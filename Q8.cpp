//Write a CPP program to define a class Rectangle with a parameterized constructore that takes length and breadth as arguments. Add a member function to compute area and display it..

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
    public:
    
    Rectangle(int len = 0, int bre = 0) {
        length = len;
        breadth = bre;
    }
    
    void area() {
        cout << length * breadth;
    }
};

int main() {
    Rectangle R1(130, 23);
    
    R1.area();
    
    return 0;
}
