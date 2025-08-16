//Create a class BankAccount with:
//- Data members: accountNumber, balance
//- Static data member: interestRate
//- Member function to withdraw, deposit and calculate interest
//- static function to set interest rate
//
//Test: Set interest rate, create accounts, and calculate interest

#include <iostream>
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
    BankAccount BA1(1001, 10000), BA2(1002, 10230);
    
    BA1.setInterest();
    BA1.showBalance();
    BA1.deposit(100);
    BA1.showBalance();
    BA1.withdraw(100);
    BA1.showBalance();
    BA1.calculateInterest();
    
    BA2.setInterest();
    BA2.showBalance();
    BA2.calculateInterest();
    
    return 0;
}
