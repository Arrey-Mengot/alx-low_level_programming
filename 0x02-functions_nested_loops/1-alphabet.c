#include <stdio.h>
#include "_putchar"
/**
  *main - entry point
  *Description: Function that prints alphabet in lwer case
  *Return: Always 0 (sucess)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	return;
}
