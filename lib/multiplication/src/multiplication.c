#include "multiplication.h"


MUL_FUNCTION_STATUS multiply_int(int a, int b, int * res)
{
#ifdef MUL    
    *res =  a * b;
    return MUL_AVAILABLE ;
#else 
    
    return MUL_NOT_AVAILABLE;
#endif
}


MUL_FUNCTION_STATUS multiply_float(float a, float b, float * res ) 
{
#ifdef MUL    
    *res =  a * b;
    return MUL_AVAILABLE ;
#else 
    
    return MUL_NOT_AVAILABLE;
#endif
}

MUL_FUNCTION_STATUS multiply_double(double a, double b, double * res )
{
#ifdef MUL    
    *res =  a * b;
    return MUL_AVAILABLE ;
#else 
    return MUL_NOT_AVAILABLE;
#endif
}
