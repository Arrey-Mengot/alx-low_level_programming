#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
  *sum_them_all - func that sums all argumens
  *@n: number of arguments provided
  *@...: variable number of arguments
  *Return: sum of arguments or 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum;

	va_start(arg, n);
	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
