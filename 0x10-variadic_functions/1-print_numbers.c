#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *print_numbers - func that sums all argumens
  *@n: number of arguments provided
  *@...: variable number of arguments
  *@separator: separates the numbers
  *Return: sum of arguments or 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int num;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		if (separator == NULL)
			printf("%d", num);
		i == (n - 1) ? printf("%d", num) :  printf("%d%s", num, separator);
	}

	printf("\n");
}
