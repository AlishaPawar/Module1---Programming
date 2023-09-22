#include<cstdio>
int main(void){
	int number;
	size_t size = sizeof( int );
	printf("size	:	%u\n", size);//ok
	printf("Address	:	%p\n", size);//4
	//printf("Address	:	%p\n", &int);  //not ok

	size = sizeof( number );  //ok
	printf("Size	:	%u\n", size); //4
	return 0;

}
