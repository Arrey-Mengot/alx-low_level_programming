#include "main.h"

/**
  *print_most_numbers - prints numbers from 0-9
  *Description: Prints numbers 0-9
  *Return: 0 if sucess
  */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 || x != 52)
			_putchar(x);
	}
	_putchar('\n');
}
