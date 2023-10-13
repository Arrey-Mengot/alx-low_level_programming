#include "main.h"

/**
  *print_numbers - prints numbers from 0-9
  *Description: Prints numbers 0-9
  *Return: 0 if sucess
  */
void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
