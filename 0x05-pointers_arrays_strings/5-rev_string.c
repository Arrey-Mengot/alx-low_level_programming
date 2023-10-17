#include "main.h"
/**
  * rev_string - reverses a string s
  * @s: string to be reversed
  * Description: Find the lenght of s
  * initialise a pointer at start of s
  * initialise a pointer at end of s
  * Reverse the positions startptr and endptr
  * Increment startptr and decrement endptr
  * Return: void
  */
void rev_string(char *s)
{
	char *beginptr;
	char *endptr;
	int len = 0;
	char ch;
	int i;

	while (s[len] != '\0')
		len++;

	beginptr = s;
	endptr = s + (len - 1);

	while (i < (len / 2))
	{
		ch = *beginptr;
		*beginptr = *endptr;
		*endptr = ch;
		beginptr++;
		endptr--;
		i++;
	}
}
