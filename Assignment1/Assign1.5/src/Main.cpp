#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    Employee() : empID(0), empName(""), empSalary(0.0) {}

    int getEmpID() const { return empID; }
    string getEmpName() const { return empName; }
    double getEmpSalary() const { return empSalary; }

    void setEmpID(int id) { empID = id; }
    void setEmpName(const string& name) { empName = name; }
    void setEmpSalary(double salary) { empSalary = salary; }

    void calculateGrossSalary() {
        double grossSalary = empSalary;
        if (empSalary <= 5000) {
            grossSalary += empSalary * 0.10;
        } else if (empSalary <= 10000) {
            grossSalary += empSalary * 0.15;
        } else {
            grossSalary += empSalary * 0.20;
        }
        cout << "Gross Salary: " << grossSalary << endl;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;
        calculateGrossSalary();
    }
};

int main() {
    const int maxEmployees = 100; // Maximum number of employees
    Employee employees[maxEmployees];
    int numEmployees = 0; // Current number of employees

    int choice;

    do {
        cout << "\nEmployee Payroll Management System Menu:" << endl;
        cout << "1. Add a new employee" << endl;
        cout << "2. Calculate gross salary" << endl;
        cout << "3. Display employee details" << endl;
        cout << "4. Update employee information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (numEmployees < maxEmployees) {
                    Employee newEmployee;
                    int id;
                    string name;
                    double salary;

                    cout << "Enter Employee ID: ";
                    cin >> id;
                    newEmployee.setEmpID(id);

                    cout << "Enter Employee Name: ";
                    cin.ignore();
                    getline(cin, name);
                    newEmployee.setEmpName(name);

                    cout << "Enter Employee Salary: ";
                    cin >> salary;
                    newEmployee.setEmpSalary(salary);

                    employees[numEmployees] = newEmployee;
                    numEmployees++;
                    cout << "Employee added successfully!" << endl;
                } else {
                    cout << "Maximum number of employees reached!" << endl;
                }
                break;
            }
            case 2: {
                int id;
                cout << "Enter Employee ID to calculate gross salary: ";
                cin >> id;

                bool found = false;
                for (int i = 0; i < numEmployees; i++) {
                    if (employees[i].getEmpID() == id) {
                        employees[i].calculateGrossSalary();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found!" << endl;
                }
                break;
            }
            case 3: {
                int id;
                cout << "Enter Employee ID to display details: ";
                cin >> id;

                bool found = false;
                for (int i = 0; i < numEmployees; i++) {
                    if (employees[i].getEmpID() == id) {
                        employees[i].displayEmployeeDetails();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found!" << endl;
                }
                break;
            }
            case 4: {
                int id;
                cout << "Enter Employee ID to update information: ";
                cin >> id;

                bool found = false;
                for (int i = 0; i < numEmployees; i++) {
                    if (employees[i].getEmpID() == id) {
                        string newName;
                        double newSalary;

                        cout << "Enter new Employee Name: ";
                        cin.ignore();
                        getline(cin, newName);
                        employees[i].setEmpName(newName);

                        cout << "Enter new Employee Salary: ";
                        cin >> newSalary;
                        employees[i].setEmpSalary(newSalary);

                        cout << "Employee information updated successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Employee not found!" << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
