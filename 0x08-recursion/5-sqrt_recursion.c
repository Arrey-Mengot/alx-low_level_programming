#include <stdio.h>

/**
 * _sqrt_recursion - calculates the natural square root
 * @n: a number
 * Return: square root of number or -1 if no square root
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	root = _sqrt_recursion(n / 2);
	if (root * root == n)
		return (root);
	return (-1);
}
