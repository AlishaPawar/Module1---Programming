#ifndef COMPLEX_H_
#define COMPLEX_H_
#include<iostream>
using namespace std;
namespace nutil{
	class Complex{
	private:
		int real;
		int imag;

	public:
		Complex(void);

		Complex(int real, int imag);

		int getReal(void)const;

		void setReal(const int real);

		int getImag(void)const;

		void setImag(const int real);

		friend istream &operator>>(istream &cin, const Complex &other);

		friend ostream &operator<<(ostream &cout, const Complex &other);

	};
}

#endif /* COMPLEX_H_ */
