// remainderm.c
#include "remainder.h"

// Function definition to calculate remainder
REM_FUNCTION_STATUS calculate_remainder(int dividend, int divisor, int * res)
{
#ifdef ENABLE_REM
    if (divisor == 0) // Error: Division by zero is not allowed.\n
        *res = -1;
        return REM_AVAILABLE ;
    *res = dividend % divisor;
    return REM_AVAILABLE ;
#else
    return REM_NOT_AVAILABLE;
#endif
}
