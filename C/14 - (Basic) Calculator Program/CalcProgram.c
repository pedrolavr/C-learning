#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    opError:
    printf("\nEnter an operator (+ - * /): ");
    scanf(" %c", &operator);

    if(operator == '+' || operator == '-' || operator == '*' || operator == '/')
    {
       printf("\nPlease, insert a number : ");
       scanf("%lf", &num1);
       
       printf("\nPlease, insert the other number : ");
       scanf("%lf", &num2);
       
       switch(operator)
       {
       case '+':
         result = num1 + num2;
         printf("\nThe result is %.2lf", result);
         break;

       case '-':
         result = num1 - num2;
         printf("\nThe result is %.2lf", result);
         break;

       case '*':
         result = num1 * num2;
         printf("\nThe result is %.2lf", result);
         break;

        case '/':
         result = num1 / num2;
         printf("\nThe result is %.2lf", result);
         break;
       
       default:
       printf("This error will never gonna happen :3");
        
       }
    }

    else
    {
        printf("Please, insert a valid operator");
        goto opError;
    }
}
