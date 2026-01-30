#include <stdio.h>

int main() 
{
    char operation;
    double number1, number2, result;

    printf("--- Simple Calculator ---\n");
    printf("Enter an operator (+, -, *, /): ");

    scanf(" %c", &operation);

    printf("Enter first number: ");
    scanf("%lf", &number1);
    printf("Enter second number: ");
    scanf("%lf", &number2);

    printf("\n-------------------------\n");
    switch (operation) 
	{
        case '+':
            result = number1 + number2;
            printf("Calculation: %.2f + %.2f = %.2f\n", number1, number2, result);
            break;

        case '-':
            result = number1 - number2;
            printf("Calculation: %.2f - %.2f = %.2f\n", number1, number2, result);
            break;

        case '*':
            result = number1 * number2;
            printf("Calculation: %.2f * %.2f = %.2f\n", number1, number2, result);
            break;

        case '/':
            if (number2 != 0) 
			{
                result = number1 / number2;
                printf("Calculation: %.2f / %.2f = %.2f\n", number1, number2, result);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Error: '%c' is not a valid operator.\n", operation);
    }
    printf("-------------------------\n");

    fflush(stdin); 
    getchar();    
    getchar();    

    return 0;
}

