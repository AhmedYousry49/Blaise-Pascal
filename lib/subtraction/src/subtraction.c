#include "subtraction.h"


SUB_FUNCTION_STATUS  subtraction(double num1, double num2,double *res)
{
    #ifdef ENABLE_SUB

    *res = num1 - num2 ;
    
    return SUB_AVAILABLE;
    #else
    return SUB_NOT_AVAILABLE;

    #endif
}




