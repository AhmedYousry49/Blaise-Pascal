#include "power.h"
#define ll long long
#define ld long double
//#define POW
#include "config.h"
double powerFunction(double base, double exponent)
{
#ifdef ENABLE_POW
    double temp;
    if (((ll)exponent) == 0)
        return 1.0;
    if ((ll)base == 0)
        return 0.0;
    if (exponent < 0)
        return (1 / powerFunction(base, -1 * exponent));
    temp = powerFunction(base, (exponent / 2.0));
    return (temp * temp) * (((ll)exponent % 2) ? base : 1);
#else
    printf("Not Allow use Power_function :)\n");
    return -1;
#endif
}