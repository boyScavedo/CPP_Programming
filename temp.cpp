#include <iostream>
#include <conio.h>
using namespace std;

class Temp {
  static int temp1;
  static int temp2;

  public:

  static void setTemp() {
    cout << "Enter the first number: ";
    cin >> Temp::temp1;
    cout << "Enter the second number: ";
    cin >> Temp::temp2;
  }

  void displayTemp() {
    cout << endl << Temp::temp1 << endl << Temp::temp2 << endl;
  }

};

int Temp::temp1 = 0;
int Temp::temp2 = 0;

int main() {

  Temp T1, T2;

  T1.setTemp();

  T2.displayTemp();

  getch();
  return 0;
}
