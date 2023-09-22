#include<iostream>
#include<string>
#include"../include/Bank.h"

using namespace std;
int main( void ){
	BankAccount acc(1234, "Alisha", 10000 );

	int choice;
	double amount;

	while(choice != 0){

		cout<<"0. Exit"<<endl;
		cout<<"1. Deposit Money"<<endl;
		cout<<"2. Withdraw Money"<<endl;
		cout<<"3. Display Account Details"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;

		switch(choice){
		case 0:
			cout<<"Program Exited"<<endl;
			break;

		case 1:
			cout<<"Enter Amount to Deposit	:	$"<<endl;
			cin>>amount;
			acc.deposit(amount);
			break;

		case 2:
			cout<<"Enter Amount to Withdraw	:	$"<<endl;
			cin>>amount;
			acc.withdraw(amount);
			break;

		case 3:
			acc.displayAccountDetails();
			break;

		default:
			cout<<"Invalid Choice"<<endl;
		}
	}
}
