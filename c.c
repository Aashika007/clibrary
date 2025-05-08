#include<stdio.h> // header file
int main()
{
	int firstnumber,secondnumber,result; //variable initialization
	printf("Enter first number:");
	printf("\n"); // /n help to breat line
	scanf("%d",&firstnumber);
		printf("\n");
		
	printf("Enter second number:");
	printf("\n"); // /n help to breat line
	scanf("%d",&secondnumber);
	printf("\n");
	
	//operation or equation
	
	result = firstnumber + secondnumber;
	
	// display output
	printf("Addition = %d",result);
	
	return 0; //sucesfully run the program
	
}