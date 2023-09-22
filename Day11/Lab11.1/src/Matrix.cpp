#include<iostream>
using namespace std;

class Matrix{
private:
	int row;
	int col;
	int **arr;

public:
	Matrix(int r, int c) : row(r), col(c){
		arr = new int*[row];
		for(int i = 0; i<row; i++){
			arr[i] = new int[col];
		}
	}

	~Matrix(){
		for(int i = 0; i<row; i++){
			delete[] this->arr[i];
		}
		delete[] this->arr;
	}
	Matrix operator+(const Matrix& other){
		Matrix result(row, col);

		for(int i = 0; i<row; i++)
			for(int j = 0; j<col; j++)
				result.arr[i][j] = arr[i][j] + other.arr[i][j];

		return result;
	}

	Matrix operator-(const Matrix& other){
		Matrix result(row, col);

		for(int i = 0; i<row; i++)
			for(int j = 0; j<col; j++)
				result.arr[i][j] = arr[i][j] - other.arr[i][j];

		return result;
	}

	Matrix operator*(const Matrix& other){
		Matrix result(row, col);

		for(int i = 0; i<row; i++)
			for(int j = 0; j<col; j++)
				result.arr[i][j] = arr[i][j] * other.arr[i][j];

		return result;
	}

	void acceptRecord(){
		cout<<"Enter Matrix Values"<<endl;
		for(int i = 0; i<row; i++)
			for(int j = 0; j<col; j++)
				cin>>arr[i][j];

	}

	void printRecord(){
		cout<<"Matrix"<<endl;
		for(int i = 0; i<row; i++)
			for(int j = 0; j<col; j++)
				cout<<arr[i][j]<<" ";
		    cout<<endl;
	}
};
int main( void ){
	int row;
	int col;
	cout << "Enter the number of rows and columns for matrix A: ";
	cin >> row;
	cin>> col;

	    Matrix A(row, col);
	    A.acceptRecord();

	    cout << "Enter the number of rows and columns for matrix B: ";
	    cin >> row >> col;

	    Matrix B(row, col);
	    B.acceptRecord();

	    Matrix C = A + B;
	    cout << "Matrix A + B:" << std::endl;
	    C.printRecord();

	    C = A - B;
	    cout << "Matrix A - B:" << std::endl;
	    C.printRecord();

	    C = A * B;
	    cout<<"Matrix A * B"<<endl;
	    C.printRecord();
}
