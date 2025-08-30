//Create a class BankAccount with:
//- Data members: accountNumber, balance
//- Static data member: interestRate
//- Member function to withdraw, deposit and calculate interest
//- static function to set interest rate
//
//Test: Set interest rate, create accounts, and calculate interest

#include <iostream>
#include <conio.h>
using namespace std;

class BankAccount{
    int accountNumber, balance; 
    static float interestRate;
    
    public:
    BankAccount(int acc = 0, int b = 0){
        accountNumber = acc;
        balance = b;
    }
    
    void showBalance() {cout << balance << endl;}
    
    static void setInterest() {
        cout << "Enter the interest rate: ";
        cin >> BankAccount::interestRate;
    }
    
    void deposit(int value) {
        balance += value;
    }
    
    void withdraw(int value) {
        if (value <= balance) {
            balance -= value;
        }
        else {
            cout << "Insufficient Funds" << endl;
        }
    }
    
    void calculateInterest() {
        cout << "Interest in one year = " << (balance * BankAccount::interestRate * 1.00)/100.00 << endl << endl; 
    }
};

float BankAccount::interestRate = 8.5;

int main() {
    BankAccount BA1(1, 10000), BA2(1, 10230);
    
    BA1.setInterest();
    cout << "The balance is: ";
    BA1.showBalance();
    BA1.deposit(100);
    cout << endl << "The balance after depositing 100: ";
    BA1.showBalance();
    BA1.withdraw(100);
    cout << endl << "The balance after withdrawing 100: ";
    BA1.showBalance();
    cout << endl;
    BA1.calculateInterest();
    
    getch();

    BA2.setInterest();
    cout << endl << "Balance: ";
    BA2.showBalance();
    cout << endl;
    BA2.calculateInterest();
    
    getch();
    return 0;
}
