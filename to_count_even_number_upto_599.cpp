//to count the total number of even number uoto 499
#include<stdio.h>

int main()
{
	int count =0;
	int i;
	for (i=2; i<=499; i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			count=count+1;
		
		}
	}
	
	
	printf("total number of even number up to 499 %d\t",count);
	return 0;
}