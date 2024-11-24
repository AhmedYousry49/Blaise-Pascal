// remainderm.h
#ifndef REMAINDERM_H
#define REMAINDERM_H
//#include "config.h"
#define REM
typedef enum {
    REM_NOT_AVAILABLE =0,
    REM_AVAILABLE
}REM_FUNCTION_STATUS;


// Function prototype to calculate remainder
REM_FUNCTION_STATUS calculate_remainder(int dividend, int divisor, int * res);



#endif // REMAINDERM_H