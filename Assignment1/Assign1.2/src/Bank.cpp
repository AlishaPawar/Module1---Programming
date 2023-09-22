#include"../include/Bank.h"
#include<string>
#include<iostream>
using namespace std;

BankAccount::BankAccount(int accountNumber, string holderName, double initialBalance) : accountNumber(accountNumber), holderName(holderName), balance(initialBalance) {

}

int BankAccount:: getAccountNumber(){
	return this->accountNumber;
}
void BankAccount:: setAccountNumber(int accountNumber){
	this->accountNumber = accountNumber;
}

string BankAccount:: getHolderName(){
	return this->holderName;
}
void BankAccount::setHolderName(string holderName){
	this->holderName = holderName;
}

double BankAccount:: getBalance(){
	return this->balance;
}
void BankAccount:: setBalance(double balance){
	this->balance = balance;
}

void BankAccount::deposit(double amt){
	if(amt > 0){
		balance += amt;
		cout<<"Deposit Successful"<<balance<<endl;
	}
	else {
		cerr<<"Invalid Entry"<<endl;
	}
}

void BankAccount::withdraw(double amt){
	if(amt>0 && amt<=balance){
		balance -= amt;
		cout<<"Withdrawal Successful. New Balance :$"<<balance<<endl;
	}
}

void BankAccount::displayAccountDetails(){
	cout<<"ACCOUNT NUMBER 	:	"<<accountNumber<<endl;
	cout<<"ACCOUNT HOLDER NAME 	:	"<<holderName<<endl;
	cout<<"BALANCE :		"<<balance<<endl;
}

