#include "main.h"
#include <stdio.h>
/**
  *print_sign - function to proint sign
  *@n: argument to function
  *Description: Function that prints the sign of a number
  *Return: 1 and + if positive, -1 and - if negative else 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45 + 0);
		return (-1);
	}
}
