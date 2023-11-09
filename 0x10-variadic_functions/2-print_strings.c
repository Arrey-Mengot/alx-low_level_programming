#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - func that sums all argumens
  *@n: number of arguments provided
  *
  *@separator: separates the numbers
  *Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (separator == NULL)
			printf("%s", str);
		if (str == NULL)
			printf("(nil)");
		i == (n - 1) ? printf("%s", str) :  printf("%s%s", str, separator);
	}

	printf("\n");
	va_end(arg);
}
