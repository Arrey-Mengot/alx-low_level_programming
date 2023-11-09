/**
  *sum_them_all - func that sums all argumens
  *@n: number of arguments provided
  *@...: variable number of arguments
  *Return: sum of arguments or 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int num;

	va_start(arg, n);

	for(i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		if (separator == NULL)
			printf("%d", num);
		printf("%d%s", sum, separator);
	}

	printf("\n");
}
