#include<cstdio>

// function definition of main
/*int main( void ){//calling function

	int sum(int num1, int num2);  //local function declaration
	int result = sum(10, 20);  //function call
	printf("Sum : %d\n",result);
}
//function definition of sum
int sum(int num1, int num2){  //called function
	int result = 0;
	result = num1 + num2;
	return result;
}*/
int main( void ){
	extern int num1;  /*declaration used when variable is declared out of main after
	                     function i.e line no 26
	//int num1;  //static and local variable
	printf("%d\n", num1);

	/*int num2 = 10;
	printf("%d\n", num2);*/
	return 0;
}
int num1 = 20;





