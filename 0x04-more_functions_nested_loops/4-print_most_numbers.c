/*
 * File: 4-print_most_numbers.c
 * Auth: Arrey Mengot
 */

#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 && x != 52)
			_putchar(x);
	}

	_putchar('\n');
}
