#include "remainder.h"
// Function definition to calculate remainder
#define REM

int calculate_remainder(int dividend, int divisor)
{
#ifdef REM
    if (divisor == 0) // Error: Division by zero is not allowed.\n
        return -1;
    return dividend % divisor;
#else
    printf("You are too poor to use remainder fauture\n");
    return -1;
#endif
}