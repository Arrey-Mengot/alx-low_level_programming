#include <stdio.h>
/**
  *main - entry point
  *Description: Prints numbers
  *Return: Always 0 (sucess)
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	printf('\n');
	return (0);
}
