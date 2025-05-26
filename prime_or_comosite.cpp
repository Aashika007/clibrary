//whether the number is prime , composite or non.
#include<stdio.h>

int main()
{
	int num,i,count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			count++;
		
		}
	}
	if(count==2)
	{
		printf("it is a prime number.");
	}
	else if(num==1)
	{
		printf("Neither prime nor composite number");
	}
	else
	{
		printf("it is a composite number.");
	}
	return 0;
}