#include<iostream>
using namespace std;

clas A{
public:
	static void f1(void){
		cout<< "A::f1"<<endl;
	}
};

clas B{
public:
	static void f2(void){
		cout<< "B::f2"<<endl;
	}

	static void f3(void){
		f1();
		B::f2();
		f2():
	}
};

int main( void ){

}
