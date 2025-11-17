// Bhatbhatteni Bill Format using iomanip

#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

int main() {
    cout << "====================================================\n";
    cout << "           BHATBHATENI SUPERMARKET          \n";
    cout << "                Official Receipt             \n";
    cout << "====================================================\n";

    cout << left << setw(20) << "Item"
         << right << setw(8)  << "Qty"
         << right << setw(12) << "Price"
         << right << setw(12) << "Total" << endl;

    cout << "----------------------------------------------------\n";

    struct Item {
        string name;
        int qty;
        double price;
    };

    Item items[4];

    items[0].name = "Milk 1L";
    items[0].qty = 2;
    items[0].price = 120.00;

    items[1].name = "Bread";
    items[1].qty = 1;
    items[1].price = 85.00;

    items[2].name = "Noodles";
    items[2].qty = 3;
    items[2].price = 55.00;

    items[3].name = "Cheese 200g";
    items[3].qty = 1;
    items[3].price = 260.00;

    double grandTotal = 0.0;

    for (int i = 0; i < 4; i++) {
        double total = items[i].qty * items[i].price;
        grandTotal += total;

        cout << left << setw(20) << items[i].name
             << right << setw(8)  << items[i].qty
             << right << setw(12) << fixed << setprecision(2) << items[i].price
             << right << setw(12) << total << endl;
    }

    cout << "----------------------------------------------------\n";

    cout << left << setw(20) << "Grand Total"
         << right << setw(32) << fixed << setprecision(2) << grandTotal << endl;

    cout << "====================================================\n";
    cout << "        Thank you for shopping with us!     \n";
    cout << "====================================================\n";

    getch();
    return 0;
}

