#include "addition.h"


ADD_FUNCTION_STATUS  addition(double num1, double num2,double *res)
{
    #ifdef ENABLE_ADD

    *res = num1 + num2 ;
    
    return ADD_AVAILABLE;
    #else
    return ADD_NOT_AVAILABLE;

    #endif
}
