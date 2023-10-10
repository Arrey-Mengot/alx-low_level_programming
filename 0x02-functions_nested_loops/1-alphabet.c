#include <stdio.h>
#include "main.h"
/**
  *print_alphabet - uses _putchar to print alphabet
  *Description: Function that prints alphabet in lwer case
  *Return: Always 0 (sucess)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
