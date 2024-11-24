#ifndef ADDITION_H
#define ADDITION_H

#include "config.h"

typedef enum {
    ADD_NOT_AVAILABLE =0,
    ADD_AVAILABLE
}ADD_FUNCTION_STATUS;


ADD_FUNCTION_STATUS addition(double num1, double num2,int * res);
#endif