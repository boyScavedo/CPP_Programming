//Write a function ticketPrice(int age, string type = "regular", float basePrice = 100.0):
//- Children (<12): 50% off.
//- Seniors (>60): 30% off.
//- VIP tickets: 20% extra.
//
//Test: Try with combinations of age, type , and price.

#include <iostream>
using namespace std;

int ticketPrice(int age, string type = "regular", float basePrice = 100.0) {
    if (age < 12 && type == "regular") {
        return 0.5 * 1.0 * basePrice;
    }
    else if (age < 12 && type == "vip") {
        return 0.5 * 1.2 * basePrice;
    }
    else if (age >= 12 && age <= 60) {
        if (type == "regular") {
            return 1.0 * 1.0 * basePrice;
        }
        else if (type == "vip") {
            return 1.0 * 1.2 * basePrice;
        }
    }
    else if (age > 60) {
        if (type == "regular") {
            return 0.7 * 1.0 * basePrice;
        }
        else if (type == "vip") {
            return 0.7 * 1.2 * basePrice;
        }
    }
}

int main() {
    int choice;
    cout << "Welcome to ticket booth!!!\npress the number as you desire.";
    while (choice != 2) {
        cout << "\n\n1. Start booking"<< endl;
        cout << "2. Exit" << endl;
        cout << ": ";
        cin >> choice;
        
        switch(choice){
            case 1: 
            {
                int age;
                string tickettype;
                float price, total;
                
                cout << "Enter the age: ";
                cin >> age;
                
                cout << "Enter the type of ticket(regular/vip): ";
                cin >> tickettype;
                
                cout << "Enter the price of the ticket: ";
                cin >> price;
                
                total = ticketPrice(age, tickettype, price);
                
                cout << "The price of ticket is " << total;
                break;
            }
            case 2:
                break;
        }
    }
}
