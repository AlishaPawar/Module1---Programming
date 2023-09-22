#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
	int empID;
	 string empName;
	 double empSalary;

public:
	 Employee() : empID(0), empName(" "), empSalary(0.0){

	 }

	 int getEmpID() const{
		 return empID;
	 }

	 void setEmpID(int empID){
		 this->empID = empID;
	 }

	 string getEmpName() const{
		 return empName;
	 }

	 void setEmpName(string empName){
		 this->empName = empName;
	 }

	 double getEmpSalary() const{
		 return empSalary;
	 }

	 void setEmpSalary(double empSalary){
		 this->empSalary = empSalary;
	 }

	 void calculateGrossSalary(){
		 double grossSalary = empSalary;
		 if( empSalary <= 5000){
			 grossSalary += empSalary *0.10;
		 }else if(empSalary <= 10000){
			 grossSalary += empSalary * 0.15;
		 }else {
			 grossSalary += empSalary * 0.20;
		 }
		 cout<<"Gross Salary  :  "<<grossSalary<<endl;
	 }

	 void displayDetails(){
		 cout<<"Employee ID  :  "<<empID<<endl;
		 cout<<"Employee Name  :  "<<empName<<endl;
		 cout<<"Employee Salary  :  "<<empSalary<<endl;
		 calculateGrossSalary();
	 }
};
int main( void ){
	int sizeEmp = 50;
	Employee emp[sizeEmp];

	int currentNum = 0;
	int choice ;

	while(choice != 5){
		cout<<"1.Add New Employee"<<endl;
		cout<<"2.Calculate Gross Salary"<<endl;
		cout<<"3.Display Employee Details"<<endl;
		cout<<"4.Update Employee Details"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Enter Your Choice";
		cin>>choice;

		switch(choice){
		case 1:{
			if(currentNum < sizeEmp){
				Employee emp;
				int id;
				string name;
				double salary;

				cout<<"Enter Employee ID  :  ";
				cin>>id;
				emp.setEmpID(id);

				cout<<"Enter Employee Name  :  ";
				cin>>name;
				emp.setEmpName(name);

				cout<<"Enter Employee Salary  :  ";
				cin>>salary;
				emp.setEmpSalary(salary);

				employees[currentNum] = emp;
				currentNum++;


			}
		}

		}
	}
}
