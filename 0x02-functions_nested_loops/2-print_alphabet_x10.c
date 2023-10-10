#include <stdio.h>
#include "main.h"
/**
  *print_alphabet_x10 - uses _putchar to print alphabet
  *Description: Function that prints alphabet in lwer case
  *Return: Always 0 (sucess)
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
