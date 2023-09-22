#include <iostream>
#include <string>
#include"../include/Student.h"
using namespace std;
int main(){
    Student student;
    int choice;

    string name;
    int rollnumber;
    float marks;

    while(choice != 4){
        cout << "Menu:" << endl;
        cout << "1. Accept Information" << endl;
        cout << "2. Display Information" << endl;
        cout << "3. Calculate Grade" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
				student.setName(name);
                cout << "Enter roll number: ";
                cin >> rollnumber;
				student.setRollNumber(rollnumber);
                cout << "Enter marks: ";
                cin >> marks;
				student.setMarks(marks);
                break;
            case 2:
                cout << "Name: " << student.getName() << endl;
                cout << "Roll Number: " << student.getRollNumber() << endl;
                cout << "Marks: " << student.getMarks() << endl;
                cout << "Grade: " << student.getGrade() << endl;
                break;
            case 3:
                student.calculateGrade();
                cout << "Grade calculated." << endl;
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;

        }
    }

    return 0;
}
