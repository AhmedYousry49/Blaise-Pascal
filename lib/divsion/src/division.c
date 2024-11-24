#include "division.h"
 

DIV_FUNCTION_STATUS division(double number1, double number2, double *result) {
#ifdef DIV
    if (number2 == 0) {
        printf("Error: cannot divide by zero.\n");
        return DIV_FUNCTION_ERROR_DIVIDE_BY_ZERO; // Returning an error code
    } else {
        *result = number1 / number2;
        return DIV_FUNCTION_SUCCESS; // Division successful
    }
#else
    return DIV_NOT_AVAILABLE; // Division functionality not available
#endif
}


