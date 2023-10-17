#include "main.h"
/**
  * print_rev - prints string in reverse
  * @s: String to be printed
  * Return: void
  */
void print_rev(char *s)
{
	int strlen = 0;
	int c;

	while (s[strlen] != '\0')
		strlen++;
	for (c = strlen; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
