#include <stdio.h>
#include "remainder.h"


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
        

        case 2:
            printf("Enter dividend and divisor: ");
            scanf("%d %d", &dividend, &divisor);
            printf("Remainder: %d\n", calculate_remainder(dividend, divisor));
            break;

        
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}