#include <stdio.h>

/**
 * _sqrt_recursion - calculates the natural square root
 * @n: a number
 * Return: square root of number or -1 if no square root
 */

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    else if (n == 0 || n)
    double approx = 0.5 * n;
    double next_approx = 0.5 * (approx + n / approx);
    if (next_approx == approx)
        return approx;
    else
        return _sqrt_recursion(n, next_approx);
}
