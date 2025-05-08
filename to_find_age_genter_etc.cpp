//write a program to take input of student as roll no name, age, and, gender.
#include<stdio.h>

 int main ()
 {
	int roll,age;
		char gender;
		char name[20];
		printf("Enter roll number:\t");
		scanf("%d", &roll);
		printf("Enter age:\t");
		scanf("%d",&age);
		printf("Enter name of the student:\t");
		scanf("%s",&name);
		printf("Enter gender:\t");
		scanf(" %c",&gender);
		printf("\n details\n");
			
		printf("name= %s",name);
		
			printf("age= %d",age);
				
			    printf("gender= %c",gender);
			    
			    
				    return 0;	
		
}
