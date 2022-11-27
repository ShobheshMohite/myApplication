#include<stdio.h>

int X=10;		// Global variable (Data)

void Demo()
{
	int B = 30;		// Local Variable (Stack)
	
	printf("value of A from demo = %d \n",B);

	printf("value of X from demo = %d \n",X);
	
}


int main()
{
	int A = 20;		// (Local variable)
	
	printf("value of A from main = %d \n",A);
	
	printf("value of X from main = %d \n",X);
	
	Demo();

	return 0;
}