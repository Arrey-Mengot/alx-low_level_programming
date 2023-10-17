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

	while (s[len] != '\0')
		len++;

	beginptr = s;
	endptr = s + (len - 1);

	for (int i = 0; i < (len/2); i++)
	{
		ch = *beginptr;
		*beginptr = *endptr;
		*endptr = ch;
	}
}
