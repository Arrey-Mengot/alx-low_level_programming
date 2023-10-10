#include <stdio.h>
/**
  *main - entry point
  *Description: Prints the alphabet
  *Return: Sucess (0)
*/

int main(void)
{
	char c;
	char y;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (y = 'a'; y <= 'h'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
