#include<iostream>
using namespace std;
class Matrix{
private:
	int row;
	int col;
	int **arr;

public:
	Matrix(int x, int y): row(x), col(y){
		arr = new int*[row];
		for(int i =0; i<row; i++){
			arr[i] = new int[col];
		}
	}

	~Matrix(){
		for(int i =0; i<row; i++){
			delete[] arr[i];
		}
		delete[] arr;
	}

	void acceptRecord(){
		cout<<"Enter elements  :  "<<endl;
		for(int i = 0; i<row; i++)
			for(int j = 0; j<col; j++)
				cin>>arr[i][j];
	}

	Matrix operator+(const Matrix &other){
		Matrix result(row,col);
		for(int i = 0; i < row; i++)
			for(int j = 0; j<col; j++)
				result.arr[i][j] = arr[i][j] + other.arr[i][j];
		return result;
	}

	Matrix operator-(const Matrix &other){
		Matrix result(row,col);
		for(int i = 0; i < row; i++)
			for(int j = 0; j<col; j++)
				result.arr[i][j] = arr[i][j] - other.arr[i][j];
		return result;
	}

	Matrix operator*(const Matrix &other){
		Matrix result(row,col);
		for(int i = 0; i < row; i++)
			for(int j = 0; j<col; j++)
				result.arr[i][j] = arr[i][j] * other.arr[i][j];
		return result;
	}

	void printRecord(){
		for(int i = 0; i<row; i++)
			for(int j = 0; j<col; j++)
				cout<<arr[i][j]<<endl;
	}
};
int main( void ){
	int row , col;
	cout<<"enter row and cols for Matrix A  :  "<<endl;
	cin>>row>>col;

	Matrix A(row, col);
	A.acceptRecord();

	cout<<"enter row and cols for Matrix B  :  "<<endl;
	cin>>row>>col;

	Matrix B(row, col);
	B.acceptRecord();

	Matrix C = A + B;
	cout<<"Matrix A + B"<<endl;
	C.printRecord();

	C = A - B;
	cout<<"Matrix A - B"<<endl;
	C.printRecord();

	C = A * B;
	cout<<"Matrix A * B"<<endl;
	C.printRecord();
}
