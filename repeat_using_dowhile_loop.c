#include<stdio.h>
int main()
{
	int num1,num2,add;
	char option;
	do{
		printf("enter num1 and num2:");
		scanf("%d%d",&num1,&num2);
		add=num1+num2;
		printf("Addition=%d\n",add);
		printf("Do you want to continue,press y or Y to continue");
		scanf("%c",&option);
		
	}
	while(option=='y'||option=='Y');
	return 0;
}