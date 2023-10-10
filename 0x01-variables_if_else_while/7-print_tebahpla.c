#include <stdio.h>
/**
  *main - entry point
  *Description: Prints the alphabet
  *Return: Sucess (0)
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
