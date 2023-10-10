#include <stdio.h>
/**
  *main - entry point
  *Description: Prints the alphabet
  *Return: Sucess (0)
*/

int main(void)
{
	int digit;

	for (digit = '0'; digit < '10'; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
