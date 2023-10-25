#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Func that prints a string
 * @s: ptr
 * Return: void
 * Description: prints string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}

