#include "division.h"

float division(float number1, float number2)
{
    if (number2 == 0)
    {
        printf("Error: cannot divide by zero.\n");
        return 0; // Returning 0 to indicate an error
    }
    else
    {
        return number1 / number2;
    }
}


 