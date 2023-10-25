#include <stdio.h>

/**
 * _sqrt_recursion - calculates the natural square root
 * @n: a number
 * Return: square root of number or -1 if no square root
 */

int _sqrt_recursion(int n)
{
	double approx;
	double next_approx;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);

	approx = 0.5 * n;
	next_approx = 0.5 * (approx + n / approx);

	if (next_approx == approx)
		return approx;
	return _sqrt_recursion(n);
}
