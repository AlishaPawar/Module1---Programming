#ifndef BANK_H_
#define BANK_H_
#include<string>
using namespace std;
class BankAccount{
private:
	int accountNumber;
	string holderName;
	double balance;

public:
	BankAccount(int accountNumber, string holderName, double initialBalance);

		int getAccountNumber();
		void setAccountNumber(int accountNumber);

		string getHolderName();

		void setHolderName(string holderName);

		double getBalance();
		void setBalance(double balance);

		void deposit(double amt);

		void withdraw(double amt);

		void displayAccountDetails();
};



#endif /* BANK_H_ */
