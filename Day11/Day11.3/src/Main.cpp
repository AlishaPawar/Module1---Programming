#include<iostream>
#include<string>
using namespace std;
class Date{
private:
	int day;
	int month;
	int year;

public:
	Date(void) : day(0), month(0), year(0){

	}

	Date(int day , int month , int year) : day(day), month(month), year(year){

	}

	int getDay(){
		return this->day;
	}

	void setDay(int day){
		this->day = day;
	}

	int getMonth(){
		return this->month;
	}

	void setMonth(int month){
		this->month = month;
	}

	int getYear(){
		return this->year;
	}

	void setYear(int year){
		this->year = year;
	}

	friend istream& operator>>(istream& cin, Date& other){
		cout<<"Enter Day  :  ";
		cin>> other.day;
		cout<<"Enter Month  :  ";
		cin>> other.month;
		cout<<"Enter Year  :  ";
		cin>> other.year;
		return cin;
	}

	friend ostream& operator<<(ostream& cin, Date& other){
		cout<<other.day<<" / "<<other.month<<" / "<<other.year<<endl;
		return cout;
	}
};

class Employee{
private:
	string name;
	int empId;
	float salary;
	Date joinDate;

public:
	Employee(void) : name(" "), empId(0), salary(0.0), joinDate(){

	}

	string getName(){
		return this->name;
	}

	void setName(string name){
		this-> name = name;
	}

	int getEmpID(){
		return this->empId;
	}

	void setEmpID(int empId){
		this-> empId = empId;
	}

	float getSalary(){
		return this->salary;
	}

	void set(float salary){
		this-> salary = salary;
	}

	Date getJoinDate(){
		return this->joinDate;
	}

	void setJoinDate(Date& joinDate){
		this-> joinDate = joinDate;
	}

	friend istream& operator>>(istream& cin, Employee& other){
		cout<<"Enter Name  :  ";
		cin>> other.name;
		cout<<"Enter EmpID  :  ";
		cin>> other.empId;
		cout<<"Enter Salary  :  ";
		cin>> other.salary;
		cout<<"Enter Join Date	:	";
		cin>>other.joinDate;
		return cin;
	}

	friend ostream& operator<<(ostream& cout, Employee& other){
		cout<<"Name		:		"<<other.name<<endl;
		cout<<"Emp ID		:		"<<other.empId<<endl;
		cout<<"Salary		:		"<<other.salary<<endl;
		cout<<"Join Date		:		"<<other.joinDate<<endl;
		return cout;
	}
};

int main( void ){

	Employee emp;

	cin>>emp;
	cout<<emp;
}
