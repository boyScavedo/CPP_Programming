// Write a program that demonstrates runtime polymorphism using virtual functions in a base class 'Shape' and derived classes 'Rectangle' and 'Circle'

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() { 
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;
public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    void area() override { 
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

int main() {
    Shape* shapePtr; 

    Rectangle rect(5, 3);
    shapePtr = &rect;
    shapePtr->area(); 

    Circle circ(4);
    shapePtr = &circ;
    shapePtr->area(); 

    return 0;
}
