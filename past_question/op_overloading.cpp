// WAP to convert feet and inches into meter and centimeter using one class type to another class type

#include <iostream>
#include <iomanip>
using namespace std;

class Metric;

class Imperial{
  double feet, inches;

  public:

  Imperial(double f = 0, double i = 0) {
    feet = f;
    inches = i;
  }

  Imperial(const Metric &met);

  double getFeet() const {
    return feet;
  }

  double getInches() const {
    return inches;
  }

  void display() { cout << fixed << setprecision(0) << feet << "' " << setprecision(2) << inches << "\"" << endl; }

};
class Metric{
  double meter, centimeter;

  public:
  
  Metric(double m = 0, double c = 0) {
    meter = m;
    centimeter = c;
  }

  Metric(const Imperial &imp) {
    double totalInches = imp.getFeet() * 12 + imp.getInches();
    double totalCM = totalInches * 2.54;
    meter = (totalCM / 100);
    int cm = 0;

    if (meter != int(meter)) {
      cm = meter - int(meter);
      meter = int(meter);
      cm = cm * 100;
    }

    centimeter = totalCM - (meter * 100) + cm;
  }

  double getMeter() const {
    return meter;
  }

  double getCentimeter() const {
    return centimeter;
  }

  void display() { cout << fixed << setprecision(0) << meter << "m " << setprecision(2) << centimeter << "cm" << endl; }

};


Imperial::Imperial(const Metric &met) {
  double totalCM = met.getMeter() * 100 + met.getCentimeter();
  double totalInches = totalCM/2.54;
  feet = (totalInches / 12);
  inches = totalInches - (feet * 12);
}

int main() {
  Imperial imp(6, 0);
  Metric met;

  met = imp;
  met.display();

  Imperial imp1;
  imp1 = met;
  imp1.display();

  return 0;
}
