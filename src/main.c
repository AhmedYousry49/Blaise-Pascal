#include <stdio.h>
#include "remainder.h"

int main()
{

    while (1)
    {
        /* code */
        int y, k;
        scanf("%d %d", &y, &k);
        printf("%d", calculate_remainder(y, k));
    }

    return 0;
}
