#include <stdio.h>
#include "multiplication.h"
#include "remainder.h"
#include "subtraction.h"
#include "addition.h"
#include "power.h"
#include "division.h"

int main()
{
    int choice;
    double num1, num2;
    int dividend, divisor;

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
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", subtraction(num1, num2));
            break;

        case 2:
            printf("Enter dividend and divisor: ");
            scanf("%d %d", &dividend, &divisor);
            printf("Remainder: %d\n", calculate_remainder(dividend, divisor));
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", multiply_double(num1, num2));
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", addition(num1, num2));
            break;
        case 5:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", powerFunction(num1, num2));
            break;
        case 6:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", division(num1, num2));
            break;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}