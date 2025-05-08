//wap in c to swap the two values

#include <stdio.h>
int main()
{
	int firstNumber,secondNumber,temp;
	//variable decelartion case Senestive language
	
	printf("Enter first Number:\t");
	scanf("%d",&firstNumber);
	printf("\n");
	printf("Enter second Number:\t");
	scanf("%d",&secondNumber);
	
	printf("\n Before Swapping \n Value of firstNumber = %d\n Value of seconNumber = %d",firstNumber,secondNumber);
	//swap values logic
	
	temp = firstNumber;
	firstNumber = secondNumber;
	secondNumber= temp;
	
	printf("\nAfter swapping\n Value of firstNumber = %d\n Value of seconNumber = %d",firstNumber,secondNumber);
	return 0;
	
}