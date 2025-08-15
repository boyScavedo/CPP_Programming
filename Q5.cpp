//Write a CPP program where a friend function calculates the distance between two points.
//- Define a class Point with private members x and y.
//- Create a friend function calculateDistance(Point, Point) to compute distance using the distance formula

#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x, y;
    friend double calculateDistance(Point P1, Point P2);
    
    public:
    
    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
};

double calculateDistance(Point P1, Point P2) {
    return sqrt((P2.x - P1.x) * (P2.x - P1.x) + (P2.y - P1.y) * (P2.y - P1.y));
}

int main() {
    Point P1(10,20), P2(30, 40);
    
    cout << "The distance between points are: " << calculateDistance(P1, P2);

    return 0;
}
