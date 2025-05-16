#include <stdio.h>

int main() 
        {
        	 int option;
    double num1, num2, result;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        printf("\nSimple Calculator\n");
        printf("Options:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Choose your option: ");
        scanf("%d", &option);

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        if (option == 1) {
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
        } else if (option == 2) {
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
        } else if (option == 3) {
            result = num1 * num2;
            printf("Result = %.lf\n", result);
        } else if (option == 4) 
            if (num2 != 0) 
            return 0;
		}
   
            
            
          
        