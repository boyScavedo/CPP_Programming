//Write a C++ program using a class 'Employee' with data members 'emp_id', 'name', and 'salary'. Include parameterized constructor, display function and destructor

#include <iostream>
using namespace std;

class Employee {
    int emp_id, salary;
    string name;
    
    public:
    Employee(int id = 0, string empName = "Unknown", int empSalary = 0) {
        emp_id = id;
        name = empName;
        salary = empSalary;
    }
    
    void display() {
        cout << "id = " << emp_id << endl << "name = " << name << endl << "salary = " << salary;
    }
    
    ~Employee() {
        cout << "\n\nid no. " << emp_id << " details over";
    }
};

int main() {
    Employee E1(102318, "Jeevan", 100000);
    
    E1.display();
    
    return 0;
}
