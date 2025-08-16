/*
 * @file Simple_Calculator.cpp
 * @brief CLI-Based Menu-Driven Calculator
 *
 * Functionality: Addition, Subtraction, Multiplication and Division of any two integers.
 *
 * @author Jeevan Adhikari
 * @date 2025-08-16
 */

#include <iostream>
#include <conio.h>
using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second Integer.
 * @return Sum of a and b.
 */
int addition(int a, int b);

/**
 * @brief Subtracts two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Different of a and b.
 */
int subtraction(int a, int b);

/**
 * @brief Multiplies a and b.
 * @param a First integer.
 * @param b Second integer.
 * @return Product of a and b.
 */
int multiplication(int a, int b);

/**
 * @brief Divides a and b.
 * @param a First integer.
 * @param b Second integer.
 * @return Division of a and b.
 */
int division(int a, int b);

/**
 * @brief Takes user input for two integers.
 * @param a Reference to first integer.
 * @param b Reference to second integer.
 */
void input(int& a, int& b);

/**
 * @brief Entry point of the CLI-Based Menu-Driven Calculator.
 *
 * Displays a menu driven calculator interface and performs basic arithmatic operations(+, -, *, /)
 *
 *@details
 *This function demonstrates:
 * - Menu-driven structure
 * - Function calls for arithematic operations
 *
 * @note The program runs indefinitely until the user selects the "Exit" option.
 *
 * @return int Returns 0 on successful execution.
 *
 * @var a First operand entered by the user
 * @var b Second operand entered by the user
 * @var choice Stores the user's menu selection
 */
int main() {
  
  int a;
  int b;
  int choice;

  cout << "WELCOME TO CALCULATOR" << endl;
  do{
    // Display menu options.
    cout << endl << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl << ": ";
    cin >> choice;

    cout << endl;

    //Perform action based on user's choice.
    switch(choice) {
      case 1:
        {
          input(a, b);
          cout << "The addition of " << a << " and " << b << " is " << addition(a, b) << endl;
          break;
        }
      case 2:
        {
          input(a, b);
          cout << "The subtraction of " << a << " and " << b << " is " << subtraction(a, b) << endl;
          break;
        }
      case 3:
        {
          input(a, b);
          cout << "The multiplication of " << a << " and " << b << " is " << multiplication(a, b) << endl;
          break;
        }
      case 4:
        {
          input(a, b);
          // Division by zero exception handling
          if (b == 0) {
            cout << "Division by 0, Not possible!" << endl;
            break;
          }

          cout << "The division of " << a << " and " << b << " is " << division(a, b) << endl;
          break;
        }
      case 5:
        {
          cout << "Exiting the Program... " << endl;
          break;
        }
    }

  } while (choice != 5);

  cout << endl << "Program exited successfully!";

  getch();
  return 0;
}

//Function Definitions
int addition(int a, int b) { return a + b; }
int subtraction(int a, int b) { return a - b; }
int multiplication(int a, int b) { return a * b; }
int division(int a, int b) { return a / b; }


void input(int& a, int& b) {
  cout << "Enter any value: ";
  cin >> a;
  cout << "Enter any value: " ;
  cin >> b;
}
