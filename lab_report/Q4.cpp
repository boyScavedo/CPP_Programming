//Implement multilevel inheritance with the classes: Person -> Employee -> Manager. Each class should add relevant attributes. Write a function to display all details of a Manager.

#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
    
    public:
    
    void setPersonDetails() {
        cout << "Enter the name: ";
        cin >> name;
        
        cout << "Enter the age: ";
        cin >> age;
    }
    
    void displayPerson() {
        cout << name << endl << age << endl;
    }
};

class Employee : public Person {
    int employeeId, salary;
    
    public:
    
    void setEmployeeDetails() {
        setPersonDetails();
        
        cout << "Enter the id of the employee: ";
        cin >> employeeId;
        
        cout << "Enter the salary of the employee: ";
        cin >> salary;
    }
    
    void displayEmployee() {
        displayPerson();
        cout << employeeId << endl << salary << endl;
    }
};

class Manager : public Employee{
    string branch;
    
    public:
    
    void setManagerDetails() {
        setEmployeeDetails();
        
        cout << "Enter the branch allocated to the manager: ";
        cin >> branch;
    }
    
    void displayManager() {
        displayEmployee();
        cout << branch << endl;
    }
};

int main() {
    Manager M1;
    
    M1.setManagerDetails();
    M1.displayManager();
    
    return 0;
}
