//Create a class 'BankAccount' that uses a friend function to update balance. Demonstrate how friend functions can access private data

#include <iostream>
using namespace std;

class BankAccount{
    int balance = 0;
    
    friend void setBalance(BankAccount &BA, int value);
    
    public:
    
    void display() {
        cout << "balance = " << balance;
    }
};

void setBalance(BankAccount &BA, int value) {
    BA.balance = value;
}

int main() {
    BankAccount BA1;
    
    setBalance(BA1, 1000);
    BA1.display();
    
    return 0;
}
