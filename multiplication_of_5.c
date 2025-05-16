#include<stdio.h>

int main()
{
	int i, num1=5;
	printf("Multiplication table of %d",num1);
	for(i=1; i<=10; i++)
	{
		printf("\n%d*%d=%d\n",num1,i,num1*i);
		
	}
	return 0;
	
}
 