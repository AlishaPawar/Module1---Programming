#include<iostream>
using namespace std;
class Complex{
private:
	int real;
	int imag;

public:
	Complex(void) : real(0), imag(0){

	}

	Complex(int real, int imag) : real(real), imag(imag){

	}

	int getReal(void)const{
		return this->real;
	}

	void setReal(const int real){
		this->real;
	}

	int getImag(void)const{
		return this->imag;
	}

	void setImag(const int real){
		this->imag;
	}

	void operator()(int real, int imag){
		this->real = real;
		this->imag = imag;
	}

	friend istream &operator>>(istream &cin, Complex &other){
		cout<<"Enter real number : ";
		cin>>other.real;
		cout<<"Enter imag number ; ";
		cin>>other.imag;

		return cin;
	}

	friend ostream &operator<<(ostream &cout, Complex &other){
		cout<<"Real number : "<<other.real<<endl;
		cout<<"Imag number : "<<other.imag<<endl;

		return cout;
	}
};
int main( void ){
	Complex c1;
	c1(10, 20);		//c1.operator()(10, 20)
	/*cin>>c1;  //operator>>(cin, c1)

	c1.setReal(c1.getReal() + 5);
	c1.setReal(c1.getImag() + 5);*/

	cout<<c1;
	return 0;  //operator<<(cout , c1)
}
