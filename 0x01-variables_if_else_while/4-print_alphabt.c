#include <stdio.h>
/**
  *main - entry point
  *Description: Prints the alphabet
  *Return: Sucess (0)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
