#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: interger value
 * @y: interger value
 * Return: Power of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

