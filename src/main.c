#include <stdio.h>
//#include "../config.h"
#include "remainder.h"
#include "addition.h"
#include "division.h"
#include "multiplication.h"
#include "power.h"
#include "subtraction.h"

int main()
{
    int choice;
    double num1, num2,double_res;
    float fnum1,fnum2,float_res;
    int dividend, divisor,Int_res;

    while (1)
    {
        printf("Simple Calculator\n");
        printf("1. Subtraction\n");
        printf("2. Calculate Remainder\n");
        printf("3. Multiplication\n");
        printf("4. Addition\n");
        printf("5. Power\n");
        printf("6. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter First and second nums to substract: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result Of Substract(%lf - %lf): %lf\n", num1, num2, subtraction(num1, num2));
            break;

        case 2:
        
            printf("Enter dividend and divisor: ");
            scanf("%d %d", &dividend, &divisor);
            if(calculate_remainder(dividend, divisor, &Int_res))
            {
                printf("Remainder: %d\n", Int_res);
            }
            else
            {
                printf("Not allow use Remainder_function\n ");

            }
            break;

        case 3:
            printf("Enter First and second nums to multiply: ");
            scanf("%lf %lf", &num1, &num2);
            if(multiply_double(num1, num2, &double_res))
            {
                printf("Result Of Multiply(%lf * %lf): %lf\n", num1, num2, double_res);
            }
            else
            {
                printf("Not allow use Multiplication_function\n ");
            } 
            break;

        case 4:
            printf("Enter First and second nums to add: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result Of Add(%lf + %lf): %lf\n", num1, num2, addition(num1, num2));
            break;

        case 5:
            printf("Enter Base Number : ");
            scanf("%lf", &num1);
            printf("Enter Power Number : ");
            scanf("%lf", &num2);

            printf("Result Of (%lf ^ %lf): %lf\n", num1, num2, powerFunction(num1, num2));
            break;

        case 6:
            printf("Enter First and second nums to Divided: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result Of Div(%lf / %lf): %lf\n", num1, num2, division(num1, num2));
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
