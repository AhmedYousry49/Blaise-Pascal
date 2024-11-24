#ifndef DIVISION_H
#define DIVISION_H

#include <stdio.h>
#include "config.h"

typedef enum {
    DIV_FUNCTION_ERROR_DIVIDE_BY_ZERO = -1,
    DIV_NOT_AVAILABLE =0,
    DIV_AVAILABLE
}DIV_FUNCTION_STATUS;

DIV_FUNCTION_STATUS division(double number1, double number2);

#endif 