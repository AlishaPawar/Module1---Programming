#include<iostream>
using namespace std;
class Array{
private:
	int size;
	int *arr;

public:
	Array(void){
		this->size = 0;
		this->arr =nullptr;
	}

	Array(int size){
		this->size;
		this->arr = new int[this->size];
	}

	Array(const Array &other){
		this->size = other.size;
		this->arr = new int[this->size];
		for(int index = 0; index < 0; ++index){
			this->arr[index] = other.arr[index];
		}
	}

	Array& operator=( const Array &other ){
		this->~Array( );
		this->size = other.size;
		this->arr = new int[ this->size ];
		for( int index = 0; index < this->size; ++ index )
		this->arr[ index ] = other.arr[ index ];
		return(*this);
	}
	//Array *const this
	int& operator[ ]( int index ){
		return this->arr[ index ];
	}
	friend istream& operator>>( istream &cin, Array &other ){
		for( int index = 0; index < other.size; ++ index ){
			cout<<"Enter element : ";
			cin >> other.arr[ index ];
		}
		return cin;
	}

	friend ostream& operator<<( ostream &cout, Array &other ){
		for( int index = 0; index < other.size; ++ index ){
			cout << other.arr[ index ] <<endl;
		}
		return cout;
	}

	~Array( void ){
		if( this->arr != nullptr ){
			delete[] this->arr;
		}
		this->arr = nullptr;
	}

};
int main( void ){
	Array a1( 3 );
	cin >> a1; //operator>>( cin, a1 )

	 int element = a1[ 2 ];
	 //int element = a1.operator[ ]( 2 );
	a1[ 2 ] = 300;
	//a1.operator[ ]( 2 ) = 300;
	cout << a1; //operator<<( cout, a1 )
	return 0;
}
