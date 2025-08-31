// Create a program that illustrates type conversion:
// a. Basic to Class Type
// b. Class to Basic Type
// c. Class to Class type
// Using a class 'Distance'

#include <iostream>
#include <conio.h>
using namespace std;

class Distance {
  int feet, inch, dummy;

  public:

  Distance(int inch = 0) : dummy(inch){
    this->feet = inch / 12;
    this->inch = inch % 12;
  }

  operator int() const {
    return dummy;
  }

  void displayDistance() {
    cout << feet << "' " << inch << "\"" << endl;
  }
};

int main() {
  Distance D1, D2;
  int inches;

  cout << "Enter some length in inches: ";
  cin >> inches;

  D1 = inches;  // Basic to Class Type
  inches = D1;  // Class to Basic Type
  D2 = D1;      // Class to Class Type

  cout << endl <<  "From Class to Basic Type: " << inches << endl;

  cout << "From Basic to Class Type: "; 
  D1.displayDistance();
  
  cout << "From Class to Class Type: ";
  D2.displayDistance();
  
  getch();
  return 0;
}
