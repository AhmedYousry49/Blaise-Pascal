#include "power.h"

double powerFunction(double base, double exponent)
{
    double temp;
    if (((ll)exponent) == 0)
        return 1.0;
    if ((ll)base == 0)
        return 0.0;
    if (exponent < 0)
        return (1 / powerFunction(base, -1 * exponent));
    temp = powerFunction(base, (exponent / 2.0));
    return (temp * temp) * (((ll)exponent % 2) ? base : 1);
}