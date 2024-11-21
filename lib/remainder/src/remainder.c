// Function definition to calculate remainder
int calculate_remainder(int dividend, int divisor)
{

    if (divisor == 0) // Error: Division by zero is not allowed.\n
        return -1;
    return dividend % divisor;
}