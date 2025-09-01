// WAP that accepts user input and throws an exception if the input is negative. Use custom exception class

#include <iostream>
#include <exception>
using namespace std;

class Exception : public exception {

  public:

  const char* what() const noexcept {
    return "Negative Number";
  }
};

int main() {
  int input;
  try {
    cout << "Enter any integer: ";
    cin >> input;

    if (input < 0) {
      throw Exception();
    }

    cout << input << endl;
  }
  catch (const Exception &e) {
    cout << "Caught an Exception: ";
    cout << e.what();
  }

  return 0;
}
