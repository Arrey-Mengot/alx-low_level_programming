#include <stdio.h>

/**
 * factorial - Calculates the factorial of a number
 * @n: Number
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

