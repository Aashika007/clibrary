#include<stdio.h>
#include<stdlib.h>
int main()
{
	 const int accountnumber = 123456789;
	 int balance = 10000;
	 int option;
	 int depositmoney,withdrawmoney;
	 char again;
	 int mycode = 9999;
	 int pincode;
	 printf("\n Welcome to ATM Service \n");
	 
	 firstgo:
	 printf("\n Enter your pin code \n");
	 scanf("%d", &pincode);
	                                        
	 if(pincode == mycode)
	 {
	 
	 do{
	 
	 printf(" 1. Deposit Money \n 2. Withdraw Money \n 3. Account Information \n 4. Exit");
	 printf("\nEnter your option\n");
	 scanf("%d",&option);
	 switch(option)
	 {
	 	case 1:
	 			printf("\n How much do you want to deposit \n");
	 			scanf("%d", &depositmoney);
	 			balance = balance + depositmoney;
	 			printf("/n Your total balance = %d",balance);
	 			break; //jump statement
	 	
	 	case 2:
	 			printf("\n How much do you want to withdraw \n");
	 			scanf("%d", &withdrawmoney);
	 			
	 			if( withdrawmoney < balance)
	 			{
				
		 			balance = balance - withdrawmoney;
		 			printf("\n Your total balance = %d",balance);
	 			
	 			}
	 			else
	 			{
	 				printf("\n Insufficient Balance\n");
				 }
	 			break; 
	 	
	 	case 3:
	 			printf("\n Your account number = %d", accountnumber);
	 			printf("\n Your total balance = %d",balance);
	 			break; 
	 	
	 	case 4:
	 			exit(0);
	 }
	 
	 printf("\n Do you want to continue ?\n Press y for continue\n");
	 scanf(" %c",&again);
		}while(again == 'Y' || again == 'y');
		
	}
	else{
	
		printf("\n Incorrect pincode \n");
		goto firstgo;
	}     
	return 0;                       
}     