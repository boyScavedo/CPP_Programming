// Write a program' that first appends the custorner records in a data file and 
// display the number of customer records as well as the contents from the file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile("Customer_Report.txt", ios::app | ios::in);
    int choice = 0;
    
    cout << "Welcome to customer record keeper!" << endl;
    
    while (choice != 3) {
      
      cout << endl << "1. Check The Records" << endl;
      cout << "2. Update The Records" << endl;
      cout << "3. Exit" << endl;
      cout << ":";
    
      cin >> choice;
    
      switch (choice) {
        case 1:
        {
          myFile.clear();  // to remove eof flag 
          myFile.seekg(0, ios::beg);  // to reset the pointer to beginning

          string line = "";

          while(getline(myFile, line)) {
            cout << endl << line << endl;
          }

          break;
        }
        case 2:
        {
          string c_name;
          int c_id, revenue;

          cout << endl << "Enter the customer id: ";
          cin >> c_id;
          cout << "Enter the name of the customer: ";
          cin.ignore();
          getline(cin, c_name);
          cout << "Enter how much revenue the customer has made us: ";
          cin >> revenue;


          myFile.clear();
          myFile.seekp(0, ios::end);  // Moves the pointer to the end
          myFile << c_id << " : " << c_name << " : " << revenue << endl;
          break;
        }
      }
    }
    
    myFile.close();
    
    return 0;
}
