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
		printf("\n Student Details is\n");
		
		printf("\nroll= %s",roll);
		    printf("\nage= %d",age);
			 printf("\ngender= %c",gender);
		        printf("\nname= %s",name);
		
			    
				    return 0;	
		
}
