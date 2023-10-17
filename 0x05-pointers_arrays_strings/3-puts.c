#include "main.h"
/**
  * _puts - prints string follwoed by new line
  * @str: string
  * Description: Prints a string followied by newline
  * Return: void
  */
void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
