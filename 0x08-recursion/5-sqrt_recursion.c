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
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (2 % (n / 2) == 0)
	{
		if (2 * (n / 2) == n)
			return (2);
		else
			return (-1);
	}
	return (0 + _sqrt_recursion(n));
}
