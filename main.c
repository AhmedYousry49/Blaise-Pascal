#include "division.h"

int main()
{
    printf("Division Program Test\n");

    // Define and run test cases
    float testCases[][2] = {
        {10, 2},  // Normal division
        {7, 0},   // Division by zero
        {15, -3}, // Division with negative number
        {-9, 3},  // Division with negative dividend
        {0, 5},   // Zero divided by a number
    };

    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTestCases; i++)
    {
        float result = division(testCases[i][0], testCases[i][1]);
        printf("Test case %d: %.2f / %.2f = %.2f\n", i + 1, testCases[i][0], testCases[i][1], result);
    }

    return 0;
}
