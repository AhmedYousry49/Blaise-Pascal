#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H


#include "config.h"
//#define MUL 

typedef enum {
    MUL_NOT_AVAILABLE =0,
    MUL_AVAILABLE
}MUL_FUNCTION_STATUS;

MUL_FUNCTION_STATUS multiply_int(int a, int b, int * res);
MUL_FUNCTION_STATUS multiply_float(float a, float b, float * res );
MUL_FUNCTION_STATUS multiply_double(double a, double b, double * res );

#endif // MULTIPLICATION_H
