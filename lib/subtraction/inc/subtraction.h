#ifndef SUB_H
#define SUB_H


#include "config.h"

typedef enum {
    SUB_NOT_AVAILABLE =0,
    SUB_AVAILABLE
}SUB_FUNCTION_STATUS;

SUB_FUNCTION_STATUS  subtraction(double num1, double num2,double *res);

#endif